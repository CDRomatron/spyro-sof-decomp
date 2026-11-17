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

M2C_UNK sub_08003220(s32);                          /* extern */
s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_08008638(void *, void *, void *);       /* extern */
M2C_UNK sub_08008810(s32, s32, void *);             /* extern */
s32 sub_08008900(s32, s32);                         /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0802AB4C(void *);                       /* extern */
M2C_UNK sub_0802AEB8(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
s32 sub_080505C4(void *, s32, void *, s32);         /* extern */
s32 sub_080510C0(void *, s32, void *, s32, s32);    /* extern */
M2C_UNK sub_08052140(void *, s32);                  /* extern */
s32 sub_08052B40(void *);                           /* extern */

void sub_0802ACE4(void *arg0) {
    void *sp8;
    s32 temp_r0_2;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 var_r1;
    s32 var_r2;
    u16 temp_r0;
    u16 var_r0;
    void *temp_r4;
    void *temp_r5;
    void *temp_r7;

    if (M2C_FIELD(arg0, u16 *, 0xA8) == 0) {
        sub_0802AB4C(arg0);
        sub_0802AEB8(arg0, 1);
        return;
    }
    if ((sub_08004508(M2C_FIELD(arg0, s32 *, 0x84)) != 0x3F0002) || (M2C_FIELD(arg0, u8 *, 0xAE) == 1)) {
        sub_0802AB4C(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xAA);
    if (temp_r0 != 0) {
        var_r0 = temp_r0 - 1;
    } else {
        sub_08003220(0x08170F14);
        var_r0 = (sub_0800897C() & 0x7F) + 0x3C;
    }
    M2C_FIELD(arg0, u16 *, 0xAA) = var_r0;
    temp_r7 = arg0 + 0x24;
    sp8 = temp_r7;
    temp_r5 = arg0 + 0xA4;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0x99;
    temp_r0_2 = sub_08008900(M2C_FIELD(arg0, s32 *, 0xA0), 0xFFFF & sub_08052B40(temp_r7));
    var_r1 = temp_r0_2;
    if (temp_r0_2 < 0) {
        var_r1 = 0 - temp_r0_2;
    }
    var_r2 = 0x180;
    if (var_r1 > 0x180) {
        if (temp_r0_2 < 0) {
            var_r2 = 0xFFFFFE80;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) + var_r2);
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0xA0);
    }
    sub_08052140(temp_r7, 0x3000);
    temp_r5_2 = sub_080505C4(temp_r7, M2C_FIELD(arg0, s32 *, 0xA0), temp_r5, 0x900);
    temp_r5_3 = temp_r5_2 | sub_080510C0(temp_r7, M2C_FIELD(arg0, s32 *, 0xA0), temp_r5, 0x800, 0x900);
    temp_r4 = arg0 + 0x64;
    sub_08008810(M2C_FIELD(arg0, s32 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xA4), temp_r4);
    sub_08008638(temp_r4, sp8, sp8);
    M2C_FIELD(temp_r7, s32 *, 8) = sub_080502E8(temp_r7);
    if (3 & temp_r5_3) {
        if (1 & temp_r5_3) {
            M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (u16) (0x8000 - M2C_FIELD(arg0, s32 *, 0xA0));
        }
        if (temp_r5_3 & 2) {
            M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (u16) (0 - M2C_FIELD(arg0, s32 *, 0xA0));
        }
    }
    sub_0802AB4C(arg0);
}
