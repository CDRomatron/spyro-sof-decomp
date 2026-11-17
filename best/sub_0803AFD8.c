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
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_080044A4(s32, s32);                     /* extern */
u8 sub_0800897C();                                  /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_0803B288;
extern M2C_UNK sub_0803B31C;
extern M2C_UNK sub_0803B354;

void *sub_0803AFD8(void *arg2) {
    s32 temp_r0_2;
    u32 var_r9;
    void *temp_r0;
    void *temp_r4;
    void *var_r5;
    void *var_r7;

    temp_r0 = sub_08002B34(0x22C, 1);
    sub_08065CF0(temp_r0, 0, 0x22C);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08177F84;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    M2C_FIELD(temp_r0, u8 *, 0x228) = 8U;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x224) = temp_r0_2;
    sub_08004454(temp_r0_2, temp_r0, &sub_0803B354);
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x224), 0x780000);
    var_r9 = 0;
    if ((u32) M2C_FIELD(temp_r0, u8 *, 0x228) > 0U) {
        var_r5 = temp_r0 + 0x28;
        var_r7 = temp_r0 + 0x60;
        do {
            temp_r4 = (var_r9 << 6) + temp_r0 + 0x24;
            M2C_FIELD(var_r5, s32 *, 0x24) = (s32) (M2C_FIELD(arg2, s32 *, 0) + 0x100);
            M2C_FIELD(var_r5, s32 *, 0x28) = (s32) (M2C_FIELD(arg2, s32 *, 4) + 0x100);
            M2C_FIELD(var_r5, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 8);
            M2C_FIELD(var_r5, s32 *, 0x30) = sub_08004370();
            M2C_FIELD(var_r5, M2C_UNK **, 0x34) = &sub_0803B288;
            M2C_FIELD(var_r7, s8 *, 0) = 0;
            sub_08003C58(M2C_FIELD(var_r5, s32 *, 0x30), 0x780001);
            sub_080044A4(M2C_FIELD(var_r5, s32 *, 0x30), 1);
            sub_08004454(M2C_FIELD(var_r5, s32 *, 0x30), temp_r4, &sub_0803B31C);
            sub_0800D9D0(temp_r4, 4);
            M2C_FIELD(var_r5, s16 *, 0x10) = 0x59;
            M2C_FIELD(var_r5, s32 *, 0) = (s32) (sub_0800897C() - 0x80);
            M2C_FIELD(var_r5, s32 *, 4) = (s32) (sub_0800897C() - 0x80);
            M2C_FIELD(var_r5, s32 *, 8) = (s32) ((0x1FF & sub_0800897C()) + 0x400);
            M2C_FIELD(var_r7, s8 *, 2) = 0;
            var_r5 += 0x40;
            var_r7 += 0x40;
            var_r9 += 1;
        } while (var_r9 < (u32) M2C_FIELD(temp_r0, u8 *, 0x228));
    }
    sub_08003220(0x081714C4);
    M2C_FIELD(temp_r0, u8 *, 0x229) = (u8) M2C_FIELD(temp_r0, u8 *, 0x228);
    M2C_FIELD(temp_r0, s8 *, 0x22B) = 1;
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
