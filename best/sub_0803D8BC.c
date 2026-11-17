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
M2C_UNK sub_0803D770(void *);                       /* extern */
M2C_UNK sub_0803D950(void *, s32);                  /* extern */
s32 sub_08052BB4(s32);                              /* extern */

void sub_0803D8BC(void *arg0) {
    M2C_UNK sp0;
    s32 sp8;
    M2C_UNK spC;
    s32 temp_r0;
    s32 temp_r7;
    u16 temp_r0_2;

    sp8 = 0x1200;
    temp_r7 = arg0 + 0x24;
    temp_r0 = sub_08052BB4(temp_r7);
    M2C_FIELD(arg0, s32 *, 0x84) = temp_r0;
    if (!(7 & M2C_FIELD(arg0, u16 *, 0x90))) {
        sub_08008810(temp_r0, 0x800, &spC);
        sub_08008620(temp_r7, &spC, &sp0);
        sp8 = M2C_FIELD(arg0, s32 *, 0x2C) + 0x2000;
        sub_0800FCA4(0x1B8, 1, &sp0);
    }
    temp_r0_2 = M2C_FIELD(arg0, u16 *, 0x90);
    if (temp_r0_2 != 0) {
        M2C_FIELD(arg0, u16 *, 0x90) = (u16) (temp_r0_2 - 1);
    } else {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x6D0001);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x78), -1);
        sub_0803D950(arg0, 0);
    }
    sub_0803D770(arg0);
}
