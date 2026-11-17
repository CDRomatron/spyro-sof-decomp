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
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080044A4(s32, s32);                     /* extern */
s32 sub_0800D9EC(void *, void *);                   /* extern */
s32 sub_080502E8(void *);                           /* extern */

u8 sub_08015E18(void *arg0) {
    u32 var_r7;
    u8 temp_r1;
    void *var_r4;
    void *var_r6;

    var_r7 = 0;
    if ((u32) M2C_FIELD(arg0, u8 *, 0x1B4) > 0U) {
        var_r4 = arg0 + 0x5C;
        var_r6 = arg0 + 0x24;
        do {
            if ((M2C_FIELD(var_r4, u8 *, 0x14) != 0) && (sub_0800D9EC(var_r6, var_r4) == 3)) {
                M2C_FIELD(var_r4, u8 *, 0x14) = 0U;
                if (sub_080502E8(var_r4) == 0) {
                    sub_08003C58(M2C_FIELD(var_r4, s32 *, 0xC), 0x780004);
                    sub_080044A4(M2C_FIELD(var_r4, s32 *, 0xC), 1);
                } else {
                    sub_08003C58(M2C_FIELD(var_r4, s32 *, 0xC), 0x5F0001);
                }
            }
            if (M2C_FIELD(var_r4, u8 *, 0x15) != 0) {
                M2C_FIELD(arg0, u8 *, 0x1B5) = (u8) (M2C_FIELD(arg0, u8 *, 0x1B5) - 1);
            } else {
                sub_08004020(M2C_FIELD(var_r4, s32 *, 0xC));
            }
            var_r4 += 0x50;
            var_r6 += 0x50;
            var_r7 += 1;
        } while (var_r7 < (u32) M2C_FIELD(arg0, u8 *, 0x1B4));
    }
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x1B5);
    if (temp_r1 == 0) {
        M2C_FIELD(arg0, u8 *, 0x1B6) = temp_r1;
    }
    return M2C_FIELD(arg0, u8 *, 0x1B6);
}
