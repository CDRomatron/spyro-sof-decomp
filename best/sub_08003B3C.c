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

M2C_UNK sub_08000B84(M2C_UNK *);                    /* extern */
M2C_UNK sub_08000C14(s32);                          /* extern */
extern M2C_UNK sub_08003A10;

s32 sub_08003B3C(void) {
    sub_08000C14(0x03000868);
    M2C_FIELD((void *)0x03000868, s8 *, 0xC) = 0;
    sub_08000C14(0x03000888);
    M2C_FIELD((void *)0x03000888, s8 *, 0xC) = 0;
    sub_08000C14(0x03000878);
    M2C_FIELD((void *)0x03000878, s8 *, 0xC) = 0;
    sub_08000B84(&sub_08003A10);
    return 1;
}
