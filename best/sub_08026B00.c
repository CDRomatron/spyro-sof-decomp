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

void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
void *sub_080529D4();                               /* extern */
M2C_UNK sub_08054CB4(void *, M2C_UNK *, s32, s32, void *, void *, void *); /* extern */
M2C_UNK sub_08054E64(M2C_UNK *, M2C_UNK *);         /* extern */
s32 sub_08054E90(M2C_UNK *, void *);                /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08026B00(void *arg2) {
    M2C_UNK spC;
    s32 sp14;
    s32 temp_r0_2;
    s32 temp_r0_7;
    s32 var_r0;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r4;

    temp_r0 = sub_08002B34(0x58, 1);
    sub_08065CF0(temp_r0, 0, 0x58);
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x24) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x500003);
    M2C_FIELD(temp_r0, s32 *, 0x28) = sub_08004370();
    temp_r4 = temp_r0 + 0x2C;
    sub_080520FC(temp_r4, temp_r0 + 0xC);
    sub_08052078(temp_r4, 0x66);
    sub_08052098(temp_r4, 0x6400);
    temp_r0_3 = sub_080529D4();
    temp_r0_4 = temp_r0_3 + 0xC;
    M2C_FIELD(&spC, s32 *, 0) = (s32) M2C_FIELD(temp_r0_3, s32 *, 0xC);
    M2C_FIELD(&spC, s32 *, 4) = (s32) M2C_FIELD(temp_r0_4, s32 *, 4);
    M2C_FIELD(&spC, s32 *, 8) = (s32) M2C_FIELD(temp_r0_4, s32 *, 8);
    sub_08054E64(&spC, &spC);
    sp14 = sub_08054E90(&spC, temp_r0);
    temp_r0_5 = temp_r0 + 0x40;
    temp_r0_6 = temp_r0_5 + 4;
    sub_08054CB4(arg2, &spC, -0x2B, 0x5000, temp_r0_5, temp_r0_6, temp_r0_6 + 4);
    M2C_FIELD(temp_r0, s8 *, 0x54) = 0;
    M2C_FIELD((temp_r0 + 0x54), s8 *, 1) = 1;
    temp_r0_7 = sub_0800897C();
    if (temp_r0_7 < 0) {
        var_r0 = 0 - (0x7FF & temp_r0_7);
    } else {
        var_r0 = 0x7FF & temp_r0_7;
    }
    M2C_FIELD(temp_r0, s32 *, 0x4C) = var_r0;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
