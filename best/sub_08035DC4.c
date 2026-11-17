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

extern M2C_UNK sub_0803651C;
extern M2C_UNK sub_08036584;

void sub_08035DC4(void *arg0, s32 arg1) {
    M2C_UNK **var_r1_2;
    M2C_UNK *var_r0;
    s32 *var_r4;
    s32 *var_r5;
    s32 temp_r1;
    u32 var_r1;

    if (arg1 == M2C_FIELD(arg0, s32 *, 0x9C)) {
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        var_r5 = arg0 + 0xA0;
        goto block_4;
    }
    var_r5 = arg0 + 0xA0;
    if (arg1 == M2C_FIELD(arg0, s32 *, 0xA0)) {
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
block_4:
        var_r4 = arg0 + 0xA4;
    } else {
        var_r4 = arg0 + 0xA4;
        if (arg1 == M2C_FIELD(arg0, s32 *, 0xA4)) {
            M2C_FIELD(arg0, s32 *, 0xA4) = 0;
        }
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x9C);
    var_r1 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
    if (*var_r5 != 0) {
        var_r1 += 1;
    }
    if (*var_r4 != 0) {
        var_r1 += 1;
    }
    switch (var_r1) {                               /* irregular */
    default:
        M2C_FIELD(arg0, s16 *, 0xB2) = 0x78;
        var_r1_2 = (arg0 + 0xB2) - 0x1A;
        var_r0 = &sub_08036584;
block_18:
        *var_r1_2 = var_r0;
        return;
    case 1:
        var_r1_2 = arg0 + 0x98;
        var_r0 = &sub_0803651C;
        goto block_18;
    case 2:
        var_r1_2 = arg0 + 0x98;
        var_r0 = (M2C_UNK *)0x0803594D;
        goto block_18;
    }
}
