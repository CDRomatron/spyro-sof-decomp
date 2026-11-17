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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_08008620(s32, M2C_UNK *, M2C_UNK *);    /* extern */
M2C_UNK sub_08008810(s32, s32, M2C_UNK *);          /* extern */
M2C_UNK sub_0800FCA4(s32, s32, M2C_UNK *);          /* extern */
s32 sub_0801DAF4();                                 /* extern */
M2C_UNK sub_080253BC(void *);                       /* extern */
M2C_UNK sub_08025514(void *, s32);                  /* extern */
s32 sub_08052BB4(s32);                              /* extern */

void sub_08025480(void *arg0) {
    M2C_UNK sp0;
    s32 sp8;
    M2C_UNK spC;
    s32 temp_r0;
    s32 temp_r7;

    temp_r7 = arg0 + 0xC;
    temp_r0 = sub_08052BB4(temp_r7);
    M2C_FIELD(arg0, s32 *, 0x6C) = temp_r0;
    if (!(7 & M2C_FIELD(arg0, u16 *, 0x74))) {
        sub_08008810(temp_r0, 0x600, &spC);
        sub_08008620(temp_r7, &spC, &sp0);
        sp8 = M2C_FIELD(arg0, s32 *, 0x14) + 0xE00;
        sub_0800FCA4(0x11E, 1, &sp0);
    }
    if ((M2C_FIELD(arg0, u16 *, 0x74) == 0) || ((sub_0801DAF4() << 0x18) != 0)) {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x60), 0x750001);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x60), -1);
        sub_08025514(arg0, 0);
    } else {
        M2C_FIELD(arg0, u16 *, 0x74) = (u16) (M2C_FIELD(arg0, u16 *, 0x74) - 1);
    }
    sub_080253BC(arg0);
}
