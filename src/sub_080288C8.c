/* identical to sub_0802892C in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */

s32 sub_080288C8(s32 arg0, void *arg1, u16 arg2, s32 arg3) {
    s32 var_r5;

    var_r5 = 0;
    if ((arg2 == 9) && (arg3 == 0x2B)) {
        M2C_FIELD(arg1, s32 *, 0x24) = arg0;
        var_r5 = 1;
        if (M2C_FIELD(arg1, u8 *, 0x31) != 0) {
            sub_0800FE28(arg1, arg0, 0x2C);
        }
    }
    return var_r5;
}
