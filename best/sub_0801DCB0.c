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
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
extern M2C_UNK sub_0801DD70;

void *sub_0801DCB0(void *arg2) {
    s32 temp_r0;
    void *temp_r0_2;
    void *temp_r4;

    temp_r4 = sub_08002B34(0x2C, 0);
    temp_r0 = sub_08004370();
    M2C_FIELD(temp_r4, s32 *, 0x24) = temp_r0;
    if (M2C_FIELD(arg2, s32 *, 4) == 0) {
        sub_08003C58(temp_r0, 0x120012);
        sub_08004454(M2C_FIELD(temp_r4, s32 *, 0x24), temp_r4, &sub_0801DD70);
    }
    M2C_FIELD(temp_r4, s16 *, 0x28) = (s16) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r4, s8 *, 0x2B) = 0xFF;
    temp_r0_2 = M2C_FIELD(arg2, void **, 0);
    sub_080528D4(temp_r4, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 8));
    return temp_r4;
}
