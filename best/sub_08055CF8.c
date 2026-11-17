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

M2C_UNK sub_08000488(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_08003C58(void *, s32);                  /* extern */
M2C_UNK sub_08003DA8(void *, u32);                  /* extern */
void *sub_08004370();                               /* extern */
M2C_UNK sub_080043A4(void *);                       /* extern */
M2C_UNK sub_08004408(void *, s32);                  /* extern */
M2C_UNK sub_0800443C(void *, s32);                  /* extern */
M2C_UNK sub_08004454(void *, void *, M2C_UNK *);    /* extern */
M2C_UNK sub_080044A4(void *, s32);                  /* extern */
M2C_UNK sub_08007FD8();                             /* extern */
M2C_UNK sub_080082A0();                             /* extern */
s32 sub_0800897C();                                 /* extern */
s16 *sub_0800A3D4(s32);                             /* extern */
M2C_UNK sub_0800A400(s32, s32);                     /* extern */
M2C_UNK sub_0800A474(s32, s32);                     /* extern */
M2C_UNK sub_080562EC();                             /* extern */
extern M2C_UNK sub_08057A24;

void sub_08055CF8(void) {
    s16 sp8;
    s32 var_r9;
    u16 *var_r2;
    u32 var_r6;
    u32 var_r6_2;
    u32 var_r6_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r5;
    void *temp_r7;
    void *var_r4;
    void *var_r4_2;
    void *var_r5;

    temp_r7 = *(void **)0x030008D4;
    var_r9 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = sub_0800A3D4(0xE1);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x03001580;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    sub_0800A400(0xE2, 0x030015A0);
    sub_0800A400(0xE4, 0x1030011E0);
    sub_0800A474(0xD9, 0x06004000);
    sub_0800A474(0xD7, 0x060051A0);
    sp8 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600E000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000400;
    sub_08000488(sub_0800A3D4(0xD8) + 4, 0x0600E000, 0x20, 0x17, 0x8D, 0);
    M2C_FIELD((void *)0x03001160, u16 *, 8) = 0x1C04U;
    M2C_FIELD((void *)0x03001160, u16 *, 0) = 0x1140U;
    sub_08007FD8();
    sub_080082A0();
    temp_r5 = sub_08004370();
    if (*(s32 *)0x03001148 == 0) {
        var_r9 = 0x30000;
    }
    sub_08003C58(temp_r5, var_r9);
    sub_08003DA8(temp_r5, -1U);
    M2C_FIELD(temp_r7, u8 *, 0x7D0) = (u8) (M2C_FIELD(temp_r5, u8 *, 0x2C) + 1);
    sub_080043A4(temp_r5);
    var_r6 = 0;
    if ((u32) M2C_FIELD(temp_r7, u8 *, 0x7D0) > 0U) {
        var_r4 = temp_r7 + 0x464;
        do {
            temp_r0 = sub_08004370();
            M2C_FIELD(var_r4, void **, 0) = temp_r0;
            sub_08003C58(temp_r0, var_r9);
            sub_0800443C(M2C_FIELD(var_r4, void **, 0), 0xF);
            sub_08004408(M2C_FIELD(var_r4, void **, 0), 0);
            sub_08003DA8(M2C_FIELD(var_r4, void **, 0), var_r6);
            M2C_FIELD(var_r4, s16 *, 0x10) = (s16) ((var_r6 * 0x10) + (((s32) (0xF0 - (M2C_FIELD(temp_r7, u8 *, 0x7D0) * 0x10)) >> 1) + 8));
            M2C_FIELD(var_r4, s16 *, 0x12) = 0x60;
            M2C_FIELD(var_r4, s32 *, 8) = 0;
            M2C_FIELD(var_r4, s32 *, 0xC) = 0;
            M2C_FIELD(var_r4, s32 *, 4) = 0x100;
            M2C_FIELD(var_r4, s8 *, 0x1A) = 0;
            M2C_FIELD(var_r4, s16 *, 0x18) = (s16) ((sub_0800897C() & 0x3F) + var_r6);
            var_r4 += 0x1C;
            var_r6 += 1;
        } while (var_r6 < (u32) M2C_FIELD(temp_r7, u8 *, 0x7D0));
    }
    var_r6_2 = 0;
    var_r4_2 = temp_r7 + 0x65C;
    var_r5 = var_r4_2;
    do {
        temp_r0_2 = sub_08004370();
        M2C_FIELD(var_r4_2, void **, 0) = temp_r0_2;
        sub_08004454(temp_r0_2, var_r5, &sub_08057A24);
        sub_080044A4(M2C_FIELD(var_r4_2, void **, 0), 1);
        M2C_FIELD(var_r4_2, s8 *, 0x11) = 0;
        var_r4_2 += 0x14;
        var_r5 += 0x14;
        var_r6_2 += 1;
    } while (var_r6_2 <= 0xFU);
    sub_080562EC();
    var_r6_3 = 0;
    if ((u32) M2C_FIELD(temp_r7, u8 *, 0x7D1) > 0U) {
        var_r2 = temp_r7 + 0x64;
        do {
            *var_r2 = (0xFF00 & *var_r2) | 0xA0;
            var_r2 += 8;
            var_r6_3 += 1;
        } while (var_r6_3 < (u32) M2C_FIELD(temp_r7, u8 *, 0x7D1));
    }
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *) (temp_r7 - ((M2C_FIELD(temp_r7, u8 *, 0x7D1) * 8) + 0xFFFFFB9C));
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x07000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) ((M2C_FIELD(temp_r7, u8 *, 0x7D1) * 4) | 0x80000000);
    M2C_FIELD(temp_r7, s16 *, 0x7BC) = 0x20;
    M2C_FIELD((void *)0x03001600, u16 *, 0x20) = 0U;
    M2C_FIELD((void *)0x03001600, u16 *, 0x22) = 0U;
    M2C_FIELD((void *)0x03001600, u16 *, 0x24) = 0U;
    M2C_FIELD((void *)0x03001600, u16 *, 0x26) = 0U;
    M2C_FIELD((void *)0x03001600, u16 *, 0x28) = 0U;
}
