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

s32 sub_0800897C(s32, s32, s32);                    /* extern */
M2C_UNK sub_0804E224(s32 *, s32 *, void *, s32);    /* extern */
s32 sub_080643E4(s32, s32);                         /* extern */

void sub_08045BE4(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    M2C_UNK sp4;
    s32 sp24;
    s32 sp2C;
    s32 sp30;
    s32 var_r0;
    s32 var_r1;
    void *temp_r1;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;

    sp24 = arg1 << 8;
    M2C_FIELD(&sp24, s32 *, 4) = (s32) (arg2 << 8);
    sp2C = M2C_FIELD((void *)0x0806606C, s32 *, 0);
    sp30 = M2C_FIELD((void *)0x0806606C, s32 *, 4);
    temp_r1 = (void *)0x08066074 + 0xC;
    M2C_FIELD(&sp4, s32 *, 0) = (s32) M2C_FIELD((void *)0x08066074, s32 *, 0);
    M2C_FIELD(&sp4, s32 *, 4) = (s32) M2C_FIELD((void *)0x08066074, s32 *, 4);
    M2C_FIELD(&sp4, s32 *, 8) = (s32) M2C_FIELD((void *)0x08066074, s32 *, 8);
    temp_r2 = &sp4 + 0xC;
    M2C_FIELD(&sp4, s32 *, 0xC) = (s32) M2C_FIELD((void *)0x08066074, s32 *, 0xC);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) M2C_FIELD(temp_r1, s32 *, 4);
    M2C_FIELD(temp_r2, s32 *, 8) = (s32) M2C_FIELD(temp_r1, s32 *, 8);
    temp_r2_2 = temp_r2 + 0xC;
    M2C_FIELD(temp_r2, s32 *, 0xC) = (s32) M2C_FIELD(temp_r1, s32 *, 0xC);
    M2C_FIELD(temp_r2_2, s32 *, 4) = (s32) M2C_FIELD((temp_r1 + 0xC), s32 *, 4);
    var_r1 = 0x10;
    if (M2C_FIELD(arg0, s32 *, 0x3C) & 0x10) {
        var_r0 = sp24 + 0x800;
    } else {
        var_r1 = 0xFFFFF800;
        var_r0 = sp24 + 0xFFFFF800;
    }
    sp24 = var_r0;
    temp_r2_3 = &sp0 + (sub_080643E4(sub_0800897C(var_r0, var_r1, temp_r2_2 + 8), 3) * 8) + 4;
    sp0 = 0;
    sub_0804E224(&sp24, &sp2C, temp_r2_3, 0x810004);
}
