/* identical to sub_0801E16C in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0805445C(s32, void *, M2C_UNK *);       /* extern */
extern M2C_UNK sub_0801DE70;

s32 sub_0801E148(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x14C) == 0x3C) {
        sub_0805445C(1, arg0, &sub_0801DE70);
    }
    M2C_FIELD(arg0, s32 *, 0x13C) = 2;
    return 0;
}
