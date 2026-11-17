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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, s32, s32);                /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */

s32 sub_0803D734(s32 arg0, void *arg1, s32 arg2) {
    if (arg2 == 8) {
        sub_08003C58(arg0, 0x410000);
        sub_08004454(arg0, 0, 0);
        M2C_FIELD(arg1, s8 *, 0x30) = 2;
        sub_0800FE28(arg1, M2C_FIELD(arg1, s32 *, 0x28), 0x53);
    }
    return 1;
}
