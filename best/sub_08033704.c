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

s32 _08065138();                                    /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08008638(void *, void *, void *);       /* extern */
M2C_UNK sub_08008810(s32, s32, void *);             /* extern */
u8 sub_0800897C();                                  /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08033884(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
s32 sub_08052210(void *, void *, s32);              /* extern */
M2C_UNK sub_080528D4(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_08064930(s32, s32, s32, s32);           /* extern */
s32 sub_080650BC(s32);                              /* extern */

void sub_08033704(void *arg0) {
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r8;
    s32 temp_ret;
    u16 temp_r1;
    u16 var_r0;
    u8 temp_r0;
    void *temp_r4;
    void *temp_r6;

    temp_r6 = arg0 + 0x24;
    temp_r4 = arg0 + 0x64;
    sub_08008810(M2C_FIELD(arg0, s32 *, 0x90), M2C_FIELD(arg0, s32 *, 0x94), temp_r4);
    sub_08008638(temp_r4, temp_r6, temp_r6);
    M2C_FIELD(temp_r6, s32 *, 8) = sub_080502E8(temp_r6);
    if (M2C_FIELD(arg0, u8 *, 0xAE) == 0) {
        temp_r8 = M2C_FIELD(arg0, s32 *, 0xA4);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x24) + 0x180;
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x28) + 0x180;
        temp_ret = sub_080650BC(M2C_FIELD(arg0, s32 *, 0x2C));
        sub_08064930(temp_ret, SECOND_REG(temp_ret), 0x40C40000, 0);
        sub_080528D4(temp_r8, temp_r5, temp_r4_2, _08065138());
    }
    if ((sub_08052210(temp_r6, arg0 + 0x98, 0x1000) << 0x18) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0xAE) == 0) {
            sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0xA4), 0x36);
        }
        M2C_FIELD(arg0, s8 *, 0xB3) = 0;
        sub_08033884(arg0, 0);
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0xAC);
    if (temp_r1 != 0) {
        var_r0 = temp_r1 - 1;
    } else {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0xAE);
        if (temp_r0 == 0) {
            sub_08003220(0x08170F14);
        } else if (temp_r0 == 1) {
            sub_08003220(0x08170FA0);
        }
        var_r0 = sub_0800897C() + 0x3C;
    }
    M2C_FIELD(arg0, u16 *, 0xAC) = var_r0;
}
