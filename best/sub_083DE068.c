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

/* Warning: missing "bx $lr" in last block of sub_083DE068 (initial). */

void *sub_083DE068(void *arg0, s32 arg1, void *arg2, void *arg3, s32 arg4, M2C_UNK arg74, M2C_UNK argA7, M2C_UNK argC4) {
    u16 temp_r6;

    temp_r6 = M2C_FIELD(arg3, u16 *, 0x1E);
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) arg0;
    M2C_FIELD(arg2, s8 *, 0x16) = (s8) arg0;
    arg4 = temp_r6 * 2;
    *(temp_r6 + &argA7) = (s16) arg3;
    return arg0;
}
