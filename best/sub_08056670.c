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

M2C_UNK sub_0805660C();                             /* extern */

void sub_08056670(void) {
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r2_5;
    u16 *var_r3;
    u16 *var_r3_2;
    u16 *var_r3_3;
    u16 *var_r3_4;
    u16 *var_r3_5;
    u16 *var_r4;
    u16 *var_r4_2;
    u16 *var_r4_3;
    u16 *var_r4_4;
    u16 *var_r4_5;
    u16 temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r6;

    temp_r6 = *(void **)0x030008D4;
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
        temp_r1_2 = (void *)0x030011C0 + 0x7E;
        M2C_FIELD((void *)0x030011C0, u16 *, 0x7E) = (u16) M2C_FIELD(temp_r1, u16 *, 6);
        var_r4_4 = (void *)0x030011C0 + 0x86;
        var_r3_4 = temp_r1_2 + 6;
        var_r2_4 = 0x8D;
        do {
            *var_r3_4 = *var_r4_4;
            var_r4_4 += 2;
            var_r3_4 += 2;
            var_r2_4 -= 1;
        } while (var_r2_4 >= 0);
        *(u16 *)0x0300135E = M2C_FIELD(temp_r1_2, u16 *, 6);
        var_r4_5 = (u16 *)0x03001364;
        var_r3_5 = (u16 *)0x03001362;
        var_r2_5 = 0x1E;
        do {
            *var_r3_5 = *var_r4_5;
            var_r4_5 += 2;
            var_r3_5 += 2;
            var_r2_5 -= 1;
        } while (var_r2_5 >= 0);
        *(u16 *)0x0300139E = *(u16 *)0x03001362;
    }
    temp_r0 = M2C_FIELD(temp_r6, u16 *, 0x7C8) + 1;
    M2C_FIELD(temp_r6, u16 *, 0x7C8) = temp_r0;
    if ((u32) temp_r0 > 0xB4U) {
        sub_0805660C();
    }
}
