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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0800D73C(s32);                          /* extern */

s32 sub_08012E1C(void *arg0) {
    s8 *var_r1;
    s8 var_r0;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r2;

    var_r1 = arg0 + 0x48;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x48);
    if (temp_r0 == 0) {
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x47);
        if (temp_r0_2 != 0) {
            temp_r2 = temp_r0_2 - 1;
            M2C_FIELD(arg0, u8 *, 0x47) = temp_r2;
            if (!(M2C_FIELD(arg0, s32 *, 0x44) & 0xFF00FF) && ((u32) temp_r2 <= 4U)) {
                sub_08003220(0x08170DA8);
            }
            goto block_10;
        }
        if (M2C_FIELD(arg0, u8 *, 0x46) != 0) {
            M2C_FIELD(arg0, u8 *, 0x47) = 9U;
            M2C_FIELD(arg0, u8 *, 0x46) = (u8) (M2C_FIELD(arg0, u8 *, 0x46) - 1);
            goto block_10;
        }
        temp_r0_3 = (u8) M2C_FIELD(arg0, s32 *, 0x44);
        if (temp_r0_3 == 0) {
            return 0;
        }
        M2C_FIELD(arg0, s32 *, 0x44) = (s8) (temp_r0_3 - 1);
        M2C_FIELD(arg0, u8 *, 0x46) = 5U;
        M2C_FIELD(arg0, u8 *, 0x47) = 9U;
block_10:
        sub_0800D73C(M2C_FIELD(arg0, s32 *, 0x40));
        var_r1 = arg0 + 0x48;
        var_r0 = 0x3B;
        goto block_12;
    }
    var_r0 = temp_r0 - 1;
block_12:
    *var_r1 = var_r0;
    return 1;
}
