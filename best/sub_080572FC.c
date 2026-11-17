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

M2C_UNK sub_08000BC8(s32);                          /* extern */
s32 sub_080071DC(s32);                              /* extern */
M2C_UNK sub_080082DC(s32, void *, s32, u16);        /* extern */
M2C_UNK sub_080096A4(u8, s32, M2C_UNK *);           /* extern */
M2C_UNK sub_080097EC();                             /* extern */
extern M2C_UNK sub_080578B8;

void sub_080572FC(void) {
    s32 var_r1;
    u16 temp_r0;
    u16 temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *var_r0;

    temp_r4 = *(void **)0x030008D4;
    *(u16 *)0x030011B0 = 0xFF;
    temp_r3 = *(u16 *)0x030011B4;
    *(u16 *)0x030011B4 = M2C_FIELD(temp_r4, u16 *, 0x7C4);
    temp_r0 = M2C_FIELD(temp_r4, u16 *, 0x7C4) + 1;
    M2C_FIELD(temp_r4, u16 *, 0x7C4) = temp_r0;
    if ((s32) (s16) temp_r0 > 0x10) {
        M2C_FIELD(temp_r4, s8 *, 0x7D6) = 1;
        M2C_FIELD(temp_r4, s8 *, 0x7DA) = 0;
        sub_080082DC(0, temp_r4 + 0x7DA, temp_r4 + 0x7C4, temp_r3);
        temp_r3_2 = temp_r4 + 0x64;
        var_r0 = temp_r3_2;
        var_r1 = 0x7F;
        do {
            M2C_FIELD(var_r0, s16 *, 0) = 0xA0;
            M2C_FIELD(var_r0, s16 *, 2) = 0xF0;
            M2C_FIELD(var_r0, s16 *, 4) = 0;
            M2C_FIELD(var_r0, s16 *, 6) = 0;
            var_r0 += 8;
            var_r1 -= 1;
        } while (var_r1 >= 0);
        M2C_FIELD((void *)0x040000D4, void **, 0) = temp_r3_2;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x07000000;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000200;
        sub_08000BC8(M2C_FIELD((void *)0x040000D4, s32 *, 8));
        sub_080097EC();
        if (((sub_080071DC(0) << 0x18) != 0) || ((sub_080071DC(1) << 0x18) != 0) || ((sub_080071DC(2) << 0x18) != 0)) {
            sub_080096A4(M2C_FIELD(temp_r4, u8 *, 0x7CB), 0, &sub_080578B8);
        } else {
            sub_080096A4(M2C_FIELD(temp_r4, u8 *, 0x7CB), 1, &sub_080578B8);
        }
        M2C_FIELD(temp_r4, s32 *, 0x7A8) = 0;
    }
}
