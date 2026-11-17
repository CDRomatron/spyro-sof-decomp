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

void sub_081D7CA6(s32 arg0, s32 arg1, u32 arg2) {
    s32 var_r1;

    var_r1 = arg1;
    if (M2C_ERROR(/* Read from unset register $ge */)) {
        var_r1 += 0xDF;
    }
    saved_reg_r8(arg0 + 0x4F + 0x3F, var_r1);
}
