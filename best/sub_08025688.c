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
u8 sub_08007748();                                  /* extern */
s32 sub_08007784();                                 /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
void *sub_0800FCA4(s32, s32, void *);               /* extern */
M2C_UNK sub_08025514(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *, s32);          /* extern */
M2C_UNK sub_080528AC();                             /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08025878;

void *sub_08025688(u16 arg0, void *arg2) {
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
    void *var_r6;

    temp_r1 = arg0;
    var_r6 = NULL;
    var_r2 = 0;
    switch (temp_r1) {                              /* irregular */
    case 0x109:
        var_r2 = 0x87;
        break;
    case 0x10A:
        var_r2 = 0x88;
        break;
    case 0x10B:
        var_r2 = 0x89;
        break;
    }
    temp_r8 = sub_0800FCA4(var_r2, 1, arg2);
    temp_r4 = sub_08007748();
    if ((sub_08007784() << 0x18) == 0) {
        if (temp_r8 != NULL) {
            sub_080528AC();
        }
        temp_r0 = sub_08002B34(0x80, 1);
        var_r6 = temp_r0;
        sub_08065CF0(temp_r0, 0, 0x80);
        M2C_FIELD(var_r6, s32 *, 8) = 0x08177808;
        M2C_FIELD(var_r6, s32 *, 0x60) = sub_08004370();
        M2C_FIELD(var_r6, void **, 0x5C) = temp_r8;
        M2C_FIELD(var_r6, u8 *, 0x7B) = temp_r4;
        sub_08003C58(M2C_FIELD(var_r6, s32 *, 0x60), 0x750003);
        M2C_FIELD(var_r6, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(var_r6, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 4);
        M2C_FIELD(var_r6, s32 *, 0x14) = sub_080502E8(arg2);
        M2C_FIELD(var_r6, s32 *, 0x64) = sub_08004370();
        sub_08004454(M2C_FIELD(var_r6, s32 *, 0x60), var_r6, &sub_08025878);
        M2C_FIELD(var_r6, s8 *, 0x7C) = 1;
        M2C_FIELD(var_r6, s32 *, 0x6C) = sub_08052BB4(arg2);
        temp_r4_2 = var_r6 + 0x4C;
        sub_080520FC(temp_r4_2, var_r6 + 0xC, M2C_FIELD(var_r6, s32 *, 0x64));
        sub_08052078(temp_r4_2, 0x99);
        sub_08052098(temp_r4_2, 0x5000);
        sub_0800D9D0(var_r6 + 0x24, 1);
        temp_r4_3 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(var_r6, temp_r4_3, temp_r5, sub_080502E8(arg2));
        sub_08025514(var_r6, 0);
        M2C_FIELD(var_r6, s16 *, 0x76) = 0x69;
    } else if (temp_r8 != NULL) {
        temp_r4_4 = M2C_FIELD(arg2, s32 *, 0);
        temp_r5_2 = M2C_FIELD(arg2, s32 *, 4);
        sub_080528D4(temp_r8, temp_r4_4, temp_r5_2, sub_080502E8(arg2));
    }
    return var_r6;
}
