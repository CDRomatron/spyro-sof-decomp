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
s32 sub_08003B7C(s32, s32, s32, M2C_UNK *);         /* extern */
M2C_UNK sub_08003C04(s32);                          /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08005BC8;

s32 sub_08005DDC(void) {
    void *temp_r0;

    temp_r0 = sub_08002B34(0x2A0, 1);
    *(void **)0x03000898 = temp_r0;
    sub_08065CF0(temp_r0, 0, 0x2A0);
    M2C_FIELD(temp_r0, s8 *, 0x29D) = 1;
    M2C_FIELD(temp_r0, s32 *, 0x288) = sub_08003B7C(3, -0x14, 0, &sub_08005BC8);
    sub_0800380C();
    sub_08003C04(M2C_FIELD(temp_r0, s32 *, 0x288));
    M2C_FIELD(temp_r0, s32 *, 0x28C) = sub_08003B7C(4, -0x14, 0, (M2C_UNK *)0x08005A69);
    sub_0800380C();
    sub_08003C04(M2C_FIELD(temp_r0, s32 *, 0x28C));
    return 1;
}
