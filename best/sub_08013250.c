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

s32 sub_08004534(s32);                              /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0801345C(void *, s32);                  /* extern */
u16 sub_0801DA58(void *, s32, s32);                 /* extern */
s32 sub_08052140(void *, s32);                      /* extern */

void sub_08013250(void *arg0) {
    s32 temp_r4_2;
    u16 temp_r1;
    void *temp_r4;
    void *temp_r6;

    temp_r4 = *(void **)0x03001634;
    temp_r6 = arg0 + 0xC;
    if ((sub_08052140(temp_r6, 0x700) << 0x18) != 0) {
        temp_r4_2 = 0x2200 & M2C_FIELD(temp_r4, u16 *, 0x30);
        if (temp_r4_2 == 0) {
            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), temp_r4_2, 0x700);
            return;
        }
        goto block_5;
    }
    temp_r1 = sub_0801DA58(temp_r6, 0x700, sub_08004534(M2C_FIELD(arg0, s32 *, 0x28)) << 8);
    if (M2C_FIELD(arg0, u8 *, 0x45) == 0) {
        if (temp_r1 != 0) {
block_5:
            sub_0801345C(arg0, 1);
        }
    } else if ((u32) (u16) (temp_r1 - 3) <= 2U) {
        sub_0801345C(arg0, 1);
    }
}
