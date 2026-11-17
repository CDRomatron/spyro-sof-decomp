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
M2C_UNK sub_080044A4(s32, s32);                     /* extern */
u8 sub_08007324();                                  /* extern */
u8 sub_08007800();                                  /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_08009F74(s32);                          /* extern */
M2C_UNK sub_0800C228(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_0800C308(s32, void *, s32);             /* extern */
s32 sub_0800D518();                                 /* extern */
M2C_UNK sub_0800D734(s32, s32);                     /* extern */
M2C_UNK sub_0800D758(s32, s32);                     /* extern */
s32 sub_0800FCA4(s32, s32, void *);                 /* extern */
M2C_UNK sub_0801A130(void *, s32);                  /* extern */
M2C_UNK sub_0801D5DC(s32, u8);                      /* extern */
s32 sub_0801D8A8();                                 /* extern */
M2C_UNK sub_0801DC30(s32, void *);                  /* extern */
M2C_UNK sub_080500F0();                             /* extern */
s32 sub_080502E8(void *, s32);                      /* extern */
M2C_UNK sub_080522C8(void *);                       /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_0801E1B8;

void *sub_08018638(void *arg2) {
    s32 *var_r4;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r4;
    u32 var_r5;
    u8 temp_r0_4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r7;

    temp_r0 = sub_08002B34(0x1EC, 0);
    sub_08065CF0(temp_r0, 0, 0x1EC);
    M2C_FIELD(temp_r0, s32 *, 0x24) = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x28) = sub_08004370();
    sub_08009F74(0x3B5);
    sub_08009F74(0x49B);
    sub_08009F74(0x428);
    sub_08009F74(0x3AA);
    sub_08009F74(0x490);
    sub_08009F74(0x41D);
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x24), 0x70000F);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x24), temp_r0, &sub_0801E1B8);
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x28), 0x650000);
    sub_080044A4(M2C_FIELD(temp_r0, s32 *, 0x28), 1);
    M2C_FIELD(temp_r0, s16 *, 0x148) = 2;
    temp_r1 = temp_r0 + 0xC;
    M2C_FIELD(temp_r0, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    temp_r7 = temp_r0 + 0xC;
    M2C_FIELD(temp_r0, s32 *, 0x14) = sub_080502E8(temp_r7, temp_r1 + 0xC);
    M2C_FIELD(temp_r0, s32 *, 0x1B0) = 0;
    temp_r0_2 = temp_r0 + 0x160;
    M2C_FIELD(temp_r0, s32 *, 0x160) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0_2, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0_2, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x158) = (s32) M2C_FIELD(temp_r0, s32 *, 0x134);
    sub_080500F0();
    M2C_FIELD(temp_r0, s32 *, 0x1CC) = sub_0801D8A8();
    M2C_FIELD(temp_r0, u8 *, 0x1D0) = 4U;
    if ((sub_08007874(0x18) << 0x18) != 0) {
        M2C_FIELD(temp_r0, u8 *, 0x1D0) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x1D0) | 2);
    }
    sub_0801DC30(M2C_FIELD(temp_r0, s32 *, 0x1CC), temp_r7);
    temp_r4 = M2C_FIELD(temp_r0, s32 *, 0x1CC);
    sub_0801D5DC(temp_r4, sub_08007800());
    if (*(s32 *)0x030026C8 & 0x800) {
        M2C_FIELD(temp_r0, u8 *, 0x1D0) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x1D0) | 8 | 0x10 | 0x20 | 2);
    }
    M2C_FIELD(temp_r0, s32 *, 0xCC) = sub_0800FCA4(0xEC, 0, temp_r7);
    sub_080522C8(temp_r0);
    if (sub_08007324() == 0x12) {
        sub_0801A130(temp_r0, 0x14);
    } else {
        sub_0801A130(temp_r0, 2);
    }
    temp_r0_3 = sub_0800D518();
    M2C_FIELD(temp_r0, s32 *, 0x1D4) = temp_r0_3;
    sub_0800C308(temp_r0_3, temp_r0 + 0x1D8, 4);
    sub_0800C228(M2C_FIELD(temp_r0, s32 *, 0x1D4), 1, 4, 4);
    sub_0800D734(M2C_FIELD(temp_r0, s32 *, 0x1D4), 5);
    sub_0800D758(M2C_FIELD(temp_r0, s32 *, 0x1D4), 1);
    *(void **)0x03002688 = temp_r0;
    M2C_FIELD(temp_r0, s8 *, 0x156) = 0;
    temp_r0_4 = sub_08007324();
    if ((temp_r0_4 == 0) || (temp_r0_4 == 0xB) || (temp_r0_4 == 0x18)) {
        M2C_FIELD(temp_r0, s8 *, 0x156) = 1;
    }
    var_r5 = 0;
    var_r4 = temp_r0 + 0x2C;
    do {
        temp_r0_5 = sub_08004370();
        *var_r4 = temp_r0_5;
        sub_08003C58(temp_r0_5, 0x120012);
        var_r4 += 0x14;
        var_r5 += 1;
    } while (var_r5 <= 7U);
    return temp_r0;
}
