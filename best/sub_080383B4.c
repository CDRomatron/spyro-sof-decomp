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
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
u8 sub_0800792C();                                  /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *, s32);          /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08038658;

void *sub_080383B4(void *arg2) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    u8 *var_r1;
    u8 var_r0;
    void *temp_r0;
    void *temp_r4;
    void *temp_r6;

    temp_r0 = sub_08002B34(0x58, 1);
    sub_08065CF0(temp_r0, 0, 0x58);
    temp_r6 = temp_r0 + 0xC;
    M2C_FIELD(temp_r0, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r6, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r6, s32 *, 8) = (s32) (M2C_FIELD(arg2, s32 *, 8) + 0x1000);
    M2C_FIELD(temp_r0, void **, 0x40) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x48) = 0;
    var_r0 = sub_0800792C();
    if (var_r0 != 0) {
        var_r1 = temp_r0 + 0x51;
        var_r0 = 2;
    } else {
        var_r1 = temp_r0 + 0x51;
    }
    *var_r1 = var_r0;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x34) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x390001);
    M2C_FIELD(temp_r0, s32 *, 0x38) = sub_08004370();
    temp_r0_3 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x3C) = temp_r0_3;
    sub_08003C58(temp_r0_3, 0x390000);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x3C), temp_r0, &sub_08038658);
    temp_r4 = temp_r0 + 0x24;
    sub_080520FC(temp_r4, temp_r0 + 0xC, M2C_FIELD(temp_r0, s32 *, 0x38));
    sub_08052078(temp_r4, 0x33);
    sub_08052098(temp_r4, 0x6400);
    M2C_FIELD(temp_r0, s8 *, 0x54) = 0;
    sub_080528D4(temp_r0, M2C_FIELD(temp_r0, s32 *, 0xC), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8));
    return temp_r0;
}
