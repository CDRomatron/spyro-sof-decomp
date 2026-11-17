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

M2C_UNK sub_0804A318(void *, void *, void *, s32 *); /* extern */

void sub_080459B0(void *arg0) {
    s32 sp0;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r1;
    s32 var_r3;
    void *var_r2;

    var_r3 = 7;
    var_r2 = arg0 + 0x11C;
    do {
        M2C_FIELD(var_r2, s32 *, 8) = (s32) M2C_FIELD(var_r2, s32 *, 0);
        M2C_FIELD(var_r2, s32 *, 0xC) = (s32) M2C_FIELD(var_r2, s32 *, 4);
        var_r2 -= 8;
        var_r3 -= 1;
    } while (var_r3 > 0);
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD((arg0 + 0xEC), s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    if (!(M2C_FIELD(arg0, s32 *, 0x3C) & 0x40)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x4C);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0x700) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x700;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) & 8) {
        sp0 = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0x1C));
        sub_0804A318(arg0 + 0x10, arg0 + 0x14, arg0 + 0x18, &sp0);
    } else {
        sub_0804A318(arg0 + 0x10, arg0 + 0x14, arg0 + 0x18, arg0 + 0x1C);
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r1 <= 0x7FF) {
        var_r0 = 0x800;
        goto block_13;
    }
    if (temp_r1 > (s32) ((M2C_FIELD(*(void **)0x0300269C, s32 *, 0x20) - 8) << 8)) {
        var_r0 = (M2C_FIELD(*(void **)0x0300269C, s32 *, 0x20) - 8) << 8;
block_13:
        M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
    }
    var_r1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    if (((s32) (var_r1 >> 0xB) > (s32) (M2C_FIELD(*(void **)0x030026A4, s32 *, 0x94) - 4)) && (M2C_FIELD(arg0, s32 *, 0x38) != 0xB)) {
        M2C_FIELD(arg0, s32 *, 0x38) = 2;
    }
}
