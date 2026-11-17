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

s32 sub_080641CC(void *);                           /* extern */

u8 sub_0801400C(void *arg0) {
    s32 var_r5;
    u8 temp_r1;
    void *temp_r2;

    var_r5 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x1DD) > 0) {
        do {
            temp_r2 = arg0 + ((0x58 * var_r5) + 0x24);
            if ((M2C_FIELD(temp_r2, u8 *, 0x56) == 0) && (M2C_FIELD(temp_r2, s32 *, 0x4C) != 0) && ((sub_080641CC(temp_r2) << 0x18) == 0)) {
                M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) (M2C_FIELD(arg0, u8 *, 0x1DE) - 1);
            }
            var_r5 += 1;
        } while (var_r5 < (s32) M2C_FIELD(arg0, u8 *, 0x1DD));
    }
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x1DE);
    if (temp_r1 == 0) {
        M2C_FIELD(arg0, u8 *, 0x1DF) = temp_r1;
    }
    return M2C_FIELD(arg0, u8 *, 0x1DF);
}
