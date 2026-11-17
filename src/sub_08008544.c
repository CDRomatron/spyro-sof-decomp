/* identical to sub_08010E68 in SPYRO 3-U (matched), with its names changed by decompdecomp */
/* identical to sub_08010F1C in SPYRO 3 (matched), with its names changed by decompdecomp */
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

s32 sub_0806436C(s32);                              /* extern */

u32 sub_08008544(u32 arg0, u32 arg1) {
    u32 var_r1;

    if (arg0 >= arg1) {
        var_r1 = 0x6400;
    } else {
        var_r1 = (u32) (sub_0806436C(arg0 << 0x10) * 0x64) >> 8;
        if (var_r1 > 0x63FFU) {
            var_r1 = 0x64E1;
        }
    }
    return var_r1;
}
