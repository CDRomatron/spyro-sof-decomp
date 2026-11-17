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

M2C_UNK _0804C8BC(void *);                          /* extern */
M2C_UNK sub_08000C9C(void *);                       /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0804A318(void *, void *, void *, void *); /* extern */
M2C_UNK sub_0804C194(s32, void *);                  /* extern */
M2C_UNK sub_0804C6E0(void *);                       /* extern */
M2C_UNK sub_0804CCCC(void *);                       /* extern */

void sub_0804CE80(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x44) != M2C_FIELD(arg0, s32 *, 0x3C)) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
    _0804C8BC(arg0);
    sub_0804CCCC(arg0);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x1C) + 0x4C;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r2;
    if (M2C_FIELD(arg0, s32 *, 0x40) & 8) {
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
    sub_0804C6E0(arg0);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + 1);
    if (M2C_FIELD(arg0, s32 *, 0x3C) == 0xC) {
        sub_080043A4(M2C_FIELD(arg0, s32 *, 0x28));
        sub_08000C9C(arg0);
        sub_0804C194(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84), arg0);
    }
}
