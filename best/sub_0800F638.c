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
extern M2C_UNK sub_0800DA94;

void sub_0800F638(void) {
    void *temp_r5;

    temp_r5 = *(void **)0x030008CC;
    if ((M2C_FIELD(temp_r5, u8 *, 0x33B) != 0) && (M2C_FIELD(temp_r5, u8 *, 0x33C) == 0)) {
        M2C_FIELD(temp_r5, u8 *, 0x33C) = 1U;
        *(u16 *)0x04000200 &= 0xFFFB;
        sub_08000B64(2, &sub_0800DA94);
        *(s16 *)0x04000004 = (M2C_FIELD(temp_r5, u16 *, 0x322) << 8) | 0x28;
        *(u16 *)0x04000200 |= 4;
    }
}
