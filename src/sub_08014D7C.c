/* identical to sub_08014D98 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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
s32 sub_08004508();                                 /* extern */

s32 sub_08014D7C(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r1;

    temp_r1 = sub_08004508();
    if (arg2 == 8) {
        if (temp_r1 == M2C_FIELD(arg1, s32 *, 0x5C)) {
            sub_08003C58(arg0, M2C_FIELD(arg1, s32 *, 0x60));
        } else if ((temp_r1 == M2C_FIELD(arg1, s32 *, 0x64)) || (temp_r1 == M2C_FIELD(arg1, s32 *, 0x68))) {
            M2C_FIELD(arg1, s8 *, 0x72) = 0;
        }
    }
    return 1;
}
