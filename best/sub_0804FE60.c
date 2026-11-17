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

M2C_UNK sub_0800F204(s32);                          /* extern */

void sub_0804FE60(void) {
    void *temp_r1;
    void *temp_r2;

    M2C_FIELD(*(void **)0x030026B8, s32 *, 0x10B8) = 0;
    temp_r2 = *(void **)0x030026B8;
    M2C_FIELD(temp_r2, s32 *, 0x10B4) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x10B4) & ~1);
    temp_r1 = *(void **)0x030026B8;
    M2C_FIELD(temp_r1, s32 *, 0x10B4) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x10B4) | 4);
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (M2C_FIELD(*(void **)0x030026B8, s32 *, 0) + 0x44);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030011C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000070;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (M2C_FIELD(*(void **)0x030026B8, s32 *, 0) + 0x244);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000080;
    sub_0800F204(0x100);
}
