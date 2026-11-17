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
M2C_UNK sub_0800D9D0(s32, s32);                     /* extern */
M2C_UNK sub_08037ED0(void *, s32);                  /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_080382F0;

void *sub_08037FB4(u16 arg0, void *arg2) {
    s32 temp_r0_2;
    s8 *var_r1;
    s8 var_r0;
    u16 temp_r4;
    void *temp_r0;
    void *temp_r4_2;
    void *temp_r4_3;

    temp_r4 = arg0;
    temp_r0 = sub_08002B34(0x94, 1);
    sub_08065CF0(temp_r0, 0, 0x94);
    switch (temp_r4) {                              /* irregular */
    case 0x18B:
        var_r1 = temp_r0 + 0x91;
        var_r0 = 0;
block_5:
        *var_r1 = var_r0;
        break;
    case 0x1F2:
        var_r1 = temp_r0 + 0x91;
        var_r0 = 1;
        goto block_5;
    }
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177E54;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x44) = temp_r0_2;
    sub_08004454(temp_r0_2, temp_r0, &sub_080382F0);
    sub_08037ED0(temp_r0, 0);
    M2C_FIELD(temp_r0, s32 *, 0x58) = sub_08004370();
    temp_r4_2 = temp_r0 + 0x48;
    sub_080520FC(temp_r4_2, temp_r0 + 0xC);
    sub_08052078(temp_r4_2, 0x66);
    sub_08052098(temp_r4_2, 0x5000);
    M2C_FIELD(temp_r0, s8 *, 0x90) = 1;
    M2C_FIELD(temp_r0, s16 *, 0x8C) = 0x294;
    M2C_FIELD(temp_r0, s8 *, 0x92) = 1;
    sub_0800D9D0((temp_r0 + 0x92) - 0x2E, 6);
    temp_r4_3 = temp_r4_2 - 0x24;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = sub_08052BB4(temp_r4_3);
    M2C_FIELD(temp_r4_3, s32 *, 0) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r4_3, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r4_3, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    return temp_r0;
}
