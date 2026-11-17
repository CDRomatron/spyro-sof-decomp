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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08008810(s32, s32, s32 *);              /* extern */
s32 sub_08008900(s32, s32);                         /* extern */
s32 sub_0800897C();                                 /* extern */
s32 sub_0800FCA4(s32, s32, s32 *);                  /* extern */
M2C_UNK sub_0800FD8C(void *, s32, s32);             /* extern */
s32 sub_0801DB18();                                 /* extern */
M2C_UNK sub_08037D00(void *);                       /* extern */
s32 sub_08052BB4(void *);                           /* extern */

void sub_08037388(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    void *temp_r0_3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    temp_r0 = sub_08008900(temp_r4, sub_08052BB4(arg0 + 0x24));
    var_r1 = temp_r0;
    if (temp_r0 < 0) {
        var_r1 = 0 - temp_r0;
    }
    if (var_r1 > 0x166) {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C);
        if (temp_r0 >= 0) {
            var_r0 = temp_r0_2 + 0x166;
        } else {
            var_r0 = temp_r0_2 + 0xFFFFFE9A;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x3C);
    }
    if ((((M2C_FIELD(arg0, u16 *, 0x68) == 0) && ((u32) M2C_FIELD(arg0, u8 *, 0x70) <= 3U)) || (M2C_FIELD(arg0, u8 *, 0x70) == 0)) && ((sub_0801DB18() << 0x18) == 0)) {
        temp_r0_3 = arg0 + 0x24;
        M2C_FIELD(&sp0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0x24);
        M2C_FIELD(&sp0, s32 *, 4) = (s32) M2C_FIELD(temp_r0_3, s32 *, 4);
        M2C_FIELD(&sp0, s32 *, 8) = (s32) M2C_FIELD(temp_r0_3, s32 *, 8);
        sp8 += 0x2E00;
        sub_08008810(M2C_FIELD(arg0, s32 *, 0x3C), 0x600, &spC);
        sp0 += spC;
        sp4 += M2C_FIELD(&spC, s32 *, 4);
        var_r2 = 0x4000;
        if (1 & sub_0800897C()) {
            var_r2 = 0xFFFFC000;
        }
        sub_08008810((s32) (u16) (M2C_FIELD(arg0, s32 *, 0x3C) + var_r2), 0xA00, &spC);
        sp0 += spC;
        sp4 += M2C_FIELD(&spC, s32 *, 4);
        temp_r4_2 = sub_0800FCA4(0x18B, 1, &sp0);
        sub_08003220(0x081714FC);
        M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) + 1);
        sub_0800FD8C(arg0, temp_r4_2, M2C_FIELD(arg0, s32 *, 0x3C));
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x40), 0x2C000A);
        M2C_FIELD(arg0, u16 *, 0x68) = 0xF0U;
    }
    sub_08037D00(arg0);
}
