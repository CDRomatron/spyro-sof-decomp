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

void sub_0800D700(void *arg0, s8 arg1) {
    s32 var_r1;
    s8 var_r2;
    u32 var_r3;

    var_r3 = 0;
    if ((u32) M2C_FIELD(arg0, u8 *, 0x64) > 0U) {
        var_r2 = arg1;
        var_r1 = 0;
        do {
            M2C_FIELD((var_r1 + M2C_FIELD(arg0, s32 *, 4)), s8 *, 0x21) = var_r2;
            var_r2 += arg1;
            var_r1 += 0x28;
            var_r3 += 1;
        } while (var_r3 < (u32) M2C_FIELD(arg0, u8 *, 0x64));
    }
}
