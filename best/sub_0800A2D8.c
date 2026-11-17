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

M2C_UNK sub_08000C9C(M2C_UNK *);                    /* extern */
M2C_UNK sub_08002BE0(M2C_UNK *, s32);               /* extern */

void sub_0800A2D8(u16 arg0) {
    M2C_UNK *var_r4;
    M2C_UNK *var_r5;
    u16 temp_r0;

    var_r4 = *(M2C_UNK **)0x030008C0;
    var_r5 = *var_r4;
    if (var_r5 != NULL) {
        do {
            if (M2C_FIELD(var_r4, u16 *, 0x10) == arg0) {
                temp_r0 = M2C_FIELD(var_r4, u16 *, 0x12) - 1;
                M2C_FIELD(var_r4, u16 *, 0x12) = temp_r0;
                if ((temp_r0 << 0x10) == 0) {
                    sub_08000C9C(var_r4);
                    if (M2C_FIELD(((M2C_FIELD(var_r4, u16 *, 0x10) * 0xC) + 0x0817B728), u16 *, 8) != 0) {
                        sub_08002BE0(M2C_FIELD(var_r4, M2C_UNK **, 8), M2C_FIELD(var_r4, s32 *, 0xC));
                    }
                    sub_08002BE0(var_r4, 0x14);
                }
            }
            var_r4 = var_r5;
            var_r5 = *var_r5;
        } while (var_r5 != NULL);
    }
}
