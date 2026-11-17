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

s32 sub_0805281C(void *arg0, void *arg1) {
    s32 var_r7;
    u16 var_r3;
    void *temp_r2;
    void *temp_r5;

    temp_r5 = *(void **)0x030026C0;
    var_r7 = 0;
    if (M2C_FIELD(arg1, u16 *, 0) != 0) {
        var_r3 = M2C_FIELD(arg1, u16 *, 2);
        if ((u32) var_r3 < (u32) M2C_FIELD(temp_r5, u16 *, 0x526)) {
loop_3:
            temp_r2 = temp_r5 + ((var_r3 * 0x10) + 0x300);
            if (M2C_FIELD(temp_r2, u16 *, 0) == M2C_FIELD(arg1, u16 *, 0)) {
                M2C_FIELD(arg1, u16 *, 2) = (u16) (var_r3 + 1);
                M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r2, s32 *, 4);
                M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r2, s32 *, 8);
                M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r2, s32 *, 0xC);
                var_r7 = 1;
            } else {
                M2C_FIELD(arg1, u16 *, 0) = 0U;
                var_r3 += 1;
                if ((u32) var_r3 < (u32) M2C_FIELD(temp_r5, u16 *, 0x526)) {
                    goto loop_3;
                }
            }
        }
    }
    return var_r7;
}
