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

M2C_UNK sub_08044EF0(void *);                       /* extern */
M2C_UNK sub_08045180(void *);                       /* extern */
M2C_UNK sub_08045650(void *);                       /* extern */
M2C_UNK sub_080459B0(void *);                       /* extern */
M2C_UNK sub_0804B3FC(void *);                       /* extern */

void sub_08045B84(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4C) != M2C_FIELD(arg0, s32 *, 0x38)) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    sub_08045180(arg0);
    sub_08045650(arg0);
    sub_080459B0(arg0);
    sub_08044EF0(arg0);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 1);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
    if (M2C_FIELD(arg0, s32 *, 0x38) == 0xB) {
        sub_0804B3FC(arg0);
    }
}
