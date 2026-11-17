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

M2C_UNK _08035C20(void *);                          /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004454(s32, void *, s32);             /* extern */
u8 sub_08007874(s32);                               /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08035E60(void *arg2) {
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 temp_r5_2;
    u8 temp_r5;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r4;
    void *var_r6;

    var_r6 = NULL;
    temp_r5 = sub_08007874(0x1E);
    if (temp_r5 == 0) {
        temp_r0 = sub_08002B34(0xC4, 1);
        var_r6 = temp_r0;
        sub_08065CF0(temp_r0, 0, 0xC4);
        M2C_FIELD(var_r6, s32 *, 8) = 0x08177DDC;
        temp_r0_2 = sub_08004370();
        M2C_FIELD(var_r6, s32 *, 0x44) = temp_r0_2;
        sub_08004454(temp_r0_2, var_r6, 0x08035721);
        M2C_FIELD(var_r6, u8 *, 0xBA) = temp_r5;
        _08035C20(var_r6);
        M2C_FIELD(var_r6, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(var_r6, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
        M2C_FIELD(var_r6, s32 *, 0x2C) = sub_080502E8(arg2);
        M2C_FIELD(var_r6, s32 *, 0x90) = sub_08004370();
        temp_r4 = var_r6 + 0x80;
        sub_080520FC(temp_r4, var_r6 + 0xC);
        sub_08052078(temp_r4, 0x66);
        sub_08052098(temp_r4, 0x5000);
        sub_0800D9D0(var_r6 + 0x58, 6);
        M2C_FIELD(var_r6, s8 *, 0xBE) = 1;
        M2C_FIELD(var_r6, s32 *, 0x3C) = 0x2000;
        M2C_FIELD(var_r6, u8 *, 0xBD) = temp_r5;
        M2C_FIELD(var_r6, s8 *, 0xBB) = 2;
        temp_r0_3 = var_r6 + 0xBC;
        M2C_FIELD(var_r6, u8 *, 0xBC) = temp_r5;
        M2C_FIELD(temp_r0_3, s8 *, 3) = 1;
        M2C_FIELD((temp_r0_3 + 3), s8 *, 2) = 1;
        M2C_FIELD(var_r6, u16 *, 0x22) = (u16) (1 | M2C_FIELD(var_r6, u16 *, 0x22));
        temp_r4_2 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5_2 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(var_r6, temp_r4_2, temp_r5_2, sub_080502E8(arg2));
    }
    return var_r6;
}
