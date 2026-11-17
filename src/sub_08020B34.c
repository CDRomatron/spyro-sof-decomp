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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08007498(s32);                              /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_0800FD78(void *, s32, void *);          /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08020E70;
extern M2C_UNK sub_08020EF8;
extern M2C_UNK sub_08020F64;

void sub_08020B34(void *arg0, u16 arg1) {
    M2C_UNK *var_r1;
    s32 var_r0;
    u16 temp_r5;

    temp_r5 = arg1;
    switch (temp_r5) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x40) = &sub_08020E70;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x38), 0x280000);
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x40) = &sub_08020EF8;
        if ((sub_08007874(6) << 0x18) != 0) {
            if ((sub_08007498(0x12) << 0x18) != 0) {
                var_r1 = &sub_08020F64;
                var_r0 = 0xEB;
            } else {
                var_r1 = &sub_08020F64;
                var_r0 = 0xEA;
            }
            goto block_10;
        }
        if ((sub_08007874(0x66) << 0x18) != 0) {
            var_r1 = (M2C_UNK *)0x08020DED;
            var_r0 = 0xE8;
block_10:
            sub_0800F550(var_r0, var_r1, arg0, 0);
        } else {
            sub_0800F550(0xE5, (M2C_UNK *)0x08020DED, arg0, 0);
        }
        sub_080534A0(5);
        sub_0800FD78(arg0, M2C_FIELD(*(void **)0x030026C0, s32 *, 0x51C), arg0 + 0xC);
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x48) = (s8) temp_r5;
}
