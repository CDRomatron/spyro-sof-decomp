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

M2C_UNK sub_08008810(s32, s32, void *);             /* extern */
M2C_UNK sub_08037ED0(void *, s32);                  /* extern */

s32 sub_08038290(void *arg1, u16 arg2, s32 arg3) {
    u16 temp_r2;

    temp_r2 = arg2;
    switch (temp_r2) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        M2C_FIELD(arg1, s32 *, 0x3C) = arg3;
        sub_08008810(arg3, M2C_FIELD(arg1, s32 *, 0x40), arg1 + 0x30);
        /* fallthrough */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
block_8:
        return 1;
    case 9:                                         /* switch 1 */
        switch (arg3) {                             /* switch 2; irregular */
        case 0x48:                                  /* switch 2 */
            M2C_FIELD(arg1, s32 *, 0x60) = 0;
            sub_08037ED0(arg1, 1);
            goto block_8;
        case 0x4C:                                  /* switch 2 */
            M2C_FIELD(arg1, s8 *, 0x90) = 0;
            goto block_8;
        }
        break;
    default:                                        /* switch 1 */
        return 0;
    }
}
