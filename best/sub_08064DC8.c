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

s32 sub_08064DC8(void *arg0, void *arg1) {
    s32 temp_r0_2;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_6;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r2;
    u32 temp_r2_2;
    u32 temp_r3;

    var_r0_2 = 0;
    temp_r1 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_r1 <= 1U) {
        var_r0_2 = 1;
    }
    if (var_r0_2 == 0) {
        var_r0_3 = 0;
        temp_r2 = M2C_FIELD(arg1, u32 *, 0);
        if (temp_r2 <= 1U) {
            var_r0_3 = 1;
        }
        if (var_r0_3 != 0) {
            goto block_6;
        }
        var_r0_4 = 0;
        if (temp_r1 == 4) {
            var_r0_4 = 1;
        }
        if (var_r0_4 != 0) {
            var_r0_5 = 0;
            if (temp_r2 == 4) {
                var_r0_5 = 1;
            }
            if (var_r0_5 != 0) {
                return M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg0, s32 *, 4);
            }
            goto block_14;
        }
block_14:
        var_r1_2 = 0;
        temp_r0 = M2C_FIELD(arg0, u32 *, 0);
        if (temp_r0 == 4) {
            var_r1_2 = 1;
        }
        if (var_r1_2 == 0) {
            var_r1_3 = 0;
            if (temp_r2 == 4) {
                var_r1_3 = 1;
            }
            if (var_r1_3 != 0) {
                goto block_20;
            }
            var_r1_4 = 0;
            if (temp_r0 == 2) {
                var_r1_4 = 1;
            }
            if (var_r1_4 != 0) {
                var_r1_5 = 0;
                if (temp_r2 == 2) {
                    var_r1_5 = 1;
                }
                if (var_r1_5 == 0) {
                    goto block_28;
                }
                goto block_50;
            }
block_28:
            var_r1_6 = 0;
            if (temp_r0 == 2) {
                var_r1_6 = 1;
            }
            if (var_r1_6 == 0) {
                var_r0_6 = 0;
                if (temp_r2 == 2) {
                    var_r0_6 = 1;
                }
                if (var_r0_6 != 0) {
                    goto block_34;
                }
                temp_r4 = M2C_FIELD(arg0, s32 *, 4);
                if (temp_r4 != M2C_FIELD(arg1, s32 *, 4)) {
                    goto block_38;
                }
                temp_r1_2 = M2C_FIELD(arg0, s32 *, 8);
                temp_r0_2 = M2C_FIELD(arg1, s32 *, 8);
                if (temp_r1_2 <= temp_r0_2) {
                    if (temp_r1_2 < temp_r0_2) {
                        goto block_42;
                    }
                    temp_r3 = M2C_FIELD(arg0, u32 *, 0x10);
                    temp_r2_2 = M2C_FIELD(arg1, u32 *, 0x10);
                    if ((temp_r3 <= temp_r2_2) && ((temp_r3 != temp_r2_2) || ((u32) M2C_FIELD(arg0, u32 *, 0xC) <= (u32) M2C_FIELD(arg1, u32 *, 0xC)))) {
                        if ((temp_r2_2 <= temp_r3) && ((temp_r2_2 != temp_r3) || ((u32) M2C_FIELD(arg1, u32 *, 0xC) <= (u32) M2C_FIELD(arg0, u32 *, 0xC)))) {
block_50:
                            var_r0 = 0;
                            /* Duplicate return node #51. Try simplifying control flow for better match */
                            return var_r0;
                        }
block_42:
                        var_r0 = -1;
                        if (temp_r4 != 0) {
                            return 1;
                        }
                        /* Duplicate return node #51. Try simplifying control flow for better match */
                        return var_r0;
                    }
                    goto block_38;
                }
block_38:
                var_r0 = 1;
                if (temp_r4 != 0) {
                    return -1;
                }
                return var_r0;
            }
block_20:
            var_r1 = -1;
            if (M2C_FIELD(arg1, s32 *, 4) != 0) {
                var_r1 = 1;
            }
            goto block_36;
        }
block_34:
        var_r1 = 1;
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r1 = -1;
        }
block_36:
        return var_r1;
    }
block_6:
    return 1;
}
