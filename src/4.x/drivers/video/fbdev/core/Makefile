#obj-y                             += fb_notify.o
#obj-$(CONFIG_FB_CMDLINE)          += fb_cmdline.o
obj-$(CONFIG_FB)                  += fb.o
fb-y                              := fbmem.o fbmon.o fbcmap.o fbsysfs.o \
                                     modedb.o fbcvt.o

ifeq ($(CONFIG_FB_DEFERRED_IO), m)
	EXTRA_CFLAGS += -DCONFIG_FB_DEFERRED_IO
endif
fb-$(CONFIG_FB_DEFERRED_IO)       += fb_defio.o
fb-objs                           := $(fb-y)

obj-$(CONFIG_FB_CFB_FILLRECT)  += cfbfillrect.o
obj-$(CONFIG_FB_CFB_COPYAREA)  += cfbcopyarea.o
obj-$(CONFIG_FB_CFB_IMAGEBLT)  += cfbimgblt.o
obj-$(CONFIG_FB_SYS_FILLRECT)  += sysfillrect.o
obj-$(CONFIG_FB_SYS_COPYAREA)  += syscopyarea.o
obj-$(CONFIG_FB_SYS_IMAGEBLIT) += sysimgblt.o
obj-$(CONFIG_FB_SYS_FOPS)      += fb_sys_fops.o
#obj-$(CONFIG_FB_SVGALIB)       += svgalib.o
#obj-$(CONFIG_FB_DDC)           += fb_ddc.o
