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

M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_0800FDF8(void *, s32 *);                /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */
extern M2C_UNK sub_08023DD4;

u8 sub_08023F44(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r7;

    temp_r7 = arg0 + 0x24;
    if (M2C_FIELD(arg0, u8 *, 0x78) != 0) {
        temp_r8 = sub_08063D80(M2C_FIELD(arg0, s16 *, 0x44) * 0x4800, 0x100) >> 1;
        sp0 = 0;
        sp4 = 0;
        sp8 = 0;
        temp_r1 = M2C_FIELD(arg0, void **, 0x74);
        if (temp_r1 == M2C_FIELD(*(void **)0x030026C0, s32 *, 0x51C)) {
            temp_r0 = *(void **)0x03001634;
            temp_r0_2 = temp_r0 + 0x1C;
            M2C_FIELD(&sp0, s32 *, 0) = M2C_FIELD(temp_r0, s32 *, 0x1C);
            M2C_FIELD(&sp0, s32 *, 4) = (s32) M2C_FIELD(temp_r0_2, s32 *, 4);
            M2C_FIELD(&sp0, s32 *, 8) = (s32) M2C_FIELD(temp_r0_2, s32 *, 8);
        } else {
            sub_0800FDF8(temp_r1, &sp0);
        }
        temp_r0_3 = sub_08063D80(sp0 * 0x4800, 0x100) + M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), s32 *, 0xC);
        spC = temp_r0_3;
        M2C_FIELD(&spC, s32 *, 4) = (s32) (sub_08063D80(sp4 * 0x4800, 0x100) + M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), s32 *, 0x10));
        temp_r0_4 = temp_r0_3 - M2C_FIELD(arg0, s32 *, 0x24);
        spC = temp_r0_4;
        M2C_FIELD(&spC, s32 *, 4) = (s32) (M2C_FIELD(&spC, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x28));
        spC = sub_08063D80(temp_r0_4 << 8, 0x4800);
        temp_r0_5 = sub_08063D80(M2C_FIELD(&spC, s32 *, 4) << 8, 0x4800);
        M2C_FIELD(&spC, s32 *, 4) = temp_r0_5;
        M2C_FIELD(arg0, s32 *, 0x34) = spC;
        M2C_FIELD(arg0, s32 *, 0x38) = temp_r0_5;
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r8;
        M2C_FIELD(arg0, M2C_UNK **, 0x70) = &sub_08023DD4;
        M2C_FIELD(arg0, u8 *, 0x78) = 0U;
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x68));
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r7, s32 *, 4), M2C_FIELD(temp_r7, s32 *, 8));
    if (M2C_FIELD(arg0, M2C_UNK **, 0x70) != NULL) {
        sub_080641CC(arg0);
    }
    return M2C_FIELD(arg0, u8 *, 0x7A);
}
