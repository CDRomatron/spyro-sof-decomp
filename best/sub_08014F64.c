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

M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_0800D9EC(void *, void *);               /* extern */

u8 sub_08014F64(void *arg0) {
    u32 var_r7;
    u8 var_r1;
    void *var_r4;
    void *var_r6;

    var_r1 = 0;
    var_r7 = 0;
    if ((u32) M2C_FIELD(arg0, u8 *, 0x150) > 0U) {
        var_r4 = arg0 + 0x4C;
        var_r6 = arg0 + 0x24;
        do {
            if (M2C_FIELD(var_r4, u8 *, 0x10) == 0) {
                sub_0800D9EC(var_r6, var_r4);
                sub_08004020(M2C_FIELD(var_r4, s32 *, 0xC));
                var_r1 = 1;
            }
            var_r4 += 0x3C;
            var_r6 += 0x3C;
            var_r7 += 1;
        } while (var_r7 < (u32) M2C_FIELD(arg0, u8 *, 0x150));
    }
    if (var_r1 == 0) {
        M2C_FIELD(arg0, u8 *, 0x151) = var_r1;
    }
    return M2C_FIELD(arg0, u8 *, 0x151);
}
