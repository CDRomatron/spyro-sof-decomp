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

M2C_UNK sub_0800C5B8(s32);                          /* extern */
M2C_UNK sub_0800C748(s32);                          /* extern */

void sub_080447B4(void) {
    sub_0800C5B8(*M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88));
    sub_0800C748(*M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88));
    sub_0800C5B8(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 4));
    sub_0800C748(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 4));
    sub_0800C5B8(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 8));
    sub_0800C748(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 8));
    sub_0800C5B8(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 0xC));
    sub_0800C748(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 0xC));
    sub_0800C5B8(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 0x10));
    sub_0800C748(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 0x10));
    if (M2C_FIELD(*(void **)0x030026A4, u8 *, 0xD7) == 0) {
        sub_0800C5B8(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 0x14));
        sub_0800C748(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 0x14));
        sub_0800C5B8(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 0x18));
        sub_0800C748(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), s32 *, 0x18));
    }
}
