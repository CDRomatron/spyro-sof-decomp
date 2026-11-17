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

u8 sub_08007324();                                  /* extern */
s32 sub_08009F74(u16);                              /* extern */
M2C_UNK sub_0800A2D8(u16);                          /* extern */
void *sub_08053BA4();                               /* extern */

void sub_0804EA38(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 temp_r6;
    void *temp_r8;

    temp_r6 = sub_08007324();
    temp_r8 = sub_08053BA4();
    if ((u32) (u16) (temp_r6 - 0x27) <= 3U) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = sub_08009F74(M2C_FIELD(temp_r8, u16 *, 0x18));
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013C0;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000100;
        sub_0800A2D8(M2C_FIELD(temp_r8, u16 *, 0x18));
        return;
    }
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = sub_08009F74(0x141U);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000100;
    sub_0800A2D8(0x141U);
    temp_r0 = (s32) M2C_FIELD(temp_r8, u16 *, 0x18);
    if (temp_r0 > 0) {
        temp_r0_2 = sub_08009F74((u16) temp_r0);
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (temp_r0_2 + 0x20);
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013E0;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000060;
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (temp_r0_2 + 0x1E0);
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030015A0;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        if ((temp_r6 == 0) || (temp_r6 == 0xB) || (temp_r6 == 0x18)) {
            M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (temp_r0_2 + 0x1C0);
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x03001580;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        }
        sub_0800A2D8(M2C_FIELD(temp_r8, u16 *, 0x18));
    }
}
