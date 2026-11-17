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
M2C_UNK sub_08003DA8(s32, u8);                      /* extern */
s32 sub_08004370();                                 /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800C228(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_0800C308(s32, void *, s32);             /* extern */
M2C_UNK sub_0800C3FC(s32, s32, s32);                /* extern */
s32 sub_0800D518();                                 /* extern */
M2C_UNK sub_0800D638(s32, s32);                     /* extern */
M2C_UNK sub_0800D684(s32, s32, s32);                /* extern */
M2C_UNK sub_0800D730(s32, s32);                     /* extern */
M2C_UNK sub_0800D734(s32, s32);                     /* extern */
M2C_UNK sub_0800D758(s32, s32);                     /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_080544A8(s32, s32, void *);             /* extern */
u8 sub_0806436C(s32, s32);                          /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_0802D2CC(void *arg2) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4;
    s8 *var_r1;
    s8 var_r0;
    u8 temp_r0_5;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x74, 1);
    sub_08065CF0(temp_r0, 0, 0x74);
    M2C_FIELD(temp_r0, s8 *, 0x6D) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x54) = 0x80;
    M2C_FIELD(temp_r0, s8 *, 0x6F) = 0xF;
    M2C_FIELD(temp_r0, u8 *, 0x70) = 2U;
    M2C_FIELD(temp_r0, s32 *, 0x54) = 0x80;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x34) = temp_r0_2;
    sub_08003C58(temp_r0_2, 1);
    sub_08003DA8(M2C_FIELD(temp_r0, s32 *, 0x34), M2C_FIELD(temp_r0, u8 *, 0x70));
    M2C_FIELD(temp_r0, s32 *, 0x38) = sub_08004370();
    M2C_FIELD(temp_r0, s8 *, 0x6E) = 1;
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x38), 0x5A0001);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    temp_r0_3 = sub_0800D518();
    M2C_FIELD(temp_r0, s32 *, 0x3C) = temp_r0_3;
    sub_0800D638(temp_r0_3, 0x5A0000);
    sub_0800D684(M2C_FIELD(temp_r0, s32 *, 0x3C), 2, 4);
    sub_0800D734(M2C_FIELD(temp_r0, s32 *, 0x3C), 5);
    sub_0800D758(M2C_FIELD(temp_r0, s32 *, 0x40), 1);
    temp_r0_4 = sub_0800D518();
    M2C_FIELD(temp_r0, s32 *, 0x40) = temp_r0_4;
    sub_0800C308(temp_r0_4, temp_r0 + 0x65, 4);
    sub_0800C228(M2C_FIELD(temp_r0, s32 *, 0x40), 0, 1, 4);
    sub_0800D734(M2C_FIELD(temp_r0, s32 *, 0x40), 1);
    sub_0800D758(M2C_FIELD(temp_r0, s32 *, 0x40), 1);
    sub_0800C3FC(M2C_FIELD(temp_r0, s32 *, 0x40), 0, 0);
    sub_0800D730(M2C_FIELD(temp_r0, s32 *, 0x40), -1);
    if ((sub_08007874(0x14) << 0x18) == 0) {
        var_r1 = temp_r0 + 0x6A;
        var_r0 = 5;
    } else {
        var_r1 = temp_r0 + 0x6A;
        var_r0 = 8;
    }
    *var_r1 = var_r0;
    temp_r0_5 = sub_0806436C(0x3C, 0x3C);
    M2C_FIELD(temp_r0, u8 *, 0x65) = temp_r0_5;
    M2C_FIELD(temp_r0, s8 *, 0x66) = 0xB;
    temp_r4 = 0x3C - (temp_r0_5 * 0x3C);
    M2C_FIELD(temp_r0, u8 *, 0x67) = sub_0806436C(temp_r4, 0xA);
    M2C_FIELD(temp_r0, s8 *, 0x68) = (s8) (temp_r4 - (M2C_FIELD(temp_r0, u8 *, 0x67) * 0xA));
    sub_080544A8(0x2A0002, 2, temp_r0 + 0x6B);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
