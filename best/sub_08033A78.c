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
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
u8 sub_0800897C();                                  /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
M2C_UNK sub_08033884(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08033D50;
extern M2C_UNK sub_08033D7C;

void *sub_08033A78(u16 arg0, void *arg2) {
    u16 temp_r0_2;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r4;

    temp_r0_2 = arg0;
    temp_r0 = sub_08002B34(0xB8, 1);
    sub_08065CF0(temp_r0, 0, 0xB8);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177D18;
    M2C_FIELD(temp_r0, M2C_UNK **, 0x88) = &sub_08033D7C;
    M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x2C) = sub_080502E8(arg2);
    temp_r1 = temp_r0 + 0x98;
    temp_r0_3 = temp_r0 + 0x24;
    M2C_FIELD(temp_r0, s32 *, 0x98) = (s32) M2C_FIELD(temp_r0, s32 *, 0x24);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(temp_r0_3, s32 *, 4);
    M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(temp_r0_3, s32 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x94) = 0x59;
    M2C_FIELD((temp_r0 + 0x94), s8 *, 0x21) = 1;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x22) | 1);
    M2C_FIELD(temp_r0, s32 *, 0x80) = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x84) = sub_08004370();
    temp_r4 = temp_r0 + 0x70;
    sub_080520FC(temp_r4, temp_r0 + 0xC);
    sub_08052078(temp_r4, 0xCC);
    sub_08052098(temp_r4, 0x5000);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x80), temp_r0, &sub_08033D50);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    sub_0800D9D0(temp_r0 + 0x3C, 1);
    switch (temp_r0_2) {                            /* irregular */
    case 0x170:
        M2C_FIELD(temp_r0, s8 *, 0xAE) = 0;
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x80), 0x3F0002);
        break;
    case 0x175:
        M2C_FIELD(temp_r0, s8 *, 0xAE) = 1;
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x80), 0x5D0002);
        break;
    }
    sub_08033884(temp_r0, 0);
    M2C_FIELD(temp_r0, s16 *, 0xA8) = (s16) (sub_0800897C() & 0x1FF);
    M2C_FIELD(temp_r0, s8 *, 0xB3) = 0;
    M2C_FIELD((temp_r0 + 0xA8), s8 *, 0xC) = 1;
    M2C_FIELD(temp_r0, s16 *, 0xAC) = (s16) (sub_0800897C() + 0x3C);
    return temp_r0;
}
