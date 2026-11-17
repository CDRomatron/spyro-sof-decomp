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

s32 sub_080641E4(M2C_UNK *, M2C_UNK *);             /* extern */

void sub_08000C58(void *arg0, M2C_UNK *arg1, s32 arg2) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r0_2;
    M2C_UNK *temp_r1;
    M2C_UNK *var_r4;
    s32 var_r1;

    var_r1 = 0;
    var_r4 = M2C_FIELD(arg0, M2C_UNK **, 0);
loop_2:
    if (M2C_FIELD(var_r4, M2C_UNK **, 0) != NULL) {
        var_r1 = sub_080641E4(arg1, var_r4);
        if (var_r1 > 0) {
            M2C_FIELD(arg1, M2C_UNK **, 0) = var_r4;
            temp_r0 = M2C_FIELD(var_r4, M2C_UNK **, 4);
            M2C_FIELD(arg1, M2C_UNK **, 4) = temp_r0;
            *temp_r0 = arg1;
            M2C_FIELD(var_r4, M2C_UNK **, 4) = arg1;
        } else {
            var_r4 = M2C_FIELD(var_r4, M2C_UNK **, 0);
            goto loop_2;
        }
    }
    if (var_r1 <= 0) {
        temp_r1 = arg0 + 4;
        M2C_FIELD(arg1, M2C_UNK **, 0) = temp_r1;
        temp_r0_2 = M2C_FIELD(arg0, M2C_UNK **, 8);
        M2C_FIELD(arg1, M2C_UNK **, 4) = temp_r0_2;
        M2C_FIELD(temp_r1, M2C_UNK **, 4) = arg1;
        *temp_r0_2 = arg1;
    }
}
