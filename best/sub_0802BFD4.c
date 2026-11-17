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
u8 sub_080077A8();                                  /* extern */
s32 sub_080077E0(u8);                               /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_0802BFD4(void *arg2) {
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = sub_080077A8();
    temp_r0 = sub_08002B34(0x34, 1);
    sub_08065CF0(temp_r0, 0, 0x34);
    M2C_FIELD(temp_r0, s8 *, 0x31) = 1;
    M2C_FIELD(temp_r0, u8 *, 0x30) = temp_r4;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x22) | 1);
    M2C_FIELD(temp_r0, s32 *, 0x28) = sub_08004370();
    if (((sub_080077E0(temp_r4) << 0x18) != 0) || ((sub_08007874(0xC) << 0x18) != 0)) {
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x28), 0x4E0001);
        M2C_FIELD(temp_r0, s8 *, 0x32) = 1;
    } else {
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x28), 0x4E0000);
    }
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
