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
M2C_UNK sub_0800767C(u8);                           /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
s32 sub_08052CF4(s32);                              /* extern */

u8 sub_0801E64C(void *arg0) {
    u8 *var_r1;
    void *temp_r5;
    void *temp_r6;

    temp_r6 = *(void **)0x03001634;
    temp_r5 = arg0 + 0xC;
    if (M2C_FIELD(arg0, u8 *, 0x30) != 0) {
        M2C_FIELD(arg0, u8 *, 0x30) = 0U;
        M2C_FIELD(arg0, s32 *, 0x24) = sub_08052CF4(0x1D9);
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x28));
    var_r1 = arg0 + 0x31;
    if ((sub_08052140(temp_r5, 0x1300) << 0x18) != 0) {
        if ((M2C_FIELD(temp_r6, u16 *, 0x30) == 0x200) && (((sub_08007874(0x19) << 0x18) != 0) || (*(s32 *)0x030026C8 & 4))) {
            sub_0800FCA4(0xD0, 1, temp_r5);
            if (M2C_FIELD(arg0, u16 *, 0x2C) == 0x1DA) {
                sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x24), 1);
            } else {
                sub_0800767C((u8) M2C_FIELD(arg0, u16 *, 0x2E));
            }
            var_r1 = arg0 + 0x31;
            M2C_FIELD(arg0, s8 *, 0x31) = 0;
        } else {
            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 0, 0x980);
            var_r1 = arg0 + 0x31;
        }
    }
    return *var_r1;
}
