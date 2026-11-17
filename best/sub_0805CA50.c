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

s32 sub_0805CA50(void *arg0) {
    s32 temp_r2;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x22C);
    if (temp_r1 <= 0x3CU) {
        temp_r2 = temp_r1 << 9;
        temp_r3 = temp_r1 * 0x157;
        var_r0 = 0x7800 - temp_r2;
        if (var_r0 < 0) {
            var_r0 += 0xFF;
        }
        var_r0_2 = temp_r2 + 0x7800;
        if (var_r0_2 < 0) {
            var_r0_2 = temp_r2 + 0x78FF;
        }
        var_r0_3 = 0x5000 - temp_r3;
        if (var_r0_3 < 0) {
            var_r0_3 += 0xFF;
        }
        var_r0_4 = temp_r3 + 0x5000;
        if (var_r0_4 < 0) {
            var_r0_4 = temp_r3 + 0x50FF;
        }
        *(u16 *)0x030011A0 = ((var_r0 >> 8) << 8) | (u8) (var_r0_2 >> 8);
        *(u16 *)0x030011A4 = (u8) (var_r0_4 >> 8) | (((var_r0_3 >> 8) << 8) & 0xFFFFFF00);
    } else if (0xB & *(u16 *)0x030010B0) {
        M2C_FIELD(arg0, s32 *, 0x228) = 0;
    }
    M2C_FIELD(arg0, u32 *, 0x22C) = (u32) (M2C_FIELD(arg0, u32 *, 0x22C) + 1);
    return M2C_FIELD(arg0, s32 *, 0x228);
}
