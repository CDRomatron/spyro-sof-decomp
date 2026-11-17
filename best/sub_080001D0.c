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

void sub_080001D0(s32 arg0, u32 *arg1) {
    s32 *var_r3_4;
    s32 *var_r4;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    u32 *var_r1;
    u32 *var_r1_2;
    u32 *var_r3;
    u32 *var_r3_2;
    u32 *var_r3_3;
    u32 *var_r4_2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r1;

    temp_r1 = (u32) (0x30000 & (arg0 << 0x10)) >> 0x10;
    switch (temp_r1) {                              /* irregular */
    case 0:
        var_r1 = arg1;
        var_r3 = (u32 *)0x030010C0;
        var_r2 = 7;
        do {
            temp_r0 = *var_r1;
            var_r1 += 4;
            *var_r3 = temp_r0;
            var_r3 += 4;
            var_r2 -= 1;
        } while (var_r2 >= 0);
        return;
    case 1:
        var_r3_2 = arg1;
        var_r4 = (s32 *)0x030010C0;
        var_r2_2 = 7;
        do {
            temp_r0_2 = *var_r3_2;
            var_r3_2 += 4;
            *var_r4 = ((temp_r0_2 >> 4) & 0x0F0F0F0F) | ((temp_r0_2 * 0x10) & 0xF0F0F0F0);
            var_r4 += 4;
            var_r2_2 -= 1;
        } while (var_r2_2 >= 0);
        return;
    case 2:
        var_r1_2 = arg1;
        var_r3_3 = (u32 *)0x030010DC;
        var_r2_3 = 7;
        do {
            temp_r0_3 = *var_r1_2;
            var_r1_2 += 4;
            *var_r3_3 = temp_r0_3;
            var_r3_3 -= 4;
            var_r2_3 -= 1;
        } while (var_r2_3 >= 0);
        return;
    case 3:
        var_r4_2 = arg1;
        var_r3_4 = (s32 *)0x030010DC;
        var_r2_4 = 7;
        do {
            temp_r0_4 = *var_r4_2;
            var_r4_2 += 4;
            *var_r3_4 = ((temp_r0_4 >> 4) & 0x0F0F0F0F) | ((temp_r0_4 * 0x10) & 0xF0F0F0F0);
            var_r3_4 -= 4;
            var_r2_4 -= 1;
        } while (var_r2_4 >= 0);
        return;
    }
}
