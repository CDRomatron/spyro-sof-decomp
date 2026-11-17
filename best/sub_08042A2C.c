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

M2C_UNK sub_080003D8();                             /* extern */
M2C_UNK sub_08000488(s32, s32, s32, s32);           /* extern */
s32 sub_08001F84(u8 *, u16, void *);                /* extern */
M2C_UNK sub_0800217C(u8 *, u16, void *, s32);       /* extern */
u16 sub_08002498(s32, u8 **);                       /* extern */
M2C_UNK sub_08002534(s32, s32);                     /* extern */
M2C_UNK sub_08002564(void *);                       /* extern */
M2C_UNK sub_080025B4(void *);                       /* extern */
M2C_UNK sub_08002640(void *, u32, u16);             /* extern */
s32 sub_080026B8(u8 *, u16, s32);                   /* extern */
M2C_UNK sub_08003314();                             /* extern */
u8 sub_08007874(s32);                               /* extern */
M2C_UNK sub_08008574(u32, M2C_UNK *, s32);          /* extern */
s32 sub_0800A3D4(s32);                              /* extern */
M2C_UNK sub_0800A400(s32, s32);                     /* extern */
M2C_UNK sub_0800A474(s32, s32);                     /* extern */
M2C_UNK sub_080426B0(s32, s32, s32);                /* extern */
u32 sub_0806436C(s32, s32);                         /* extern */

void sub_08042A2C(s32 arg0) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp8;
    u8 *sp10;
    M2C_UNK *sp14;
    M2C_UNK *sp18;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5_2;
    s32 temp_r5_3;
    u16 var_r6;
    u16 var_r8;
    u32 temp_r0;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r5;
    u8 *var_r7;
    u8 temp_r0_2;
    u8 temp_r0_4;
    u8 temp_r0_6;
    u8 var_r0;
    u8 var_r0_2;
    void *temp_r1;
    void *temp_r2;
    void *temp_r5;

    temp_r1 = *(void **)0x030008D0;
    sub_08002564(M2C_FIELD(temp_r1, void **, 0x4C));
    sub_0800A400(0xB7, 0x030011C0);
    sub_0800A474(0x83, 0x06008180);
    sub_08003314();
    sub_0800A400(0xB0, 0x03001320);
    sub_0800A400(0xB1, 0x03001340);
    sub_08002534(M2C_FIELD(temp_r1, s32 *, 0x48), 0xF);
    var_r7 = sp10;
    var_r6 = sub_08002498(5, &sp10);
    var_r8 = 0;
    temp_r5 = *(void **)0x030008D0;
    sp14 = &sp0 + 0xB;
    sp18 = &sp0 + 0xE;
    if (var_r6 != 0) {
        do {
            sub_08002640(M2C_FIELD(temp_r5, void **, 0x4C), 0U, var_r8);
            temp_r4 = sub_08001F84(var_r7, var_r6, M2C_FIELD(temp_r5, void **, 0x4C));
            temp_r2 = M2C_FIELD(temp_r5, void **, 0x4C);
            sub_08002640(temp_r2, (u32) (((M2C_FIELD(temp_r2, u16 *, 4) * 8) - sub_080026B8(var_r7, var_r6, M2C_FIELD(temp_r5, s32 *, 0x48))) << 0xF) >> 0x10, var_r8);
            sub_0800217C(var_r7, var_r6, M2C_FIELD(temp_r5, void **, 0x4C), 1);
            var_r8 += M2C_FIELD(M2C_FIELD(temp_r5, void **, 0x44), u16 *, 0x12);
            var_r7 = &var_r7[temp_r4];
            var_r6 -= temp_r4;
        } while (var_r6 != 0);
    }
    sub_080426B0(arg0 + 0x14, 0x20, 1);
    sub_08003314();
    sub_08002498(0x2BC, &sp10);
    temp_r5_2 = M2C_FIELD((void *)0x03001600, s32 *, 0x18);
    var_r4 = sub_0806436C(temp_r5_2, 0x34BC0);
    if (var_r4 > 0x63U) {
        var_r4 = 0x63;
    }
    sub_08008574(var_r4, &sp8, 2);
    temp_r5_3 = temp_r5_2 - (var_r4 * 0x34BC0);
    temp_r0 = sub_0806436C(temp_r5_3, 0xE10);
    sub_08008574(temp_r0, sp14, 2);
    var_r0 = M2C_FIELD(&sp8, u8 *, 3);
    if (var_r0 == 0) {
        var_r0 = *M2C_FIELD(temp_r1, u8 **, 0x60);
    }
    M2C_FIELD(&sp8, u8 *, 3) = var_r0;
    sub_08008574(sub_0806436C(temp_r5_3 - (temp_r0 * 0xE10), 0x3C), sp18, 2);
    var_r0_2 = M2C_FIELD(&sp8, u8 *, 6);
    if (var_r0_2 == 0) {
        var_r0_2 = *M2C_FIELD(temp_r1, u8 **, 0x60);
    }
    M2C_FIELD(&sp8, u8 *, 6) = var_r0_2;
    M2C_FIELD(&sp8, u8 *, 2) = (u8) *sp10;
    M2C_FIELD(&sp8, u8 *, 5) = (u8) *sp10;
    sub_08003314();
    var_r4_2 = 0;
    var_r5 = 0x40;
    do {
        if ((var_r4_2 == 2) || (var_r4_2 == 5)) {
            sub_08002640(M2C_FIELD(temp_r1, void **, 0x4C), (u32) (u16) (var_r5 + 3), 0x70U);
        } else {
            sub_08002640(M2C_FIELD(temp_r1, void **, 0x4C), var_r5, 0x70U);
        }
        sub_0800217C(&sp0 + var_r4_2 + 8, 1U, M2C_FIELD(temp_r1, void **, 0x4C), 1);
        var_r5 = (u32) (u16) (var_r5 + 8);
        sub_08003314();
        var_r4_2 += 1;
    } while (var_r4_2 <= 7U);
    sub_080025B4(M2C_FIELD(temp_r1, void **, 0x4C));
    sub_08003314();
    temp_r0_2 = sub_08007874(0x1C);
    temp_r4_2 = ((s32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F) & 0x20;
    temp_r0_3 = sub_0800A3D4(0x84) + (temp_r4_2 + 4);
    sp0 = 0xC;
    sp4 = 0;
    sub_08000488(temp_r0_3, 0x06002B56, 4, 4);
    sub_080003D8();
    temp_r0_4 = sub_08007874(0x1D);
    temp_r4_3 = ((s32) ((0 - temp_r0_4) | temp_r0_4) >> 0x1F) & 0x20;
    temp_r0_5 = sub_0800A3D4(0x84) + (temp_r4_3 + 4) + 0x40;
    sp0 = 0xC;
    sp4 = 0;
    sub_08000488(temp_r0_5, 0x06002B5E, 4, 4);
    sub_080003D8();
    temp_r0_6 = sub_08007874(0x1E);
    temp_r4_4 = ((s32) ((0 - temp_r0_6) | temp_r0_6) >> 0x1F) & 0x20;
    temp_r0_7 = sub_0800A3D4(0x84) + (temp_r4_4 + 4) + 0x80;
    sp0 = 0xC;
    sp4 = 0;
    sub_08000488(temp_r0_7, 0x06002B66, 4, 4);
    sub_080003D8();
    sub_08003314();
}
