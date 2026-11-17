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

M2C_UNK *sub_0804B894(M2C_UNK *arg0, u8 arg1, u16 arg2) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r0_2;
    M2C_UNK *temp_r1;
    M2C_UNK *var_r12;
    M2C_UNK *var_r2;
    M2C_UNK *var_r4;
    s32 var_r5;
    u16 temp_r7;
    u8 temp_r6;

    temp_r6 = arg1;
    temp_r7 = arg2;
    var_r12 = NULL;
    temp_r1 = M2C_FIELD(arg0, M2C_UNK **, 0x18);
    if (temp_r1 != (arg0 + 0x1C)) {
        var_r2 = temp_r1;
loop_2:
        if ((M2C_FIELD(var_r2, u16 *, 0x10) != temp_r6) || (M2C_FIELD(var_r2, u16 *, 0xC) != temp_r7)) {
            var_r2 = M2C_FIELD(var_r2, M2C_UNK **, 0);
            if (*var_r2 == NULL) {
                goto block_12;
            }
            goto loop_2;
        }
        return var_r2;
    }
    var_r5 = 0;
    var_r4 = arg0;
loop_9:
    if ((var_r5 <= 3) && ((temp_r0 = *var_r4, (temp_r0 == NULL)) || (temp_r0_2 = sub_0804B894(temp_r0, temp_r6, temp_r7), var_r12 = temp_r0_2, (temp_r0_2 == NULL)))) {
        var_r4 += 4;
        var_r5 += 1;
        goto loop_9;
    }
block_12:
    return var_r12;
}
