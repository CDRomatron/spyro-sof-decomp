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

s32 sub_08048A10(void *arg0) {
    s32 temp_r0;
    s32 temp_r2;
    void *var_r1;

    if (M2C_FIELD(*(void **)0x030026A4, void **, 0x60) != (*(void **)0x030026A4 + 0x64)) {
        var_r1 = M2C_FIELD(*(void **)0x030026A4, void **, 0x60);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x14);
loop_10:
        if (M2C_FIELD(var_r1, void **, 0) == NULL) {
            goto block_11;
        }
        if (((s32) (temp_r0 + 0xFFFFFC00) <= (s32) M2C_FIELD(var_r1, s32 *, 0x28)) && ((s32) (temp_r0 + 0x400) >= (s32) M2C_FIELD(var_r1, s32 *, 0x20)) && (temp_r2 <= (s32) M2C_FIELD(var_r1, s32 *, 0x2C)) && (temp_r2 >= (s32) M2C_FIELD(var_r1, s32 *, 0x24))) {
            if ((M2C_FIELD(var_r1, s32 *, 0x34) == 7) && (M2C_FIELD(var_r1, s32 *, 0x30) == 0)) {
                M2C_FIELD(var_r1, s32 *, 0x30) = 2;
                return 1;
            }
            goto block_11;
        }
        var_r1 = M2C_FIELD(var_r1, void **, 0);
        goto loop_10;
    }
block_11:
    return 0;
}
