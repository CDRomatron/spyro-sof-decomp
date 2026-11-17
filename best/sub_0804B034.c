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

M2C_UNK sub_08061BD0(s32, s32);                     /* extern */

s32 sub_0804B034(u8 arg0) {
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;
    u32 var_r3;
    u8 temp_r2;

    var_r4 = 1;
    temp_r5 = (arg0 >> 0x18) & 0xF;
    var_r3 = (u32) (arg0 << 8) >> 0x10;
    temp_r2 = arg0;
    if ((temp_r5 == 3) && ((arg0 >> 0x1C) == 1)) {
        M2C_FIELD(*(void **)0x030026A4, s8 *, 0xD4) = 0;
        if ((u32) (u8) (temp_r2 - 0x23) > 3U) {
            var_r1 = 0xDF00 | temp_r2 | 0x03000000;
            var_r0 = 5;
        } else {
            switch (temp_r2) {                      /* irregular */
            case 35:
                M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xADU;
                var_r3 = 0xC7;
                break;
            case 36:
                M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xAEU;
                var_r3 = 0xC8;
                break;
            case 37:
                M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xAFU;
                var_r3 = 0xC9;
                break;
            case 38:
                M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xB0U;
                var_r3 = 0xCA;
                break;
            }
            var_r1 = (temp_r5 << 0x18) | (var_r3 << 8) | temp_r2;
            var_r0 = 0;
        }
        sub_08061BD0(var_r0, var_r1);
        var_r4 = 0;
    }
    return var_r4;
}
