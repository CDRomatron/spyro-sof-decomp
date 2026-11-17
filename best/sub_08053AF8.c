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
extern M2C_UNK sub_080531D8;
extern M2C_UNK sub_080533D4;

void sub_08053AF8(s8 arg0, s32 arg1) {
    s32 var_r0;
    void *temp_r5;

    temp_r5 = *(void **)0x03001634;
    switch (arg1) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r0 = 0x08171010;
block_8:
        sub_0800328C(var_r0);
        sub_080096A4(8, 5, &sub_080533D4);
        return;
    case 1:                                         /* switch 1 */
        switch (arg0) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_r0 = 0x0817102C;
            goto block_8;
        case 1:                                     /* switch 2 */
            sub_0800328C(0x0817102C);
            M2C_FIELD(temp_r5, s8 *, 0x3E) = arg0;
            sub_08009B74(&sub_080531D8);
            return;
        }
        break;
    }
}
