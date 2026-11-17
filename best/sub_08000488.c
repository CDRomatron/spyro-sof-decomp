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

M2C_UNK sub_080003D8();                             /* extern */
extern M2C_UNK sub_080007D4;

void sub_08000488(s32 arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp0;
    u8 **sp4;
    s32 temp_r1;
    s32 var_r2;
    s32 var_r6;
    u8 **var_r3;
    u8 *var_r4;

    sp0 = arg3;
    var_r4 = NULL;
    var_r6 = 0;
    var_r3 = (u8 **)0x03001100;
loop_1:
    var_r2 = 0;
    if (**(u8 **)0x03001100 == 0) {
        var_r4 = *(u8 **)0x03001100;
    } else {
loop_3:
        var_r2 += 1;
        if (var_r2 <= 0xF) {
            temp_r1 = var_r2 * 0x18;
            if (*(temp_r1 + *(u8 **)0x03001100) == 0) {
                var_r4 = *var_r3 + temp_r1;
                var_r6 = 1;
            } else {
                goto loop_3;
            }
        }
        if (var_r6 == 0) {
            sp4 = var_r3;
            sub_080003D8();
            goto loop_1;
        }
    }
    M2C_FIELD(var_r4, s32 *, 8) = arg0;
    M2C_FIELD(var_r4, s32 *, 0xC) = arg1;
    M2C_FIELD(var_r4, M2C_UNK **, 4) = &sub_080007D4;
    M2C_FIELD(var_r4, s16 *, 0x10) = arg2;
    M2C_FIELD(var_r4, u16 *, 0x12) = (u16) sp0;
    M2C_FIELD(var_r4, s16 *, 0x14) = (s16) arg4;
    M2C_FIELD(var_r4, s16 *, 0x16) = (s16) ((arg5 & 0xF) << 0xC);
    M2C_FIELD(var_r4, u8 *, 0) = 1;
}
