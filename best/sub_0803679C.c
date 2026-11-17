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

M2C_UNK sub_08003220(s32);                          /* extern */
s32 sub_0800FCA4(s32, s32, s32);                    /* extern */
M2C_UNK sub_0800FE28(s32, s32, s32);                /* extern */

void sub_0803679C(s32 arg0) {
    s32 temp_r6;

    temp_r6 = arg0 + 0x24;
    sub_0800FE28(arg0, sub_0800FCA4(0x189, 1, temp_r6), 0x45);
    sub_0800FE28(arg0, sub_0800FCA4(0x189, 1, temp_r6), 0x46);
    sub_0800FE28(arg0, sub_0800FCA4(0x189, 1, temp_r6), 0x47);
    sub_08003220(0x08171534);
}
