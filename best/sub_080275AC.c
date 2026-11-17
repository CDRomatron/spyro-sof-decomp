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
u8 sub_08007748();                                  /* extern */
s32 sub_08007784(u8);                               /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800FC7C(u32);                          /* extern */
void *sub_0800FCA4(s32, s32, u32);                  /* extern */
M2C_UNK sub_08027BEC(void *, s32);                  /* extern */
s32 sub_080502E8(u32);                              /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528AC(void *);                       /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_080275AC(u16 arg0, u16 arg1, u32 arg2) {
    s32 temp_r0_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r2;
    u16 temp_r3;
    u8 temp_r4;
    void *temp_r0;
    void *temp_r1;
    void *temp_r4_2;
    void *temp_r6;
    void *var_r8;

    temp_r3 = arg0;
    var_r8 = NULL;
    var_r2 = 0;
    switch (temp_r3) {                              /* irregular */
    case 0x112:
        var_r2 = 0x87;
        break;
    case 0x113:
        var_r2 = 0x88;
        break;
    case 0x114:
        var_r2 = 0x89;
        break;
    }
    if (arg1 != 2) {
        return NULL;
    }
    temp_r6 = sub_0800FCA4(var_r2, 1, arg2);
    temp_r4 = sub_08007748();
    if ((sub_08007784(temp_r4) << 0x18) == 0) {
        temp_r0 = sub_08002B34(0x60, 1);
        var_r8 = temp_r0;
        sub_08065CF0(temp_r0, 0, 0x60);
        if (temp_r6 != NULL) {
            sub_080528AC(temp_r6);
            M2C_FIELD(var_r8, void **, 0x3C) = temp_r6;
        }
        M2C_FIELD(var_r8, u8 *, 0x58) = temp_r4;
        M2C_FIELD(var_r8, u32 *, 0x4C) = arg2;
        temp_r1 = var_r8 + 0xC;
        M2C_FIELD(var_r8, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
        M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
        sub_08027BEC(var_r8, temp_r1 + 0xC);
        temp_r0_2 = sub_08004370();
        M2C_FIELD(var_r8, s32 *, 0x24) = temp_r0_2;
        sub_08003C58(temp_r0_2, 0x710003);
        M2C_FIELD(var_r8, s32 *, 0x28) = sub_08004370();
        temp_r4_2 = var_r8 + 0x2C;
        sub_080520FC(temp_r4_2, var_r8 + 0xC);
        sub_08052078(temp_r4_2, 0x66);
        sub_08052098(temp_r4_2, 0x5000);
        M2C_FIELD(var_r8, s8 *, 0x5B) = 1;
        M2C_FIELD(var_r8, s32 *, 0x40) = (s32) ((0x7FFF & sub_0800897C()) + 0x8000);
        temp_r4_3 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(var_r8, temp_r4_3, temp_r5, sub_080502E8(arg2));
    } else {
        sub_0800FC7C(arg2);
        if (temp_r6 != NULL) {
            temp_r4_4 = M2C_FIELD(arg2, s32 *, 0);
            temp_r5_2 = M2C_FIELD(arg2, s32 *, 4);
            sub_080528D4(temp_r6, temp_r4_4, temp_r5_2, sub_080502E8(arg2));
        }
    }
    return var_r8;
}
