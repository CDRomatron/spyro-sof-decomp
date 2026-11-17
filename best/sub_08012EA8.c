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
M2C_UNK sub_0800C308(s32, s8 *, s32);               /* extern */
M2C_UNK sub_0800C3FC(s32, s32, s32);                /* extern */
s32 sub_0800D518();                                 /* extern */
M2C_UNK sub_0800D730(s32, s32);                     /* extern */
M2C_UNK sub_0800D734(s32, s32);                     /* extern */
M2C_UNK sub_0800D758(s32, s32);                     /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08012EA8(void) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s8 *temp_r1;
    s8 *var_r1;
    s8 var_r0;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x50, 1);
    sub_08065CF0(temp_r0, 0, 0x50);
    M2C_FIELD(temp_r0, s8 *, 0x49) = 1;
    M2C_FIELD(temp_r0, s8 *, 0x4B) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = 0x59;
    if ((sub_08007874(4) << 0x18) == 0) {
        var_r1 = temp_r0 + 0x4A;
        var_r0 = 4;
    } else {
        var_r1 = temp_r0 + 0x4A;
        var_r0 = 5;
    }
    *var_r1 = var_r0;
    temp_r1 = var_r1 - 6;
    *temp_r1 = 2;
    M2C_FIELD(temp_r0, s8 *, 0x45) = 0xB;
    M2C_FIELD(temp_r0, s8 *, 0x46) = 0;
    M2C_FIELD((temp_r0 + 0x46), s8 *, 1) = 0;
    temp_r0_2 = sub_0800D518();
    M2C_FIELD(temp_r0, s32 *, 0x40) = temp_r0_2;
    sub_0800C308(temp_r0_2, temp_r1, 4);
    sub_0800C228(M2C_FIELD(temp_r0, s32 *, 0x40), 0, 1, 4);
    sub_0800D734(M2C_FIELD(temp_r0, s32 *, 0x40), 1);
    sub_0800D758(M2C_FIELD(temp_r0, s32 *, 0x40), 1);
    sub_0800C3FC(M2C_FIELD(temp_r0, s32 *, 0x40), 0, 0);
    sub_0800D730(M2C_FIELD(temp_r0, s32 *, 0x40), -1);
    M2C_FIELD(temp_r0, s8 *, 0x4C) = 0x2D;
    M2C_FIELD(temp_r0, u8 *, 0x4D) = 2U;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = 0x59;
    temp_r0_3 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x38) = temp_r0_3;
    sub_08003C58(temp_r0_3, 1);
    sub_08003DA8(M2C_FIELD(temp_r0, s32 *, 0x38), M2C_FIELD(temp_r0, u8 *, 0x4D));
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    sub_080528D4(temp_r0, 0, 0, 0);
    return temp_r0;
}
