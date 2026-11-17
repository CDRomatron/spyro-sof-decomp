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

M2C_UNK _080298B8(void *, s32);                     /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004454(s32, void *, s32);             /* extern */
u8 sub_08007324();                                  /* extern */
u8 sub_08007748();                                  /* extern */
s32 sub_08007784();                                 /* extern */
s32 sub_08007874(s32);                              /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
void *sub_0800FCA4(s32, s32, void *);               /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *, s32);          /* extern */
M2C_UNK sub_080528AC();                             /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08029A5C(u16 arg0, void *arg2) {
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r2;
    u16 temp_r1;
    u8 temp_r4;
    void *temp_r0;
    void *temp_r4_2;
    void *temp_r8;
    void *var_r7;

    temp_r1 = arg0;
    var_r7 = NULL;
    var_r2 = 0;
    switch (temp_r1) {                              /* irregular */
    case 0x11F:
        var_r2 = 0x87;
        break;
    case 0x120:
        var_r2 = 0x88;
        break;
    case 0x121:
        var_r2 = 0x89;
        break;
    }
    temp_r8 = sub_0800FCA4(var_r2, 1, arg2);
    temp_r4 = sub_08007748();
    if (((sub_08007784() << 0x18) == 0) || ((sub_08007324() == 0xF) && ((sub_08007874(6) << 0x18) == 0))) {
        if (temp_r8 != NULL) {
            sub_080528AC();
        }
        temp_r0 = sub_08002B34(0x8C, 1);
        var_r7 = temp_r0;
        sub_08065CF0(temp_r0, 0, 0x8C);
        M2C_FIELD(var_r7, s32 *, 8) = 0x08177A04;
        M2C_FIELD(var_r7, s32 *, 0x6C) = sub_08004370();
        M2C_FIELD(var_r7, void **, 0x68) = temp_r8;
        M2C_FIELD(var_r7, u8 *, 0x88) = temp_r4;
        sub_08003C58(M2C_FIELD(var_r7, s32 *, 0x6C), 0x1F0002);
        M2C_FIELD(var_r7, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(var_r7, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 4);
        M2C_FIELD(var_r7, s32 *, 0x14) = sub_080502E8(arg2);
        M2C_FIELD(var_r7, s32 *, 0x70) = sub_08004370();
        sub_08004454(M2C_FIELD(var_r7, s32 *, 0x6C), var_r7, 0x080295B9);
        M2C_FIELD(var_r7, s8 *, 0x8A) = 1;
        M2C_FIELD(var_r7, s32 *, 0x7C) = (s32) ((0x7FFF & sub_0800897C()) + 0x8000);
        temp_r4_2 = var_r7 + 0x58;
        sub_080520FC(temp_r4_2, var_r7 + 0xC, M2C_FIELD(var_r7, s32 *, 0x70));
        sub_08052078(temp_r4_2, 0x99);
        sub_08052098(temp_r4_2, 0x5000);
        sub_0800D9D0(var_r7 + 0x30, 6);
        temp_r4_3 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(var_r7, temp_r4_3, temp_r5, sub_080502E8(arg2));
        _080298B8(var_r7, 0);
        M2C_FIELD(var_r7, s16 *, 0x80) = 0;
    } else if (temp_r8 != NULL) {
        temp_r4_4 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5_2 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(temp_r8, temp_r4_4, temp_r5_2, sub_080502E8(arg2));
    }
    return var_r7;
}
