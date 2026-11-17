/* identical to sub_08023324 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_0805445C(s32, s32, M2C_UNK *);          /* extern */
extern M2C_UNK sub_08023474;

s32 sub_080232FC(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 8) {
        sub_08003DA8(arg0, -1);
        sub_08004408(arg0, 0);
        sub_0805445C(1, arg1, &sub_08023474);
    }
    return 1;
}
