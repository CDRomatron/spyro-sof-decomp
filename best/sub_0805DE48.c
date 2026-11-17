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

s32 sub_0805F88C(s32, s32, void *, s32);            /* extern */

void *sub_0805DE48(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r5;
    void *var_r4;

    if (**(void ***)0x030026EC != (*(void ***)0x030026EC + 4)) {
        var_r4 = **(void ***)0x030026EC;
loop_7:
        if (M2C_FIELD(var_r4, void **, 0) == NULL) {
            goto block_8;
        }
        if ((M2C_FIELD(var_r4, s32 *, 0x2C) != 1) && (M2C_FIELD(var_r4, s32 *, 0x30) == arg2)) {
            temp_r5 = var_r4 + 0x14;
            if ((sub_0805F88C(arg0, arg1, temp_r5, M2C_FIELD(var_r4, s32 *, 0x28)) << 0x18) != 0) {
                sub_0805F88C(arg0, arg1, temp_r5, M2C_FIELD(var_r4, s32 *, 0x28));
                M2C_FIELD(var_r4, s32 *, 0x2C) = 1;
                return var_r4;
            }
        }
        var_r4 = M2C_FIELD(var_r4, void **, 0);
        goto loop_7;
    }
block_8:
    return NULL;
}
