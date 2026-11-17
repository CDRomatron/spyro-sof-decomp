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

M2C_UNK _080227F4(s32, s32);                        /* extern */
s32 sub_08005EA4();                                 /* extern */
u8 sub_08007324();                                  /* extern */
s32 sub_0800F2AC();                                 /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, s32, s32);     /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08023554;

void sub_080234CC(s32 arg0) {
    s32 var_r0;
    u8 temp_r0;

    if (((sub_08005EA4() << 0x18) == 0) && ((sub_0800F2AC() << 0x18) != 0)) {
        sub_080534A0(5);
        temp_r0 = sub_08007324();
        switch (temp_r0) {                          /* irregular */
        case 39:
            var_r0 = 0x61;
block_12:
            sub_0800F550(var_r0, &sub_08023554, arg0, 1);
            break;
        case 40:
            var_r0 = 0x62;
            goto block_12;
        case 41:
            var_r0 = 0x63;
            goto block_12;
        case 42:
            sub_0800F550(0x64, &sub_08023554, arg0, 1);
            break;
        }
        _080227F4(arg0, 0);
    }
}
