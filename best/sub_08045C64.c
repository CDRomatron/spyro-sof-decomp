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

u8 sub_0804B6E8(s32);                               /* extern */

u8 sub_08045C64(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r1;

    var_r0 = arg0 + arg2;
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    temp_r2 = var_r0 >> 0xB;
    var_r1 = arg1 + arg3;
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    temp_r1 = var_r1 >> 0xB;
    if ((temp_r2 < 0) || (temp_r1 < 0) || (temp_r2 > (s32) (M2C_FIELD(*(void **)0x030026A4, s32 *, 0x90) * 4)) || (temp_r1 > (s32) M2C_FIELD(*(void **)0x030026A4, s32 *, 0x94))) {
        return 3U;
    }
    return sub_0804B6E8(temp_r2);
}
