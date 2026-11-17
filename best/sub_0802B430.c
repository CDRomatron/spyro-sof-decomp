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
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_08008810(s32, s32, s32);                /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *, s32);          /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_0802B394;
extern M2C_UNK sub_0802B5A8;

void *sub_0802B430(void *arg2) {
    s32 temp_r0_2;
    s32 temp_r4_2;
    void *temp_r0;
    void *temp_r4;

    temp_r0 = sub_08002B34(0x8C, 1);
    sub_08065CF0(temp_r0, 0, 0x8C);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177A54;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x70) = temp_r0_2;
    sub_0800443C(temp_r0_2, 0xD);
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x70), 0x260000);
    M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg2, s32 *, 8) + 0x800);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x22) | 1);
    M2C_FIELD(temp_r0, s16 *, 0x88) = 0xB4;
    M2C_FIELD(temp_r0, s32 *, 0x74) = sub_08004370();
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x70), temp_r0, &sub_0802B5A8);
    M2C_FIELD(temp_r0, s8 *, 0x8B) = 1;
    temp_r4 = temp_r0 + 0x60;
    sub_080520FC(temp_r4, temp_r0 + 0xC, M2C_FIELD(temp_r0, s32 *, 0x74));
    sub_08052078(temp_r4, 0x59);
    sub_08052098(temp_r4, 0x3C00);
    temp_r4_2 = sub_08052BB4(arg2);
    M2C_FIELD(temp_r0, s32 *, 0x80) = (s32) (temp_r4_2 + (0xFFF & sub_0800897C()) + 0xFFFFF800);
    M2C_FIELD(temp_r0, s32 *, 0x7C) = 0x180;
    sub_08008810(M2C_FIELD(temp_r0, s32 *, 0x80), 0x180, (temp_r0 + 0x80) - 0x28);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(temp_r0, M2C_UNK **, 0x78) = &sub_0802B394;
    return temp_r0;
}
