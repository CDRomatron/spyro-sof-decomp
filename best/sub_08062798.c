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

void sub_08062798(void *arg1) {
    u8 *temp_r2;
    u8 temp_r2_2;
    u8 var_r3;
    void *var_r1;

    temp_r2 = M2C_FIELD(arg1, u8 **, 0x40);
    var_r3 = *temp_r2;
    if ((u32) var_r3 < 0x80U) {
        M2C_FIELD(arg1, u8 *, 5) = var_r3;
        M2C_FIELD(arg1, u8 **, 0x40) = (u8 *) (temp_r2 + 1);
    } else {
        var_r3 = M2C_FIELD(arg1, u8 *, 5);
    }
    var_r1 = M2C_FIELD(arg1, void **, 0x20);
    if (var_r1 != NULL) {
loop_5:
        temp_r2_2 = M2C_FIELD(var_r1, u8 *, 0);
        if ((temp_r2_2 & 0x83) && !(temp_r2_2 & 0x40) && (M2C_FIELD(var_r1, u8 *, 0x11) == var_r3)) {
            M2C_FIELD(var_r1, u8 *, 0) = (u8) (temp_r2_2 | 0x40);
            return;
        }
        var_r1 = M2C_FIELD(var_r1, void **, 0x34);
        if (var_r1 == NULL) {

        } else {
            goto loop_5;
        }
    }
}
