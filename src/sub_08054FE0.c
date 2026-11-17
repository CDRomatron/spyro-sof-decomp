/* identical to sub_0805517C in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_08063D80(s32, s32);                         /* extern */
u16 sub_08063DB4(s32);                              /* extern */

void sub_08054FE0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r0;

    var_r0 = 0 - (sub_08063D80(arg0 * arg1, 0x100) * 2);
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    temp_r0 = sub_08063DB4(var_r0 >> 8);
    *arg2 = temp_r0 << 8;
    if (sub_08063D80(temp_r0 << 0x10, arg1) < 0) {
        var_r0_2 = 0 - sub_08063D80(*arg2 << 8, arg1);
    } else {
        var_r0_2 = sub_08063D80(*arg2 << 8, arg1);
    }
    *arg3 = var_r0_2;
}
