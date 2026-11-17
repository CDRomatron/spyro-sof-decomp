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

M2C_UNK sub_08002BE0(void *, s32, u16);             /* extern */
M2C_UNK sub_08003BD4(s32);                          /* extern */

void sub_08005E5C(void) {
    u16 temp_r2;
    void *temp_r4;

    temp_r4 = *(void **)0x03000898;
    sub_08003BD4(M2C_FIELD(temp_r4, s32 *, 0x288));
    sub_08003BD4(M2C_FIELD(temp_r4, s32 *, 0x28C));
    temp_r2 = *(u16 *)0x03001160;
    *(u16 *)0x03001160 &= 0xDFFF;
    sub_08002BE0(temp_r4, 0x2A0, temp_r2);
}
