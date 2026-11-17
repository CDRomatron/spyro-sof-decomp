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

M2C_UNK _080652F8(s32 *, M2C_UNK *);                /* extern */
M2C_UNK _08065374(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK sub_08065240();                             /* extern */

void sub_080654F0(s32 arg0, s32 arg1) {
    M2C_UNK sp0;
    M2C_UNK sp10;
    M2C_UNK sp20;
    s32 sp30;
    s32 sp34;

    sp30 = arg0;
    sp34 = arg1;
    _080652F8(&sp30, &sp0);
    _080652F8(&sp34, &sp10);
    _08065374(&sp0, &sp10, &sp20);
    sub_08065240();
}
