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

M2C_UNK sub_08008638(void *, M2C_UNK *, void *);    /* extern */
s32 sub_080502E8(void *);                           /* extern */
s32 sub_080504E0(void *, M2C_UNK *, u16);           /* extern */
s32 sub_08050720(void *, M2C_UNK *, u16, u16, s32); /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

s32 sub_0800D80C(void *arg0, void *arg1) {
    M2C_UNK sp4;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r5;
    s32 temp_r9;
    s32 var_r10;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r5;
    u8 temp_r1;
    void *temp_r0;

    var_r10 = 0;
    var_r5 = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s16 *, 0x14));
    temp_r0 = arg0 + 4;
    M2C_FIELD(&sp4, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&sp4, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(&sp4, s32 *, 8) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x23);
    if (3 & temp_r1) {
        if (1 & temp_r1) {
            var_r5 = sub_080504E0(arg1, &sp4, M2C_FIELD(arg0, u16 *, 0x1A));
        }
        if (2 & M2C_FIELD(arg0, u8 *, 0x23)) {
            var_r5 |= sub_08050720(arg1, &sp4, M2C_FIELD(arg0, u16 *, 0x10), M2C_FIELD(arg0, u16 *, 0x12), (s32) M2C_FIELD(arg0, u16 *, 0x1A));
        }
    }
    sub_08008638(arg1, &sp4, arg1);
    if (1 & var_r5) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (0 - M2C_FIELD(arg0, s32 *, 4));
    }
    if (2 & var_r5) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (0 - M2C_FIELD(arg0, s32 *, 8));
    }
    temp_r0_2 = sub_080502E8(arg1);
    if ((s32) M2C_FIELD(arg1, s32 *, 8) < temp_r0_2) {
        M2C_FIELD(arg1, s32 *, 8) = temp_r0_2;
        temp_r0_3 = sub_08063D80((0 - M2C_FIELD(arg0, s32 *, 0xC)) * M2C_FIELD(arg0, u16 *, 0x18), 0x100);
        M2C_FIELD(arg0, s32 *, 0xC) = temp_r0_3;
        if (temp_r0_3 < (s32) M2C_FIELD(arg0, s16 *, 0x14)) {
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
        } else {
            var_r10 = 3;
        }
        temp_r5 = M2C_FIELD(arg0, s32 *, 4);
        temp_r9 = M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - sub_08063D80(M2C_FIELD(arg0, s16 *, 0x16) * temp_r5, 0x100));
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - sub_08063D80(M2C_FIELD(arg0, s32 *, 8) * M2C_FIELD(arg0, s16 *, 0x16), 0x100));
        temp_r0_4 = M2C_FIELD(arg0, s32 *, 4);
        if ((temp_r0_4 == temp_r5) && (temp_r0_4 != 0)) {
            var_r1 = temp_r0_4 - 1;
            if (temp_r0_4 < 0) {
                var_r1 = temp_r0_4 + 1;
            }
            M2C_FIELD(arg0, s32 *, 4) = var_r1;
        }
        temp_r0_5 = M2C_FIELD(arg0, s32 *, 8);
        if ((temp_r0_5 == temp_r9) && (temp_r0_5 != 0)) {
            var_r1_2 = temp_r0_5 - 1;
            if (temp_r0_5 < 0) {
                var_r1_2 = temp_r0_5 + 1;
            }
            M2C_FIELD(arg0, s32 *, 8) = var_r1_2;
        }
    }
    if (((M2C_FIELD(arg0, s32 *, 4) | M2C_FIELD(arg0, s32 *, 8) | M2C_FIELD(arg0, s32 *, 0xC)) == 0) && (M2C_FIELD(arg1, s32 *, 8) == temp_r0_2)) {
        var_r10 = 1;
    }
    return var_r10;
}
