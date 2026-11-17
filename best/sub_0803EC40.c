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

M2C_UNK sub_08006FD4(s32);                          /* extern */
M2C_UNK sub_08007B74();                             /* extern */
M2C_UNK sub_08007BFC();                             /* extern */
M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_0803ED8C;

s32 sub_0803EC40(u16 arg0, void *arg2) {
    u16 temp_r0;

    temp_r0 = arg0;
    if (((s32) temp_r0 <= 2) && ((s32) temp_r0 >= 1)) {
        sub_0800F538();
        if (M2C_FIELD(arg2, u8 *, 0x50) != 0) {
            sub_08007BFC();
            sub_08007B74();
            sub_08006FD4(0);
            sub_080501CC(arg2, &sub_0803ED8C);
        } else {
            sub_080534A0(3);
        }
    }
    return 1;
}
