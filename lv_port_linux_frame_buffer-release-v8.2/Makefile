#
# Makefile
#
CC = arm-linux-gcc
LVGL_DIR_NAME ?= lvgl
LVGL_DIR ?= ${shell pwd}
CFLAGS ?= -O3 -g0 -I$(LVGL_DIR)/ -Wall -Wshadow -Wundef -Wmissing-prototypes -Wno-discarded-qualifiers -Wall -Wextra -Wno-unused-function -Wno-error=strict-prototypes -Wpointer-arith -fno-strict-aliasing -Wno-error=cpp -Wuninitialized -Wmaybe-uninitialized -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wno-cast-qual -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wformat-security -Wno-ignored-qualifiers -Wno-error=pedantic -Wno-sign-compare -Wno-error=missing-prototypes -Wdouble-promotion -Wclobbered -Wdeprecated -Wempty-body -Wtype-limits -Wstack-usage=2048 -Wno-unused-value -Wno-unused-parameter -Wno-missing-field-initializers -Wuninitialized -Wmaybe-uninitialized -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wpointer-arith -Wno-cast-qual -Wmissing-prototypes -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wno-discarded-qualifiers -Wformat-security -Wno-ignored-qualifiers -Wno-sign-compare
LDFLAGS ?= -lm
BIN = demo
BUILD_DIR = build


#Collect the files to compile
MAINSRC = ./main.c

include $(LVGL_DIR)/lvgl/lvgl.mk
include $(LVGL_DIR)/lv_drivers/lv_drivers.mk

CSRCS +=$(LVGL_DIR)/mouse_cursor_icon.c  
# 关键修改：添加字体文件的相对路径（与 CSRCS += ... 一行同级）
CSRCS += $(LVGL_DIR)/lvgl/src/font/SiYuanHeiTi_Heavy.c  # 新增：字体文件路径

OBJEXT ?= .o

AOBJS = $(ASRCS:.S=$(OBJEXT))
COBJS = $(CSRCS:.c=$(OBJEXT))


MAINOBJ = $(MAINSRC:.c=$(OBJEXT))

SRCS = $(ASRCS) $(CSRCS) $(MAINSRC)
OBJS = $(AOBJS) $(COBJS)

## MAINOBJ -> OBJFILES

all: default

%.o: %.c
	@$(CC)  $(CFLAGS) -c $< -o $@
# 	@$(CC)  $(CFLAGS) -c $< -o $(BUILD_DIR)/$@
	@echo "CC $<"
    
default: $(AOBJS) $(COBJS) $(MAINOBJ) 
	$(CC) -o $(BIN) $(MAINOBJ) $(AOBJS) $(COBJS)  $(LDFLAGS)
# 	$(CC) -o $(BUILD_DIR)/$(BIN) $(BUILD_DIR)/$(MAINOBJ) $(BUILD_DIR)/$(AOBJS) $(BUILD_DIR)/$(COBJS) $(LDFLAGS)
clean: 
	rm -f $(BIN) $(AOBJS) $(COBJS) $(MAINOBJ)
# 	rm -f $(BUILD_DIR)/$(BIN) $(BUILD_DIR)/$(AOBJS) $(BUILD_DIR)/$(COBJS) $(BUILD_DIR)/$(MAINOBJ)

