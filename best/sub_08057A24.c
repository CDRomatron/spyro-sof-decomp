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
u32 sub_08004508();                                 /* extern */
s32 sub_0800897C();                                 /* extern */

s32 sub_08057A24(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r1;
    u32 temp_r2;

    temp_r2 = sub_08004508();
    if (arg2 == 8) {
        switch (temp_r2) {                          /* switch 1; irregular */
        default:                                    /* switch 1 */
            var_r1 = 0x50001;
            switch (temp_r2) {                      /* switch 2; irregular */
            case 0x50001:                           /* switch 2 */
                if ((3 & sub_0800897C()) == 1) {
                    var_r1 = 0x50002;
                case 0x50000:                       /* switch 2 */
block_15:
                    sub_08003C58(arg0, var_r1);
                }
                break;
            case 0x40002:                           /* switch 1 */
            case 0x50002:                           /* switch 2 */
                M2C_FIELD(arg1, s8 *, 0x11) = 0;
                break;
            }
            break;
        case 0x40000:                               /* switch 1 */
            var_r1 = 0x40001;
            goto block_15;
        case 0x40001:                               /* switch 1 */
            if ((3 & sub_0800897C()) == 1) {
                sub_08003C58(arg0, 0x40002);
            }
            break;
        }
    }
    return 1;
}
