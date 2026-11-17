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
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
M2C_UNK sub_0803A49C(void *, s32);                  /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32);             /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_0803A740;

void *sub_0803A58C(void *arg2) {
    s32 temp_r0_2;
    void *temp_r0;
    void *temp_r4;
    void *temp_r4_2;

    temp_r0 = sub_08002B34(0x90, 1);
    sub_08065CF0(temp_r0, 0, 0x90);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177F18;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x44) = temp_r0_2;
    sub_08004454(temp_r0_2, temp_r0, &sub_0803A740);
    sub_0803A49C(temp_r0, 0);
    M2C_FIELD(temp_r0, s32 *, 0x58) = sub_08004370();
    temp_r4 = temp_r0 + 0x48;
    sub_080520FC(temp_r4, temp_r0 + 0xC);
    sub_08052078(temp_r4, 0x99);
    sub_08052098(temp_r4, 0x5000);
    M2C_FIELD(temp_r0, s8 *, 0x8C) = 1;
    sub_0800D9D0(temp_r0 + 0x5C, 4);
    temp_r4_2 = temp_r4 - 0x24;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = sub_08052BB4(temp_r4_2);
    M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r4_2, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r4_2, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x2C) + 0x800);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4));
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    return temp_r0;
}
