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
M2C_UNK sub_0800380C();                             /* extern */
s32 sub_08003B7C(s32, s32, void *, M2C_UNK *);      /* extern */
M2C_UNK sub_08003BF8(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08009C94;
extern M2C_UNK sub_08009D30;
extern M2C_UNK sub_08009F50;

void *sub_08009E3C(void) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x48, 1);
    sub_08065CF0(temp_r0, 0, 0x48);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0x11000;
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0x5000;
    M2C_FIELD(temp_r0, s32 *, 0x24) = 0x11000;
    M2C_FIELD(temp_r0, s32 *, 0x28) = 0x5000;
    M2C_FIELD(temp_r0, s32 *, 4) = sub_08003B7C(0, 0x78, temp_r0, &sub_08009D30);
    sub_0800380C();
    sub_08003BF8(M2C_FIELD(temp_r0, s32 *, 4));
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0) = temp_r0_2;
    sub_0800443C(temp_r0_2, 4);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0), temp_r0, &sub_08009F50);
    M2C_FIELD(temp_r0, s8 *, 0x44) = 1;
    M2C_FIELD(temp_r0, M2C_UNK **, 8) = &sub_08009C94;
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0), 0x10001);
    return temp_r0;
}
