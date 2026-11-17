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

void sub_080573F4(void) {
    u16 *var_r12;
    u16 *var_r12_2;
    u16 *var_r12_3;
    u16 *var_r12_4;
    u16 *var_r12_5;
    u16 *var_r12_6;
    u16 *var_r2;
    u16 *var_r2_2;
    u16 *var_r2_3;
    u16 *var_r2_4;
    u16 *var_r2_5;
    u16 *var_r2_6;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r3_3;
    u32 var_r3_4;
    u32 var_r3_5;
    u32 var_r3_6;

    if (*(s32 *)0x030010B4 & 3) {
        return;
    }
    var_r3 = 0;
    var_r12 = (u16 *)0x03001302;
    var_r2 = (u16 *)0x03001300;
    do {
        *var_r2 = *var_r12;
        var_r12 += 2;
        var_r2 += 2;
        var_r3 += 1;
    } while (var_r3 <= 0xEU);
    *(u16 *)0x0300131E = *(u16 *)0x03001300;
    var_r3_2 = 0;
    var_r12_2 = (u16 *)0x03001322;
    var_r2_2 = (u16 *)0x03001320;
    do {
        *var_r2_2 = *var_r12_2;
        var_r12_2 += 2;
        var_r2_2 += 2;
        var_r3_2 += 1;
    } while (var_r3_2 <= 0xEU);
    *(u16 *)0x0300133E = *(u16 *)0x03001320;
    var_r3_3 = 0;
    var_r12_3 = (u16 *)0x03001342;
    var_r2_3 = (u16 *)0x03001340;
    do {
        *var_r2_3 = *var_r12_3;
        var_r12_3 += 2;
        var_r2_3 += 2;
        var_r3_3 += 1;
    } while (var_r3_3 <= 0xEU);
    *(u16 *)0x0300135E = *(u16 *)0x03001340;
    var_r3_4 = 0;
    var_r12_4 = (u16 *)0x03001362;
    var_r2_4 = (u16 *)0x03001360;
    do {
        *var_r2_4 = *var_r12_4;
        var_r12_4 += 2;
        var_r2_4 += 2;
        var_r3_4 += 1;
    } while (var_r3_4 <= 0xEU);
    *(u16 *)0x0300137E = *(u16 *)0x03001360;
    var_r3_5 = 0;
    var_r12_5 = (u16 *)0x03001382;
    var_r2_5 = (u16 *)0x03001380;
    do {
        *var_r2_5 = *var_r12_5;
        var_r12_5 += 2;
        var_r2_5 += 2;
        var_r3_5 += 1;
    } while (var_r3_5 <= 0xEU);
    *(u16 *)0x0300139E = *(u16 *)0x03001380;
    var_r3_6 = 0;
    var_r12_6 = (u16 *)0x030013A2;
    var_r2_6 = (u16 *)0x030013A0;
    do {
        *var_r2_6 = *var_r12_6;
        var_r12_6 += 2;
        var_r2_6 += 2;
        var_r3_6 += 1;
    } while (var_r3_6 <= 0xEU);
    *(u16 *)0x030013BE = *(u16 *)0x030013A0;
}
