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

s32 sub_0805275C(u16 arg0, void *arg1) {
    s32 var_r0;
    s32 var_r6;
    u32 var_r4;
    void *temp_r2;
    void *temp_r3;

    temp_r3 = *(void **)0x030026C0;
    var_r6 = 0;
    var_r4 = 0;
    if ((u32) M2C_FIELD(temp_r3, u16 *, 0x526) > 0U) {
        var_r0 = 0x300;
loop_4:
        temp_r2 = temp_r3 + var_r0;
        if (M2C_FIELD(temp_r2, u16 *, 0) == arg0) {
            M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_r2, s32 *, 4);
            M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_r2, s32 *, 8);
            M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(temp_r2, s32 *, 0xC);
            var_r6 = 1;
        } else {
            var_r4 += 1;
            if (var_r4 < (u32) M2C_FIELD(temp_r3, u16 *, 0x526)) {
                var_r0 = (var_r4 * 0x10) + 0x300;
                goto loop_4;
            }
        }
    }
    return var_r6;
}
