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
M2C_UNK sub_08005CA0(s32, M2C_UNK *);               /* extern */
s32 sub_080072C0(u8);                               /* extern */
s32 sub_080072FC();                                 /* extern */
M2C_UNK sub_080501CC(s32, M2C_UNK *);               /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08053A88;

void sub_080539E4(u8 arg0, u16 arg1) {
    s32 temp_r4;
    s32 var_r8;
    u8 *var_r5;
    u8 temp_r7;
    void *temp_r6;

    temp_r7 = arg0;
    temp_r6 = *(void **)0x03001634;
    M2C_FIELD(temp_r6, s8 *, 0x36) = 0;
    if (((s32) temp_r7 <= 0x26) && ((s32) temp_r7 >= 0x23)) {
        var_r8 = 0;
        M2C_FIELD(temp_r6, s8 *, 0x36) = 1;
        var_r5 = temp_r6 + 0x36;
    } else {
        var_r8 = 5;
        temp_r4 = sub_080072C0(temp_r7);
        var_r5 = temp_r6 + 0x36;
        if ((temp_r4 << 0x18) != (sub_080072FC() << 0x18)) {
            M2C_FIELD(temp_r6, s8 *, 0x36) = 1;
        }
    }
    M2C_FIELD(temp_r6, s32 *, 0x10) = var_r8;
    M2C_FIELD(temp_r6, s32 *, 0x14) = (s32) ((arg1 << 8) | (0x53000000 | temp_r7));
    sub_080534A0(0);
    if (*var_r5 != 0) {
        sub_08005CA0(0, &sub_08053A88);
        sub_080030BC(0x3C);
        return;
    }
    sub_080501CC(0, &sub_08053A88);
}
