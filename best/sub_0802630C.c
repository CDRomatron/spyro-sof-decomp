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

s32 sub_080529E8(s32, s32);                         /* extern */

s32 sub_0802630C(void *arg0) {
    u16 temp_r4;
    u32 var_r3;
    void *temp_r0;
    void *temp_r1;
    void *var_r2;

    if ((sub_080529E8(arg0 + 0xA4, M2C_FIELD(arg0, s32 *, 0xB0)) << 0x18) != 0) {
        temp_r1 = M2C_FIELD(*(void **)0x030026C0, void **, 0x51C);
        temp_r0 = M2C_FIELD(arg0, void **, 0x98);
        var_r2 = M2C_FIELD(temp_r0, void **, 0xC);
        temp_r4 = M2C_FIELD(temp_r0, u16 *, 0x14);
        var_r3 = 0;
        if ((u32) temp_r4 > 0U) {
loop_3:
            if ((M2C_FIELD(temp_r1, s32 *, 0xC) == M2C_FIELD(var_r2, s32 *, 0)) && (M2C_FIELD((temp_r1 + 0xC), s32 *, 4) == M2C_FIELD(var_r2, s32 *, 4))) {
                return 1;
            }
            var_r2 += 0xC;
            var_r3 += 1;
            if (var_r3 >= (u32) temp_r4) {
                goto block_7;
            }
            goto loop_3;
        }
    }
block_7:
    return 0;
}
