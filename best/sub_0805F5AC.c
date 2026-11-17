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

/* Warning: missing "bx $lr" in last block of sub_0805F5AC (_0805F646.1). */

M2C_UNK sub_08000BC8();                             /* extern */
M2C_UNK sub_08000C14(void *);                       /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_080037B0();                             /* extern */
M2C_UNK sub_080037E4(s32);                          /* extern */
M2C_UNK sub_080061F4(u8, u16, s32, u16);            /* extern */
M2C_UNK sub_0800A4E0();                             /* extern */
M2C_UNK sub_080605C0(s32);                          /* extern */
extern void *_0805F784;
extern s32 _0805F788;
extern s32 _0805F78C;
extern s32 _0805F790;
extern s32 _0805F794;
extern void **_0805F798;
extern s32 _0805F79C;
extern s32 _0805F7A0;

void sub_0805F5AC(s32 arg1, u8 arg2) {
    s32 var_r5;
    u16 temp_r1;
    u16 temp_r3;
    u32 var_r6;
    void **temp_r4_2;
    void **temp_r4_3;
    void *temp_r4;

    sub_08000BC8();
    sub_080037E4(0);
    sub_080037B0();
    temp_r4 = _0805F784;
    M2C_FIELD(temp_r4, u16 *, 0) = 0x1F00U;
    M2C_FIELD(temp_r4, u16 *, 8) = (u16) _0805F788;
    M2C_FIELD(temp_r4, u16 *, 0xA) = (u16) _0805F78C;
    M2C_FIELD(temp_r4, u16 *, 0xC) = (u16) _0805F790;
    M2C_FIELD(temp_r4, u16 *, 0xE) = (u16) _0805F794;
    M2C_FIELD(temp_r4, u16 *, 0x10) = 0x78U;
    M2C_FIELD(temp_r4, u16 *, 0x12) = 0x50U;
    M2C_FIELD(temp_r4, u16 *, 0x14) = 0x78U;
    M2C_FIELD(temp_r4, u16 *, 0x16) = 0x50U;
    temp_r3 = M2C_FIELD(temp_r4, u16 *, 0x18);
    M2C_FIELD(temp_r4, u16 *, 0x18) = 0x78U;
    temp_r1 = M2C_FIELD(temp_r4, u16 *, 0x1A);
    M2C_FIELD(temp_r4, u16 *, 0x1A) = 0x50U;
    M2C_FIELD(temp_r4, u16 *, 0x1C) = 0U;
    M2C_FIELD(temp_r4, u16 *, 0x1E) = 0U;
    sub_080061F4(arg2, temp_r1, 0, temp_r3);
    sub_0800A4E0();
    M2C_FIELD(temp_r4, u16 *, 0x50) = 0xFFU;
    M2C_FIELD(temp_r4, u16 *, 0x54) = 0x10U;
    temp_r4_2 = _0805F798;
    *temp_r4_2 = sub_08002B34(0xE4, 0);
    M2C_FIELD(*temp_r4_2, void **, 0x48) = sub_08002B34(_0805F79C, 1);
    var_r6 = 0;
    var_r5 = 0;
    do {
        sub_08000C14(*temp_r4_2 + var_r5);
        var_r5 += 0xC;
        var_r6 += 1;
    } while (var_r6 <= 5U);
    temp_r4_3 = _0805F798;
    sub_080605C0(M2C_FIELD(*temp_r4_3, s32 *, 0x48));
    M2C_FIELD(*temp_r4_3, s32 *, 0x70) = arg1;
    M2C_FIELD(*temp_r4_3, s32 *, 0xA0) = 3;
    M2C_FIELD(*temp_r4_3, s32 *, 0x9C) = 0;
    M2C_FIELD(*temp_r4_3, s32 *, 0xA4) = 0;
    M2C_FIELD(*temp_r4_3, s32 *, 0xA8) = 0;
    M2C_FIELD(*temp_r4_3, s32 *, 0xB0) = 0;
    M2C_FIELD(*temp_r4_3, s32 *, 0xB4) = 0;
    M2C_FIELD(*temp_r4_3, s32 *, 0xE0) = 0;
    M2C_FIELD(*temp_r4_3, s8 *, 0xBE) = 0;
    M2C_FIELD(*temp_r4_3, s8 *, 0xBF) = 0;
    M2C_FIELD(*temp_r4_3, s32 *, 0xC0) = 0;
    M2C_FIELD(*temp_r4_3, s8 *, 0xBC) = 0;
    M2C_FIELD(*temp_r4_3, s8 *, 0xBD) = 0x10;
    M2C_FIELD(*temp_r4_3, s32 *, 0xC4) = (s32) _0805F7A0;
    M2C_FIELD(*temp_r4_3, s32 *, 0xAC) = 6;
    M2C_FIELD(*temp_r4_3, s32 *, 0xB8) = 0;
    M2C_FIELD(*temp_r4_3, void **, 0xC8) = sub_08002B34(0x20, 0);
    sub_08002B34(0x20, 0);
}
