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

void *sub_08009F74(u16);                            /* extern */
M2C_UNK sub_0800A2D8(u16);                          /* extern */
M2C_UNK sub_0804A3E8(s32, s16, s16, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0804E77C(s32, s32, s32, s32, s32, s32); /* extern */

void sub_0804A824(u16 arg0) {
    s16 temp_r4;
    u32 *var_r4;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 var_r6;
    u32 var_r6_2;
    void *temp_r0;
    void *var_r5;

    temp_r0 = sub_08009F74(arg0);
    temp_r7 = M2C_FIELD(temp_r0, u32 *, 4);
    var_r4 = temp_r0 + 8;
    var_r6 = 0;
    if (temp_r7 > 0U) {
        do {
            sub_0804A3E8(M2C_FIELD(*(void **)0x030026A4, s32 *, 0xA0), M2C_FIELD(var_r4, s16 *, 4), M2C_FIELD(var_r4, s16 *, 6), 0, (s32) M2C_FIELD(var_r4, u8 *, 0), (s32) M2C_FIELD(var_r4, u8 *, 2), 2);
            var_r6 += 1;
            var_r4 += 0xC;
        } while (var_r6 < temp_r7);
    }
    temp_r7_2 = *var_r4;
    var_r5 = var_r4 + 4;
    var_r6_2 = 0;
    if (temp_r7_2 > 0U) {
        do {
            temp_r4 = M2C_FIELD(var_r5, s16 *, 0);
            if (((s32) temp_r4 > 0xF) || ((s32) temp_r4 < 7)) {
                sub_0804E77C(M2C_FIELD(var_r5, s16 *, 8) << 8, M2C_FIELD(var_r5, s16 *, 0xA) << 8, M2C_FIELD(var_r5, s16 *, 0xC) << 8, M2C_FIELD(var_r5, s16 *, 0xE) << 8, (s32) temp_r4, (s32) M2C_FIELD(var_r5, s16 *, 4));
            }
            var_r6_2 += 1;
            var_r5 += 0x10;
        } while (var_r6_2 < temp_r7_2);
    }
    sub_0800A2D8(arg0);
}
