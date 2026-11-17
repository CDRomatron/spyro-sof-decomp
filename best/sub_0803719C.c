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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
extern M2C_UNK sub_080372A8;

s32 sub_0803719C(void *arg1, u16 arg2, u32 arg3) {
    s32 var_r0;
    u16 temp_r2;

    temp_r2 = arg2;
    switch (temp_r2) {                              /* switch 1; irregular */
    case 9:                                         /* switch 1 */
        switch (arg3) {                             /* switch 2; irregular */
        case 0x43:                                  /* switch 2 */
            M2C_FIELD(arg1, M2C_UNK **, 0x58) = &sub_080372A8;
            sub_08003C58(M2C_FIELD(arg1, s32 *, 0x54), 0x1C0001);
            sub_08004408(M2C_FIELD(arg1, s32 *, 0x54), -1);
            M2C_FIELD(arg1, s8 *, 0x62) = 1;
        case 6:                                     /* switch 1 */
        case 5:                                     /* switch 1 */
block_13:
            return 1;
        case 0x45:                                  /* switch 2 */
            var_r0 = 0xF800;
block_17:
            M2C_FIELD(arg1, s32 *, 0x5C) = var_r0;
            goto block_13;
        case 0x47:                                  /* switch 2 */
            var_r0 = 0x800;
            goto block_17;
        case 0x46:                                  /* switch 2 */
            var_r0 = 0;
            goto block_17;
        }
        break;
    default:                                        /* switch 1 */
        return 0;
    }
}
