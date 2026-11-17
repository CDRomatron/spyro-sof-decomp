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

s32 sub_080502E8(s32 *);                            /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

s32 sub_080518F8(s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5) {
    s32 sp0;
    s32 sp4;
    s32 temp_r4;
    s32 temp_r4_2;

    sp0 = arg1 + *arg4;
    sp4 = arg2 + *arg5;
    if (arg3 < sub_080502E8(&sp0)) {
        temp_r4 = sub_08063D80((s16) *(u16 *)0x08065E48 * *arg4, 0x100);
        temp_r4_2 = temp_r4 + sub_08063D80((0 - (s16) *(u16 *)0x08065DC8) * *arg5, 0x100);
        *arg4 = sub_08063D80((s16) *(u16 *)0x08065DC8 * temp_r4_2, 0x100);
        *arg5 = sub_08063D80((s16) *(u16 *)0x08065F48 * temp_r4_2, 0x100);
        return 3;
    }
    return 0;
}
