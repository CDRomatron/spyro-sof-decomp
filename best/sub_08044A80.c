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
M2C_UNK sub_0800453C(s32, s32, s32, s32);           /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_080471A0(s32, s32, s32 *, s32 *);       /* extern */
M2C_UNK sub_08048E14(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_0804E224(s32 *, s32 *, void *, s32);    /* extern */
s32 sub_080643E4(s32, s32);                         /* extern */

void sub_08044A80(void *arg0, s32 *arg1) {
    s32 *sp0;
    s32 *sp4;
    M2C_UNK sp8;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp48;
    s32 sp4C;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r2;

    sp30 = M2C_FIELD((void *)0x08066094, s32 *, 0);
    sp34 = M2C_FIELD((void *)0x08066094, s32 *, 4);
    sp38 = 0;
    sp3C = 0;
    var_r1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    var_r2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r2 < 0) {
        var_r2 += 0xFF;
    }
    sp0 = &sp28;
    sp4 = &sp2C;
    sub_0800453C(M2C_FIELD(arg0, s32 *, 0x20), var_r1 >> 8, var_r2 >> 8, 0);
    if (M2C_FIELD(arg0, s32 *, 0x3C) & 0x10) {
        sub_08048E14(sp28 << 8, sp2C << 8, 4, 2);
        var_r0 = sp28 - 4;
    } else {
        sub_08048E14(sp28 << 8, sp2C << 8, 4, 0);
        var_r0 = sp28 + 4;
    }
    sp28 = var_r0;
    if (M2C_FIELD(arg0, s32 *, 0x3C) & 0x10) {
        sp30 = 0 - sp30;
    }
    sp0 = arg1;
    sub_080471A0(sp28 << 8, sp2C << 8, &sp30, &sp38);
    if (arg1 == (s32 *)1) {
        sub_08003220(0x08170A0C);
    } else {
        sub_08003220(0x08170A7C);
    }
    if (arg1 == (s32 *)1) {
        sp40 = sp28 << 8;
        M2C_FIELD(&sp40, s32 *, 4) = (s32) (sp2C << 8);
        sp48 = M2C_FIELD((void *)0x0806606C, s32 *, 0);
        sp4C = M2C_FIELD((void *)0x0806606C, s32 *, 4);
        temp_r0 = (void *)0x08066074 + 0xC;
        M2C_FIELD(&sp8, s32 *, 0) = (s32) M2C_FIELD((void *)0x08066074, s32 *, 0);
        M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD((void *)0x08066074, s32 *, 4);
        M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD((void *)0x08066074, s32 *, 8);
        temp_r1 = &sp8 + 0xC;
        M2C_FIELD(&sp8, s32 *, 0xC) = (s32) M2C_FIELD((void *)0x08066074, s32 *, 0xC);
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
        M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
        M2C_FIELD(temp_r1, s32 *, 0xC) = (s32) M2C_FIELD(temp_r0, s32 *, 0xC);
        M2C_FIELD((temp_r1 + 0xC), s32 *, 4) = (s32) M2C_FIELD((temp_r0 + 0xC), s32 *, 4);
        if (M2C_FIELD(arg0, s32 *, 0x3C) & 0x10) {
            var_r0_2 = sp40 + 0x800;
        } else {
            var_r0_2 = sp40 + 0xFFFFF800;
        }
        sp40 = var_r0_2;
        temp_r2 = &sp0 + (sub_080643E4(sub_0800897C(), 3) * 8) + 8;
        sp0 = NULL;
        sub_0804E224(&sp40, &sp48, temp_r2, 0x810004);
    }
}
