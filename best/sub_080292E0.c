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

void sub_080292E0(void *arg0, s8 arg1) {
    s8 *var_r0;
    u8 temp_r4;

    if (arg1 == 1) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x58);
        if (temp_r4 != 0) {
            var_r0 = (arg0 + 0x58) - 1;
            goto block_5;
        }
        if (M2C_FIELD(arg0, u8 *, 0x53) != 0) {
            M2C_FIELD(arg0, u8 *, 0x53) = temp_r4;
            M2C_FIELD(arg0, s8 *, 0x54) = arg1;
            var_r0 = arg0 + 0x54 + 1;
block_5:
            *var_r0 = arg1;
        }
    }
}
