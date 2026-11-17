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
M2C_UNK sub_080077C4(u8);                           /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

s32 sub_0803C6E4(s32 arg0, void *arg1, s32 arg2) {
    if (arg2 == 8) {
        sub_08003C58(arg0, 0x420000);
        sub_08004454(arg0, 0, 0);
        sub_080077C4(M2C_FIELD(arg1, u8 *, 0x39));
        sub_080534A0(5);
    }
    return 1;
}
