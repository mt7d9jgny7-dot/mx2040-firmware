PLATFORM = RP2040
BOOTLOADER = rp2040

# 动态键映射（保留，与 keyboard.json 一致；也可省略，但显式声明更清晰）
DYNAMIC_KEYMAP_ENABLE = yes

# ========== VIAL 配置 ==========
# 注意：VIAL_ENABLE 在最新版 vial-qmk 中已不再有效，
# Vial 功能由 keyboard.json 中的 "features.vial": true 控制。
# VIAL_INSECURE 仍可作为安全提示使用（保留默认关闭）。
VIAL_INSECURE = no

# EEPROM 驱动配置（RP2040 专用）
# 旧值 'flash' 已废弃，必须使用 rp2040_flash
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = rp2040_flash

# 以下特性已在 keyboard.json 中启用，此处不再重复定义，
# 避免 “specified in both info.json and rules.mk” 警告。
# NKRO_ENABLE = yes
# MOUSEKEY_ENABLE = yes
# EXTRAKEY_ENABLE = yes