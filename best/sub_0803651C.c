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

M2C_UNK sub_08008620(s32, M2C_UNK *, M2C_UNK *);    /* extern */
M2C_UNK sub_08008810(s32, s32, M2C_UNK *);          /* extern */
M2C_UNK sub_0800FD78(void *, s32, M2C_UNK *);       /* extern */
s32 sub_080502E8(M2C_UNK *);                        /* extern */
s32 sub_08052BB4(s32);                              /* extern */

void sub_0803651C(void *arg0) {
    M2C_UNK sp0;
    s32 sp8;
    M2C_UNK spC;
    s32 temp_r1;
    s32 temp_r5;
    s32 var_r1;

    temp_r5 = arg0 + 0x24;
    sub_08008810(sub_08052BB4(temp_r5), 0x1400, &spC);
    sub_08008620(temp_r5, &spC, &sp0);
    sp8 = sub_080502E8(&sp0);
    var_r1 = M2C_FIELD(arg0, s32 *, 0x9C);
    if ((var_r1 != 0) || (var_r1 = M2C_FIELD(arg0, s32 *, 0xA0), (var_r1 != 0))) {
        sub_0800FD78(arg0, var_r1, &sp0);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_r1 != 0) {
        sub_0800FD78(arg0, temp_r1, &sp0);
    }
}
