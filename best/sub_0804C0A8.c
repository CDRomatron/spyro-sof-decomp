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

M2C_UNK sub_0800328C(s32);                          /* extern */
M2C_UNK sub_080096A4(s32, s32, M2C_UNK *);          /* extern */
M2C_UNK sub_08009B74(M2C_UNK *);                    /* extern */
extern M2C_UNK sub_0804BEF8;
extern M2C_UNK sub_0804BFA0;

void sub_0804C0A8(s8 arg0, s32 arg1) {
    s32 var_r0;

    switch (arg1) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r0 = 0x08171010;
block_8:
        sub_0800328C(var_r0);
        sub_080096A4(8, 5, &sub_0804BFA0);
        return;
    case 1:                                         /* switch 1 */
        switch (arg0) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_r0 = 0x0817102C;
            goto block_8;
        case 1:                                     /* switch 2 */
            sub_0800328C(0x0817102C);
            M2C_FIELD(*(void **)0x030026A4, s8 *, 0xD5) = arg0;
            sub_08009B74(&sub_0804BEF8);
            return;
        }
        break;
    }
}
