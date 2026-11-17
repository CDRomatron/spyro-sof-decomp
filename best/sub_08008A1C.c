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

M2C_UNK sub_0800217C(M2C_UNK *, s32, s32, s32);     /* extern */
s32 sub_08002498(s32, M2C_UNK **);                  /* extern */
M2C_UNK sub_08002640(s32, u32, u16);                /* extern */
u16 sub_080026B8(M2C_UNK *, s32, s32);              /* extern */
s32 sub_080071F0(u8, u32 *);                        /* extern */
M2C_UNK sub_08007218(u8, s32 *);                    /* extern */
M2C_UNK sub_08008574(u32, M2C_UNK *, s32);          /* extern */
u32 sub_0806436C(s32, s32);                         /* extern */

u16 sub_08008A1C(u8 arg0, u16 arg1) {
    M2C_UNK sp0;
    u32 sp20;
    s32 sp24;
    M2C_UNK *sp28;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 var_r6;
    u16 temp_r0;
    u32 temp_r0_3;
    u32 var_r4;
    u8 temp_r4;
    u8 var_r0;
    u8 var_r0_2;
    void *temp_r5;

    temp_r4 = arg0;
    temp_r5 = *(void **)0x030008B8;
    if ((sub_080071F0(temp_r4, &sp20) << 0x18) != 0) {
        sub_08007218(temp_r4, &sp24);
        var_r4 = sub_0806436C(sp24, 0x34BC0);
        if (var_r4 > 0x63U) {
            var_r4 = 0x63;
        }
        sub_08008574(var_r4, &sp0, 2);
        temp_r0_2 = sp24 - (var_r4 * 0x34BC0);
        sp24 = temp_r0_2;
        temp_r0_3 = sub_0806436C(temp_r0_2, 0xE10);
        sub_08008574(temp_r0_3, &sp0 + 3, 2);
        var_r0 = M2C_FIELD(&sp0, u8 *, 3);
        if (var_r0 == 0) {
            var_r0 = *M2C_FIELD(temp_r5, u8 **, 0x24);
        }
        M2C_FIELD(&sp0, u8 *, 3) = var_r0;
        temp_r0_4 = sp24 - (temp_r0_3 * 0xE10);
        sp24 = temp_r0_4;
        sub_08008574(sub_0806436C(temp_r0_4, 0x3C), &sp0 + 6, 2);
        var_r0_2 = M2C_FIELD(&sp0, u8 *, 6);
        if (var_r0_2 == 0) {
            var_r0_2 = *M2C_FIELD(temp_r5, u8 **, 0x24);
        }
        M2C_FIELD(&sp0, u8 *, 6) = var_r0_2;
        M2C_FIELD(&sp0, u8 *, 2) = (u8) *M2C_FIELD(temp_r5, u8 **, 0x30);
        M2C_FIELD(&sp0, u8 *, 5) = (u8) *M2C_FIELD(temp_r5, u8 **, 0x30);
        M2C_FIELD(&sp0, u8 *, 8) = (u8) *M2C_FIELD(temp_r5, u8 **, 0x34);
        M2C_FIELD(&sp0, s8 *, 9) = 0;
        sub_08008574(sp20 >> 8, &sp0 + 0xA, 3);
        M2C_FIELD(&sp0, u8 *, 0xE) = (u8) *(M2C_FIELD(temp_r5, u8 **, 0x24) + sub_0806436C((s32) (u8) sp20, 0x1A));
        M2C_FIELD(&sp0, u8 *, 0xD) = (u8) *M2C_FIELD(temp_r5, u8 **, 0x28);
        M2C_FIELD(&sp0, u8 *, 0xF) = (u8) *M2C_FIELD(temp_r5, u8 **, 0x2C);
        sp28 = &sp0;
        var_r6 = 0x10;
    } else {
        var_r6 = sub_08002498(0x258, &sp28);
    }
    temp_r0 = sub_080026B8(sp28, var_r6, M2C_FIELD(temp_r5, s32 *, 0x10));
    sub_08002640(M2C_FIELD(temp_r5, s32 *, 8), (u32) ((0xF0 - temp_r0) << 0xF) >> 0x10, (u16) (arg1 * 8));
    sub_0800217C(sp28, var_r6, M2C_FIELD(temp_r5, s32 *, 8), 1);
    return temp_r0;
}
