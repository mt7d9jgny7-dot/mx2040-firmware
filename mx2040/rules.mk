PLATFORM = RP2040
BOOTLOADER = rp2040

# 动态键映射
DYNAMIC_KEYMAP_ENABLE = yes

# ========== VIAL 必选开关 ==========
VIAL_ENABLE = yes
VIAL_INSECURE = no
# 使用vial‑qmk内置eeprom模拟（RP2040 flash模拟eeprom）
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = flash

# 你keyboard.json开启的特性，rules.mk最好对齐
NKRO_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
