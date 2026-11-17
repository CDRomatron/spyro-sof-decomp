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

M2C_UNK sub_0800201C(s32, u8, s32, s32, s32, s32, s32, void *, s32 *); /* extern */
u8 sub_08002498(s32, s32 *);                        /* extern */

s32 sub_080562EC(void) {
    s32 sp14;
    s32 sp18;
    u32 var_r1;
    void *temp_r5;
    void *var_r0;

    temp_r5 = *(void **)0x030008D4;
    var_r1 = 0;
    var_r0 = temp_r5 + 0x64;
    do {
        M2C_FIELD(var_r0, s16 *, 0) = 0xA0;
        M2C_FIELD(var_r0, s16 *, 2) = 0xF0;
        M2C_FIELD(var_r0, s16 *, 4) = 0;
        M2C_FIELD(var_r0, s16 *, 6) = 0;
        var_r0 += 8;
        var_r1 += 1;
    } while (var_r1 <= 0x7FU);
    M2C_FIELD(temp_r5, u8 *, 0x7D1) = sub_08002498(0x24A, &sp14);
    sp18 = 0x06018000 - (M2C_FIELD(temp_r5, u8 *, 0x7D1) << 7);
    sub_0800201C(sp14, M2C_FIELD(temp_r5, u8 *, 0x7D1), M2C_FIELD(temp_r5, s32 *, 0x7A0), 0x78, 0x94, 1, 0xF, temp_r5 + (((0x80 - M2C_FIELD(temp_r5, u8 *, 0x7D1)) * 8) + 0x64), &sp18);
    M2C_FIELD((void *)0x040000D4, void **, 0) = (void *) (temp_r5 + 0x64);
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x07000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000200;
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
