/* identical to sub_0804F900 in SPYRO 3-U (matched), with its names changed by decompdecomp */
/* identical to sub_0804FF58 in SPYRO 3 (matched), with its names changed by decompdecomp */
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

s32 sub_08052AAC(void *arg0, void *arg1) {
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(arg0, s32 *, 0);
    temp_r3 = M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg0, s32 *, 4);
    temp_r2 = M2C_FIELD(arg1, s32 *, 8) - M2C_FIELD(arg0, s32 *, 8);
    return (temp_r4 * temp_r4) + (temp_r3 * temp_r3) + (temp_r2 * temp_r2);
}
