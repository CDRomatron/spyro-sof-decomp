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

s32 sub_0801E240(void *arg1, u32 arg2) {
    switch (arg2) {                                 /* irregular */
    case 4:
        break;
    case 8:
        sub_08003DA8(M2C_FIELD(arg1, s32 *, 0x24), -1);
        sub_08004408(M2C_FIELD(arg1, s32 *, 0x24), 0);
        break;
    }
    return 1;
}
