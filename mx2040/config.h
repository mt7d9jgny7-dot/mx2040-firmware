#pragma once

/* 矩阵行列数量 */
#define MATRIX_ROWS 8
#define MATRIX_COLS 18

/* USB设备版本号，与info.json保持一致 */
#define DEVICE_VER 0x0001

/* 按键去抖时间（单位：毫秒） */
#define DEBOUNCE 5

/* 硬件没有二极管，矩阵会产生鬼键  */
#define MATRIX_HAS_GHOST

/* 按键长按触发阈值 */
#define TAPPING_TERM 200
