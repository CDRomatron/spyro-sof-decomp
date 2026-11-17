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
s32 sub_08004508();                                 /* extern */

s32 sub_0803B578(s32 arg0, void *arg1, s32 arg2) {
    if (sub_08004508() == 0x3B0003) {
        if (arg2 == 8) {
            M2C_FIELD(arg1, s8 *, 0x75) = 1;
        }
    } else if (arg2 == 0x20) {
        sub_08003DA8(arg0, -1);
        sub_08004408(arg0, 0);
    } else if (arg2 == 8) {
        sub_08003DA8(arg0, 0);
        sub_08004408(arg0, 0);
    }
    return 1;
}
