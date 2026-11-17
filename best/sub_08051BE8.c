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

s32 sub_08063D80(s32, s32);                         /* extern */

s32 sub_08051BE8(s32 arg0, s32 arg1) {
    return sub_08063D80(sub_08063D80((0x1000 - arg1) * 0x16A, 0x100) * (s16) *(u16 *)0x08065DC8, 0x100) + ((0xF & arg0) << 0xC);
}
