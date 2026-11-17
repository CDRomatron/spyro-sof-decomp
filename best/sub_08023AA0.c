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
M2C_UNK sub_08004454(s32, void *, s32);             /* extern */
u8 sub_08007324();                                  /* extern */
u8 sub_08007748();                                  /* extern */
s32 sub_08007784();                                 /* extern */
s32 sub_08007874(s32);                              /* extern */
s8 sub_0800897C();                                  /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
void *sub_0800FCA4(s32, s32, void *);               /* extern */
M2C_UNK sub_08023968(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528AC();                             /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08023AA0(u16 arg0, void *arg2) {
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r1;
    u16 temp_r0;
    u8 temp_r4;
    void *temp_r0_2;
    void *temp_r8;
    void *var_r6;

    temp_r0 = arg0;
    var_r6 = NULL;
    var_r1 = 0;
    switch (temp_r0) {                              /* irregular */
    case 0xFE:
        var_r1 = 0x87;
        break;
    case 0xFF:
        var_r1 = 0x88;
        break;
    case 0x100:
        var_r1 = 0x89;
        break;
    }
    temp_r8 = sub_0800FCA4(var_r1, 1, arg2);
    temp_r4 = sub_08007748();
    if (((sub_08007784() << 0x18) == 0) || ((sub_08007324() == 0xF) && ((sub_08007874(6) << 0x18) == 0))) {
        if (temp_r8 != NULL) {
            sub_080528AC();
        }
        temp_r0_2 = sub_08002B34(0x98, 1);
        var_r6 = temp_r0_2;
        sub_08065CF0(temp_r0_2, 0, 0x98);
        M2C_FIELD(var_r6, s32 *, 8) = 0x081777A4;
        M2C_FIELD(var_r6, s32 *, 0x78) = sub_08004370();
        M2C_FIELD(var_r6, void **, 0x70) = temp_r8;
        M2C_FIELD(var_r6, u8 *, 0x93) = temp_r4;
        sub_08003C58(M2C_FIELD(var_r6, s32 *, 0x78), 0x610003);
        M2C_FIELD(var_r6, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(var_r6, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
        temp_r0_3 = sub_080502E8(arg2);
        M2C_FIELD(var_r6, s32 *, 0x2C) = temp_r0_3;
        M2C_FIELD(var_r6, s32 *, 0x30) = (s32) (M2C_FIELD(var_r6, s32 *, 0x24) + 1);
        M2C_FIELD(var_r6, s32 *, 0x34) = (s32) (M2C_FIELD(var_r6, s32 *, 0x28) + 1);
        M2C_FIELD(var_r6, s32 *, 0x38) = temp_r0_3;
        temp_r0_4 = sub_08004370();
        M2C_FIELD(var_r6, s32 *, 0x7C) = temp_r0_4;
        sub_0800443C(temp_r0_4, 0xB);
        sub_08003C58(M2C_FIELD(var_r6, s32 *, 0x7C), 0x6C0000);
        sub_08004454(M2C_FIELD(var_r6, s32 *, 0x78), var_r6, 0x08023569);
        M2C_FIELD(var_r6, s8 *, 0x95) = 1;
        M2C_FIELD(var_r6, s32 *, 0x84) = (s32) ((0x7FFF & sub_0800897C()) + 0x8000);
        M2C_FIELD(var_r6, s8 *, 0x94) = 1;
        M2C_FIELD(var_r6, s8 *, 0x96) = sub_0800897C();
        sub_0800D9D0(var_r6 + 0x48, 6);
        temp_r4_2 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(var_r6, temp_r4_2, temp_r5, sub_080502E8(arg2));
        sub_08023968(var_r6, 0);
    } else if (temp_r8 != NULL) {
        temp_r4_3 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5_2 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(temp_r8, temp_r4_3, temp_r5_2, sub_080502E8(arg2));
    }
    return var_r6;
}
