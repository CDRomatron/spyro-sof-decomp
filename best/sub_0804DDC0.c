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

M2C_UNK _0804D8FC(void *);                          /* extern */
M2C_UNK sub_0804A318(void *, void *, void *, void *); /* extern */
M2C_UNK sub_0804D698(void *);                       /* extern */
M2C_UNK sub_0804DC20(void *);                       /* extern */
M2C_UNK sub_0804DF70(void *);                       /* extern */

void sub_0804DDC0(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x58) != M2C_FIELD(arg0, s32 *, 0x50)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    _0804D8FC(arg0);
    sub_0804DC20(arg0);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x1C) + 0x4C;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r2;
    if (M2C_FIELD(arg0, s32 *, 0x54) & 8) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + M2C_FIELD(arg0, s32 *, 0x18));
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + temp_r2);
    } else {
        if (temp_r2 > 0x700) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x700;
        }
        sub_0804A318(arg0 + 0x10, arg0 + 0x14, arg0 + 0x18, arg0 + 0x1C);
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_r1 <= 0x7FF) {
            var_r0 = 0x800;
            goto block_10;
        }
        if (temp_r1 > (s32) ((M2C_FIELD(*(void **)0x0300269C, s32 *, 0x20) - 8) << 8)) {
            var_r0 = (M2C_FIELD(*(void **)0x0300269C, s32 *, 0x20) - 8) << 8;
block_10:
            M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
        }
    }
    sub_0804D698(arg0);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 1);
    if (M2C_FIELD(arg0, s32 *, 0x50) == 7) {
        sub_0804DF70(arg0);
    }
}
