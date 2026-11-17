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

s32 sub_0805D074(u16 *arg0, s16 *arg1, u16 arg2, s32 arg3) {
    s32 sp0;
    u32 sp4;
    s16 *var_r12;
    s32 temp_r3;
    s32 temp_r3_2;
    u16 *var_r7;
    u16 temp_r2;
    u16 temp_r5;
    u32 temp_r1;
    u32 temp_r2_2;

    temp_r2 = arg2;
    var_r12 = arg1;
    var_r7 = arg0;
    sp4 = (u32) (temp_r2 & 0x3E0) >> 5;
    sp0 = 0xFF;
    do {
        temp_r5 = *var_r7;
        temp_r3_2 = 0x1F & temp_r5;
        temp_r2_2 = (u32) (0x3E0 & temp_r5) >> 5;
        temp_r1 = (u32) (0x7C00 & temp_r5) >> 0xA;
        *var_r12 = ((temp_r3_2 + ((s32) (arg3 * ((temp_r2 & 0x1F) - temp_r3_2)) >> 8)) & 0x1F) | (((temp_r2_2 + ((s32) (arg3 * (sp4 - temp_r2_2)) >> 8)) & 0x1F) << 5) | (((temp_r1 + ((s32) (arg3 * (((u32) (temp_r2 & 0x7C00) >> 0xA) - temp_r1)) >> 8)) & 0x1F) << 0xA);
        var_r12 += 2;
        var_r7 += 2;
        temp_r3 = sp0 - 1;
        sp0 = temp_r3;
    } while (temp_r3 >= 0);
    return 0;
}
