#pragma once

// ==================== Vial 核心配置（底层编译必需） ====================
// 键盘唯一 UID（与 keyboard.json 中的 uid 保持一致）
#define VIAL_KEYBOARD_UID {0x7A, 0x3F, 0x9D, 0x2C, 0x5B, 0x8E, 0x1F, 0x4A}

// Vial 解锁组合键（[ + P），对应矩阵行列
#define VIAL_UNLOCK_COMBO_ROWS {5, 2}
#define VIAL_UNLOCK_COMBO_COLS {9, 9}


// ==================== 基础硬件配置 ====================
#define DEBOUNCE 5
#define TAPPING_TERM 200
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
