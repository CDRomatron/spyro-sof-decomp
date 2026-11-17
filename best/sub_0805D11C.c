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

s32 sub_0805D11C(u16 *arg0, u16 *arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r9;
    u16 *var_r12;
    u16 *var_r7;
    u16 temp_r1;
    u16 temp_r5;
    u32 temp_r1_2;
    u32 temp_r2;

    var_r7 = arg1;
    var_r12 = arg0;
    var_r9 = 0xFF;
    do {
        temp_r1 = *var_r12;
        temp_r5 = *var_r7;
        temp_r3 = 0x1F & temp_r5;
        temp_r2 = (u32) (0x3E0 & temp_r5) >> 5;
        temp_r1_2 = (u32) (0x7C00 & temp_r5) >> 0xA;
        *var_r7 = ((temp_r3 + ((s32) (arg2 * ((0x1F & temp_r1) - temp_r3)) >> 8)) & 0x1F) | (((temp_r2 + ((s32) (arg2 * (((u32) (0x3E0 & temp_r1) >> 5) - temp_r2)) >> 8)) & 0x1F) << 5) | (((temp_r1_2 + ((s32) (arg2 * (((u32) (0x7C00 & temp_r1) >> 0xA) - temp_r1_2)) >> 8)) & 0x1F) << 0xA);
        var_r7 += 2;
        var_r12 += 2;
        var_r9 -= 1;
    } while (var_r9 >= 0);
    return 0;
}
