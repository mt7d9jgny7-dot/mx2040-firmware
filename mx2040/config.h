#pragma once


// ==================== Vial 配置说明 ====================
// 注意：VIAL_KEYBOARD_UID、VIAL_UNLOCK_COMBO_ROWS、VIAL_UNLOCK_COMBO_COLS
// 在最新版 vial-qmk 中已不再通过 config.h 定义，
// 请统一在 keyboard.json 的 "vial" 段中配置（本项目已配置完成）。

// ==================== 基础硬件配置 ====================
// 消抖时间，与 keyboard.json 配置对齐
#define DEBOUNCE 5
// 按键敲击检测时长
#define TAPPING_TERM 200

// 动态键映射支持层数
#define DYNAMIC_KEYMAP_LAYER_COUNT 4