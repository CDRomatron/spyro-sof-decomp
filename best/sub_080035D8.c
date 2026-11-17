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

M2C_UNK sub_0806303C(s32);                          /* extern */
M2C_UNK sub_080638B0(s32, s32, u8);                 /* extern */

s32 sub_080035D8(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD((void *)0x03000840, u8 *, 0x1F) == 0) {
        M2C_FIELD((void *)0x03000840, s32 *, 0x10) = arg0;
    } else {
        M2C_FIELD((void *)0x03000840, s32 *, 0x10) = arg0;
        temp_r4 = *(s32 *)0x08067B58;
        sub_0806303C(temp_r4);
        sub_080638B0(temp_r4, 0xFFFF, M2C_FIELD((void *)0x03000840, u8 *, 0x1F));
    }
    return 0xFF;
}
