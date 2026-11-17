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

s32 sub_08048390(void *arg0, s32 arg1, s32 arg2, u8 arg3) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 var_r1;
    s32 var_r3;
    u32 temp_r0;
    void *temp_r2;

    if (M2C_FIELD(*(void **)0x030026A4, void **, 0x24) != (*(void **)0x030026A4 + 0x28)) {
        temp_r2 = M2C_FIELD(*(void **)0x030026A4, void **, 0x24);
        temp_r0 = M2C_FIELD(temp_r2, u32 *, 0x38);
        if (temp_r0 != 6) {
            if (temp_r0 <= 6U) {
                if (temp_r0 != 2) {
                    goto block_7;
                }
                goto block_15;
            }
            if ((temp_r0 > 0xAU) || (temp_r0 < 8U)) {
block_7:
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
                if (arg3 != 0) {
                    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0);
                    var_r3 = temp_r0_3 - arg1;
                    var_r1 = temp_r0_3;
                } else {
                    var_r3 = M2C_FIELD(arg0, s32 *, 0);
                    var_r1 = var_r3 + arg1;
                }
                temp_r0_4 = M2C_FIELD(temp_r2, s32 *, 0x10);
                if ((temp_r0_4 >= var_r3) && (temp_r0_4 <= var_r1)) {
                    temp_r0_5 = M2C_FIELD(temp_r2, s32 *, 0x14);
                    if ((temp_r0_5 >= (s32) (temp_r0_2 - arg2)) && (temp_r0_5 <= (s32) (temp_r0_2 + arg2))) {
                        return 1;
                    }
                }
                goto block_15;
            }
            goto block_15;
        }
    }
block_15:
    return 0;
}
