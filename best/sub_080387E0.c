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
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08038914;

void *sub_080387E0(u16 arg0, void *arg2) {
    s32 temp_r4;
    s32 temp_r5_2;
    u16 temp_r5;
    void *temp_r0;
    void *temp_r1;

    temp_r5 = arg0;
    temp_r0 = sub_08002B34(0x3C, 1);
    sub_08065CF0(temp_r0, 0, 0x3C);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177E90;
    M2C_FIELD(temp_r0, s32 *, 0x30) = sub_08004370();
    switch (temp_r5) {                              /* irregular */
    case 0x18E:
        sub_08003220(0x08170CAC);
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x30), 0x200001);
        break;
    case 0x1E6:
        sub_08003220(0x08170CAC);
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x30), 0x200000);
        break;
    case 0x1F8:
    case 0x18F:
        sub_08003220(0x08170CAC);
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x30), 0x200002);
        break;
    case 0x1F9:
        sub_08003220(0x08170CAC);
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x30), 0x200000);
        break;
    }
    temp_r1 = temp_r0 + 0x24;
    M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x22) | 1);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x30), temp_r0, &sub_08038914);
    M2C_FIELD(temp_r0, s8 *, 0x38) = 1;
    temp_r4 = M2C_FIELD(arg2, s32 *, 0);
    temp_r5_2 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r4, temp_r5_2, sub_080502E8(arg2));
    return temp_r0;
}
