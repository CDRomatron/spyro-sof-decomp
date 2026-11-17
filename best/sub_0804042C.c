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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08006600(u16);                          /* extern */
s32 sub_080073E8();                                 /* extern */
s32 sub_0800741C();                                 /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080501CC(s32, M2C_UNK *);               /* extern */
extern M2C_UNK sub_080404D0;

s32 sub_0804042C(u16 arg0, s32 arg2) {
    s32 temp_r4;
    u16 temp_r0;

    temp_r0 = arg0;
    if (temp_r0 != 1) {
        if (temp_r0 == 3) {
            temp_r4 = sub_0800741C();
            sub_08006600((u16) (temp_r4 - sub_080073E8()));
            sub_0800781C(0x24, 1);
            sub_08003220(0x081715C0);
        }
    } else {
        sub_0800F538();
        sub_080501CC(arg2, &sub_080404D0);
    }
    return 1;
}
