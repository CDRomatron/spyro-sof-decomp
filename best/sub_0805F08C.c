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

void sub_0805F08C(void) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r2;
    s32 var_r3;
    void *temp_r1;

    if (M2C_FIELD(*(void **)0x030026EC, void **, 0x3C) != (*(void **)0x030026EC + 0x40)) {
        temp_r1 = M2C_FIELD(*(void **)0x030026EC, void **, 0x3C);
        var_r0 = M2C_FIELD(temp_r1, s32 *, 0x14);
        if (var_r0 < 0) {
            var_r0 += 0xFF;
        }
        var_r0_2 = M2C_FIELD(temp_r1, s32 *, 0x18);
        if (var_r0_2 < 0) {
            var_r0_2 += 0xFF;
        }
        var_r3 = (var_r0 >> 8) - 0x78;
        var_r2 = (var_r0_2 >> 8) - 0x50;
        if (var_r3 < 0) {
            var_r3 = 0;
        }
        if (var_r2 < 0) {
            var_r2 = 0;
        }
        if (var_r3 > 0x10) {
            var_r3 = 0x10;
        }
        if (var_r2 > 0x60) {
            var_r2 = 0x60;
        }
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0x4C) = var_r3;
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0x50) = var_r2;
        M2C_FIELD((void *)0x03001160, u16 *, 0x10) = (u16) var_r3;
        M2C_FIELD((void *)0x03001160, u16 *, 0x12) = (u16) var_r2;
        M2C_FIELD((void *)0x03001160, u16 *, 0x14) = (u16) var_r3;
        M2C_FIELD((void *)0x03001160, u16 *, 0x16) = (u16) var_r2;
        M2C_FIELD((void *)0x03001160, u16 *, 0x18) = (u16) var_r3;
        M2C_FIELD((void *)0x03001160, u16 *, 0x1A) = (u16) var_r2;
    }
}
