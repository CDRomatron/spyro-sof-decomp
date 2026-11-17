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

M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_08003BD4(s32);                          /* extern */
M2C_UNK sub_0800A338(s32, s32);                     /* extern */

void sub_080082DC(void) {
    void *temp_r5;

    temp_r5 = *(void **)0x030008B4;
    sub_08003BD4(M2C_FIELD(temp_r5, s32 *, 0x2F4));
    sub_08003BD4(M2C_FIELD(temp_r5, s32 *, 0x2F0));
    M2C_FIELD((void *)0x040000B0, u16 *, 0xA) = (u16) (0xC5FF & M2C_FIELD((void *)0x040000B0, u16 *, 0xA));
    M2C_FIELD((void *)0x040000B0, u16 *, 0xA) = (u16) (0x7FFF & M2C_FIELD((void *)0x040000B0, u16 *, 0xA));
    M2C_FIELD((void *)0x040000C8, u16 *, 0xA) = (u16) (0xC5FF & M2C_FIELD((void *)0x040000C8, u16 *, 0xA));
    M2C_FIELD((void *)0x040000C8, u16 *, 0xA) = (u16) (0x7FFF & M2C_FIELD((void *)0x040000C8, u16 *, 0xA));
    sub_0800A338(0x081722FC, 5);
    sub_08002BE0(temp_r5, 0x2F8);
    *(void **)0x030008B4 = NULL;
}
