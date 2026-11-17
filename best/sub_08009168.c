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

M2C_UNK sub_08002EB0(s32);                          /* extern */
M2C_UNK sub_0800328C(s32);                          /* extern */
M2C_UNK sub_08003440(s32);                          /* extern */
M2C_UNK sub_080034A8();                             /* extern */
M2C_UNK sub_080035D8(s32);                          /* extern */
s32 sub_08007C48();                                 /* extern */
s32 sub_08007C58();                                 /* extern */
s32 sub_08007C68();                                 /* extern */
s32 sub_08007C78();                                 /* extern */
M2C_UNK sub_08007C88(s32);                          /* extern */
M2C_UNK sub_08007CE4(s32);                          /* extern */
M2C_UNK sub_08007D40(s32);                          /* extern */
M2C_UNK sub_08007D9C(s32);                          /* extern */
M2C_UNK sub_08008BE0(void *);                       /* extern */

void sub_08009168(void *arg0, u32 arg1) {
    s32 temp_r0;
    s32 var_r2;
    s32 var_r2_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r0 != 9) && (temp_r0 != 7)) {
        return;
    }
    switch (arg1) {                                 /* irregular */
    case 1:
        if ((sub_08007C68() << 0x18) != 0) {
            sub_08007D40(0);
            sub_08003440(0);
            var_r2 = 0x246;
        } else {
            if (*(u8 *)0x0300162D != 0) {
                sub_080034A8();
            }
            sub_08007D40(1);
            sub_080035D8(0x08168464);
            sub_08003440(0x80);
            var_r2 = 0x247;
        }
block_19:
        M2C_FIELD(((arg1 * 8) + M2C_FIELD(arg0, s32 *, 0)), s32 *, 4) = var_r2;
        sub_08008BE0(arg0);
        sub_0800328C(0x08170FF4);
        return;
    case 2:
        if ((sub_08007C58() << 0x18) != 0) {
            sub_08007CE4(0);
            sub_08002EB0(0);
            var_r2 = 0x250;
        } else {
            sub_08007CE4(1);
            sub_08002EB0(0x80);
            var_r2 = 0x251;
        }
        goto block_19;
    case 3:
        if ((sub_08007C48() << 0x18) != 0) {
            sub_08007C88(0);
            var_r2 = 0x253;
        } else {
            sub_08007C88(1);
            var_r2 = 0x254;
        }
        goto block_19;
    default:
        if ((sub_08007C78() << 0x18) != 0) {
            sub_08007D9C(0);
            var_r2_2 = 0x256;
        } else {
            sub_08007D9C(1);
            var_r2_2 = 0x257;
        }
        M2C_FIELD(((arg1 * 8) + M2C_FIELD(arg0, s32 *, 0)), s32 *, 4) = var_r2_2;
        sub_08008BE0(arg0);
        sub_0800328C(0x08170FF4);
        return;
    }
}
