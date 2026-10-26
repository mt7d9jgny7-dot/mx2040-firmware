#pragma once

// ==================== Vial 强制必填配置 ====================
// 键盘唯一UID，与 keyboard.json / vial.json 中数值保持一致
#define VIAL_KEYBOARD_UID {0x7A, 0x3F, 0x9D, 0x2C, 0x5B, 0x8E, 0x1F, 0x4A}

// Vial 解锁组合键，对应矩阵行列：第6行第1列 + 第0行第2列
// 与 vial.json 中 unlock_combo 定义完全对应
#define VIAL_UNLOCK_COMBO_ROWS {6, 0}
#define VIAL_UNLOCK_COMBO_COLS {1, 2}

// ==================== 基础硬件配置 ====================
// 消抖时间，与 keyboard.json 配置对齐
#define DEBOUNCE 5
// 按键敲击检测时长
#define TAPPING_TERM 200
