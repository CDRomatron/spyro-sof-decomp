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

M2C_UNK sub_08004020(s32, s32, u16);                /* extern */
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */
M2C_UNK sub_08056778(s32);                          /* extern */

void sub_08056520(void) {
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    u16 *var_r3;
    u16 *var_r3_2;
    u16 *var_r3_3;
    u16 *var_r4;
    u16 *var_r4_2;
    u16 *var_r4_3;
    u16 var_r1;
    void *temp_r1;
    void *temp_r5;

    temp_r5 = *(void **)0x030008D4;
    if (!(*(s32 *)0x030010B4 & 1)) {
        var_r4 = (void *)0x030011C0 + 0x26;
        var_r3 = (void *)0x030011C0 + 0x24;
        var_r2 = 0xD;
        do {
            *var_r3 = *var_r4;
            var_r4 += 2;
            var_r3 += 2;
            var_r2 -= 1;
        } while (var_r2 >= 0);
        M2C_FIELD((void *)0x030011C0, u16 *, 0x3E) = (u16) M2C_FIELD((void *)0x030011C0, u16 *, 0x24);
        var_r4_2 = (void *)0x030011C0 + 0x46;
        var_r3_2 = (void *)0x030011C0 + 0x44;
        var_r2_2 = 0xD;
        do {
            *var_r3_2 = *var_r4_2;
            var_r4_2 += 2;
            var_r3_2 += 2;
            var_r2_2 -= 1;
        } while (var_r2_2 >= 0);
        temp_r1 = (void *)0x030011C0 + 0x5E;
        M2C_FIELD((void *)0x030011C0, u16 *, 0x5E) = (u16) M2C_FIELD((void *)0x030011C0, u16 *, 0x44);
        var_r4_3 = (void *)0x030011C0 + 0x66;
        var_r3_3 = temp_r1 + 6;
        var_r2_3 = 0xD;
        do {
            *var_r3_3 = *var_r4_3;
            var_r4_3 += 2;
            var_r3_3 += 2;
            var_r2_3 -= 1;
        } while (var_r2_3 >= 0);
        M2C_FIELD((void *)0x030011C0, u16 *, 0x7E) = (u16) M2C_FIELD(temp_r1, u16 *, 6);
    }
    temp_r1_2 = M2C_FIELD(temp_r5, s32 *, 0x28);
    if (temp_r1_2 <= -0x20) {
        sub_08056778(5);
    } else {
        M2C_FIELD(temp_r5, s32 *, 0x28) = (s32) (temp_r1_2 - 3);
    }
    var_r2_4 = M2C_FIELD(temp_r5, s32 *, 0x28);
    if (var_r2_4 > 0) {
        var_r1 = 0xF0 - var_r2_4;
        var_r2_4 = (s32) M2C_FIELD((void *)0x03001160, u16 *, 0x10);
    } else {
        var_r1 = 0xFF00;
    }
    M2C_FIELD((void *)0x03001160, u16 *, 0x10) = var_r1;
    temp_r1_3 = M2C_FIELD(temp_r5, s32 *, 0x28);
    if (temp_r1_3 > -0x20) {
        sub_08004020(M2C_FIELD(temp_r5, s32 *, 4), temp_r1_3, (u16) var_r2_4);
        sub_080042A4(M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 0x28), M2C_FIELD(temp_r5, s32 *, 0x2C));
    }
}
