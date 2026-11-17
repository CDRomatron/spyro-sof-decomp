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
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_080539E4(s32, s32);                     /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_0803B6F4(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    u16 temp_r0;
    void *temp_r6;

    temp_r6 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x3C));
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        sub_080641CC(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x44) = sub_08052BB4(temp_r6);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r5 = M2C_FIELD(temp_r6, s32 *, 4);
    sub_080528D4(arg0, temp_r4, temp_r5, sub_080502E8(temp_r6));
    if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
        M2C_FIELD(arg0, u8 *, 0x4C) = 0U;
        temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 0xA);
        switch (temp_r0) {                          /* irregular */
        case 39:
            M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xB1U;
            var_r0 = 0x27;
block_13:
            sub_080539E4(var_r0, 0xDF);
            break;
        case 40:
            M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xB2U;
            var_r0 = 0x28;
            goto block_13;
        case 41:
            M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xB3U;
            var_r0 = 0x29;
            goto block_13;
        case 42:
            M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xB4U;
            sub_080539E4(0x2A, 0xDF);
            break;
        }
    }
    return M2C_FIELD(arg0, u8 *, 0x4D);
}
