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

void sub_0800DA30(void) {
    u16 temp_r0;
    void *temp_r2;

    temp_r2 = *(void **)0x030008CC;
    M2C_FIELD(temp_r2, s16 *, 0x31C) = (s16) ((M2C_FIELD(temp_r2, u16 *, 0x312) - M2C_FIELD(temp_r2, u16 *, 0x322)) + 0x4B);
    M2C_FIELD(temp_r2, s16 *, 0x320) = (s16) ((0 - M2C_FIELD(temp_r2, u16 *, 0x322)) + 3);
    if ((u32) M2C_FIELD(temp_r2, u16 *, 0x322) <= 0x97U) {
        *(u16 *)0x030011A2 = 0xF0;
    }
    temp_r0 = M2C_FIELD(temp_r2, u16 *, 0x322);
    *(u16 *)0x030011A6 = ((temp_r0 + 2) << 8) | (temp_r0 + 5);
}
