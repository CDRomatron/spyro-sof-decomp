/* identical to sub_08050410 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 *sub_0804F724(M2C_UNK, M2C_UNK, s32, s32);      /* extern */

void sub_08050274(M2C_UNK arg0, M2C_UNK arg1, void *arg2, s32 arg3) {
    s32 *temp_r0;

    temp_r0 = sub_0804F724(arg0, arg1, arg3, 1);
    if (temp_r0 != NULL) {
        *temp_r0 = M2C_FIELD(arg2, s32 *, 0) + M2C_FIELD(arg2, s32 *, 4);
    }
}
