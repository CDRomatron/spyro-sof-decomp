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
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
s32 sub_0800FCA4(s32, s32, M2C_UNK *);              /* extern */
M2C_UNK sub_0800FE28(s32, s32, s32);                /* extern */
s32 sub_0801DA58(void *, s32, s32);                 /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
extern M2C_UNK sub_08042628;

u8 sub_08042488(void *arg0) {
    M2C_UNK sp8;
    s32 sp10;
    u16 temp_r6;
    void *temp_r5;

    temp_r5 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x24));
    temp_r6 = M2C_FIELD(arg0, u16 *, 0x2C);
    if (temp_r6 == 0) {
        if ((sub_08052140(temp_r5, 0x600) << 0x18) != 0) {
            if (M2C_FIELD(*(void **)0x03001634, u16 *, 0x30) == 0x200) {
                M2C_FIELD(arg0, u16 *, 0x2C) = 1U;
                sub_08003C58(M2C_FIELD(arg0, s32 *, 0x24), 0x200002);
                sub_08004454(M2C_FIELD(arg0, s32 *, 0x24), arg0, &sub_08042628);
                M2C_FIELD(&sp8, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
                M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
                M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
                sp10 += 0x1800;
                sub_0800FE28(M2C_FIELD(arg0, s32 *, 0x28), sub_0800FCA4(0x1F0, 1, &sp8), 0x63);
                sub_08003220(0x08171630);
            } else {
                sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), (s32) temp_r6, 0x600);
            }
        }
        if (sub_0801DA58(temp_r5, 0x600, 0x1000) != 0) {
            M2C_FIELD(arg0, u16 *, 0x2C) = 1U;
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x24), 0x200002);
            sub_08004454(M2C_FIELD(arg0, s32 *, 0x24), arg0, &sub_08042628);
            M2C_FIELD(&sp8, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
            M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
            sp10 += 0x1800;
            sub_0800FE28(M2C_FIELD(arg0, s32 *, 0x28), sub_0800FCA4(0x1F0, 1, &sp8), 0x63);
            sub_08003220(0x08171630);
        }
    }
    return M2C_FIELD(arg0, u8 *, 0x2E);
}
