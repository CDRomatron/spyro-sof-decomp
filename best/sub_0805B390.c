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
M2C_UNK sub_0805B0D8(u8, u8, u8, u8, s32, s32);     /* extern */

void sub_0805B390(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    u8 temp_r4;
    u8 temp_r5;
    u8 temp_r6;
    void *temp_r2;

    temp_r5 = arg2;
    temp_r6 = arg3;
    temp_r4 = (u8) arg4;
    temp_r2 = M2C_FIELD(*(void **)0x030026D8, void **, 0x48);
    M2C_FIELD(temp_r2, s32 *, 0x10) = (s32) ((temp_r5 * 0x11) + 0x3C);
    M2C_FIELD(temp_r2, s32 *, 0x14) = (s32) (((7 - temp_r6) * 0x11) + 0x1C);
    if (temp_r4 != 0) {
        sub_08003C58(M2C_FIELD(temp_r2, s32 *, 0x18), 0x980000);
    } else {
        sub_08003C58(M2C_FIELD(temp_r2, s32 *, 0x18), 0x980001);
    }
    sub_0805B0D8(arg0, arg1, temp_r5, temp_r6, (s32) temp_r4, 0);
}
