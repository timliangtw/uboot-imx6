/*
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef IMX8QM_MEK_ANDROID_AUTO_H
#define IMX8QM_MEK_ANDROID_AUTO_H

#define CONFIG_USBD_HS
#define CONFIG_BOOTLOADER_OFFSET_33K

#define CONFIG_BCB_SUPPORT
#define CONFIG_CMD_READ
#define CONFIG_USB_FUNCTION_MASS_STORAGE
#define CONFIG_USB_GADGET_VBUS_DRAW	2

#define CONFIG_ENABLE_LOCKSTATUS_SUPPORT
#define CONFIG_ANDROID_AB_SUPPORT
#define CONFIG_AVB_SUPPORT
#define CONFIG_SUPPORT_EMMC_RPMB
#define CONFIG_SYSTEM_RAMDISK_SUPPORT
#define CONFIG_AVB_FUSE_BANK_SIZEW 0
#define CONFIG_AVB_FUSE_BANK_START 0
#define CONFIG_AVB_FUSE_BANK_END 0
#define CONFIG_FASTBOOT_LOCK
#define FSL_FASTBOOT_FB_DEV "mmc"

#define IMX_LOAD_HDMI_FIMRWARE
#define IMX_HDMI_FIRMWARE_LOAD_ADDR (CONFIG_SYS_SDRAM_BASE + SZ_256M)
#define IMX_HDMI_FIRMWARE_SIZE 0x20000

#ifdef CONFIG_SYS_MALLOC_LEN
#undef CONFIG_SYS_MALLOC_LEN
#define CONFIG_SYS_MALLOC_LEN           (96 * SZ_1M)
#endif

#define CONFIG_USB_FUNCTION_FASTBOOT
#define CONFIG_CMD_FASTBOOT

#define CONFIG_ANDROID_BOOT_IMAGE
#define CONFIG_FASTBOOT_FLASH

#define CONFIG_FSL_FASTBOOT
#define CONFIG_ANDROID_RECOVERY

#if defined CONFIG_SYS_BOOT_SATA
#define CONFIG_FASTBOOT_STORAGE_SATA
#define CONFIG_FASTBOOT_SATA_NO 0
#else
#define CONFIG_FASTBOOT_STORAGE_MMC
#endif

#define CONFIG_CMD_BOOTA
#define CONFIG_SUPPORT_RAW_INITRD
#define CONFIG_SERIAL_TAG

#undef CONFIG_EXTRA_ENV_SETTINGS
#undef CONFIG_BOOTCOMMAND

#define CONFIG_EXTRA_ENV_SETTINGS					\
	"splashpos=m,m\0"	  \
	"fdt_high=0xffffffffffffffff\0"	  \
	"initrd_high=0xffffffffffffffff\0" \

#define CONFIG_FASTBOOT_BUF_ADDR   CONFIG_SYS_LOAD_ADDR
#define CONFIG_FASTBOOT_BUF_SIZE   0x19000000

#endif /* IMX8QM_MEK_ANDROID_AUTO_H */
