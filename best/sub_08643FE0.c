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

/* Warning: missing "bx $lr" in last block of sub_08643FE0 (initial). */

s32 sub_08643FE0(s32 arg0, void *arg3) {
    M2C_ERROR(/* unknown instruction: swi 0xff */);
    M2C_FIELD(M2C_FIELD(arg3, void **, 0x3C), void **, 0x68) = (void *) M2C_FIELD(arg3, void **, 0x3C);
    return arg0;
}
