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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08050098(void *, M2C_UNK *, void *);    /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
s32 sub_080529D4();                                 /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08020A68;
extern s32 sub_08020DE8;
extern M2C_UNK sub_08020F48;

s32 sub_08020D78(void *arg1, u16 arg2, s32 arg3) {
    s32 var_r0;

    var_r0 = 0;
    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 38:
            sub_080534A0(5);
            sub_0800FE28(arg1, sub_080529D4(), 7);
            sub_080501CC(arg1, &sub_08020A68);
            sub_08003220(0x08170CC8);
            break;
        case 39:
            M2C_FIELD(arg1, s8 *, 0x4A) = 1;
            sub_080534A0(5);
            sub_08050098(arg1 + 0xC, &sub_08020F48, arg1);
            sub_08003220(sub_08020DE8);
            break;
        }
        var_r0 = 1;
    }
    return var_r0;
}
