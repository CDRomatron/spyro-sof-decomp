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
s32 sub_08004534(s32);                              /* extern */
M2C_UNK sub_08007764(u8);                           /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_0800FDB4(void *, s32, s32 *);           /* extern */
s32 sub_0801DA58(void *, s32, s32);                 /* extern */
M2C_UNK sub_0802FA08(void *, s32);                  /* extern */
s32 sub_0802FED0(void *);                           /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
M2C_UNK sub_080528D4(s32, s32, s32, s32);           /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_0802FC4C(void *arg0) {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 temp_r0;
    s32 temp_r0_3;
    u16 temp_r1;
    u8 temp_r0_2;
    void *temp_r4;
    void *temp_r6;

    temp_r4 = *(void **)0x03001634;
    temp_r6 = arg0 + 0x24;
    if (sub_0805399C() != 3) {
        return;
    }
    if ((sub_08052140(temp_r6, 0xC00) << 0x18) == 0) {

    } else {
        temp_r1 = M2C_FIELD(temp_r4, u16 *, 0x30);
        if ((temp_r1 == 0x200) || (temp_r1 == 0x2000)) {
            if (M2C_FIELD(arg0, u8 *, 0xA8) == 3) {
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
                if (temp_r0 != 0) {
                    sub_080528D4(temp_r0, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8));
                    sp8 = (sub_0800897C() & 0x7F) - 0x40;
                    spC = (sub_0800897C() & 0x7F) - 0x40;
                    sp10 = (0x3FF & sub_0800897C()) + 0x600;
                    sub_0800FDB4(arg0, M2C_FIELD(arg0, s32 *, 0x4C), &sp8);
                }
                M2C_FIELD(arg0, s8 *, 0xAB) = 0;
                sub_08007764(M2C_FIELD(arg0, u8 *, 0xA6));
                sub_0800FCA4(0x8D, 1, temp_r6);
            } else if ((sub_0802FED0(arg0) << 0x18) != 0) {
                sub_0802FA08(arg0, 2);
            } else {
                sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), 1, 0xC00);
                sub_08003220(0x08171064);
                sub_0802FA08(arg0, 1);
            }
        } else {
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 0xA8);
            if ((temp_r0_2 == 3) || (temp_r0_2 == 1)) {
                sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), 0, 0xC00);
            } else {
                sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), 1, 0xC00);
                sub_0802FA08(arg0, 1);
            }
        }
    }
    temp_r0_3 = sub_0801DA58(arg0 + 0xC, 0xC00, sub_08004534(M2C_FIELD(arg0, s32 *, 0x44)) << 8);
    if ((temp_r0_3 == 3) || (temp_r0_3 == 6)) {
        sub_0802FA08(arg0, 2);
    }
}
