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

M2C_UNK sub_0800781C(s32, s32);                     /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800F538();                             /* extern */
s32 sub_0800FCA4(s32, s32, s32);                    /* extern */
M2C_UNK sub_0800FDA0(s32, s32, s32);                /* extern */
M2C_UNK sub_080501CC(s32, M2C_UNK *);               /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_080539E4(s32, s32);                     /* extern */
extern M2C_UNK sub_08020A68;

s32 sub_08020DE8(u8 arg1, s32 arg2) {
    s32 temp_r4;
    u16 temp_r0;

    temp_r0 = (u16) (arg2 >> 0x15);
    switch ((s32) temp_r0) {                        /* irregular */
    case 3:
        temp_r4 = arg2 + 0xC;
        sub_0800FDA0(arg2, sub_0800FCA4(0x12, 1, temp_r4), temp_r4);
        break;
    case 0:
        if (arg1 != 0) {
            sub_0800781C(0x69, 1);
        }
        /* fallthrough */
    default:
        sub_0800F538();
        if (M2C_FIELD(arg2, u8 *, 0x4A) != 0) {
            sub_080501CC(arg2, &sub_08020A68);
        } else if ((sub_08007874(0x69) << 0x18) != 0) {
            sub_080539E4(0xF, 0xF2);
        } else {
            sub_080534A0(3);
        }
        break;
    }
    return 1;
}
