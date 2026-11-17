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

s32 sub_080529E8(void *arg0, s32 arg1) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r2;
    s32 var_r3;
    s32 var_r7;
    void *temp_r0;

    var_r7 = 0;
    temp_r0 = M2C_FIELD(*(void **)0x030026C0, void **, 0x51C);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0xC);
    var_r3 = temp_r2 - temp_r0_2;
    if (var_r3 < 0) {
        var_r3 = temp_r0_2 - temp_r2;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    temp_r0_3 = M2C_FIELD((temp_r0 + 0xC), s32 *, 4);
    var_r2 = temp_r1 - temp_r0_3;
    if (var_r2 < 0) {
        var_r2 = temp_r0_3 - temp_r1;
    }
    if (var_r3 > var_r2) {
        var_r0 = var_r2;
        if (var_r2 < 0) {
            var_r0 = var_r2 + 3;
        }
        var_r0_2 = var_r3 + (var_r0 >> 2);
    } else {
        var_r0_3 = var_r3;
        if (var_r0_3 < 0) {
            var_r0_3 += 3;
        }
        var_r0_2 = var_r2 + (var_r0_3 >> 2);
    }
    if (var_r0_2 < arg1) {
        var_r7 = 1;
    }
    return var_r7;
}
