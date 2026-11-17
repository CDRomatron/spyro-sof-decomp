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

M2C_UNK sub_0806206C(void *);                       /* extern */

void sub_0806208C(void *arg1) {
    u8 temp_r1;
    void *var_r4;

    var_r4 = M2C_FIELD(arg1, void **, 0x20);
    if (var_r4 != NULL) {
        do {
            temp_r1 = M2C_FIELD(var_r4, u8 *, 0);
            if (0xC7 & temp_r1) {
                M2C_FIELD(var_r4, u8 *, 0) = (u8) (temp_r1 | 0x40);
            }
            sub_0806206C(var_r4);
            var_r4 = M2C_FIELD(var_r4, void **, 0x34);
        } while (var_r4 != NULL);
    }
    M2C_FIELD(arg1, s8 *, 0) = 0;
}
