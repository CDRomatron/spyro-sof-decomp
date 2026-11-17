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
u8 sub_080077A8();                                  /* extern */
u8 sub_080077E0(u8);                                /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08021D38(void *arg2) {
    s32 sp0;
    s32 temp_r0_3;
    s32 temp_r4_3;
    s8 *temp_r0_2;
    u8 temp_r4;
    u8 temp_r5;
    void *temp_r0;
    void *temp_r4_2;
    void *var_r6;

    var_r6 = NULL;
    temp_r5 = sub_080077A8();
    if ((sub_08007874(8) << 0x18) == 0) {
        temp_r4 = sub_080077E0(temp_r5);
        if (temp_r4 == 0) {
            temp_r0 = sub_08002B34(0x70, 1);
            var_r6 = temp_r0;
            sub_08065CF0(temp_r0, 0, 0x70);
            M2C_FIELD(var_r6, u8 *, 0x6B) = temp_r4;
            temp_r0_2 = (var_r6 + 0x6B) - 1;
            *temp_r0_2 = 1;
            *(temp_r0_2 - 2) = temp_r5;
            temp_r0_3 = sub_08004370();
            M2C_FIELD(var_r6, s32 *, 0x60) = temp_r0_3;
            sub_08003C58(temp_r0_3, 0xD0000);
            sub_08003DA8(M2C_FIELD(var_r6, s32 *, 0x60), 0);
            sub_08004408(M2C_FIELD(var_r6, s32 *, 0x60), 0);
            M2C_FIELD(var_r6, s32 *, 0x64) = sub_08004370();
            temp_r4_2 = var_r6 + 0x4C;
            sub_080520FC(temp_r4_2, var_r6 + 0xC);
            sub_08052078(temp_r4_2, 0x80);
            sub_08052098(temp_r4_2, 0x6400);
            M2C_FIELD(var_r6, s8 *, 0x6C) = 1;
            temp_r4_3 = M2C_FIELD(arg2, s32 *, 0);
            sp0 = M2C_FIELD(arg2, s32 *, 4);
            sub_080528D4(var_r6, temp_r4_3, sp0, sub_080502E8(arg2));
            sub_0800D9D0(var_r6 + 0x24, 0);
            M2C_FIELD(var_r6, s8 *, 0x47) = 2;
        }
    }
    return var_r6;
}
