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
M2C_UNK sub_0800FDA0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08035884;

void sub_08036724(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r5;

    temp_r5 = arg0 + 0x24;
    temp_r0 = sub_0800FCA4(0x184, 1, temp_r5);
    M2C_FIELD(arg0, s32 *, 0x9C) = temp_r0;
    sub_0800FDA0(arg0, temp_r0, temp_r5);
    temp_r0_2 = sub_0800FCA4(0x186, 1, temp_r5);
    M2C_FIELD(arg0, s32 *, 0xA0) = temp_r0_2;
    sub_0800FDA0(arg0, temp_r0_2, temp_r5);
    temp_r0_3 = sub_0800FCA4(0x187, 1, temp_r5);
    M2C_FIELD(arg0, s32 *, 0xA4) = temp_r0_3;
    sub_0800FDA0(arg0, temp_r0_3, temp_r5);
    M2C_FIELD(arg0, M2C_UNK **, 0x98) = &sub_08035884;
    sub_08003220(0x081712E8);
}
