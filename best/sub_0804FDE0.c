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

s32 sub_0804FDE0(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 *temp_r0_2;
    s32 *temp_r1_2;
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r5;
    s32 var_r6;
    void **temp_r1;
    void **var_r3;
    void **var_r4;
    void *temp_r2;
    void *temp_r7;

    var_r5 = arg1;
    temp_r1 = (var_r5 * 4) + arg0;
    temp_r7 = *temp_r1;
    var_r6 = var_r5 + 1;
    if (var_r6 <= arg2) {
        sp0 = M2C_FIELD(temp_r7, s32 *, 0);
        var_r4 = (var_r6 * 4) + arg0;
        var_r3 = temp_r1;
        do {
            temp_r2 = *var_r4;
            temp_r0 = M2C_FIELD(temp_r2, s32 *, 0);
            if ((temp_r0 > sp0) || ((temp_r0 == sp0) && ((s32) M2C_FIELD(temp_r2, s32 *, 0xC) > (s32) M2C_FIELD(temp_r7, s32 *, 0xC)))) {
                var_r3 += 4;
                var_r5 += 1;
                *var_r4 = *var_r3;
                *var_r3 = temp_r2;
            }
            var_r4 += 4;
            var_r6 += 1;
        } while (var_r6 <= arg2);
    }
    temp_r0_2 = (arg1 * 4) + arg0;
    temp_r3 = *temp_r0_2;
    temp_r1_2 = (var_r5 * 4) + arg0;
    *temp_r0_2 = *temp_r1_2;
    *temp_r1_2 = temp_r3;
    return var_r5;
}
