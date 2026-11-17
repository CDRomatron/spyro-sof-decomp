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

M2C_UNK sub_080003D8(s32);                          /* extern */
M2C_UNK sub_08000488(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_08000BC8();                             /* extern */
s32 sub_0800A3D4(s32);                              /* extern */
M2C_UNK sub_0800A400(s32, s32);                     /* extern */
M2C_UNK sub_0800A474(s32, s32);                     /* extern */

void sub_08055BBC(void) {
    s16 sp8;

    sub_0800A400(0xE7, 0x030011C0);
    sub_0800A474(0xD3, 0x06004020);
    sub_0800A474(0xD1, 0x06004F60);
    sub_0800A474(0xD5, 0x060061A0);
    sub_0800A474(0xDD, 0x06008000);
    sub_08000BC8();
    sub_08000488(sub_0800A3D4(0xD4) + 4, 0x0600F800, 0x20, 0x14, 1, 0);
    sub_08000488(sub_0800A3D4(0xD6) + 4, 0x0600D000, 0x20, 0x14, 0x10D, 0);
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *) (sub_0800A3D4(0xDE) + 4);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600C800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    sub_080003D8(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    sub_08000BC8();
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06004000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000010;
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06008000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000010;
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600F000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000400;
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600E000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000800;
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600D800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000400;
    M2C_FIELD((void *)0x03001160, u16 *, 0x10) = 0U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x12) = 0U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x14) = 0U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x16) = 0U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x18) = 0U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x1A) = 0U;
}
