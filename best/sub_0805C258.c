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

M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_0805D1B8(void *);                       /* extern */

void sub_0805C258(void) {
    sub_0805D1B8(*(void **)0x030026E0);
    if (M2C_FIELD(*(void **)0x030026E0, s32 *, 0x210) == 1) {
        sub_08002BE0(*(void **)0x030026E0, 0x23C);
        *(void **)0x030026E0 = NULL;
    }
}
