# Zipline Hacks
# Common settings for Orin NX modules

TEGRA_BOARDID ?= "3701"
TEGRA_FAB ?= "TS4"
TEGRA_BOARDSKU ?= "0000"
TEGRA_BOARDREV ?= "C.0"
TEGRA_CHIPREV ?= "0"
NVPMODEL ?= "nvpmodel_p3701_0000"
NVFANCONTROL ?= "nvfancontrol_p3701_0000"

MACHINEOVERRIDES =. "orin-nx:"
require conf/machine/include/tegra234.inc

KERNEL_DEVICETREE="tegra234-p3767-0000-p3768-0000-a0.dtb"
KERNEL_ARGS ?= "console=ttyTCU0,115200 console=tty0 fbcon=map:0"

BOOTPARTSIZE="8388608"
ROOTFSPART_SIZE ?= "15032385536"
ODMDATA="gbe-uphy-config-8,hsstp-lane-map-3,hsio-uphy-config-0"
EMMC_BCT="tegra234-p3767-0000-sdram-l4t.dts"
NVIDIA_BOARD ?= "t234ref"
OVERLAY_DTB_FILE="tegra234-p3767-0000-p3768-0000-a0-hdr40.dtbo"
