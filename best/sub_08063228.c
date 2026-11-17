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

void sub_08063228(void *arg1) {
    s32 var_r1;
    s8 var_r1_2;
    u32 var_r3;
    u8 temp_r1;
    u8 temp_r4;

    if (1 & M2C_FIELD(arg1, u8 *, 0)) {
        var_r3 = (u32) (M2C_FIELD(arg1, u8 *, 0x13) * M2C_FIELD(arg1, u8 *, 0x12)) >> 5;
        temp_r4 = M2C_FIELD(arg1, u8 *, 0x18);
        if (temp_r4 == 1) {
            var_r3 = (u32) ((M2C_FIELD(arg1, s8 *, 0x16) + 0x80) * var_r3) >> 7;
        }
        var_r1 = (M2C_FIELD(arg1, s8 *, 0x14) * 2) + M2C_FIELD(arg1, s8 *, 0x15);
        if (temp_r4 == 2) {
            var_r1 += M2C_FIELD(arg1, s8 *, 0x16);
        }
        if (var_r1 < -0x80) {
            var_r1 = -0x80;
        } else if (var_r1 > 0x7F) {
            var_r1 = 0x7F;
        }
        M2C_FIELD(arg1, s8 *, 0x10) = (s8) ((u32) ((var_r1 + 0x80) * var_r3) >> 8);
        M2C_FIELD(arg1, s8 *, 0x11) = (s8) ((u32) ((0x7F - var_r1) * var_r3) >> 8);
    }
    temp_r1 = M2C_FIELD(arg1, u8 *, 0);
    if (4 & temp_r1) {
        var_r1_2 = M2C_FIELD(arg1, u8 *, 0xD) + (((M2C_FIELD(arg1, s8 *, 0xC) + (M2C_FIELD(arg1, s8 *, 0xE) * M2C_FIELD(arg1, u8 *, 0xF))) * 4) + (M2C_FIELD(arg1, s8 *, 0xA) << 8) + (M2C_FIELD(arg1, s8 *, 0xB) << 8));
        if (M2C_FIELD(arg1, u8 *, 0x18) == 0) {
            var_r1_2 += M2C_FIELD(arg1, s8 *, 0x16) * 0x10;
        }
        M2C_FIELD(arg1, s8 *, 8) = (s8) (var_r1_2 >> 8);
        M2C_FIELD(arg1, s8 *, 9) = var_r1_2;
    }
    M2C_FIELD(arg1, u8 *, 0) = (u8) (0xFA & temp_r1);
}
