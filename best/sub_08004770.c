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

M2C_UNK sub_08005324(void *, M2C_UNK *, s32, s32);  /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

s32 sub_08004770(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_r5;
    M2C_UNK *var_r5_2;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r10;
    s32 var_r7;
    s32 var_r8;

    var_r8 = arg1;
    var_r7 = arg2;
    var_r10 = 0;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r1 = arg1 + temp_r3;
    if (temp_r1 < 0) {
        var_r8 = 0 - temp_r3;
        goto block_4;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x20);
    if ((s32) (temp_r1 + 0xF000) >= (s32) (temp_r2 << 8)) {
        var_r8 = ((temp_r2 - 0xF1) << 8) - temp_r3;
block_4:
        var_r10 = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r1_2 = var_r7 + temp_r0;
    if (temp_r1_2 < 0) {
        var_r7 = 0 - temp_r0;
        goto block_9;
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x24);
    if ((s32) (temp_r1_2 + 0xA000) >= (s32) (temp_r2_2 << 8)) {
        var_r7 = ((temp_r2_2 - 0xA1) << 8) - temp_r0;
block_9:
        var_r10 |= 2;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + var_r8);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r0 + var_r7);
    var_r5 = M2C_FIELD(arg0, M2C_UNK **, 0);
    if (*var_r5 != NULL) {
        do {
            temp_r4 = sub_08063D80(var_r8 * M2C_FIELD(var_r5, s32 *, 0x50), 0x100);
            sub_08005324(arg0, var_r5, temp_r4, sub_08063D80(M2C_FIELD(var_r5, s32 *, 0x54) * var_r7, 0x100));
            var_r5 = M2C_FIELD(var_r5, M2C_UNK **, 0);
        } while (*var_r5 != NULL);
    }
    var_r5_2 = M2C_FIELD(arg0, M2C_UNK **, 0xC);
loop_15:
    if (*var_r5_2 != NULL) {
        sub_08005324(arg0, var_r5_2, var_r8, var_r7);
        var_r5_2 = *var_r5_2;
        goto loop_15;
    }
    return var_r10;
}
