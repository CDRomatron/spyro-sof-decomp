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

M2C_UNK sub_0800B9C4(void *);                       /* extern */

s32 sub_0800A818(void *arg1) {
    u16 temp_r2;
    u16 temp_r3;
    void *temp_r4;
    void *var_r1;

    M2C_FIELD(arg1, u16 *, 0x40E) = (u16) M2C_FIELD(arg1, u16 *, 0x40C);
    M2C_FIELD(arg1, u16 *, 0x40C) = 0U;
    M2C_FIELD(arg1, s32 *, 0xFB0) = 0;
    M2C_FIELD(arg1, s32 *, 0xBA8) = 0;
    M2C_FIELD(arg1, s32 *, 0xBAC) = 0;
loop_1:
    var_r1 = M2C_FIELD(arg1, void **, 0x79C);
loop_2:
    if (var_r1 != NULL) {
        temp_r3 = M2C_FIELD(var_r1, u16 *, 0x10);
        if (0x8000 & temp_r3) {
            temp_r2 = 0x4000 & temp_r3;
            if (temp_r2 == 0) {
                *M2C_FIELD(var_r1, s32 **, 0xC) = (s32) temp_r2;
                temp_r4 = M2C_FIELD(var_r1, void **, 4);
                sub_0800B9C4(var_r1);
                if (temp_r4 != NULL) {
                    var_r1 = M2C_FIELD(temp_r4, void **, 8);
                } else {
                    goto loop_1;
                }
            } else {
                M2C_FIELD(var_r1, u16 *, 0x10) = (u16) (0xBFFF & temp_r3);
                goto block_8;
            }
        } else {
block_8:
            var_r1 = M2C_FIELD(var_r1, void **, 8);
        }
        goto loop_2;
    }
    return 1;
}
