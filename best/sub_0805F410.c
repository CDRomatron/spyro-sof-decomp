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

M2C_UNK sub_080003D8();                             /* extern */
M2C_UNK sub_08000488(s32, s32, s32, s32, s32, s32); /* extern */
s32 *sub_08009F74(s32);                             /* extern */
M2C_UNK sub_0800A2D8(s32);                          /* extern */
M2C_UNK sub_0800A474(s32, s32);                     /* extern */

s32 sub_0805F410(void) {
    s32 sp8;

    M2C_FIELD((void *)0x040000D4, s32 **, 0) = sub_08009F74(0x5C2);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030011C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000100;
    sub_0800A2D8(0x5C2);
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = sub_08009F74(0x5C3);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000100;
    sub_0800A2D8(0x5C3);
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x030012A0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) M2C_FIELD(*(void **)0x030026EC, s32 *, 0xC8);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000008;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x030012E0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) M2C_FIELD(*(void **)0x030026EC, s32 *, 0xCC);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000008;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x0818D810;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013A0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000008;
    sub_08000488(sub_08009F74(0x5B5) + 4, 0x06003800, 0x20, 0x20, 0, 0);
    sub_080003D8();
    sub_0800A2D8(0x5B5);
    sub_0800A474(0x5B4, 0x06000000);
    sub_08000488(sub_08009F74(0x5B7) + 4, 0x06007800, 0x20, 0x20, 0, 0);
    sub_080003D8();
    sub_0800A2D8(0x5B7);
    sub_0800A474(0x5B6, 0x06004000);
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600B800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000200;
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06008000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000008;
    sub_0800A474(0x5BA, 0x06008020);
    sub_0800A474(0x5BC, 0x06008220);
    sub_0800A474(0x5BE, 0x06008420);
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600F800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000200;
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600C000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000008;
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
