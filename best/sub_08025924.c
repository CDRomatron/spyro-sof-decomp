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

M2C_UNK sub_080253BC(void *);                       /* extern */
M2C_UNK sub_08025514(void *, s32);                  /* extern */

void sub_08025924(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x6C);
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) - temp_r2) > 0x280) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (temp_r2 + 0x500);
    } else {
        sub_08025514(arg0, 2);
    }
    sub_080253BC(arg0);
}
