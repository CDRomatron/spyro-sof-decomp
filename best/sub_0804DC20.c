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

s32 sub_0804B66C(s32, s32);                         /* extern */
s32 sub_0804B6E8(s32, s32);                         /* extern */
M2C_UNK sub_0804D5B4(void *);                       /* extern */

void sub_0804DC20(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    s32 var_r1;
    s32 var_r1_2;

    if (sub_0804B66C(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14)) != 0) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x54) | 2;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) < 0) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x54) | 2;
    } else {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x54) & ~2;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = var_r0;
    sub_0804D5B4(arg0);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x54);
    if (8 & temp_r1) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x64) - 1;
        M2C_FIELD(arg0, s32 *, 0x64) = temp_r0;
        if (temp_r0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_r1 & ~8);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) <= 1) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x34) + 0x4C;
        M2C_FIELD(arg0, s32 *, 0x34) = temp_r2;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s32 *, 0x30));
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + temp_r2);
    }
    var_r0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (var_r0_2 < 0) {
        var_r0_2 += 0xFF;
    }
    temp_r6 = var_r0_2 >> 0xB;
    var_r1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    temp_r5 = var_r1 >> 0xB;
    if (M2C_FIELD(arg0, s32 *, 0x54) & 4) {
        if ((sub_0804B6E8(temp_r6 - 2, temp_r5) << 0x18) != 0) {
            var_r0_3 = M2C_FIELD(arg0, s32 *, 0x54) | 0x20;
        } else {
            var_r0_3 = M2C_FIELD(arg0, s32 *, 0x54) & ~0x20;
        }
        M2C_FIELD(arg0, s32 *, 0x54) = var_r0_3;
        if ((sub_0804B6E8(temp_r6 + 2, temp_r5) << 0x18) != 0) {
            var_r0_4 = M2C_FIELD(arg0, s32 *, 0x54) | 0x10;
        } else {
            goto block_25;
        }
    } else {
        if ((sub_0804B6E8(temp_r6 + 0x16, temp_r5) << 0x18) != 0) {
            var_r0_5 = M2C_FIELD(arg0, s32 *, 0x54) | 0x20;
        } else {
            var_r0_5 = M2C_FIELD(arg0, s32 *, 0x54) & ~0x20;
        }
        M2C_FIELD(arg0, s32 *, 0x54) = var_r0_5;
        if ((sub_0804B6E8(temp_r6 - 2, temp_r5) << 0x18) != 0) {
            var_r0_4 = M2C_FIELD(arg0, s32 *, 0x54) | 0x10;
        } else {
block_25:
            var_r0_4 = M2C_FIELD(arg0, s32 *, 0x54) & ~0x10;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x54) = var_r0_4;
    var_r0_6 = M2C_FIELD(arg0, s32 *, 0x10);
    if (var_r0_6 < 0) {
        var_r0_6 += 0xFF;
    }
    temp_r6_2 = var_r0_6 >> 0xB;
    var_r1_2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r1_2 < 0) {
        var_r1_2 += 0xFF;
    }
    temp_r5_2 = (var_r1_2 >> 0xB) + 1;
    if (M2C_FIELD(arg0, s32 *, 0x54) & 4) {
        if ((sub_0804B6E8(temp_r6_2 - 1, temp_r5_2) << 0x18) == 0) {
            var_r0_7 = M2C_FIELD(arg0, s32 *, 0x54) | 0x40;
        } else {
            var_r0_7 = M2C_FIELD(arg0, s32 *, 0x54) & ~0x40;
        }
        M2C_FIELD(arg0, s32 *, 0x54) = var_r0_7;
        if ((sub_0804B6E8(temp_r6_2 + 1, temp_r5_2) << 0x18) == 0) {
            var_r0_8 = M2C_FIELD(arg0, s32 *, 0x54) | 0x80;
        } else {
            goto block_41;
        }
    } else {
        if ((sub_0804B6E8(temp_r6_2 + 1, temp_r5_2) << 0x18) == 0) {
            var_r0_9 = M2C_FIELD(arg0, s32 *, 0x54) | 0x40;
        } else {
            var_r0_9 = M2C_FIELD(arg0, s32 *, 0x54) & ~0x40;
        }
        M2C_FIELD(arg0, s32 *, 0x54) = var_r0_9;
        if ((sub_0804B6E8(temp_r6_2 - 1, temp_r5_2) << 0x18) == 0) {
            var_r0_8 = M2C_FIELD(arg0, s32 *, 0x54) | 0x80;
        } else {
block_41:
            var_r0_8 = M2C_FIELD(arg0, s32 *, 0x54) & ~0x80;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x54) = var_r0_8;
}
