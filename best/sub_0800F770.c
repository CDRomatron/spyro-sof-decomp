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

M2C_UNK sub_0800E140(s32);                          /* extern */
M2C_UNK sub_0800E2EC();                             /* extern */

void sub_0800F770(void) {
    void *temp_r2;

    temp_r2 = *(void **)0x030008CC;
    if (1 & *(u16 *)0x030010B0) {
        M2C_FIELD(temp_r2, s8 *, 0x332) = 1;
        M2C_FIELD((void *)0x060003B8, s16 *, 0) = 0x88;
        M2C_FIELD((void *)0x060003B8, s16 *, 2) = 0x88;
        M2C_FIELD((void *)0x060003B8, s16 *, 0x40) = 0x88;
        M2C_FIELD(((void *)0x060003B8 + 0x40), s16 *, 2) = 0x88;
        if (M2C_FIELD(temp_r2, u16 *, 0x30E) == 0) {
            sub_0800E2EC();
            return;
        }
        sub_0800E140(5);
    }
}
