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

M2C_UNK _080227F4(void *, s32);                     /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
u8 sub_08007324();                                  /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
s32 sub_08007874(s32);                              /* extern */
s32 sub_0800FCA4(s32, s32, void *);                 /* extern */
M2C_UNK sub_080500F0(void *);                       /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *, s32);          /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08022E88(void *arg2) {
    s32 var_r0;
    u8 temp_r0_2;
    void *temp_r0;
    void *temp_r4;
    void *temp_r6;

    temp_r0 = sub_08002B34(0x8C, 1);
    sub_08065CF0(temp_r0, 0, 0x8C);
    M2C_FIELD(temp_r0, s32 *, 0x44) = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x48) = sub_08004370();
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x44), 0x680005);
    temp_r4 = temp_r0 + 0x4C;
    temp_r6 = temp_r0 + 0xC;
    sub_080520FC(temp_r4, temp_r6, M2C_FIELD(temp_r0, s32 *, 0x48));
    sub_08052078(temp_r4, 0x80);
    sub_08052098(temp_r4, 0x5000);
    M2C_FIELD(arg2, s32 *, 0) = (s32) ((M2C_FIELD(arg2, s32 *, 0) & 0xFFFFF000) | 0x800);
    M2C_FIELD(arg2, s32 *, 4) = (s32) ((M2C_FIELD(arg2, s32 *, 4) & 0xFFFFF000) | 0x800);
    M2C_FIELD(arg2, s32 *, 8) = sub_080502E8(arg2);
    M2C_FIELD(temp_r0, s32 *, 0x60) = 0xC000;
    M2C_FIELD(temp_r0, s32 *, 0x24) = sub_0800FCA4(0xEC, 0, arg2);
    M2C_FIELD(temp_r0, s32 *, 0x6C) = 0;
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    sub_080500F0(temp_r6);
    temp_r0_2 = sub_08007324();
    switch (temp_r0_2) {                            /* irregular */
    case 39:
        if ((sub_08007874(0x52) << 0x18) == 0) {
            _080227F4(temp_r0, 0xD);
            var_r0 = 0x52;
block_13:
            sub_0800781C(var_r0, 1);
        } else {
block_15:
            _080227F4(temp_r0, 0);
        }
        break;
    case 40:
        if ((sub_08007874(0x53) << 0x18) == 0) {
            _080227F4(temp_r0, 0xD);
            var_r0 = 0x53;
            goto block_13;
        }
        goto block_15;
    case 41:
        if ((sub_08007874(0x54) << 0x18) == 0) {
            _080227F4(temp_r0, 0xD);
            var_r0 = 0x54;
            goto block_13;
        }
        goto block_15;
    case 42:
        if ((sub_08007874(0x55) << 0x18) != 0) {
            goto block_15;
        }
        _080227F4(temp_r0, 0xD);
        sub_0800781C(0x55, 1);
        break;
    }
    return temp_r0;
}
