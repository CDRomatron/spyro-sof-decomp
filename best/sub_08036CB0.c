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
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *, s32);          /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
void *sub_080529D4();                               /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08036E8C;
extern M2C_UNK sub_08036EC8;

void *sub_08036CB0(void *arg2) {
    s32 sp0;
    s32 sp4;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r2;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    void *temp_r0;
    void *temp_r10;
    void *temp_r5;
    void *temp_r9;

    temp_r9 = *(void **)0x03001634;
    temp_r10 = sub_080529D4();
    temp_r0 = sub_08002B34(0x78, 1);
    sub_08065CF0(temp_r0, 0, 0x78);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177E18;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x68) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x230002);
    M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x22) | 1);
    M2C_FIELD(temp_r0, s32 *, 0x6C) = sub_08004370();
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x68), temp_r0, &sub_08036E8C);
    M2C_FIELD(temp_r0, s8 *, 0x75) = 1;
    temp_r5 = temp_r0 + 0x58;
    sub_080520FC(temp_r5, temp_r0 + 0xC, M2C_FIELD(temp_r0, s32 *, 0x6C));
    sub_08052078(temp_r5, 0x99);
    sub_08052098(temp_r5, 0xC800);
    sub_0800D9D0(temp_r0 + 0x30, 6);
    M2C_FIELD(temp_r0, s16 *, 0x44) = 0x26;
    temp_r6 = sub_08063D80(0xAB000, 0x100) >> 1;
    temp_r0_3 = sub_08063D80(M2C_FIELD(temp_r9, s32 *, 0x1C) * 0x4800, 0x100) + M2C_FIELD(temp_r10, s32 *, 0xC);
    sp0 = temp_r0_3;
    temp_r2 = sub_08063D80(M2C_FIELD(temp_r9, s32 *, 0x20) * 0x4800, 0x100) + M2C_FIELD(temp_r10, s32 *, 0x10);
    sp4 = temp_r2;
    temp_r0_4 = temp_r0_3 - M2C_FIELD(temp_r0, s32 *, 0x24);
    sp0 = temp_r0_4;
    sp4 = temp_r2 - M2C_FIELD(temp_r0, s32 *, 0x28);
    temp_r0_5 = sub_08063D80(temp_r0_4 << 8, 0x4800);
    sp0 = temp_r0_5;
    temp_r0_6 = sub_08063D80(sp4 << 8, 0x4800);
    sp4 = temp_r0_6;
    M2C_FIELD(temp_r0, s32 *, 0x34) = temp_r0_5;
    M2C_FIELD(temp_r0, s32 *, 0x38) = temp_r0_6;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = temp_r6;
    temp_r5_2 = M2C_FIELD(arg2, s32 *, 0);
    temp_r6_2 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r5_2, temp_r6_2, sub_080502E8(arg2));
    M2C_FIELD(temp_r0, M2C_UNK **, 0x70) = &sub_08036EC8;
    return temp_r0;
}
