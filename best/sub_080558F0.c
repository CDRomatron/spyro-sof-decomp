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

M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */
M2C_UNK sub_0804EF40();                             /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
extern M2C_UNK sub_08055630;

s32 sub_080558F0(void *arg1) {
    s32 var_r0;
    s32 var_r1;

    sub_0804EF40();
    sub_08004020(M2C_FIELD(arg1, s32 *, 0));
    var_r1 = M2C_FIELD(arg1, s32 *, 4);
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    var_r0 = M2C_FIELD(arg1, s32 *, 8);
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    sub_080042A4(M2C_FIELD(arg1, s32 *, 0), var_r1 >> 8, var_r0 >> 8);
    if (0xF & *(u16 *)0x030010B0) {
        sub_080501CC(arg1, &sub_08055630);
    }
    return 1;
}
