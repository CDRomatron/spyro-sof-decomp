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

/* Warning: missing "bx $lr" in last block of sub_08002670 (_0800268E). */

M2C_UNK sub_08002BE0(s32, s32);                     /* extern */

s32 sub_08002670(void *arg0, s16 arg1, s16 arg2, u16 arg3, s32 arg4, s32 arg5) {
    s32 temp_r0;

    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = arg2;
    M2C_FIELD(arg0, u16 *, 4) = arg3;
    M2C_FIELD(arg0, u16 *, 6) = (u16) arg4;
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) arg5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 != 0) {
        sub_08002BE0(temp_r0, M2C_FIELD(arg0, s32 *, 0x10));
    }
    return ((M2C_FIELD(arg0, u16 *, 6) * 2 * M2C_FIELD(arg0, u16 *, 4)) + 3) & ~3;
}
