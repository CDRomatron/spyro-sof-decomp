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

/* Warning: missing "bx $lr" in last block of sub_087E06E0 (initial). */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0xc, 0x10, 0x1c, 0x20], gap at: 0x14. */
void sub_087E06E0(s16 arg0, s32 arg1, u32 arg2, s32 arg8D, s32 arg9A) {
    M2C_FIELD((arg0 - (arg0 << 0x1C)), s32 *, 0x30) = 0x18;
}
