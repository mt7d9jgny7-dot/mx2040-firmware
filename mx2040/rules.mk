PLATFORM = RP2040
BOOTLOADER = rp2040

# ========== VIAL 配置 ==========
# VIAL_ENABLE 在最新版 vial-qmk 中已不再有效，
# Vial 功能由 keyboard.json 中的 "features.vial": true 控制。
# VIAL_INSECURE 仍可作为安全提示使用（保留默认关闭）。
VIAL_INSECURE = no

# EEPROM 驱动配置（RP2040 专用）
# 旧值 'flash' 已废弃，必须使用 rp2040_flash
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = rp2040_flash

# 说明：
# - DYNAMIC_KEYMAP_ENABLE、NKRO_ENABLE、MOUSEKEY_ENABLE、EXTRAKEY_ENABLE
#   都已由 keyboard.json 的 features 段启用，此文件不再重复定义，
#   以避免 "specified in both info.json and rules.mk" 警告。