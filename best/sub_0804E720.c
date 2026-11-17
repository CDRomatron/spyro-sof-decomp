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

M2C_UNK *sub_0804E720(u16 arg0) {
    M2C_UNK *var_r1;

    if (M2C_FIELD(*(void **)0x030026A4, M2C_UNK **, 0x60) != (*(void **)0x030026A4 + 0x64)) {
        var_r1 = M2C_FIELD(*(void **)0x030026A4, M2C_UNK **, 0x60);
loop_2:
        if (M2C_FIELD(var_r1, s32 *, 0x3C) == (s16) arg0) {
            return var_r1;
        }
        var_r1 = M2C_FIELD(var_r1, M2C_UNK **, 0);
        if (*var_r1 == NULL) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return NULL;
}
