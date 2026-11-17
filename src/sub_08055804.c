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
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_080558F0;
extern M2C_UNK sub_08055940;

void *sub_08055804(void) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x44, 1);
    sub_08065CF0(temp_r0, 0, 0x44);
    M2C_FIELD(temp_r0, s32 *, 0xC) = sub_08003B7C(0, 0, temp_r0, &sub_080558F0);
    sub_0800380C();
    M2C_FIELD(temp_r0, s32 *, 0x10) = sub_08003B7C(0, 0, *(void **)0x030026B8, &sub_08055940);
    sub_0800380C();
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x4B0000);
    M2C_FIELD(temp_r0, s8 *, 0x40) = 0;
    return temp_r0;
}
