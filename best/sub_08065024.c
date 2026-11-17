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

M2C_UNK _080645EC(s32 *, u32 *);                    /* extern */
s32 sub_08064DC8(u32 *, u32 *);                     /* extern */

s32 sub_08065024(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 sp0;
    u32 sp14;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 var_r1;
    s32 var_r1_2;

    sp28 = arg0;
    sp2C = arg1;
    sp30 = arg2;
    sp34 = arg3;
    _080645EC(&sp28, &sp0);
    _080645EC(&sp30, &sp14);
    var_r1 = 0;
    if (sp0 <= 1U) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        var_r1_2 = 0;
        if (sp14 <= 1U) {
            var_r1_2 = 1;
        }
        if (var_r1_2 != 0) {
            goto block_6;
        }
        return sub_08064DC8(&sp0, &sp14);
    }
block_6:
    return 1;
}
