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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, void *, s32); /* extern */
M2C_UNK sub_0800FCA4(s32, s32, M2C_UNK *);          /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_0804FFDC(void *, s32 *);                /* extern */
s32 sub_080529D4();                                 /* extern */
s32 sub_08054B9C(void *, s32, s32);                 /* extern */
extern M2C_UNK sub_0803CA30;

s32 sub_0803C8A8(void *arg0) {
    M2C_UNK sp8;
    s32 sp10;
    s32 sp14;
    s32 temp_r0_2;
    s32 temp_r1;
    u16 temp_r0;
    void *temp_r6;

    M2C_FIELD(arg0, u16 *, 0x2A) = (u16) (M2C_FIELD(arg0, u16 *, 0x2A) + 1);
    temp_r6 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x24));
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x28);
    switch (temp_r0) {                              /* irregular */
    case 1:
        break;
    case 0:
        temp_r0_2 = sub_08054B9C(temp_r6, 0x600, 0x1000);
        if (temp_r0_2 != 0) {
            if (temp_r0_2 == 1) {
                sub_0800FE28(arg0, sub_080529D4(), 8);
            } else {
                M2C_FIELD(arg0, u16 *, 0x28) = 1U;
                sub_08003C58(M2C_FIELD(arg0, s32 *, 0x24), 0x200002);
                sub_08004454(M2C_FIELD(arg0, s32 *, 0x24), arg0, &sub_0803CA30);
                M2C_FIELD(&sp8, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
                M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD(temp_r6, s32 *, 4);
                M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD(temp_r6, s32 *, 8);
                sp10 += 0x1800;
                sub_0800FCA4(0x17F, 1, &sp8);
                sub_08003220(0x08170CAC);
            }
        } else {
            sub_0800FA98(9, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), arg0, temp_r0_2);
        }
        break;
    case 2:
        if (((u32) M2C_FIELD(arg0, u16 *, 0x2A) > 0x4B0U) && ((sub_0804FFDC(temp_r6, &sp14), ((u32) (sp14 + 0x2000) > 0x13000U)) || (temp_r1 = M2C_FIELD(&sp14, s32 *, 4), (temp_r1 < 0xFFFFE000)) || (temp_r1 > 0xC000))) {
            M2C_FIELD(arg0, u16 *, 0x28) = 0U;
            M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x24), 0x6A0000);
        }
        break;
    }
    return 1;
}
