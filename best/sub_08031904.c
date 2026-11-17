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

u8 sub_08007324(M2C_UNK, u16, u16);                 /* extern */
s32 sub_0801DB88();                                 /* extern */
s32 sub_08052140(s32, s32);                         /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
u8 sub_0805399C();                                  /* extern */
M2C_UNK sub_080539E4(u8, u16);                      /* extern */

s32 sub_08031904(void *arg0) {
    u16 temp_r1;
    u16 temp_r2;
    u8 var_r2;
    void *temp_r4;

    if (((sub_0801DB88() << 0x18) != 0) && (sub_0805399C() == 3) && (M2C_FIELD(arg0, u8 *, 0x2C) == 0) && ((sub_08052140(arg0 + 0xC, 0x700) << 0x18) != 0)) {
        sub_080534A0(5);
        temp_r4 = M2C_FIELD(arg0, void **, 0x24);
        temp_r1 = M2C_FIELD(arg0, u16 *, 0x28);
        temp_r2 = M2C_FIELD((void *)0x03001600, u16 *, 0x1E);
        M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = temp_r1;
        if (sub_08007324(0x03001600, temp_r1, temp_r2) == M2C_FIELD(temp_r4, u8 *, 2)) {
            var_r2 = M2C_FIELD(temp_r4, u8 *, 1);
        } else {
            var_r2 = M2C_FIELD(temp_r4, u8 *, 2);
        }
        M2C_FIELD(arg0, u8 *, 0x2C) = 1U;
        sub_080539E4(var_r2, M2C_FIELD(arg0, u16 *, 0x2A));
    }
    return 1;
}
