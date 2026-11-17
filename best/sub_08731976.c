/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

/* Warning: missing "bx $lr" in last block of sub_08731976 (initial). */

s32 sub_08731976(s32 arg0, s32 arg2, s32 argFD) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = arg0 & arg0;
    temp_r0 = temp_r0_2 & temp_r0_2;
    return temp_r0 & temp_r0;
}
