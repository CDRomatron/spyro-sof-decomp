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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_080044A4(s32, s32);                     /* extern */
u8 sub_0800897C();                                  /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *, s32);          /* extern */
extern M2C_UNK sub_08013E20;
extern M2C_UNK sub_08014144;
extern M2C_UNK sub_08014188;

void sub_08013D04(void *arg0, void *arg1, void *arg2) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r1;
    s32 var_r6;
    u8 temp_r2;
    void *temp_r4_2;

    M2C_FIELD(arg1, s32 *, 0x38) = (s32) (M2C_FIELD(arg2, s32 *, 0) + 0x100);
    M2C_FIELD(arg1, s32 *, 0x3C) = (s32) (M2C_FIELD(arg2, s32 *, 4) + 0x100);
    M2C_FIELD(arg1, s32 *, 0x40) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0x44) = sub_08004370();
    M2C_FIELD(arg1, s32 *, 0x48) = sub_08004370();
    temp_r2 = M2C_FIELD(arg0, u8 *, 0x1DC);
    if (temp_r2 == 1) {
        var_r1 = 0x660004;
        var_r6 = 0x33;
        M2C_FIELD(arg1, s32 *, 0x50) = 0;
        M2C_FIELD(arg1, M2C_UNK **, 0x4C) = &sub_08014144;
        M2C_FIELD(arg1, u8 *, 0x55) = temp_r2;
    } else {
        if (0x80 & sub_0800897C()) {
            var_r1 = 0x660001;
            var_r6 = 0x33;
            var_r0 = 0x660003;
        } else {
            var_r1 = 0x660000;
            var_r6 = 0x4C;
            var_r0 = 0x660002;
        }
        M2C_FIELD(arg1, s32 *, 0x50) = var_r0;
        M2C_FIELD(arg1, M2C_UNK **, 0x4C) = &sub_08013E20;
        M2C_FIELD(arg1, u8 *, 0x55) = 0U;
    }
    sub_08003C58(M2C_FIELD(arg1, s32 *, 0x44), var_r1);
    sub_080044A4(M2C_FIELD(arg1, s32 *, 0x44), 1);
    temp_r4 = M2C_FIELD(arg1, s32 *, 0x44);
    sub_08004408(temp_r4, (3 & sub_0800897C()) + 1);
    sub_08004454(M2C_FIELD(arg1, s32 *, 0x44), arg1, &sub_08014188);
    temp_r4_2 = arg1 + 0x28;
    sub_080520FC(temp_r4_2, arg1 + 0x38, M2C_FIELD(arg1, s32 *, 0x48));
    sub_08052078(temp_r4_2, var_r6);
    sub_08052098(temp_r4_2, 0x3C00);
    sub_0800D9D0(arg1, 4);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (sub_0800897C() - 0x80);
    M2C_FIELD(arg1, s32 *, 8) = (s32) (sub_0800897C() - 0x80);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) ((0x3FF & sub_0800897C()) + 0x500);
    M2C_FIELD(arg1, s8 *, 0x56) = 0;
}
