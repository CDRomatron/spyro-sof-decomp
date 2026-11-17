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

M2C_UNK sub_080009E0(s32, s32);                     /* extern */
M2C_UNK sub_0804263C();                             /* extern */
M2C_UNK sub_080641C8();                             /* extern */

s32 sub_080440D0(void) {
    void *temp_r4;

    temp_r4 = *(void **)0x030008D0;
    if (M2C_FIELD(temp_r4, s32 *, 0x3C) != 0) {
        sub_080641C8();
    }
    if (8 & *(u16 *)0x030010B0) {
        sub_080009E0(M2C_FIELD(temp_r4, s32 *, 0x38), 0);
    }
    sub_0804263C();
    return 1;
}
