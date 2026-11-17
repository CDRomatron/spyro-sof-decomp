/* identical to sub_0804FA7C in SPYRO 3-U (matched), with its names changed by decompdecomp */
/* identical to sub_080500D4 in SPYRO 3 (matched), with its names changed by decompdecomp */
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

u16 sub_08063D78(s16, s16);                         /* extern */

u16 sub_08029D08(void *arg0, void *arg1) {
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;

    var_r3 = M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(arg0, s32 *, 0);
    var_r1 = M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg0, s32 *, 4);
    var_r2 = var_r3;
    if (var_r3 < 0) {
        var_r2 = 0 - var_r3;
    }
    var_r0 = var_r1;
    if (var_r1 < 0) {
        var_r0 = 0 - var_r1;
    }
    if (var_r2 > var_r0) {
        if (var_r2 > 0x7FFF) {
            do {
                var_r2 = var_r2 >> 1;
                var_r3 = var_r3 >> 1;
                var_r1 = var_r1 >> 1;
            } while (var_r2 > 0x7FFF);
        }
    } else if (var_r0 > 0x7FFF) {
        do {
            var_r0 = var_r0 >> 1;
            var_r3 = var_r3 >> 1;
            var_r1 = var_r1 >> 1;
        } while (var_r0 > 0x7FFF);
    }
    return sub_08063D78((s16) var_r3, (s16) var_r1);
}
