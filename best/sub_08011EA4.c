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
s32 sub_08007498(u16);                              /* extern */
u8 sub_080075DC();                                  /* extern */
s32 sub_080075F8();                                 /* extern */
s32 sub_0800765C(u8);                               /* extern */
s32 sub_0800FCA4(u16, s32, void *);                 /* extern */
M2C_UNK sub_0800FDA0(void *, s32, void *);          /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080522C8(s32);                          /* extern */
M2C_UNK sub_080528AC(s32);                          /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08011E08;
extern M2C_UNK sub_08012090;

void *sub_08011EA4(u16 arg0, void *arg2) {
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;
    u16 *var_r1;
    u32 var_r2;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x34, 1);
    sub_08065CF0(temp_r0, 0, 0x34);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08176A38;
    M2C_FIELD(temp_r0, u8 *, 0x30) = sub_080075DC();
    var_r2 = 0;
    var_r1 = (u16 *)0x081768E8;
loop_3:
    if (*var_r1 == arg0) {
        M2C_FIELD(temp_r0, u16 **, 0x28) = var_r1;
    } else {
        var_r2 += 1;
        if (var_r2 <= 0xDU) {
            var_r1 = (var_r2 * 0x18) + 0x081768E8;
            goto loop_3;
        }
    }
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x24) = temp_r0_2;
    sub_08004454(temp_r0_2, temp_r0, &sub_08012090);
    temp_r4 = M2C_FIELD(arg2, s32 *, 0);
    temp_r5 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r4, temp_r5, sub_080502E8(arg2));
    if ((M2C_FIELD(temp_r0, u8 *, 0x30) == 0) && ((sub_08007498(M2C_FIELD(M2C_FIELD(temp_r0, u16 **, 0x28), u16 *, 2)) << 0x18) == 0)) {
        M2C_FIELD((void *)0x03001600, s32 *, 0x14) = sub_0800FCA4(M2C_FIELD(M2C_FIELD(temp_r0, u16 **, 0x28), u16 *, 2), 1, arg2);
        if ((sub_080075F8() << 0x18) != 0) {
            sub_0800FDA0(temp_r0, M2C_FIELD((void *)0x03001600, s32 *, 0x14), (void *)0x03001600 + 8);
            sub_080522C8(M2C_FIELD((void *)0x03001600, s32 *, 0x14));
        } else {
            sub_080528AC(M2C_FIELD((void *)0x03001600, s32 *, 0x14));
        }
    }
    M2C_FIELD(temp_r0, M2C_UNK **, 0x2C) = &sub_08011E08;
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x24), M2C_FIELD(M2C_FIELD(temp_r0, u16 **, 0x28), s32 *, 8));
    M2C_FIELD(temp_r0, s8 *, 0x31) = 0;
    if (((sub_0800765C(M2C_FIELD(temp_r0, u8 *, 0x30)) << 0x18) != 0) || ((sub_08007498(M2C_FIELD(M2C_FIELD(temp_r0, u16 **, 0x28), u16 *, 2)) << 0x18) != 0)) {
        M2C_FIELD(temp_r0, M2C_UNK **, 0x2C) = NULL;
        sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x24), M2C_FIELD(M2C_FIELD(temp_r0, u16 **, 0x28), s32 *, 0x10));
    }
    return temp_r0;
}
