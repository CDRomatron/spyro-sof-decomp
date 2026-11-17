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
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_08050098(s32, M2C_UNK *, void *);       /* extern */
s32 sub_080529D4();                                 /* extern */
extern M2C_UNK sub_08033018;

void sub_08032B94(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0x388);
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x70) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x388) + 5;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0_2;
    if (temp_r0_2 > 0x200) {
        M2C_FIELD(arg0, s32 *, 0x388) = 0x200;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x390) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) > (s32) (M2C_FIELD(arg0, s32 *, 0x384) + 0x1E00))) {
        M2C_FIELD(arg0, u8 *, 0x390) = 1U;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x37C), 0x210003);
        sub_0800D9D0(arg0 + 0x34, 0);
        M2C_FIELD(arg0, s32 *, 0x38) = 0x180;
        M2C_FIELD(arg0, s32 *, 0x3C) = 0x200;
        M2C_FIELD(arg0, s32 *, 0x40) = 0xFFFFF400;
        temp_r1 = arg0 + 0x5C;
        temp_r0_3 = arg0 + 0xC;
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(temp_r0_3, s32 *, 4);
        M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(temp_r0_3, s32 *, 8);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0x12C00) {
        M2C_FIELD(arg0, u8 *, 0x390) = 0U;
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
        sub_0800FCA4(0x32, 1, arg0 + 0x5C);
        sub_08050098(sub_080529D4() + 0xC, &sub_08033018, arg0);
    }
}
