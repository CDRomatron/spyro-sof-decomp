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
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_0803C86C;

void *sub_0803C734(void *arg2) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x40, 1);
    sub_08065CF0(temp_r0, 0, 0x40);
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x24) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x430002);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x24), temp_r0, &sub_0803C86C);
    M2C_FIELD(temp_r0, s32 *, 0x38) = (s32) (0xFFFF & sub_0800897C());
    M2C_FIELD(temp_r0, s32 *, 0x34) = (s32) (0x3F & sub_0800897C());
    M2C_FIELD(temp_r0, s8 *, 0x3C) = 1;
    M2C_FIELD(temp_r0, s8 *, 0x3D) = 0;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
