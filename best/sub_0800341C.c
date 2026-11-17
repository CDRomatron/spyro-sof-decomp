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

M2C_UNK sub_08062E3C(u32);                          /* extern */

void sub_0800341C(u8 arg0) {
    u32 var_r1;

    M2C_FIELD((void *)0x03000840, u8 *, 0x1C) = arg0;
    var_r1 = arg0 >> 0x10;
    if (var_r1 == 0x10) {
        var_r1 = 0xF;
    }
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    sub_08062E3C(var_r1);
}
