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

M2C_UNK sub_080076E4(u8);                           /* extern */

s32 sub_08034EF0(s32 arg0, void *arg1, u16 arg2, u16 arg3) {
    u16 temp_r0;

    if (arg2 == 9) {
        temp_r0 = arg3;
        if (temp_r0 == 4) {
            M2C_FIELD(arg1, s8 *, 0x4F) = 0;
            if (M2C_FIELD(arg1, u16 *, 0x4C) == 0x1F0) {
                sub_080076E4((u8) M2C_FIELD(arg1, s32 *, 0x44));
            }
        } else if (temp_r0 == 0x63) {
            M2C_FIELD(arg1, s32 *, 0x44) = arg0;
        }
    }
    return 0;
}
