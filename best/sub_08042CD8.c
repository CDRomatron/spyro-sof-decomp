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
s32 sub_08001F84(s32, u16, void *);                 /* extern */
M2C_UNK sub_0800217C(s32, u16, void *, s32);        /* extern */
u16 sub_08002498(s32, s32 *);                       /* extern */
M2C_UNK sub_08002534(s32, s32);                     /* extern */
M2C_UNK sub_08002564(void *);                       /* extern */
M2C_UNK sub_080025B4(void *);                       /* extern */
M2C_UNK sub_08002640(void *, u32, u16);             /* extern */
s32 sub_080026B8(s32, u16, s32);                    /* extern */
M2C_UNK sub_08003314();                             /* extern */
s32 sub_0800750C(s32);                              /* extern */
M2C_UNK sub_08009DD8(s32, s32, s32, u16, s32);      /* extern */
s32 sub_0800A3D4(s32);                              /* extern */
M2C_UNK sub_080426B0(void *, s32, s32);             /* extern */

void sub_08042CD8(void *arg0) {
    s32 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r7;
    u16 temp_r5;
    u16 temp_r5_2;
    u16 temp_r5_3;
    u16 var_r5;
    u16 var_r8;
    void *temp_r1;
    void *temp_r2;
    void *temp_r6;

    temp_r1 = *(void **)0x030008D0;
    M2C_FIELD(arg0, u8 *, 0xC9) = 1U;
    sub_08002564(M2C_FIELD(temp_r1, void **, 0x4C));
    sub_08002534(M2C_FIELD(temp_r1, s32 *, 0x48), 0xF);
    var_r5 = sub_08002498(6, &sp8);
    var_r7 = sp8;
    var_r8 = 0;
    temp_r6 = *(void **)0x030008D0;
    if (var_r5 != 0) {
        do {
            sub_08002640(M2C_FIELD(temp_r6, void **, 0x4C), 0U, var_r8);
            temp_r4 = sub_08001F84(var_r7, var_r5, M2C_FIELD(temp_r6, void **, 0x4C));
            temp_r2 = M2C_FIELD(temp_r6, void **, 0x4C);
            sub_08002640(temp_r2, (u32) (((M2C_FIELD(temp_r2, u16 *, 4) * 8) - sub_080026B8(var_r7, var_r5, M2C_FIELD(temp_r6, s32 *, 0x48))) << 0xF) >> 0x10, var_r8);
            sub_0800217C(var_r7, var_r5, M2C_FIELD(temp_r6, void **, 0x4C), 1);
            var_r8 += M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x44), u16 *, 0x12);
            var_r7 += temp_r4;
            var_r5 -= temp_r4;
        } while (var_r5 != 0);
    }
    var_r2 = 0xF;
    if (M2C_FIELD(arg0, s8 *, 0xC8) == 0) {
        var_r2 = 0xA;
    }
    sub_08002534(M2C_FIELD(temp_r1, s32 *, 0x48), var_r2);
    temp_r5 = sub_08002498(0x3AB, &sp8);
    sub_08002640(M2C_FIELD(temp_r1, void **, 0x4C), 0x10U, 0x10U);
    sub_0800217C(sp8, temp_r5, M2C_FIELD(temp_r1, void **, 0x4C), 1);
    sub_080426B0(arg0 + 0x14, 0x20, 0);
    if (M2C_FIELD(arg0, s8 *, 0xC8) == 0) {
        sub_08009DD8(M2C_FIELD(temp_r1, s32 *, 0x40), 0x18, 0x35, (u16) (sub_080026B8(sp8, temp_r5, M2C_FIELD(temp_r1, s32 *, 0x48)) + 0x48), 0x35);
    }
    sub_08003314();
    temp_r5_2 = sub_08002498(0x3A3, &sp8);
    temp_r4_2 = M2C_FIELD(temp_r1, s32 *, 0x48);
    if ((sub_0800750C(6) << 0x18) != 0) {
        var_r1 = 0xF;
        if (M2C_FIELD(arg0, s8 *, 0xC8) == 1) {
            var_r1 = 0xA;
        }
    } else {
        var_r1 = 0xD;
    }
    sub_08002534(temp_r4_2, var_r1);
    sub_08002640(M2C_FIELD(temp_r1, void **, 0x4C), 0x10U, 0x38U);
    sub_0800217C(sp8, temp_r5_2, M2C_FIELD(temp_r1, void **, 0x4C), 1);
    sub_080426B0(arg0 + 0x50, 0x48, 0);
    if ((sub_0800750C(6) << 0x18) != 0) {
        M2C_FIELD(arg0, u8 *, 0xC9) = (u8) (M2C_FIELD(arg0, u8 *, 0xC9) + 1);
    }
    if (M2C_FIELD(arg0, s8 *, 0xC8) == 1) {
        sub_08009DD8(M2C_FIELD(temp_r1, s32 *, 0x40), 0x18, 0x5D, (u16) (sub_080026B8(sp8, temp_r5_2, M2C_FIELD(temp_r1, s32 *, 0x48)) + 0x48), 0x35);
    }
    sub_08003314();
    temp_r5_3 = sub_08002498(0x3AA, &sp8);
    temp_r4_3 = M2C_FIELD(temp_r1, s32 *, 0x48);
    if ((sub_0800750C(0xC) << 0x18) != 0) {
        var_r1_2 = 0xF;
        if (M2C_FIELD(arg0, s8 *, 0xC8) == 2) {
            var_r1_2 = 0xA;
        }
    } else {
        var_r1_2 = 0xD;
    }
    sub_08002534(temp_r4_3, var_r1_2);
    sub_08002640(M2C_FIELD(temp_r1, void **, 0x4C), 0x10U, 0x60U);
    sub_0800217C(sp8, temp_r5_3, M2C_FIELD(temp_r1, void **, 0x4C), 1);
    sub_080426B0(arg0 + 0x8C, 0x70, 0);
    if ((sub_0800750C(0xC) << 0x18) != 0) {
        M2C_FIELD(arg0, u8 *, 0xC9) = (u8) (M2C_FIELD(arg0, u8 *, 0xC9) + 1);
    }
    if (M2C_FIELD(arg0, s8 *, 0xC8) == 2) {
        sub_08009DD8(M2C_FIELD(temp_r1, s32 *, 0x40), 0x18, 0x85, (u16) (sub_080026B8(sp8, temp_r5_3, M2C_FIELD(temp_r1, s32 *, 0x48)) + 0x48), 0x35);
    }
    sub_08003314();
    sub_08000488(sub_0800A3D4(0x8E) + 4, 0x06002948, 2, 2, 0xC, 0);
    sub_08000488(sub_0800A3D4(0x8E) + 0xC, 0x06002A88, 2, 2, 0xC, 0);
    sub_08000488(sub_0800A3D4(0x8E) + 0x14, 0x06002BC8, 2, 2, 0xC, 0);
    sub_08003314();
    sub_080025B4(M2C_FIELD(temp_r1, void **, 0x4C));
    if ((u32) M2C_FIELD(arg0, u8 *, 0xC9) > 1U) {
        M2C_FIELD(temp_r1, u8 *, 0x7E) = (u8) (1 | M2C_FIELD(temp_r1, u8 *, 0x7E) | 2);
    }
}
