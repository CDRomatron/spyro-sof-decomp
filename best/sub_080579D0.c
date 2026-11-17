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
M2C_UNK sub_080096A4(s32, s32, M2C_UNK *);          /* extern */
M2C_UNK sub_080097EC();                             /* extern */
extern M2C_UNK sub_08057BCC;

void sub_080579D0(void) {
    void *temp_r4;

    temp_r4 = *(void **)0x030008D4;
    M2C_FIELD(temp_r4, s8 *, 0x7D6) = 1;
    sub_08000BC8();
    *(u16 *)0x030011B0 = 0xFF;
    *(u16 *)0x030011B4 = 0x10;
    sub_080097EC();
    sub_080096A4(1, 0, &sub_08057BCC);
    M2C_FIELD(temp_r4, s32 *, 0x7A8) = 0;
}
