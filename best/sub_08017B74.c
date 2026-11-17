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

M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052BB4(void *);                           /* extern */
s32 sub_08052CF4(s32);                              /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_08017B74(void *arg0) {
    s32 temp_r0_2;
    u16 temp_r0;
    void *temp_r5;

    temp_r5 = arg0 + 0x24;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x84));
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24) + M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(temp_r5, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(temp_r5, s32 *, 8));
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xA0);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u16 *, 0xA0) = (u16) (temp_r0 - 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x8C) != 0) {
        sub_080641CC(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xA8) != 0) {
        M2C_FIELD(arg0, s32 *, 0x94) = sub_08052BB4(temp_r5);
    }
    if ((M2C_FIELD(arg0, u8 *, 0xB0) != 0) && (M2C_FIELD(arg0, u16 *, 0x9C) == 0x15B)) {
        M2C_FIELD(arg0, u8 *, 0xB0) = 0U;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        temp_r0_2 = sub_08052CF4(0x145);
        M2C_FIELD(arg0, s32 *, 0x90) = temp_r0_2;
        sub_0800FE28(arg0, temp_r0_2, 0x34);
    }
    return M2C_FIELD(arg0, u8 *, 0xAD);
}
