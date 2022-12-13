LICENSE = "Proprietary"
LIC_FILES_CHKSUM = "file://nv_tegra/LICENSE;md5=2cc00be68c1227a7c42ff3620ef75d05 \
                    file://nv_tegra/LICENSE.brcm_patchram_plus;md5=38fb07f0dacf4830bc57f40a0fb7532e"

# Local files
SRC_URI = "file:///repo/Jetson_Linux_R35.1.0_aarch64.tbz2;name=l4t\
           file:///repo/secureboot_R35.1.0_aarch64.tbz2;name=sb\
           file:///repo/host_overlay_p3768_partner.tbz2;name=orin\
    "
SRC_URI[l4t.sha256sum] = "1ee786b52dfbf0957449af7d2667fe1360009e8875553f66a75dbfbca0739317"
SRC_URI[sb.sha256sum] = "a5d4b16b50e93c8f2bd2104f7dd6ec07f0f7665f58dc988e114eed174d57ed78"
SRC_URI[orin.sha256sum] = "6a300c0d5bac33ca27a088ff6e776fd00f8dd312e14effd2222486a25af9e3ad"

inherit l4t_bsp

S = "${TMPDIR}/work-shared/L4T-${L4T_BSP_ARCH}-${PV}-${PR}/Linux_for_Tegra"
B = "${WORKDIR}/build"

INHIBIT_PACKAGE_STRIP = "1"
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

COMPATIBLE_MACHINE = "tegra"

do_preconfigure() {
    :
}
