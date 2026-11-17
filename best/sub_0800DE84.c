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

u16 sub_0800DE84(s16 *arg0, s16 *arg1) {
    u16 *temp_r0;
    u16 *temp_r2;
    u16 temp_r3;
    u16 var_r6;
    void **var_r1;
    void *temp_r5;
    void *var_r0;

    temp_r5 = *(void **)0x030008CC;
    var_r6 = 0;
    if (M2C_FIELD(temp_r5, u8 *, 0x337) != 0) {
        var_r1 = temp_r5 + 0x2EC;
loop_2:
        M2C_FIELD(temp_r5, u8 *, 0x337) = 0U;
        temp_r2 = M2C_FIELD(temp_r5, u16 **, 0x2EC);
        temp_r3 = *temp_r2;
        if (!(0x2000 & temp_r3)) {
            if (!(0x800 & temp_r3)) {
                M2C_FIELD(temp_r5, u16 **, 0x2EC) = (u16 *) (temp_r2 + 2);
                if (0 != 0) {

                } else {
                    goto loop_2;
                }
            } else {
                var_r6 = *temp_r2;
                M2C_FIELD(temp_r5, u16 **, 0x2EC) = (u16 *) (temp_r2 + 2);
                M2C_FIELD(temp_r5, s8 *, 0x33A) = 1;
                M2C_FIELD(temp_r5, u8 *, 0x337) = 1U;
            }
        } else {
            var_r6 = *temp_r2;
            var_r0 = temp_r2 + 2;
            goto block_9;
        }
    } else {
        var_r1 = temp_r5 + 0x2EC;
        temp_r0 = M2C_FIELD(temp_r5, u16 **, 0x2EC);
        var_r6 = *temp_r0;
        var_r0 = temp_r0 + 2;
block_9:
        *var_r1 = var_r0;
    }
    *arg0 = (s16) (var_r6 >> 0xE);
    *arg1 = 0x3FF & var_r6;
    return var_r6;
}
