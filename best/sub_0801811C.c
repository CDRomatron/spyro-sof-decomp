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
s32 sub_08007598();                                 /* extern */
s32 sub_08007874(s32);                              /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_0801811C(void *arg2) {
    s32 temp_r4_2;
    s32 temp_r5;
    void *temp_r0;
    void *temp_r4;
    void *var_r6;

    var_r6 = NULL;
    if (((sub_08007598() << 0x18) == 0) && ((sub_08007874(0x5E) << 0x18) == 0) && ((sub_08007874(0x5F) << 0x18) == 0)) {
        temp_r0 = sub_08002B34(0x40, 1);
        var_r6 = temp_r0;
        sub_08065CF0(temp_r0, 0, 0x40);
        M2C_FIELD(var_r6, s32 *, 0x34) = sub_08004370();
        M2C_FIELD(var_r6, s32 *, 0x38) = sub_08004370();
        temp_r4 = var_r6 + 0x24;
        sub_080520FC(temp_r4, var_r6 + 0xC);
        sub_08052078(temp_r4, 0x33);
        sub_08052098(temp_r4, 0x6400);
        sub_08003C58(M2C_FIELD(var_r6, s32 *, 0x34), 0x3E0000);
        temp_r4_2 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(var_r6, temp_r4_2, temp_r5, sub_080502E8(arg2));
        M2C_FIELD(var_r6, s8 *, 0x3C) = 1;
    }
    return var_r6;
}
