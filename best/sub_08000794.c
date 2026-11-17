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

s32 sub_08000794(s16 arg1, void *arg3, s16 arg4) {
    s32 var_r1;
    u32 var_r0;

    if (arg1 == 0) {
        arg4 = arg1;
        M2C_FIELD((void *)0x040000D4, s16 **, 0) = &arg4;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) M2C_FIELD(arg3, s32 *, 0xC);
        var_r0 = (u32) M2C_FIELD(arg3, u32 *, 0x10) >> 1;
        var_r1 = 0x81000000;
    } else {
        M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *) arg1;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) M2C_FIELD(arg3, s32 *, 0xC);
        var_r0 = (u32) M2C_FIELD(arg3, u32 *, 0x10) >> 1;
        var_r1 = 0x80000000;
    }
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (var_r0 | var_r1);
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
