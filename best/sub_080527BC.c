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

s32 sub_080527BC(u16 arg0, void *arg1, void *arg2) {
    s32 var_r6;
    u16 temp_r4;
    u32 var_r1;
    void *temp_r0;
    void *var_r3;

    temp_r4 = arg0;
    temp_r0 = *(void **)0x030026C0;
    var_r6 = 0;
    var_r1 = 0;
    if ((u32) M2C_FIELD(temp_r0, u16 *, 0x526) > 0U) {
        var_r3 = temp_r0 + 0x300;
loop_2:
        if (M2C_FIELD(var_r3, u16 *, 0) == temp_r4) {
            M2C_FIELD(arg2, u16 *, 0) = temp_r4;
            M2C_FIELD(arg2, s16 *, 2) = (s16) (var_r1 + 1);
            M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(var_r3, s32 *, 4);
            M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(var_r3, s32 *, 8);
            M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(var_r3, s32 *, 0xC);
            var_r6 = 1;
        } else {
            M2C_FIELD(arg2, u16 *, 0) = 0U;
            var_r3 += 0x10;
            var_r1 += 1;
            if (var_r1 < (u32) M2C_FIELD(temp_r0, u16 *, 0x526)) {
                goto loop_2;
            }
        }
    }
    return var_r6;
}
