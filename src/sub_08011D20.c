/* identical to sub_08011D40 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_080502E8(s32);                              /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

s32 sub_08011D20(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r5;

    var_r5 = 0;
    temp_r2 = sub_080502E8(arg0 + 0xC);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x6C) - 0x40;
    M2C_FIELD(arg0, s32 *, 0x6C) = temp_r1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14) + temp_r1;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r0;
    if (temp_r0 < temp_r2) {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_r2;
        temp_r0_2 = sub_08063D80((0 - temp_r1) * arg1, 0x100);
        M2C_FIELD(arg0, s32 *, 0x6C) = temp_r0_2;
        if (temp_r0_2 <= 0x3F) {
            M2C_FIELD(arg0, s32 *, 0x6C) = 0;
            var_r5 = 1;
        }
    }
    return var_r5;
}
