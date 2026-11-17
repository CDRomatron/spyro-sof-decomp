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

M2C_UNK sub_0800217C(s32, u16, s32, s32);           /* extern */
u16 sub_08002498(u16, s32 *);                       /* extern */
M2C_UNK sub_080025B4(s32);                          /* extern */
M2C_UNK sub_08002640(s32, u16, s32);                /* extern */
u16 sub_080026B8(s32, u16, s32);                    /* extern */

void sub_0800DFF4(void) {
    s32 sp0;
    s32 sp4;
    s32 var_r1_2;
    u16 temp_r0_2;
    u16 temp_r4;
    u16 temp_r5;
    u16 temp_r5_2;
    u16 temp_r7;
    u16 temp_r8;
    u16 var_r1;
    void *temp_r0;
    void *temp_r1;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r4_2;
    void *temp_r6;

    temp_r6 = *(void **)0x030008CC;
    temp_r0 = M2C_FIELD(temp_r6, void **, 0x2EC);
    temp_r4 = M2C_FIELD(temp_r0, u16 *, 0);
    temp_r2 = temp_r0 + 2;
    M2C_FIELD(temp_r6, void **, 0x2EC) = (void *) (temp_r2 + 2);
    M2C_FIELD(temp_r6, u16 *, 0x308) = (u16) M2C_FIELD(temp_r2, u16 *, 2);
    temp_r2_2 = M2C_FIELD(temp_r6, void **, 0x2EC);
    M2C_FIELD(temp_r6, void **, 0x2EC) = (void *) (temp_r2_2 + 2);
    M2C_FIELD(temp_r6, u16 *, 0x306) = (u16) M2C_FIELD(temp_r2_2, u16 *, 2);
    M2C_FIELD(temp_r6, void **, 0x2EC) = (void *) (M2C_FIELD(temp_r6, void **, 0x2EC) + 2);
    temp_r8 = sub_08002498(M2C_FIELD(temp_r0, u16 *, 2), &sp0);
    temp_r7 = sub_08002498(temp_r4, &sp4);
    temp_r5 = sub_080026B8(sp0, temp_r8, M2C_FIELD(temp_r6, s32 *, 0x2C4));
    temp_r0_2 = sub_080026B8(sp4, temp_r7, M2C_FIELD(temp_r6, s32 *, 0x2C4));
    var_r1 = temp_r0_2;
    if ((u32) temp_r0_2 < (u32) temp_r5) {
        var_r1 = temp_r5;
    }
    temp_r5_2 = (0xEE - var_r1) & ~7;
    var_r1_2 = temp_r5_2 - 0x17;
    if (var_r1_2 < 0) {
        var_r1_2 += 7;
    }
    M2C_FIELD(temp_r6, u16 *, 0x30A) = (u16) (var_r1_2 >> 3);
    sub_08002640(M2C_FIELD(temp_r6, s32 *, 0x2C0), temp_r5_2, 0x10);
    sub_0800217C(sp4, temp_r7, M2C_FIELD(temp_r6, s32 *, 0x2C0), 1);
    sub_08002640(M2C_FIELD(temp_r6, s32 *, 0x2C0), temp_r5_2, 0x20);
    sub_0800217C(sp0, temp_r8, M2C_FIELD(temp_r6, s32 *, 0x2C0), 1);
    sub_080025B4(M2C_FIELD(temp_r6, s32 *, 0x2C0));
    M2C_FIELD(temp_r6, u16 *, 0x30C) = 1U;
    temp_r2_3 = *(void **)0x030008CC;
    temp_r4_2 = M2C_FIELD(temp_r2_3, void **, 0x2F4);
    temp_r1 = ((u32) ((M2C_FIELD(temp_r2_3, u16 *, 0x30C) << 0x11) + 0xC0000) >> 0xA) + ((M2C_FIELD(temp_r2_3, u16 *, 0x30A) * 2) + 0x06000000);
    M2C_FIELD(temp_r1, s16 *, 0) = (s16) (M2C_FIELD(temp_r4_2, u16 *, 4) | 0x50);
    M2C_FIELD(temp_r1, s16 *, 2) = (s16) (M2C_FIELD(temp_r4_2, u16 *, 6) | 0x50);
    M2C_FIELD(temp_r1, s16 *, 0x40) = (s16) (M2C_FIELD(temp_r4_2, u16 *, 8) | 0x50);
    M2C_FIELD(temp_r1, s16 *, 0x42) = (s16) (M2C_FIELD(temp_r4_2, u16 *, 0xA) | 0x50);
}
