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

M2C_UNK sub_080500F0(void *);                       /* extern */
M2C_UNK sub_08054AF0(s32, s32, s32 *);              /* extern */
M2C_UNK sub_08054E64(void *, void *);               /* extern */
M2C_UNK sub_08054FE0(s32, s32, void *, s32 *);      /* extern */
u16 sub_08063D78(s32, s32);                         /* extern */

void sub_0801B5E0(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 temp_r4;
    void *temp_r0;
    void *temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF4);
    temp_r6 = arg0 + 0xEC;
    sub_08054E64(temp_r6, temp_r6);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r4;
    temp_r0 = arg0 + 0xC;
    sub_08054FE0((temp_r4 - M2C_FIELD(temp_r0, s32 *, 8)) + 0x4C00, -0x33, arg0 + 0x144, &sp0);
    sub_08054AF0(0, 0x4C00, &sp4);
    sp0 += sp4;
    M2C_FIELD(arg0, s32 *, 0x138) = (s32) sub_08063D78((s32) ((((M2C_FIELD(arg0, s32 *, 0xEC) & 0xFFFFF000) | 0x800) - M2C_FIELD(arg0, s32 *, 0xC)) << 0xC) >> 0x10, (s32) ((((M2C_FIELD(arg0, s32 *, 0xF0) & 0xFFFFF000) | 0x800) - M2C_FIELD(temp_r0, s32 *, 4)) << 0xC) >> 0x10);
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    sub_080500F0(temp_r0);
}
