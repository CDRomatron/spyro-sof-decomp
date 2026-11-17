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
s32 sub_08007354(u8);                               /* extern */
M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

s32 sub_0803D158(u16 arg0, void *arg2) {
    u16 temp_r0;

    temp_r0 = arg0;
    if (((s32) temp_r0 <= 2) && ((s32) temp_r0 >= 1)) {
        sub_0800F538();
        if ((sub_08007354(M2C_FIELD(M2C_FIELD(arg2, void **, 0x34), u8 *, 4)) << 0x18) != 0) {
            sub_08003C58(M2C_FIELD(arg2, s32 *, 0x40), 0xC0001);
            sub_08003220(0x08170FBC);
        } else {
            sub_080534A0(3);
        }
    }
    return 1;
}
