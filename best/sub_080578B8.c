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

M2C_UNK sub_080030BC(s32);                          /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_080096A4(s32, s32, M2C_UNK *);          /* extern */
M2C_UNK sub_08009B74(M2C_UNK *);                    /* extern */
extern M2C_UNK sub_08056D94;
extern M2C_UNK sub_08056E58;
extern M2C_UNK sub_08057974;
extern M2C_UNK sub_08057AC0;
extern M2C_UNK sub_08057AE4;
extern M2C_UNK sub_08057B28;

void sub_080578B8(s32 arg0, s32 arg1) {
    M2C_UNK *var_r2;
    s32 var_r0;

    if (arg1 == 1) {
        switch (arg0) {                             /* irregular */
        case 1:
            sub_08003220(0x0817102C);
            var_r2 = &sub_08056D94;
            var_r0 = 0xB;
block_7:
            sub_080096A4(var_r0, 0, var_r2);
            return;
        case 0:
            sub_08003220(0x0817102C);
            var_r2 = &sub_08056E58;
            var_r0 = 0xA;
            goto block_7;
        case 2:
            sub_08003220(0x0817102C);
            var_r2 = &sub_08057974;
            var_r0 = 7;
            goto block_7;
        case 3:
            sub_08003220(0x0817102C);
            sub_080030BC(0x3C);
            sub_08009B74(&sub_08057AC0);
            return;
        case 4:
            sub_08003220(0x0817102C);
            sub_080030BC(0x3C);
            sub_08009B74(&sub_08057B28);
            return;
        case 5:
            sub_08003220(0x0817102C);
            sub_080030BC(0x3C);
            sub_08009B74(&sub_08057AE4);
            break;
        }
    }
}
