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

void *sub_08053BA4(s32 arg0) {
    u32 var_r3;
    void **var_r1;
    void **var_r2;

    var_r3 = 0;
    var_r1 = (void **)0x0817A878;
    var_r2 = (void **)0x0817A878;
loop_1:
    if (M2C_FIELD(*var_r1, u16 *, 0x20) == arg0) {
        return *var_r2;
    }
    var_r1 += 4;
    var_r2 += 4;
    var_r3 += 1;
    if (var_r3 > 0x26U) {
        return *(void **)0x0817A878;
    }
    goto loop_1;
}
