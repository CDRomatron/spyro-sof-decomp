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

M2C_UNK sub_08000C30(s32, s32);                     /* extern */
M2C_UNK sub_08000C9C(s32);                          /* extern */

void sub_080528AC(s32 arg0) {
    s32 temp_r5;

    temp_r5 = *(s32 *)0x030026C0;
    sub_08000C9C(arg0);
    sub_08000C30(temp_r5 + 0x500, arg0);
}
