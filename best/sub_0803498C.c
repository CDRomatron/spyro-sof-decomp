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

M2C_UNK sub_08034588(s32, s32);                     /* extern */

s32 sub_0803498C(s32 arg1, u16 arg2, s32 arg3) {
    u16 temp_r2;

    temp_r2 = arg2;
    switch (temp_r2) {                              /* irregular */
    case 6:
        break;
    case 9:
        if (arg3 == 0x11) {
            sub_08034588(arg1, 2);
        }
        break;
    }
    return 0;
}
