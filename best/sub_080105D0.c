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

/* Warning: missing "bx $lr" in last block of sub_080105D0 (initial). */

M2C_UNK sub_080043A4(s32);                          /* extern */

s32 sub_080105D0(void *arg0) {
    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x8C));
    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x90));
    return M2C_FIELD(arg0, s32 *, 0x94);
}
