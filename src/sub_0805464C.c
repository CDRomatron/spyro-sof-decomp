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

M2C_UNK sub_0800C3FC(s32, s32, s32);                /* extern */
M2C_UNK sub_0800D730(s32, s32);                     /* extern */

void sub_0805464C(void) {
    void *temp_r4;

    temp_r4 = *(void **)0x030026C4;
    sub_0800D730(M2C_FIELD(temp_r4, s32 *, 0), -1);
    sub_0800C3FC(M2C_FIELD(temp_r4, s32 *, 0), 0, 0);
    M2C_FIELD(temp_r4, s16 *, 0xE) = 2;
}
