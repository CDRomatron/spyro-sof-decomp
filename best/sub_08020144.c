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

M2C_UNK _0801F9AC(void *, s32);                     /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
u8 sub_08007324();                                  /* extern */
u8 sub_0800789C();                                  /* extern */
M2C_UNK sub_080207A4(void *);                       /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08020144(void *arg2) {
    s32 *var_r1;
    s32 *var_r4;
    s32 temp_r0_2;
    s32 var_r0;
    u32 var_r6;
    u8 temp_r1;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x108, 0);
    sub_08065CF0(temp_r0, 0, 0x108);
    M2C_FIELD(temp_r0, s32 *, 0x24) = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0xE4) = 0;
    temp_r1 = sub_0800789C();
    if (temp_r1 != 0) {
        M2C_FIELD(temp_r0, s32 *, 0xFC) = (s32) (sub_0800789C() - 1);
    } else {
        M2C_FIELD(temp_r0, s32 *, 0xFC) = (s32) temp_r1;
    }
    sub_080207A4(temp_r0);
    if ((u32) (sub_08007324() - 0x27) <= 3U) {
        var_r1 = temp_r0 + 0x100;
        var_r0 = 1;
    } else {
        var_r1 = temp_r0 + 0x100;
        var_r0 = 0;
    }
    *var_r1 = var_r0;
    var_r6 = 0;
    var_r4 = temp_r0 + 0x3C;
    do {
        temp_r0_2 = sub_08004370();
        *var_r4 = temp_r0_2;
        sub_08003C58(temp_r0_2, 0x120012);
        var_r4 += 0x14;
        var_r6 += 1;
    } while (var_r6 <= 7U);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8) + 0x1400);
    _0801F9AC(temp_r0, 0);
    return temp_r0;
}
