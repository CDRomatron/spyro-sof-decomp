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

void sub_0805660C(void) {
    u16 temp_r4;
    void *temp_r2;

    temp_r2 = *(void **)0x030008D4;
    if (*(s32 *)0x030010B4 & 1) {
        temp_r4 = M2C_FIELD(temp_r2, u16 *, 0x7C6);
        if ((s32) (s16) M2C_FIELD(temp_r2, u16 *, 0x7C6) >= 0) {
            *(u16 *)0x030011B2 = (temp_r4 << 8) | (0x10 - temp_r4);
            M2C_FIELD(temp_r2, u16 *, 0x7C6) = (u16) (M2C_FIELD(temp_r2, u16 *, 0x7C6) - 1);
            return;
        }
        M2C_FIELD((void *)0x03001160, u16 *, 0) = 0x140U;
        M2C_FIELD((void *)0x03001160, u16 *, 0x50) = 0U;
    }
}
