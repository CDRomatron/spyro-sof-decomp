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
s32 sub_08007278(u8);                               /* extern */
s32 sub_08007288(u8);                               /* extern */
s32 sub_080072A0(u8);                               /* extern */
s32 sub_080072B0(u8);                               /* extern */
u8 sub_080072DC(u8);                                /* extern */
M2C_UNK sub_08042898(void *, s32, s32, s32, s32);   /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08042FC4;
extern M2C_UNK sub_08044108;

void *sub_080430AC(void) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    u16 var_r10;
    u16 var_r9;
    u8 temp_r0_2;
    u8 temp_r4;
    u8 var_r6;
    u8 var_r7;
    u8 var_r8;
    void *temp_r0;

    var_r9 = 0;
    var_r10 = 0;
    sp4 = 0;
    sp8 = 0;
    spC = 0;
    sp10 = 0;
    sp14 = 0;
    sp18 = 0;
    var_r8 = 0;
    var_r7 = 0;
    sp1C = 0;
    sp20 = 0;
    temp_r0 = sub_08002B34(0xCC, 1);
    sub_08065CF0(temp_r0, 0, 0xCC);
    M2C_FIELD(temp_r0, s8 *, 0x11) = 1;
    M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &sub_08044108;
    M2C_FIELD(temp_r0, M2C_UNK **, 8) = &sub_08042FC4;
    var_r6 = 0;
    do {
        temp_r4 = var_r6;
        temp_r0_2 = sub_080072DC(temp_r4);
        switch (temp_r0_2) {                        /* irregular */
        case 0:
            var_r9 += sub_080072B0(temp_r4);
            var_r8 += sub_08007288(temp_r4);
            var_r10 += sub_080072A0(temp_r4);
            var_r7 += sub_08007278(temp_r4);
            break;
        case 11:
            sp4 = (s32) (u16) (sp4 + sub_080072B0(temp_r4));
            sp14 = (s32) (u8) (sp14 + sub_08007288(temp_r4));
            sp8 = (s32) (u16) (sp8 + sub_080072A0(temp_r4));
            sp18 = (s32) (u8) (sp18 + sub_08007278(temp_r4));
            break;
        case 24:
            spC = (s32) (u16) (spC + sub_080072B0(temp_r4));
            sp1C = (s32) (u8) (sp1C + sub_08007288(temp_r4));
            sp10 = (s32) (u16) (sp10 + sub_080072A0(temp_r4));
            sp20 = (s32) (u8) (sp20 + sub_08007278(temp_r4));
            break;
        }
        var_r6 += 1;
    } while ((u32) var_r6 <= 0x18U);
    sub_08042898(temp_r0 + 0x14, (s32) var_r9, (s32) var_r10, (s32) var_r8, (s32) var_r7);
    M2C_FIELD(temp_r0, s16 *, 0x48) = 0x10;
    sub_08042898(temp_r0 + 0x48 + 8, sp4, sp8, sp14, sp18);
    M2C_FIELD(temp_r0, s16 *, 0x84) = 0x10;
    sub_08042898(temp_r0 + 0x84 + 8, spC, sp10, sp1C, sp20);
    M2C_FIELD(temp_r0, s16 *, 0xC0) = 0x10;
    return temp_r0;
}
