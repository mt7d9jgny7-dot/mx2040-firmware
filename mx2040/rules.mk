PLATFORM = RP2040
BOOTLOADER = rp2040

KEY_LOCK_ENABLE = yes

# ========== VIAL 配置 ==========
VIAL_INSECURE = no

# EEPROM 驱动配置（RP2040 专用）
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = rp2040_flash