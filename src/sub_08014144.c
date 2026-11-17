/* identical to sub_08014160 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0800D9EC(void *, void *);               /* extern */

s32 sub_08014144(void *arg0) {
    s32 var_r5;

    var_r5 = 1;
    if (M2C_FIELD(arg0, u8 *, 0x54) != 0) {
        sub_080043A4(M2C_FIELD(arg0, s32 *, 0x44));
        sub_080043A4(M2C_FIELD(arg0, s32 *, 0x48));
        M2C_FIELD(arg0, s8 *, 0x56) = 1;
        var_r5 = 0;
    } else {
        if (M2C_FIELD(arg0, s32 *, 0x50) == 0) {
            sub_0800D9EC(arg0, arg0 + 0x38);
        }
        sub_08004020(M2C_FIELD(arg0, s32 *, 0x44));
    }
    return var_r5;
}
