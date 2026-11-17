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

u8 sub_08007324();                                  /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */

s32 sub_0803A464(void *arg1, s32 arg2) {
    if (arg2 == 8) {
        if (sub_08007324() == 7) {
            sub_0800781C(0x5A, 1);
        } else {
            sub_0800781C(0x5B, 1);
        }
        M2C_FIELD(arg1, s8 *, 0x42) = 5;
    }
    return 1;
}
