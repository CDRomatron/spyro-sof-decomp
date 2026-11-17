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

void *sub_0805E70C(s32 arg0, s32 arg1) {
    void *var_r4;

    if (M2C_FIELD(*(void **)0x030026EC, void **, 0x24) != (*(void **)0x030026EC + 0x28)) {
        var_r4 = M2C_FIELD(*(void **)0x030026EC, void **, 0x24);
loop_6:
        if (M2C_FIELD(var_r4, void **, 0) == NULL) {
            goto block_7;
        }
        if ((M2C_FIELD(var_r4, s32 *, 0x20) != 3) && ((sub_0805F88C(arg0, arg1, var_r4 + 0x14, M2C_FIELD(var_r4, s32 *, 0x1C)) << 0x18) != 0)) {
            return var_r4;
        }
        var_r4 = M2C_FIELD(var_r4, void **, 0);
        goto loop_6;
    }
block_7:
    return NULL;
}
