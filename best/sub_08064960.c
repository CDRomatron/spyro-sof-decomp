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

M2C_UNK _080644A4();                                /* extern */
M2C_UNK _080645EC(s32 *, M2C_UNK *);                /* extern */
M2C_UNK _080646C4(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */

void sub_08064960(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK sp0;
    M2C_UNK sp14;
    M2C_UNK sp28;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;

    sp3C = arg0;
    sp40 = arg1;
    sp44 = arg2;
    sp48 = arg3;
    _080645EC(&sp3C, &sp0);
    _080645EC(&sp44, &sp14);
    M2C_FIELD(&sp14, s32 *, 4) = (s32) (M2C_FIELD(&sp14, s32 *, 4) ^ 1);
    _080646C4(&sp0, &sp14, &sp28);
    _080644A4();
}
