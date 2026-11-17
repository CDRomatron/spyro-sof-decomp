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

s32 sub_08008358(void) {
    u16 *temp_r5;

    temp_r5 = *(u16 **)0x030008B4;
    M2C_FIELD((void *)0x040000B0, u16 *, 0xA) = (u16) (0xC5FF & M2C_FIELD((void *)0x040000B0, u16 *, 0xA));
    M2C_FIELD((void *)0x040000B0, u16 *, 0xA) = (u16) (0x7FFF & M2C_FIELD((void *)0x040000B0, u16 *, 0xA));
    M2C_FIELD((void *)0x040000C8, u16 *, 0xA) = (u16) (0xC5FF & M2C_FIELD((void *)0x040000C8, u16 *, 0xA));
    M2C_FIELD((void *)0x040000C8, u16 *, 0xA) = (u16) (0x7FFF & M2C_FIELD((void *)0x040000C8, u16 *, 0xA));
    *(u16 *)0x04000016 = *temp_r5;
    M2C_FIELD((void *)0x040000C8, void **, 0) = (void *) (temp_r5 + 2);
    M2C_FIELD((void *)0x040000C8, M2C_UNK32 *, 4) = 0x04000016;
    M2C_FIELD((void *)0x040000C8, s32 *, 8) = 0xA2600001;
    M2C_FIELD((void *)0x040000B0, void **, 0) = (void *) (temp_r5 + 0x17A);
    M2C_FIELD((void *)0x040000B0, s32 *, 4) = 0x0400001A;
    M2C_FIELD((void *)0x040000B0, s32 *, 8) = 0xA2600001;
    if (!(*(s32 *)0x030010B4 & 3)) {
        M2C_FIELD((void *)0x03001160, u16 *, 0x1E) = (u16) (M2C_FIELD((void *)0x03001160, u16 *, 0x1E) + 1);
    }
    return 1;
}
