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
M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */

s32 sub_0804A1D8(void *arg1, s32 arg2) {
    u32 temp_r0;

    if (arg2 != 8) {
        if ((arg2 == 0x20) && (M2C_FIELD(arg1, u32 *, 0x3C) == 2)) {
            sub_08003DA8(M2C_FIELD(arg1, s32 *, 0x28), -1);
            sub_08004408(M2C_FIELD(arg1, s32 *, 0x28), 0);
        }
    } else {
        temp_r0 = M2C_FIELD(arg1, u32 *, 0x3C);
        switch (temp_r0) {                          /* irregular */
        default:
        case 2:
            sub_08003C58(M2C_FIELD(arg1, s32 *, 0x28), 0x8A0007);
            break;
        case 1:
            sub_08003C58(M2C_FIELD(arg1, s32 *, 0x28), 0x8A0002);
            break;
        }
    }
    return 0;
}
