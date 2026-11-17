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
M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
M2C_UNK sub_08015168(void *, s32);                  /* extern */
s32 sub_080502E8();                                 /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052CF4(s32);                              /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_080151DC(void *arg2) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r5_2;
    s32 temp_r6;
    void *temp_r0;
    void *temp_r5;

    temp_r0 = sub_08002B34(0x78, 1);
    sub_08065CF0(temp_r0, 0, 0x78);
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x60) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x4F0001);
    sub_08003DA8(M2C_FIELD(temp_r0, s32 *, 0x60), 1);
    sub_08004408(M2C_FIELD(temp_r0, s32 *, 0x60), 0);
    temp_r0_3 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x68) = temp_r0_3;
    sub_08003C58(temp_r0_3, 4);
    sub_08003DA8(M2C_FIELD(temp_r0, s32 *, 0x68), 5);
    sub_08004408(M2C_FIELD(temp_r0, s32 *, 0x68), 0);
    M2C_FIELD(temp_r0, s32 *, 0x64) = sub_08004370();
    temp_r5 = temp_r0 + 0x4C;
    sub_080520FC(temp_r5, temp_r0 + 0xC);
    sub_08052078(temp_r5, 0x4C);
    sub_08052098(temp_r5, 0x3C00);
    M2C_FIELD(temp_r0, s8 *, 0x77) = 1;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    temp_r5_2 = M2C_FIELD(arg2, s32 *, 0);
    temp_r6 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r5_2, temp_r6, sub_080502E8() + 0x3C00);
    sub_0800D9D0(temp_r0 + 0x24, 0);
    M2C_FIELD(temp_r0, s16 *, 0x3C) = 0x66;
    M2C_FIELD(temp_r0, s32 *, 0x5C) = sub_08052CF4(0x93);
    sub_08015168(temp_r0, 0);
    return temp_r0;
}
