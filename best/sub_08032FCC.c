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

M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08050098(void *, M2C_UNK *, void *);    /* extern */
extern M2C_UNK sub_08033018;

s32 sub_08032FCC(void *arg1, u16 arg2, s32 arg3) {
    s32 var_r0;

    var_r0 = 0;
    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 0x3A:
            sub_0800FE28(arg1, M2C_FIELD(arg1, s32 *, 0x378), 0x3A);
            break;
        case 0x3C:
            M2C_FIELD(arg1, s32 *, 0x70) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) + 0x1000);
            sub_08050098(arg1 + 0x68, &sub_08033018, arg1);
            break;
        }
        var_r0 = 1;
    }
    return var_r0;
}
