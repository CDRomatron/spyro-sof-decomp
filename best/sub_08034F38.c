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
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08034F38(void *arg2) {
    s32 temp_r0_2;
    void *temp_r0;
    void *temp_r5;

    temp_r0 = sub_08002B34(0x4C, 1);
    sub_08065CF0(temp_r0, 0, 0x4C);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177DB4;
    M2C_FIELD(temp_r0, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x14) = (s32) M2C_FIELD(arg2, s32 *, 8);
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x30) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x110004);
    M2C_FIELD(temp_r0, s32 *, 0x44) = sub_08004370();
    temp_r5 = temp_r0 + 0x34;
    sub_080520FC(temp_r5, temp_r0 + 0xC);
    sub_08052078(temp_r5, 0x66);
    sub_08052098(temp_r5, 0x5000);
    M2C_FIELD(temp_r0, s8 *, 0x4A) = 1;
    M2C_FIELD(temp_r0, s8 *, 0x48) = 0;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
