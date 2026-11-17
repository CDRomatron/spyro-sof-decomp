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

M2C_UNK sub_080030BC(s32);                          /* extern */
s32 sub_0805C7D0(void *);                           /* extern */
M2C_UNK sub_08061BD0(s32, s32);                     /* extern */

s32 sub_0805C288(void) {
    if (sub_0805C7D0(*(void **)0x030026E0) == 0) {
        sub_080030BC(0x3C);
        if (M2C_FIELD(*(void **)0x030026E0, s32 *, 0x210) == 2) {
            if (M2C_FIELD(*(void **)0x030026E0, s32 *, 0x234) == 5) {
                sub_08061BD0(5, 0x8301EE00);
            } else {
                sub_08061BD0(6, 0x85000000);
            }
        } else {
            sub_08061BD0(9, 0);
        }
    }
    return 1;
}
