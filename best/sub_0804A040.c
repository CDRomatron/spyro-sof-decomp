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

M2C_UNK _08049C04(void *);                          /* extern */
M2C_UNK sub_08049A8C(void *);                       /* extern */
M2C_UNK sub_08049F3C(void *);                       /* extern */
M2C_UNK sub_0804A1B0(void *);                       /* extern */
M2C_UNK sub_0804A318(void *, void *, void *, void *); /* extern */

void sub_0804A040(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x44) != M2C_FIELD(arg0, s32 *, 0x3C)) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
    _08049C04(arg0);
    sub_08049F3C(arg0);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x1C) + 0x4C;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r2;
    if (M2C_FIELD(arg0, s32 *, 0x40) & 0x20) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, s32 *, 0x18));
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_r2);
    } else {
        if (temp_r2 > 0x700) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x700;
        }
        sub_0804A318(arg0 + 0x20, arg0 + 0x24, arg0 + 0x18, arg0 + 0x1C);
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r1 <= 0x7FF) {
            var_r0 = 0x800;
            goto block_10;
        }
        if (temp_r1 > (s32) ((M2C_FIELD(*(void **)0x0300269C, s32 *, 0x20) - 8) << 8)) {
            var_r0 = (M2C_FIELD(*(void **)0x0300269C, s32 *, 0x20) - 8) << 8;
block_10:
            M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
        }
    }
    sub_08049A8C(arg0);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + 1);
    if (M2C_FIELD(arg0, s32 *, 0x3C) == 0xA) {
        sub_0804A1B0(arg0);
    }
}
