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

M2C_UNK _08035C20(void *);                          /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0800FCA4(s32, s32, s32 *);              /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
u8 sub_0805399C();                                  /* extern */
extern M2C_UNK sub_08036584;

void sub_08036078(void *arg0) {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 *var_r5;
    u16 temp_r1;
    u8 temp_r5_2;
    void *temp_r1_2;
    void *temp_r5;
    void *temp_r6;

    temp_r5 = *(void **)0x03001634;
    temp_r6 = arg0 + 0x24;
    if ((sub_0805399C() == 3) && ((sub_08052140(temp_r6, 0x800) << 0x18) != 0)) {
        temp_r1 = M2C_FIELD(temp_r5, u16 *, 0x30);
        if ((temp_r1 == 0x200) || (temp_r1 == 0x2000)) {
            if (M2C_FIELD(arg0, u8 *, 0xBB) != 0) {
                M2C_FIELD(arg0, s8 *, 0xBA) = 5;
                M2C_FIELD(arg0, u8 *, 0xBB) = (u8) (M2C_FIELD(arg0, u8 *, 0xBB) - 1);
                goto block_8;
            }
            temp_r5_2 = M2C_FIELD(arg0, u8 *, 0xBD);
            if (temp_r5_2 != 0) {
                temp_r1_2 = arg0 + 0xBA;
                M2C_FIELD(arg0, s8 *, 0xBA) = 5;
                M2C_FIELD(arg0, u8 *, 0xBB) = 2U;
                M2C_FIELD(temp_r1_2, u8 *, 2) = (u8) (M2C_FIELD(temp_r1_2, u8 *, 2) + 1);
                M2C_FIELD(arg0, u8 *, 0xBD) = (u8) (M2C_FIELD(arg0, u8 *, 0xBD) - 1);
block_8:
                var_r5 = arg0 + 0x98;
            } else {
                M2C_FIELD(arg0, s8 *, 0xBA) = 6;
                M2C_FIELD(arg0, s32 *, 0x98) = (s32) temp_r5_2;
                var_r5 = arg0 + 0x98;
            }
            _08035C20(arg0);
            M2C_FIELD(&sp8, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0x24);
            M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD(temp_r6, s32 *, 4);
            M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD(temp_r6, s32 *, 8);
            sp8 += 1;
            spC += 1;
            sp10 += 0x800;
            sub_0800FCA4(0x1E6, 1, &sp8);
            sub_08003220(0x08171550);
            if (*var_r5 == &sub_08036584) {
                M2C_FIELD(arg0, s16 *, 0xB2) = 0x14;
            }
        } else {
            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), 1, 0x800);
        }
    }
}
