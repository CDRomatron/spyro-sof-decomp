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

void sub_0800DA94(void) {
    u16 *temp_r1_2;
    u16 *temp_r1_3;
    u16 temp_r0;
    void *temp_r1;
    void *temp_r5;

    temp_r5 = *(void **)0x030008CC;
    *(u16 *)0x040000B0 = *(u16 *)0x040000B0;
    temp_r0 = *(u16 *)0x04000006;
    if (temp_r0 == *(u16 *)0x04000006) {
        do {

        } while (temp_r0 == *(u16 *)0x04000006);
    }
    M2C_FIELD((void *)0x04000000, s16 *, 0) = (s16) ((0x2000 & *(u16 *)0x03001160) | 0x4000);
    M2C_FIELD((void *)0x04000000, s16 *, 8) = 0;
    M2C_FIELD((void *)0x0400000A, s16 *, 0) = 0x4000;
    temp_r1 = (void *)0x0400000A + 8;
    M2C_FIELD((void *)0x0400000A, u16 *, 8) = (u16) M2C_FIELD(temp_r5, u16 *, 0x31C);
    M2C_FIELD(temp_r1, u16 *, 4) = (u16) M2C_FIELD(temp_r5, u16 *, 0x320);
    temp_r1_2 = (temp_r1 + 4) - 2;
    *temp_r1_2 = M2C_FIELD(temp_r5, u16 *, 0x31E);
    M2C_FIELD((void *)0x04000010, s16 *, 0) = 0;
    M2C_FIELD((void *)0x04000010, s16 *, 0x40) = 0;
    temp_r1_3 = temp_r1_2 - 0xE;
    do {

    } while (*temp_r1_3 == *temp_r1_3);
    M2C_FIELD((void *)0x04000000, s16 *, 0) = (s16) ((0xE3FF & *(u16 *)0x03001160) | 0x4360);
}
