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

/* Warning: missing "bx $lr" in last block of sub_086F2A2A (initial). */

s32 sub_086F2A2A(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;

    *arg0 = (s8) arg0;
    temp_r0_2 = (s32) arg0 & (s32) arg0;
    temp_r0_3 = temp_r0_2 & temp_r0_2;
    temp_r0_4 = temp_r0_3 & temp_r0_3;
    temp_r0_5 = temp_r0_4 & temp_r0_4;
    temp_r0 = temp_r0_5 & temp_r0_5;
    return temp_r0 & temp_r0;
}
