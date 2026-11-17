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

M2C_UNK sub_08000C20(s32, void *);                  /* extern */

s32 sub_0800A206(void *arg3, void *arg4) {
    arg4 = arg3;
    sub_08000C20(0x030008C0, arg3);
    M2C_FIELD(arg4, u16 *, 0x12) = (u16) (M2C_FIELD(arg4, u16 *, 0x12) + 1);
    return M2C_FIELD(arg4, s32 *, 8);
}
