/* identical to sub_080086C0 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_08063D80(s32, s32);                         /* extern */

void sub_08008690(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0) = sub_08063D80(M2C_FIELD(arg0, s32 *, 0) * arg1, 0x100);
    M2C_FIELD(arg2, s32 *, 4) = sub_08063D80(M2C_FIELD(arg0, s32 *, 4) * arg1, 0x100);
}
