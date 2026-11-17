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

u8 sub_080641D8(s32, void *, u16, s32);             /* extern */

u8 sub_0800FD50(s32 arg0, void *arg1, u16 arg2, s32 arg3) {
    u8 var_r3;

    var_r3 = 0;
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x10) != 0) {
        var_r3 = sub_080641D8(arg0, arg1, arg2, arg3);
    }
    return var_r3;
}
