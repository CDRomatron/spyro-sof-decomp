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
s32 sub_080641CC(void *);                           /* extern */

u8 sub_0803B134(void *arg0) {
    u32 sp0;
    u32 var_r2;
    u8 temp_r1;
    void *var_r4;
    void *var_r6;

    sub_08004020(M2C_FIELD(arg0, s32 *, 0x224));
    var_r2 = 0;
    if ((u32) M2C_FIELD(arg0, u8 *, 0x228) > 0U) {
        var_r4 = arg0 + 0x5C;
        var_r6 = arg0 + 0x24;
        do {
            if ((M2C_FIELD(var_r4, u8 *, 6) == 0) && (M2C_FIELD(var_r4, s32 *, 0) != 0)) {
                sp0 = var_r2;
                if ((sub_080641CC(var_r6) << 0x18) == 0) {
                    M2C_FIELD(arg0, u8 *, 0x229) = (u8) (M2C_FIELD(arg0, u8 *, 0x229) - 1);
                }
            }
            var_r4 += 0x40;
            var_r6 += 0x40;
            var_r2 += 1;
        } while (var_r2 < (u32) M2C_FIELD(arg0, u8 *, 0x228));
    }
    if (M2C_FIELD(arg0, u8 *, 0x22A) != 0) {
        temp_r1 = M2C_FIELD(arg0, u8 *, 0x229);
        if (temp_r1 == 0) {
            M2C_FIELD(arg0, u8 *, 0x22B) = temp_r1;
        }
    }
    return M2C_FIELD(arg0, u8 *, 0x22B);
}
