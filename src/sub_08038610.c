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
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, s32, s32);                /* extern */
M2C_UNK sub_080078EC(s32);                          /* extern */

s32 sub_08038610(s32 arg0, void *arg1, s32 arg2) {
    if (arg2 == 8) {
        sub_08003C58(arg0, 0x390001);
        sub_08004454(arg0, 0, 0);
        M2C_FIELD(arg1, s8 *, 0x51) = 2;
    } else if (arg2 == 2) {
        sub_080078EC(M2C_FIELD(M2C_FIELD(arg1, void **, 0x40), s32 *, 0xC));
        sub_08003220(0x08170B5C);
    }
    return 1;
}
