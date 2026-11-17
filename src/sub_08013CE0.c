/* identical to sub_08013CFC in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

s32 sub_08013CE0(s32 arg0) {
    if ((u32) ((u32) ((arg0 << 0x10) + 0xFFFF0000) >> 0x10) <= 1U) {
        sub_080534A0(3);
        sub_0800F538();
    }
    return 1;
}
