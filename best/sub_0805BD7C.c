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

M2C_UNK sub_080030BC(s32);                          /* extern */
M2C_UNK sub_0805BCA4(s32);                          /* extern */

void sub_0805BD7C(void) {
    s16 sp0;
    u16 temp_r0;
    u8 *var_r1;
    u8 temp_r4;
    void *temp_r5;
    void *temp_r6;

    temp_r5 = *(void **)0x030026DC;
    if (M2C_FIELD(temp_r5, u8 *, 0x2A) != 0) {
        temp_r4 = 0xF & M2C_FIELD(temp_r5, u16 *, 0x1C);
        if (temp_r4 == 0) {
            M2C_FIELD(temp_r5, u8 *, 0x2A) = temp_r4;
            temp_r6 = M2C_FIELD(temp_r5, void **, 0xC);
            if ((u32) M2C_FIELD(temp_r5, u16 *, 0x18) >= (u32) M2C_FIELD(temp_r6, u16 *, 2)) {
                sp0 = (s16) temp_r4;
                M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
                M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) ((M2C_FIELD(temp_r5, u16 *, 0x1A) << 6) + 0x0600F000);
                M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x8100001E;
                sp0 = (s16) temp_r4;
                M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
                M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (((M2C_FIELD(temp_r5, u16 *, 0x1A) + 1) << 6) + 0x0600F000);
                M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x8100001E;
                var_r1 = temp_r5 + 0x29;
                M2C_FIELD(temp_r5, s8 *, 0x29) = 1;
            } else {
                M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *) (temp_r6 + ((M2C_FIELD(temp_r5, u16 *, 0x18) * 0x3C) + 4));
                M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) ((M2C_FIELD(temp_r5, u16 *, 0x1A) << 6) + 0x0600F000);
                M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x8000001E;
                M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *) (temp_r6 + (((M2C_FIELD(temp_r5, u16 *, 0x18) + 1) * 0x3C) + 4));
                M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (((M2C_FIELD(temp_r5, u16 *, 0x1A) + 1) << 6) + 0x0600F000);
                M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x8000001E;
                M2C_FIELD(temp_r5, u16 *, 0x18) = (u16) (M2C_FIELD(temp_r5, u16 *, 0x18) + 2);
                var_r1 = temp_r5 + 0x29;
            }
            if (*var_r1 != 0) {
                temp_r0 = M2C_FIELD(temp_r5, u16 *, 0x14) - 1;
                M2C_FIELD(temp_r5, u16 *, 0x14) = temp_r0;
                if ((temp_r0 << 0x10) == 0) {
                    sub_0805BCA4(2);
                }
                if ((M2C_FIELD(temp_r5, u16 *, 0x14) == 4) && (M2C_FIELD(temp_r5, u8 *, 0x2C) != 0)) {
                    sub_080030BC(0x3C);
                }
            }
            M2C_FIELD(temp_r5, u16 *, 0x1A) = (u16) ((M2C_FIELD(temp_r5, u16 *, 0x1A) + 2) & 0x3F);
        }
    }
    if (!(*(s32 *)0x030010B4 & 1)) {
        M2C_FIELD(temp_r5, u16 *, 0x1C) = (u16) (M2C_FIELD(temp_r5, u16 *, 0x1C) + 1);
        M2C_FIELD(temp_r5, u8 *, 0x2A) = 1U;
    }
}
