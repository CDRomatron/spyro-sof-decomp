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

M2C_UNK sub_0800453C(s32, s32, s32, s32, s32 *, s32 *); /* extern */
M2C_UNK sub_080471A0(s32, s32, s32 *, s32 *, s32);  /* extern */

void sub_0804993C(void *arg0, s32 arg1) {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 var_r1;
    s32 var_r2;

    sp18 = M2C_FIELD((void *)0x0806609C, s32 *, 0);
    sp1C = M2C_FIELD((void *)0x0806609C, s32 *, 4);
    M2C_FIELD(&sp8, s32 *, 0) = M2C_FIELD((void *)0x080660A4, s32 *, 0);
    M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD((void *)0x080660A4, s32 *, 4);
    M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD((void *)0x080660A4, s32 *, 8);
    M2C_FIELD(&sp8, s32 *, 0xC) = (s32) M2C_FIELD((void *)0x080660A4, s32 *, 0xC);
    if ((arg1 << 0x18) != 0) {
        sp18 = 0;
        M2C_FIELD(&sp18, s32 *, 4) = 0;
        sp10 = 0;
        sp8 = 0;
        sp14 = 0x400;
        spC = 0x400;
    }
    var_r1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    var_r2 = M2C_FIELD(arg0, s32 *, 0x24);
    if (var_r2 < 0) {
        var_r2 += 0xFF;
    }
    sub_0800453C(M2C_FIELD(arg0, s32 *, 0x28), var_r1 >> 8, var_r2 >> 8, 0, &sp20, &sp24);
    if (M2C_FIELD(arg0, s32 *, 0x40) & 8) {
        sub_080471A0(sp20 << 8, sp24 << 8, &sp10, &sp18, 3);
        return;
    }
    sub_080471A0(sp20 << 8, sp24 << 8, &sp8, &sp18, 3);
}
