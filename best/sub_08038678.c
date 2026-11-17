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
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08038758;
extern M2C_UNK sub_080387C0;

void *sub_08038678(void *arg2) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x40, 1);
    sub_08065CF0(temp_r0, 0, 0x40);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177E7C;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x30) = temp_r0_2;
    sub_0800443C(temp_r0_2, 0xD);
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x30), 0x120004);
    M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x22) | 1);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x30), temp_r0, &sub_08038758);
    M2C_FIELD(temp_r0, s8 *, 0x3D) = 1;
    M2C_FIELD(temp_r0, s32 *, 0x38) = 0x100;
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(temp_r0, M2C_UNK **, 0x34) = &sub_080387C0;
    return temp_r0;
}
