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

M2C_UNK sub_0800D73C(s32);                          /* extern */

s32 sub_080185BC(void *arg0) {
    s8 *var_r1;
    s8 var_r0_2;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 var_r0;

    var_r1 = arg0 + 0x1DC;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x1DC);
    if (temp_r0 == 0) {
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x1DB);
        if (temp_r0_2 != 0) {
            var_r0 = temp_r0_2 - 1;
            goto block_8;
        }
        if (M2C_FIELD(arg0, u8 *, 0x1DA) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1DB) = 9U;
            M2C_FIELD(arg0, u8 *, 0x1DA) = (u8) (M2C_FIELD(arg0, u8 *, 0x1DA) - 1);
            goto block_9;
        }
        temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x1D8);
        if (temp_r0_3 == 0) {
            return 0;
        }
        M2C_FIELD(arg0, u8 *, 0x1D8) = (u8) (temp_r0_3 - 1);
        M2C_FIELD(arg0, u8 *, 0x1DA) = 5U;
        var_r0 = 9;
block_8:
        M2C_FIELD(arg0, u8 *, 0x1DB) = var_r0;
block_9:
        sub_0800D73C(M2C_FIELD(arg0, s32 *, 0x1D4));
        var_r1 = arg0 + 0x1DC;
        var_r0_2 = 0x3B;
        goto block_11;
    }
    var_r0_2 = temp_r0 - 1;
block_11:
    *var_r1 = var_r0_2;
    return 1;
}
