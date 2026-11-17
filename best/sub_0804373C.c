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

M2C_UNK sub_0804360C();                             /* extern */
M2C_UNK sub_08061BC4(s32, s32);                     /* extern */

void sub_0804373C(void) {
    u8 temp_r2;
    void *temp_r4;

    temp_r4 = *(void **)0x030008D0;
    sub_0804360C();
    temp_r2 = M2C_FIELD(temp_r4, u8 *, 0x80);
    if (temp_r2 == 0) {
        if ((u32) M2C_FIELD(temp_r4, u8 *, 0x7D) <= 0x10U) {
            *(u16 *)0x030011B0 = 0xFF;
            *(u16 *)0x030011B4 = (u16) M2C_FIELD(temp_r4, u8 *, 0x7D);
            M2C_FIELD(temp_r4, u8 *, 0x7D) = (u8) (M2C_FIELD(temp_r4, u8 *, 0x7D) + 1);
            return;
        }
        M2C_FIELD(temp_r4, s32 *, 0x3C) = (s32) temp_r2;
        if (M2C_FIELD(temp_r4, u8 *, 0x82) != 0) {
            M2C_FIELD((void *)0x03001600, u16 *, 0x20) = (u16) temp_r2;
            M2C_FIELD((void *)0x03001600, u16 *, 0x22) = (u16) temp_r2;
            M2C_FIELD((void *)0x03001600, u16 *, 0x24) = (u16) temp_r2;
            M2C_FIELD((void *)0x03001600, u16 *, 0x26) = (u16) temp_r2;
            M2C_FIELD((void *)0x03001600, u16 *, 0x28) = (u16) temp_r2;
            sub_08061BC4(M2C_FIELD(temp_r4, s32 *, 0x38), M2C_FIELD(temp_r4, u8 *, 0x7F) | 0x1300DF00);
            return;
        }
        sub_08061BC4(M2C_FIELD(temp_r4, s32 *, 0x38), 0x12000000);
    }
}
