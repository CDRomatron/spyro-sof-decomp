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

u8 sub_08003220(s32);                               /* extern */
s32 sub_08003564(s32, u8);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08008620(void *, void *, void *);       /* extern */
M2C_UNK sub_08008810(s32, s32, void *);             /* extern */
s32 sub_08008900(s32, s32);                         /* extern */
M2C_UNK sub_080241B8(void *);                       /* extern */
M2C_UNK sub_08024584(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
s32 sub_080505C4(void *, s32, void *, s32);         /* extern */
s32 sub_080510C0(void *, s32, void *, s32, s32, s32); /* extern */
s32 sub_08052BB4(void *);                           /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_08024394(void *arg0) {
    void *sp8;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r1;
    s32 var_r2;
    void *temp_r0;
    void *temp_r4_2;
    void *temp_r6;

    if (sub_0805399C() != 3) {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x84), 0x600001);
        sub_08024584(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x98) = 0;
        return;
    }
    if ((sub_08003564(0x08171198, M2C_FIELD(arg0, u8 *, 0x9C)) << 0x18) == 0) {
        M2C_FIELD(arg0, u8 *, 0x9C) = (s32) sub_08003220(0x08171198);
    }
    temp_r0 = arg0 + 0x24;
    sp8 = temp_r0;
    temp_r6 = arg0 + 0x98;
    M2C_FIELD(arg0, s32 *, 0x98) = 0xE6;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x90);
    temp_r0_2 = sub_08008900(temp_r4, 0xFFFF & sub_08052BB4(temp_r0));
    var_r1 = temp_r0_2;
    if (temp_r0_2 < 0) {
        var_r1 = 0 - temp_r0_2;
    }
    var_r2 = 0x100;
    if (var_r1 > 0x100) {
        if (temp_r0_2 < 0) {
            var_r2 = 0xFFFFFF00;
        }
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) + var_r2);
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x90);
    }
    temp_r5 = sub_080505C4(temp_r0, M2C_FIELD(arg0, s32 *, 0x90), temp_r6, 0x800);
    temp_r5_2 = temp_r5 | sub_080510C0(temp_r0, M2C_FIELD(arg0, s32 *, 0x90), temp_r6, 0xF00, 0xA00, 0x800);
    temp_r4_2 = arg0 + 0x64;
    sub_08008810(M2C_FIELD(arg0, s32 *, 0x90), M2C_FIELD(arg0, s32 *, 0x98), temp_r4_2);
    sub_08008620(temp_r4_2, sp8, sp8);
    M2C_FIELD(temp_r0, s32 *, 8) = sub_080502E8(temp_r0);
    if (3 & temp_r5_2) {
        if (1 & temp_r5_2) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (u16) (0x8000 - M2C_FIELD(arg0, s32 *, 0x90));
        }
        if (temp_r5_2 & 2) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (u16) (0 - M2C_FIELD(arg0, s32 *, 0x90));
        }
    }
    sub_080241B8(arg0);
}
