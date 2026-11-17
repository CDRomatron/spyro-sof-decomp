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

M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */

s32 sub_0803C3BC(void *arg1, s32 arg2) {
    s32 temp_r1;
    s32 var_r2;

    temp_r1 = M2C_FIELD(arg1, s32 *, 0x30);
    switch (temp_r1) {                              /* irregular */
    case 0x1BB:
        if (arg2 == 8) {
            var_r2 = 0x58;
block_7:
            sub_0800FE28(arg1, M2C_FIELD(arg1, s32 *, 0x24), var_r2);
            M2C_FIELD(arg1, s8 *, 0x2C) = 0;
        }
        break;
    case 0x1BC:
        if (arg2 == 8) {
            var_r2 = 0x5C;
            goto block_7;
        }
        break;
    }
    return 1;
}
