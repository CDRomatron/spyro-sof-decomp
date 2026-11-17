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

M2C_UNK _0801F9AC(void *, s32);                     /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_080078B0(u8);                           /* extern */
M2C_UNK sub_0800FE28(void *, void *, s32);          /* extern */
M2C_UNK sub_0801FAE0(void *, s32);                  /* extern */
s32 sub_0801FB74(void *, s32, s32);                 /* extern */
M2C_UNK sub_080207A4(void *);                       /* extern */
void *sub_080529D4();                               /* extern */
M2C_UNK sub_0805445C(s32, void *, M2C_UNK *);       /* extern */
extern M2C_UNK sub_08020764;

void sub_0801FE0C(void *arg0) {
    s32 temp_r0;
    s32 var_r1;
    u8 temp_r0_2;

    if ((sub_0801FB74(arg0, arg0 + 0x28, 0x280) << 0x18) != 0) {
        sub_0800FE28(arg0, M2C_FIELD(arg0, void **, 0x38), 4);
        _0801F9AC(arg0, 2);
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u16 *, 0x20) == 0x1F0) {
            sub_0805445C(1, arg0, &sub_08020764);
            sub_08003220(0x08171294);
        } else {
            sub_08003220(0x08171294);
            var_r1 = 3;
            if ((sub_08007874(0x1A) << 0x18) != 0) {
                var_r1 = 4;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0xFC) < var_r1) {
                sub_0800FE28(arg0, sub_080529D4(), 4);
                temp_r0 = M2C_FIELD(arg0, s32 *, 0xFC) + 1;
                M2C_FIELD(arg0, s32 *, 0xFC) = temp_r0;
                sub_080078B0((u8) (temp_r0 + 1));
                sub_080207A4(arg0);
                sub_0805445C(5, arg0, NULL);
            }
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x104) + 1;
            M2C_FIELD(arg0, u8 *, 0x104) = temp_r0_2;
            if ((u32) temp_r0_2 > 7U) {
                sub_0805445C(1, arg0, &sub_08020764);
                M2C_FIELD(arg0, u8 *, 0x104) = 0U;
            }
        }
    }
    sub_0801FAE0(arg0, M2C_FIELD(arg0, s32 *, 0x30) + 0xA00);
}
