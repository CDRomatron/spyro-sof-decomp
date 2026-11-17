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

M2C_UNK sub_080035D8(s32);                          /* extern */
M2C_UNK sub_08056298();                             /* extern */
s32 sub_080569AC(s32);                              /* extern */

s32 sub_080570C0(void) {
    s16 temp_r0;
    s16 var_r0;
    u16 *var_r2;
    u16 temp_r0_2;
    u32 var_r3;
    void *temp_r4;

    temp_r4 = *(void **)0x030008D4;
    sub_08056298();
    if ((s32) M2C_FIELD(temp_r4, s16 *, 0x7C4) <= 0x10) {
        *(u16 *)0x030011B0 = 0xFF;
        *(u16 *)0x030011B4 = 0x10 - (u16) M2C_FIELD(temp_r4, s16 *, 0x7C4);
        temp_r0 = (u16) M2C_FIELD(temp_r4, s16 *, 0x7C4) + 1;
        M2C_FIELD(temp_r4, s16 *, 0x7C4) = temp_r0;
        var_r0 = temp_r0;
        if ((s32) var_r0 > 0x10) {
            M2C_FIELD(temp_r4, u16 *, 0x7C0) = 0x14U;
            M2C_FIELD(temp_r4, s16 *, 0x7C2) = 0x14;
            sub_080035D8(0x0816E7BC);
            var_r3 = 0;
            if ((u32) M2C_FIELD(temp_r4, u8 *, 0x7D1) > 0U) {
                var_r2 = temp_r4 + 0x64;
                do {
                    *var_r2 = (0xFF00 & *var_r2) | 0x94;
                    var_r2 += 8;
                    var_r3 += 1;
                } while (var_r3 < (u32) M2C_FIELD(temp_r4, u8 *, 0x7D1));
            }
            M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (temp_r4 - ((M2C_FIELD(temp_r4, u8 *, 0x7D1) * 8) + 0xFFFFFB9C));
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x07000000;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) ((M2C_FIELD(temp_r4, u8 *, 0x7D1) * 4) | 0x80000000);
            return M2C_FIELD((void *)0x040000D4, s32 *, 8);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return (s32) var_r0;
    }
    temp_r0_2 = M2C_FIELD(temp_r4, u16 *, 0x7C0);
    if (temp_r0_2 == 0) {
        return sub_080569AC(3);
    }
    var_r0 = temp_r0_2 - 1;
    M2C_FIELD(temp_r4, u16 *, 0x7C0) = (u16) var_r0;
    return (s32) var_r0;
}
