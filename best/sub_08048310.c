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

s32 sub_08048310(void *arg0, u8 arg1) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r2;
    u8 temp_r6;

    temp_r6 = arg1;
    if (**(s32 ***)0x030026A4 != (*(s32 ***)0x030026A4 + 4)) {
        var_r1 = **(s32 ***)0x030026A4;
        if (*var_r1 != 0) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 4);
loop_3:
            if (temp_r6 != 0) {
                var_r0 = M2C_FIELD(arg0, s32 *, 0);
                var_r2 = var_r0 + 0xFFFF8000;
            } else {
                var_r2 = M2C_FIELD(arg0, s32 *, 0);
                var_r0 = var_r2 + 0x8000;
            }
            temp_r3 = M2C_FIELD(var_r1, s32 *, 0x20);
            if ((temp_r3 > var_r2) && (temp_r3 < var_r0)) {
                temp_r0 = M2C_FIELD(var_r1, s32 *, 0x24);
                if ((temp_r0 > (s32) (temp_r5 + 0xFFFFC000)) && (temp_r0 < temp_r5)) {
                    if (temp_r6 != 0) {
                        if ((s32) M2C_FIELD(var_r1, s32 *, 0x18) > 0) {
                            goto block_12;
                        }
                        goto block_14;
                    }
                    if ((s32) M2C_FIELD(var_r1, s32 *, 0x18) >= 0) {
                        goto block_14;
                    }
block_12:
                    return 1;
                }
            }
block_14:
            var_r1 = M2C_FIELD(var_r1, M2C_UNK **, 0);
            if (*var_r1 == NULL) {
                goto block_15;
            }
            goto loop_3;
        }
    }
block_15:
    return 0;
}
