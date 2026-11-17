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

M2C_UNK sub_080545E8(u8);                           /* extern */

s32 sub_08021B22(s32 arg0, void *arg1, u16 arg2, s32 arg3) {
    s32 var_r0;
    u8 temp_r0;

    var_r0 = 0;
    if ((arg2 == 9) && (arg3 == 0x28)) {
        temp_r0 = M2C_FIELD(arg1, u8 *, 0x46) - 1;
        M2C_FIELD(arg1, u8 *, 0x46) = temp_r0;
        if ((temp_r0 << 0x18) == 0) {
            M2C_FIELD(arg1, s8 *, 0x48) = 1;
        }
        sub_080545E8(M2C_FIELD(arg1, u8 *, 0x46));
        var_r0 = 1;
    }
    return var_r0;
}
