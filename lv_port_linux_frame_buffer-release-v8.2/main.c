#include "lvgl/lvgl.h"
#include "lvgl/demos/lv_demos.h"
#include "lv_drivers/display/fbdev.h"
#include "lv_drivers/indev/evdev.h"
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <sys/time.h>

#define DISP_BUF_SIZE (128 * 1024)


// 创建UI函数：显示文本和按钮（适配 LVGL 8.2）
static void create_ui(void)
{
    // 屏幕背景
    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);

    // 文本（修复字体参数）
    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "你好,LVGL!");
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 50);
    LV_FONT_DECLARE(SiYuanHeiTi_Heavy);
    // 正确设置字体：加 & 取地址，指定部件和状态
    lv_obj_set_style_text_font(label,&SiYuanHeiTi_Heavy, LV_PART_MAIN | LV_STATE_DEFAULT);
    // 文本颜色
    lv_obj_set_style_text_color(label, lv_color_hex(0x00ff00), LV_PART_MAIN | LV_STATE_DEFAULT);

   }


int main(void)
{
    /*LittlevGL初始化*/
    lv_init();

    /*Linux帧缓冲设备初始化*/
    fbdev_init();

    /*为LittlevGL创建屏幕缓冲区*/
    static lv_color_t buf[DISP_BUF_SIZE];
    static lv_disp_draw_buf_t disp_buf;
    lv_disp_draw_buf_init(&disp_buf, buf, NULL, DISP_BUF_SIZE);

    /*初始化并注册显示驱动*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.draw_buf   = &disp_buf;
    disp_drv.flush_cb   = fbdev_flush;
    disp_drv.hor_res    = 800;    // 屏幕宽度
    disp_drv.ver_res    = 480;    // 屏幕高度
    lv_disp_drv_register(&disp_drv);

    /*初始化输入设备（触摸/鼠标）*/
    evdev_init();
    static lv_indev_drv_t indev_drv_1;
    lv_indev_drv_init(&indev_drv_1);
    indev_drv_1.type = LV_INDEV_TYPE_POINTER;
    indev_drv_1.read_cb = evdev_read;
    lv_indev_t *mouse_indev = lv_indev_drv_register(&indev_drv_1);

    /*设置鼠标光标*/
    LV_IMG_DECLARE(mouse_cursor_icon)
    lv_obj_t *cursor_obj = lv_img_create(lv_scr_act());
    lv_img_set_src(cursor_obj, &mouse_cursor_icon);
    lv_indev_set_cursor(mouse_indev, cursor_obj);

    /*创建UI界面*/
    create_ui();

    /*处理LVGL任务*/
    while(1) {
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}

/*LVGL系统时间获取函数*/
uint32_t custom_tick_get(void)
{
    static uint64_t start_ms = 0;
    if(start_ms == 0) {
        struct timeval tv_start;
        gettimeofday(&tv_start, NULL);
        start_ms = (tv_start.tv_sec * 1000000 + tv_start.tv_usec) / 1000;
    }

    struct timeval tv_now;
    gettimeofday(&tv_now, NULL);
    uint64_t now_ms;
    now_ms = (tv_now.tv_sec * 1000000 + tv_now.tv_usec) / 1000;

    uint32_t time_ms = now_ms - start_ms;
    return time_ms;
}