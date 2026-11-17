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

s32 sub_080058C0(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = arg1;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (arg0 + ((arg2 * 2) + 0x44));
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) ((arg3 >> 1) | 0x80000000);
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
