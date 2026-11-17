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

s32 sub_080025B4(void *arg0) {
    s32 var_r2;
    s32 var_r3;
    s32 var_r5;

    if (M2C_FIELD(arg0, u16 *, 4) == 0x20) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) ((M2C_FIELD(arg0, u16 *, 0x14) << 0xB) + ((((M2C_FIELD(arg0, u16 *, 2) << 5) + M2C_FIELD(arg0, u16 *, 0)) * 2) + 0x06000000));
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) ((M2C_FIELD(arg0, u16 *, 4) * M2C_FIELD(arg0, u16 *, 6)) | 0x80000000);
        return M2C_FIELD((void *)0x040000D4, s32 *, 8);
    }
    var_r5 = M2C_FIELD(arg0, s32 *, 0xC);
    var_r2 = (M2C_FIELD(arg0, u16 *, 0x14) << 0xB) + ((((M2C_FIELD(arg0, u16 *, 2) << 5) + M2C_FIELD(arg0, u16 *, 0)) * 2) + 0x06000000);
    var_r3 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 6) > 0) {
        do {
            M2C_FIELD((void *)0x040000D4, s32 *, 0) = var_r5;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r2;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (M2C_FIELD(arg0, u16 *, 4) | 0x80000000);
            var_r5 += M2C_FIELD(arg0, u16 *, 4) * 2;
            var_r2 += 0x40;
            var_r3 += 1;
        } while (var_r3 < (s32) M2C_FIELD(arg0, u16 *, 6));
    }
    return (s32) M2C_FIELD(arg0, u16 *, 6);
}
