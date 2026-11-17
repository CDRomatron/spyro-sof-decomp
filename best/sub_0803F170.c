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

s32 sub_0803F170(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0;
    s32 var_r3;
    s32 var_r3_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    temp_r0 = M2C_FIELD(arg1, s32 *, 0);
    var_r3 = temp_r1 - temp_r0;
    if (var_r3 < 0) {
        var_r3 = temp_r0 - temp_r1;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    temp_r1_2 = M2C_FIELD(arg1, s32 *, 4);
    temp_r4 = temp_r0_2 - temp_r1_2;
    if (temp_r4 >= 0) {
        if (var_r3 <= temp_r4) {
            goto block_10;
        }
        goto block_6;
    }
    if (var_r3 > (s32) (temp_r1_2 - temp_r0_2)) {
block_6:
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0);
        temp_r1_3 = M2C_FIELD(arg1, s32 *, 0);
        var_r3_2 = temp_r0_3 - temp_r1_3;
        if (var_r3_2 < 0) {
            var_r3_2 = temp_r1_3 - temp_r0_3;
        }
        var_r0 = temp_r0_2 - temp_r1_2;
        if (var_r0 < 0) {
            var_r0 = temp_r1_2 - temp_r0_2;
            goto block_14;
        }
    } else {
block_10:
        var_r3_2 = temp_r0_2 - temp_r1_2;
        if (var_r3_2 < 0) {
            var_r3_2 = temp_r1_2 - temp_r0_2;
        }
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0);
        temp_r1_4 = M2C_FIELD(arg1, s32 *, 0);
        var_r0 = temp_r4_2 - temp_r1_4;
        if (var_r0 < 0) {
            var_r0 = temp_r1_4 - temp_r4_2;
block_14:
            if (var_r0 < 0) {
                var_r0 += 3;
            }
        }
    }
    if ((s32) (var_r3_2 + (var_r0 >> 2)) >= arg2) {
        return 0;
    }
    return 1;
}
