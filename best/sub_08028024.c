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

M2C_UNK _08027C94(void *, s32);                     /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
u8 sub_08007748();                                  /* extern */
u8 sub_08007784();                                  /* extern */
s32 sub_0800FCA4(s32, s32, M2C_UNK *);              /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, M2C_UNK *);            /* extern */
M2C_UNK sub_080522C8(s32);                          /* extern */
M2C_UNK sub_080528AC(s32);                          /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08054E64(M2C_UNK *, M2C_UNK *);         /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08028024(u16 arg0, void *arg2) {
    M2C_UNK sp0;
    M2C_UNK *temp_r4;
    s32 temp_r0_3;
    s32 temp_r7;
    s32 var_r4;
    u16 temp_r1;
    u8 temp_r0;
    u8 temp_r8;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r1_2;
    void *temp_r5;
    void *var_r6;

    temp_r1 = arg0;
    var_r6 = NULL;
    var_r4 = 0;
    switch (temp_r1) {                              /* irregular */
    case 0x115:
        var_r4 = 0x87;
        break;
    case 0x116:
        var_r4 = 0x88;
        break;
    case 0x117:
        var_r4 = 0x89;
        break;
    }
    M2C_FIELD(&sp0, s32 *, 0) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(&sp0, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(&sp0, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    sub_08054E64(&sp0, &sp0);
    temp_r7 = sub_0800FCA4(var_r4, 1, &sp0);
    temp_r8 = sub_08007748();
    temp_r0 = sub_08007784();
    if (temp_r0 == 0) {
        if (temp_r7 != 0) {
            sub_080528AC(temp_r7);
        }
        temp_r0_2 = sub_08002B34(0x80, 1);
        var_r6 = temp_r0_2;
        sub_08065CF0(temp_r0_2, 0, 0x80);
        temp_r0_3 = sub_08004370();
        M2C_FIELD(var_r6, s32 *, 0x28) = temp_r0_3;
        sub_08003C58(temp_r0_3, 0x90001);
        M2C_FIELD(var_r6, s32 *, 0x2C) = sub_08004370();
        temp_r5 = var_r6 + 0x54;
        temp_r4 = var_r6 + 0xC;
        sub_080520FC(temp_r5, temp_r4);
        sub_08052078(temp_r5, 0x66);
        sub_08052098(temp_r5, 0x5000);
        _08027C94(var_r6, 5);
        M2C_FIELD(var_r6, u8 *, 0x7B) = temp_r8;
        M2C_FIELD(var_r6, s32 *, 0x24) = temp_r7;
        sub_08054E64(&sp0, temp_r4);
        temp_r0_4 = var_r6 + 0x48;
        M2C_FIELD(var_r6, s32 *, 0x48) = (s32) M2C_FIELD(var_r6, s32 *, 0xC);
        M2C_FIELD(temp_r0_4, s32 *, 4) = (s32) M2C_FIELD(temp_r4, s32 *, 4);
        M2C_FIELD(temp_r0_4, s32 *, 8) = (s32) M2C_FIELD(temp_r4, s32 *, 8);
        M2C_FIELD(var_r6, u8 *, 0x78) = temp_r0;
        temp_r1_2 = var_r6 + 0x30;
        temp_r0_5 = (var_r6 + 0x78) - 0x30;
        M2C_FIELD(var_r6, s32 *, 0x30) = (s32) M2C_FIELD(temp_r0_5, s32 *, 0);
        M2C_FIELD(temp_r1_2, s32 *, 4) = (s32) M2C_FIELD(temp_r0_5, s32 *, 4);
        M2C_FIELD(temp_r1_2, s32 *, 8) = (s32) M2C_FIELD(temp_r0_5, s32 *, 8);
        sub_080528D4(var_r6, M2C_FIELD(var_r6, s32 *, 0xC), M2C_FIELD(var_r6, s32 *, 0x10), M2C_FIELD(var_r6, s32 *, 0x14));
        M2C_FIELD(var_r6, s8 *, 0x7C) = 1;
    } else if (temp_r7 != 0) {
        sub_080522C8(temp_r7);
    }
    return var_r6;
}
