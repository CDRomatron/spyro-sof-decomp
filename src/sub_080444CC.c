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

M2C_UNK sub_0800C3FC(s32, s32, s32);                /* extern */
M2C_UNK sub_0800D73C(s32);                          /* extern */

void sub_080444CC(void) {
    M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, void **, 0x88), s8 *, 0x32) = 1;
    M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, void **, 0x88), s8 *, 0x31) = 0xC;
    M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, void **, 0x88), s8 *, 0x30) = 1;
    sub_0800D73C(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, void **, 0x88), s32 *, 0x18));
    sub_0800C3FC(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, void **, 0x88), s32 *, 0x18), 0, 0);
}
