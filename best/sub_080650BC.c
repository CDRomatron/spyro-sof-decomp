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

s32 _080644A4(s32 *);                               /* extern */

s32 sub_080650BC(u32 arg0) {
    s32 sp0;
    u32 sp4;
    s32 sp8;
    u32 spC;
    u32 sp10;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;
    u32 temp_r1;
    u32 temp_r1_2;

    sp0 = 3;
    temp_r1 = arg0 >> 0x1F;
    sp4 = temp_r1;
    if (arg0 == 0) {
        sp0 = 2;
        goto block_11;
    }
    sp8 = 0x3C;
    if (temp_r1 != 0) {
        if (arg0 == 0x80000000) {
            return 0xC1E00000;
        }
        var_r0 = 0 - arg0;
        var_r1 = var_r0 >> 0x1F;
        goto block_7;
    }
    var_r0 = (s32) arg0;
    var_r1 = (s32) arg0 >> 0x1F;
block_7:
    spC = (u32) var_r0;
    sp10 = (u32) var_r1;
    if (sp10 <= 0x0FFFFFFFU) {
        var_r4 = sp8;
        do {
            temp_r1_2 = (spC >> 0x1F) | (sp10 * 2);
            spC *= 2;
            sp10 = temp_r1_2;
            var_r4 -= 1;
        } while (sp10 <= 0x0FFFFFFFU);
        sp8 = var_r4;
    }
block_11:
    return _080644A4(&sp0);
}
