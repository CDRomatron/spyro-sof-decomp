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

M2C_UNK sub_0800F050(void *, s32, s32, u16);        /* extern */

void sub_0800F5A0(u16 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = *(void **)0x030008CC;
    temp_r0_2 = temp_r0 + 0xAE;
    M2C_FIELD(temp_r0, s16 *, 0xAE) = arg1;
    M2C_FIELD(temp_r0_2, s16 *, 2) = (s16) (arg0 | 0x5800);
    sub_0800F050(temp_r0_2, arg2, arg3, (u16) arg4);
}
