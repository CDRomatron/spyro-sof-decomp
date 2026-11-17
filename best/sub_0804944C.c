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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */

s32 sub_0804944C(void *arg1, s32 arg2) {
    if ((arg2 == 8) && (M2C_FIELD(arg1, s32 *, 0x34) == 1)) {
        sub_08003C58(M2C_FIELD(arg1, s32 *, 0x10), 0x880000);
        M2C_FIELD(arg1, s32 *, 0x34) = 0;
    }
    return 1;
}
