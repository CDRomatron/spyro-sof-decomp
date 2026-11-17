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
s32 sub_08007618(u8);                               /* extern */
M2C_UNK sub_0800FDA0(void *, void *, void *);       /* extern */
M2C_UNK sub_08012034(void *, s32);                  /* extern */
u16 sub_0801DA58(void *, s32, s32);                 /* extern */
M2C_UNK sub_080522C8(void *);                       /* extern */
M2C_UNK sub_08065C90(void *, void *, s32);          /* extern */

void sub_08011E08(void *arg0) {
    u16 temp_r0;
    void *temp_r1;
    void *temp_r4;

    temp_r0 = sub_0801DA58(arg0 + 0xC, 0x800, sub_08004534(M2C_FIELD(arg0, s32 *, 0x24)) << 8);
    temp_r1 = M2C_FIELD(arg0, void **, 0x28);
    if ((temp_r0 == M2C_FIELD(temp_r1, u16 *, 4)) || (temp_r0 == M2C_FIELD(temp_r1, u16 *, 6))) {
        if (M2C_FIELD(temp_r1, s32 *, 0xC) != 0) {
            sub_08012034(arg0, 1);
            M2C_FIELD(arg0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(arg0, u16 *, 0x22));
            sub_080522C8(arg0);
        } else {
            sub_08012034(arg0, 2);
        }
        if (((sub_08007618(M2C_FIELD(arg0, u8 *, 0x30)) << 0x18) != 0) && (M2C_FIELD((void *)0x03001600, void **, 0x14) != NULL)) {
            temp_r4 = arg0 + 0xC;
            sub_08065C90((void *)0x03001600 + 8, temp_r4, 0xC);
            sub_0800FDA0(arg0, M2C_FIELD((void *)0x03001600, void **, 0x14), temp_r4);
            sub_080522C8(M2C_FIELD((void *)0x03001600, void **, 0x14));
        }
        sub_08003220(M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x14));
    }
}
