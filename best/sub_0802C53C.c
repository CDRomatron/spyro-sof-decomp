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
s32 sub_08007874(s32);                              /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_0802C53C(void *arg2) {
    s32 temp_r4;
    s32 temp_r5;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x30, 1);
    sub_08065CF0(temp_r0, 0, 0x30);
    M2C_FIELD(temp_r0, s8 *, 0x2C) = 1;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    M2C_FIELD(temp_r0, s32 *, 0x28) = sub_08004370();
    if ((sub_08007874(0xD) << 0x18) == 0) {
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x28), 0x760000);
    } else {
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x28), 0x760001);
    }
    temp_r4 = M2C_FIELD(arg2, s32 *, 0);
    temp_r5 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r4, temp_r5, sub_080502E8(arg2));
    return temp_r0;
}
