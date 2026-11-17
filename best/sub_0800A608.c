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

M2C_UNK sub_08003BF8(s32);                          /* extern */

void sub_0800A608(void) {
    void *temp_r5;

    temp_r5 = *(void **)0x03002680;
    if (M2C_FIELD(temp_r5, u16 *, 0xFB6) != 1) {
        M2C_FIELD((void *)0x03001160, u16 *, 0) = (u16) ((M2C_FIELD((void *)0x03001160, u16 *, 0) | 0x1040) & 0xFF7F);
        M2C_FIELD((void *)0x03001160, u16 *, 0x50) = 0xF00U;
        M2C_FIELD((void *)0x03001160, u16 *, 0x52) = 0x80CU;
        sub_08003BF8(M2C_FIELD(*(void **)0x03002680, s32 *, 8));
        if (1 & M2C_FIELD(temp_r5, u16 *, 0xFB4)) {
            sub_08003BF8(M2C_FIELD(*(void **)0x03002680, s32 *, 0));
            sub_08003BF8(M2C_FIELD(*(void **)0x03002680, s32 *, 4));
        }
        M2C_FIELD(*(void **)0x03002680, u16 *, 0xFB6) = 1U;
    }
}
