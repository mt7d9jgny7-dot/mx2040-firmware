PLATFORM = RP2040
BOOTLOADER = rp2040

# ========== VIAL 配置 ==========
# VIAL_ENABLE 已废弃，由 keyboard.json 的 "features.vial": true 控制
VIAL_INSECURE = yes

# EEPROM 驱动配置（RP2040 专用）
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = rp2040_flash

# ========== 验证/调试：禁用优化，保留全部符号 ==========
# 用途：让 CI 的符号断言（验证层 2.5）能检出 vial_handle_cmd、
#       vial_keyboard_uid、keyboard_definition 等被编译器内联/裁剪的符号。
#
# 代价：
#   - 固件体积约增大 2~3 倍
#   - 运行速度下降，USB 通信可能变慢
#   - 不适合最终发布固件
#
# 正式发布前请注释以下 4 行，重新编译得到优化版固件。
OPT = 0
LTO_ENABLE = no
CFLAGS += -fno-inline -fno-inline-functions
LDFLAGS += -Wl,--no-gc-sections
