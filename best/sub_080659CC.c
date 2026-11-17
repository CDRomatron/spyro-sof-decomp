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

M2C_UNK _080652F8(s32 *, u32 *);                    /* extern */
s32 sub_080657A0(u32 *, u32 *);                     /* extern */

s32 sub_080659CC(s32 arg0, s32 arg1) {
    u32 sp0;
    u32 sp10;
    s32 sp20;
    s32 sp24;
    s32 var_r1;
    s32 var_r1_2;

    sp20 = arg0;
    sp24 = arg1;
    _080652F8(&sp20, &sp0);
    _080652F8(&sp24, &sp10);
    var_r1 = 0;
    if (sp0 <= 1U) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        var_r1_2 = 0;
        if (sp10 <= 1U) {
            var_r1_2 = 1;
        }
        if (var_r1_2 != 0) {
            goto block_6;
        }
        return sub_080657A0(&sp0, &sp10);
    }
block_6:
    return 1;
}
