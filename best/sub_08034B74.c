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
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0800FE28(void *, s32, u16);             /* extern */
u8 sub_08052140(void *, s32);                       /* extern */
s32 sub_080529D4();                                 /* extern */

s32 sub_08034B74(void *arg0) {
    u8 temp_r0;
    void *temp_r8;

    temp_r8 = M2C_FIELD(arg0, void **, 0x3C);
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x40));
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x44));
    if ((sub_08052140(arg0 + 0x24, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x2C), 0, 0x800);
    }
    if ((sub_08052140(arg0 + 0x30, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0x38), 0, 0x800);
    }
    if (M2C_FIELD(arg0, u8 *, 0x48) != 0) {
        temp_r0 = sub_08052140(arg0 + 0xC, 0xC00);
        if (temp_r0 == 0) {
            M2C_FIELD(arg0, u8 *, 0x48) = temp_r0;
        }
    } else if ((sub_08052140(arg0 + 0xC, 0x800) << 0x18) != 0) {
        M2C_FIELD(arg0, u8 *, 0x48) = 1U;
        sub_0800FE28(arg0, sub_080529D4(), M2C_FIELD(temp_r8, u16 *, 2));
        sub_08003220(0x08170FBC);
    }
    return 1;
}
