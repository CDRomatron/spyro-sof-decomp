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

M2C_UNK sub_08062514(s32);                          /* extern */

void sub_08062524(void *arg1) {
    s32 temp_r0;
    void *var_r4;

    if (0x80 & M2C_FIELD(arg1, u8 *, 0)) {
        var_r4 = M2C_FIELD(arg1, void **, 0x20);
        if (var_r4 != NULL) {
            do {
                if (M2C_FIELD(var_r4, u8 *, 0) != 0) {
                    temp_r0 = M2C_FIELD(var_r4, u8 *, 1) & 7;
                    if (temp_r0 != 0) {
                        sub_08062514(temp_r0);
                    }
                    M2C_FIELD(var_r4, u8 *, 0) = 0U;
                }
                M2C_FIELD(var_r4, s32 *, 0x2C) = 0;
                var_r4 = M2C_FIELD(var_r4, void **, 0x34);
            } while (var_r4 != NULL);
        }
        M2C_FIELD(arg1, void **, 0x20) = var_r4;
    }
}
