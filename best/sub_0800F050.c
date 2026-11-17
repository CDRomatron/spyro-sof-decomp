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

M2C_UNK sub_08000B64(s32, M2C_UNK *);               /* extern */
M2C_UNK sub_08003BF8(s32);                          /* extern */
s32 sub_0800A3D4(s32);                              /* extern */
M2C_UNK sub_0800A474(s32, s32);                     /* extern */
M2C_UNK sub_0800E2EC();                             /* extern */
M2C_UNK sub_0800E514();                             /* extern */
extern M2C_UNK sub_0800DA94;

void sub_0800F050(s32 arg0, s32 arg1, s32 arg2, u16 arg3) {
    s16 sp0;
    u16 temp_r6;
    void *temp_r5;
    void *temp_r7;

    temp_r6 = arg3;
    temp_r7 = *(void **)0x030008CC;
    sub_0800E514();
    M2C_FIELD(temp_r7, s32 *, 0x2EC) = arg0;
    M2C_FIELD(temp_r7, s8 *, 0x333) = 0;
    M2C_FIELD(temp_r7, s32 *, 0x2E4) = arg1;
    M2C_FIELD(temp_r7, s32 *, 0x2E0) = arg2;
    M2C_FIELD(temp_r7, s8 *, 0x33E) = (s8) ((temp_r6 ^ 1) & 1);
    sp0 = 0x88;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000500;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *)0x0818D810;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013A0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000009;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *) (sub_0800A3D4(0x4A) + 0x12);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013B2;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000007;
    sub_0800A474(0, 0x06000A80);
    sub_0800A474(8, 0x06000A00);
    M2C_FIELD(temp_r7, s8 *, 0x33B) = 1;
    M2C_FIELD(temp_r7, s8 *, 0x33F) = 0;
    sub_08003BF8(M2C_FIELD(temp_r7, s32 *, 0x2C8));
    sub_08003BF8(M2C_FIELD(temp_r7, s32 *, 0x2CC));
    if (2 & temp_r6) {
        M2C_FIELD(temp_r7, s16 *, 0x322) = 0x6B;
        M2C_FIELD(temp_r7, s16 *, 0x324) = 0x6B;
        M2C_FIELD(temp_r7, s8 *, 0x336) = 1;
        temp_r5 = *(void **)0x030008CC;
        if (M2C_FIELD(temp_r5, u8 *, 0x33C) == 0) {
            M2C_FIELD(temp_r5, u8 *, 0x33C) = 1U;
            *(u16 *)0x04000200 &= 0xFFFB;
            sub_08000B64(2, &sub_0800DA94);
            *(s16 *)0x04000004 = (M2C_FIELD(temp_r5, u16 *, 0x322) << 8) | 0x28;
            *(u16 *)0x04000200 |= 4;
        }
    }
    sub_0800E2EC();
    M2C_FIELD((void *)0x03001160, u16 *, 0) = (u16) (0x4000 | M2C_FIELD((void *)0x03001160, u16 *, 0));
    M2C_FIELD((void *)0x03001160, u16 *, 0x42) = 0xF0F0U;
    M2C_FIELD(((void *)0x03001160 + 0x42), u16 *, 4) = 0xBFBFU;
    M2C_FIELD((void *)0x03001160, u16 *, 0x48) = 0x3FU;
    M2C_FIELD(((void *)0x03001160 + 0x48), u16 *, 2) = 0x3FU;
}
