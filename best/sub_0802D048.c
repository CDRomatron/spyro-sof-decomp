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

s32 sub_0802D048(u16 arg2) {
    u16 temp_r2;

    temp_r2 = arg2;
    if (temp_r2 != 6) {
        if ((s32) temp_r2 <= 6) {
            if (temp_r2 != 5) {
                goto block_7;
            }
            goto block_6;
        }
        if ((temp_r2 == 7) || (temp_r2 == 8)) {
            goto block_6;
        }
block_7:
        return 0;
    }
block_6:
    return 1;
}
