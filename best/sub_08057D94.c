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

M2C_UNK sub_0800217C(s32, s32, s32, s32);           /* extern */
s32 sub_08002498(s32, s32 *);                       /* extern */
M2C_UNK sub_08002564(s32);                          /* extern */
M2C_UNK sub_080025B4(s32);                          /* extern */
M2C_UNK sub_08002640(s32, u32, s32);                /* extern */
s32 sub_080026B8(s32, s32, s32);                    /* extern */
s32 sub_08006C64(M2C_UNK *);                        /* extern */
M2C_UNK sub_08006FD4(s32);                          /* extern */
M2C_UNK sub_08057C30(s32);                          /* extern */

void sub_08057D94(void) {
    M2C_UNK sp0;
    s32 sp4;
    s32 temp_r0_2;
    u16 temp_r0;
    u16 temp_r0_3;
    void *temp_r6;

    temp_r6 = *(void **)0x030008D8;
    temp_r0 = M2C_FIELD(temp_r6, u16 *, 0x1AC4);
    if (temp_r0 == 0) {
        if ((sub_08006C64(&sp0) << 0x18) != 0) {
            sub_08006FD4(0);
            M2C_FIELD(temp_r6, u16 *, 0x1AC4) = 0x78U;
            sub_08002564(M2C_FIELD(temp_r6, s32 *, 0x1A9C));
            temp_r0_2 = sub_08002498(0x24C, &sp4);
            sub_08002640(M2C_FIELD(temp_r6, s32 *, 0x1A9C), (u32) ((0xF0 - sub_080026B8(sp4, temp_r0_2, M2C_FIELD(temp_r6, s32 *, 0x1AA0))) << 0xF) >> 0x10, 3);
            sub_0800217C(sp4, temp_r0_2, M2C_FIELD(temp_r6, s32 *, 0x1A9C), 1);
            sub_080025B4(M2C_FIELD(temp_r6, s32 *, 0x1A9C));
        }
    } else {
        temp_r0_3 = temp_r0 - 1;
        M2C_FIELD(temp_r6, u16 *, 0x1AC4) = temp_r0_3;
        if ((temp_r0_3 << 0x10) == 0) {
            sub_08057C30(2);
            return;
        }
        if (0xB & *(u16 *)0x030010B0) {
            M2C_FIELD(temp_r6, u16 *, 0x1AC4) = 2U;
        }
        if (M2C_FIELD(temp_r6, u16 *, 0x1AC4) == 2) {
            sub_08002564(M2C_FIELD(temp_r6, s32 *, 0x1A9C));
            sub_080025B4(M2C_FIELD(temp_r6, s32 *, 0x1A9C));
        }
    }
}
