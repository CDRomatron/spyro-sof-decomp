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

void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
s32 sub_0800FCA4(s32, s32, void *);                 /* extern */
s32 sub_080502E8(void *, s32);                      /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_0802E1D8;

void *sub_0802D900(void *arg2) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r5;
    void *temp_r0;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;

    temp_r0 = sub_08002B34(0x88, 1);
    sub_08065CF0(temp_r0, 0, 0x88);
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x28) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x290002);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x28), temp_r0, &sub_0802E1D8);
    temp_r0_3 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x2C) = temp_r0_3;
    sub_08003C58(temp_r0_3, 0x2A0003);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    temp_r1 = temp_r0 + 0x30;
    M2C_FIELD(temp_r0, s32 *, 0x30) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    temp_r4 = M2C_FIELD(arg2, s32 *, 0);
    temp_r5 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r4, temp_r5, sub_080502E8(arg2, temp_r1 + 0xC));
    M2C_FIELD(temp_r0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg2, s32 *, 0) + 0xFFFFF400);
    M2C_FIELD(temp_r0, s32 *, 0x40) = (s32) (M2C_FIELD(arg2, s32 *, 4) + 0xFFFFF400);
    M2C_FIELD(temp_r0, s32 *, 0x44) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x48) = (s32) (M2C_FIELD(arg2, s32 *, 0) + 0xFFFFF000);
    M2C_FIELD(temp_r0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg2, s32 *, 4) + 0xFFFFF000);
    M2C_FIELD(temp_r0, s32 *, 0x50) = (s32) M2C_FIELD(arg2, s32 *, 8);
    temp_r1_2 = temp_r0 + 0x54;
    temp_r0_4 = temp_r0 + 0x48;
    M2C_FIELD(temp_r0, s32 *, 0x54) = (s32) M2C_FIELD(temp_r0, s32 *, 0x48);
    M2C_FIELD(temp_r1_2, s32 *, 4) = (s32) M2C_FIELD(temp_r0_4, s32 *, 4);
    M2C_FIELD(temp_r1_2, s32 *, 8) = (s32) M2C_FIELD(temp_r0_4, s32 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x54) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x54) + sub_08063D80((s32) (*(u16 *)0x08065DC8 << 0x10) >> 4, 0x100));
    M2C_FIELD(temp_r0, s32 *, 0x58) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x58) + sub_08063D80((s32) (*(u16 *)0x08065F48 << 0x10) >> 4, 0x100));
    temp_r1_3 = temp_r0 + 0x60;
    temp_r0_5 = temp_r0 + 0x48;
    M2C_FIELD(temp_r0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r0, s32 *, 0x48);
    M2C_FIELD(temp_r1_3, s32 *, 4) = (s32) M2C_FIELD(temp_r0_5, s32 *, 4);
    M2C_FIELD(temp_r1_3, s32 *, 8) = (s32) M2C_FIELD(temp_r0_5, s32 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x60) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x60) + sub_08063D80((s32) (*(u16 *)0x08065EC8 << 0x10) >> 4, 0x100));
    M2C_FIELD(temp_r0, s32 *, 0x64) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x64) + sub_08063D80((s32) (*(u16 *)0x08065E48 << 0x10) >> 4, 0x100));
    M2C_FIELD(temp_r0, s32 *, 0x7C) = 7;
    M2C_FIELD(temp_r0, s32 *, 0x80) = 0x14;
    M2C_FIELD(temp_r0, s32 *, 0x6C) = sub_0800FCA4(0x13C, 0, arg2);
    return temp_r0;
}
