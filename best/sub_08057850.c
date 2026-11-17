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

M2C_UNK sub_08000BC8();                             /* extern */
M2C_UNK sub_080024B0(s32);                          /* extern */
M2C_UNK sub_080024BC(s32);                          /* extern */
M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_0800A338(s32, s32);                     /* extern */
M2C_UNK sub_0800C068();                             /* extern */

void sub_08057850(void) {
    void *temp_r5;

    temp_r5 = *(void **)0x030008D4;
    M2C_FIELD((void *)0x03001160, u16 *, 0) = 0U;
    sub_0800C068();
    M2C_FIELD((void *)0x03001160, u16 *, 0x50) = 0xFFU;
    M2C_FIELD((void *)0x03001160, u16 *, 0x54) = 0x10U;
    sub_08000BC8();
    sub_080024BC(M2C_FIELD(temp_r5, s32 *, 0x7A4));
    sub_080024B0(M2C_FIELD(temp_r5, s32 *, 0x7A0));
    sub_0800A338(0x0817AD1C, 0xF);
    sub_08002BE0(temp_r5, 0x7DC);
}
