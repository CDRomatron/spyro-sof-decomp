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
M2C_UNK sub_0800F6BC();                             /* extern */
void *sub_0800FCA4(s32, s32, M2C_UNK *);            /* extern */
M2C_UNK sub_0804EC14(void *);                       /* extern */
M2C_UNK sub_08050168(void *, void (*)(void *, s32)); /* extern */
M2C_UNK sub_080522C8(s32, s32);                     /* extern */
M2C_UNK sub_0805275C(s32, M2C_UNK *);               /* extern */

void sub_080379C8(void *arg0, s32 arg1) {
    M2C_UNK sp0;
    s32 sp8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;

    switch (arg1) {                                 /* irregular */
    case 0:
        if (M2C_FIELD(arg0, u8 *, 0x73) == 0xB) {
            sub_0805275C(0xC1, &sp0);
            sp8 += 0xA00;
            temp_r0 = sub_0800FCA4(0x1C4, 1, &sp0);
            M2C_FIELD(arg0, void **, 0x60) = temp_r0;
            temp_r1 = arg0 + 0x24;
            temp_r0_2 = temp_r0 + 0xC;
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r0, s32 *, 0xC);
            M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(temp_r0_2, s32 *, 4);
            M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(temp_r0_2, s32 *, 8);
            sub_080522C8(M2C_FIELD(arg0, s32 *, 0x5C), temp_r1 + 0xC);
            sub_0804EC14(M2C_FIELD(arg0, void **, 0x60) + 0xC);
            M2C_FIELD(arg0, u8 *, 0x73) = 0xDU;
            sub_08050168(arg0, sub_080379C8);
            sub_08003220(0x08170E18);
            return;
        }
        return;
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0x73) == 0xD) {
            M2C_FIELD(arg0, u8 *, 0x73) = 0xEU;
            sub_0800F6BC();
        }
        break;
    }
}
