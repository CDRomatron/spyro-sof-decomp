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

u32 sub_080620D6(u32 arg2) {
    u32 var_r0;

    var_r0 = arg2 >> 0x19;
    if ((var_r0 == 0) && ((var_r0 = 0x080661D4, (arg2 < 0x080661D4U)) || (var_r0 = arg2 >> 0xE, (var_r0 != 0)))) {

    }
    return var_r0;
}
