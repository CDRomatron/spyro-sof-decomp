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

s32 sub_08058D2C(void) {
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (*(s32 *)0x030008D8 + 0x1680);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x07000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000200;
    return 1;
}
