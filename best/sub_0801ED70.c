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
M2C_UNK sub_08004454(s32, void *, s32);             /* extern */
u8 sub_08007324();                                  /* extern */
u8 sub_08007748();                                  /* extern */
s32 sub_08007784(u8);                               /* extern */
s32 sub_08007874(s32);                              /* extern */
void *sub_0800FCA4(s32, s32, void *);               /* extern */
M2C_UNK sub_0801EC2C(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528AC();                             /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_0801ED70(u16 arg0, void *arg2) {
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 var_r4;
    u16 temp_r5;
    u8 temp_r9;
    void *temp_r0;
    void *temp_r1;

    temp_r5 = arg0;
    var_r4 = 0;
    temp_r9 = sub_08007748();
    temp_r0 = sub_08002B34(0x50, 1);
    sub_08065CF0(temp_r0, 0, 0x50);
    M2C_FIELD(temp_r0, u16 *, 0x40) = temp_r5;
    M2C_FIELD((temp_r0 + 0x40), u8 *, 0xD) = temp_r9;
    switch (temp_r5) {                              /* irregular */
    case 0xE2:
        var_r4 = 0x87;
block_10:
        M2C_FIELD(temp_r0, void **, 0x30) = sub_0800FCA4(var_r4, 1, arg2);
        break;
    case 0xE3:
        var_r4 = 0x88;
        goto block_10;
    case 0xE4:
        var_r4 = 0x89;
        /* fallthrough */
    default:
        if (var_r4 != 0) {
            goto block_10;
        }
        break;
    }
    if (M2C_FIELD(temp_r0, void **, 0x30) != NULL) {
        sub_080528AC();
    }
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x34) = temp_r0_2;
    sub_08004454(temp_r0_2, temp_r0, 0x0801E95D);
    M2C_FIELD(temp_r0, s8 *, 0x4E) = 1;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = 0x2000;
    temp_r4 = M2C_FIELD(arg2, s32 *, 0);
    temp_r5_2 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r4, temp_r5_2, sub_080502E8(arg2));
    if (((sub_08007784(temp_r9) << 0x18) == 0) || ((sub_08007324() == 0xF) && ((sub_08007874(6) << 0x18) == 0))) {
        sub_0801EC2C(temp_r0, 0);
    } else {
        temp_r1 = M2C_FIELD(temp_r0, void **, 0x30);
        if (temp_r1 != NULL) {
            temp_r4_2 = M2C_FIELD(arg2, s32 *, 0) + 0x800;
            M2C_FIELD(arg2, s32 *, 0) = temp_r4_2;
            temp_r5_3 = M2C_FIELD(arg2, s32 *, 4);
            sub_080528D4(temp_r1, temp_r4_2, temp_r5_3, sub_080502E8(arg2));
        }
        M2C_FIELD(temp_r0, s8 *, 0x4C) = 3;
        M2C_FIELD(temp_r0, s32 *, 0x38) = 0;
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x34), 0x4A0002);
        sub_08004408(M2C_FIELD(temp_r0, s32 *, 0x34), 0);
        sub_08003DA8(M2C_FIELD(temp_r0, s32 *, 0x34), -1);
    }
    return temp_r0;
}
