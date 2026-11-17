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

s32 sub_08059814(u8, u8, u8);                       /* extern */

u8 sub_0805A2D8(u8 arg0) {
    u8 var_r4;
    u8 var_r5;
    u8 var_r6;

    var_r5 = 0;
    var_r6 = 0;
    do {
        var_r4 = 0;
loop_2:
        var_r5 |= sub_08059814(var_r4, var_r6, arg0);
        var_r4 += 1;
        if ((u32) var_r4 <= 7U) {
            goto loop_2;
        }
        var_r6 += 1;
    } while ((u32) var_r6 <= 7U);
    return var_r5;
}
