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

M2C_UNK sub_08000BC8();                             /* extern */
M2C_UNK sub_08004DE8(void *, M2C_UNK *, s32, s32);  /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

void sub_08004690(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_r5;
    M2C_UNK *var_r5_2;
    s32 temp_r1;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
    if (arg1 > (s32) ((temp_r3 - (temp_r4 * 8)) << 8)) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((temp_r3 << 8) - (temp_r4 << 0xB));
    } else if (arg1 < 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x2C);
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x24);
    if (arg2 > (s32) ((temp_r3_2 - (temp_r1 * 8)) << 8)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((temp_r3_2 << 8) - (temp_r1 << 0xB));
    } else if (arg2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    }
    var_r5 = M2C_FIELD(arg0, M2C_UNK **, 0);
    if (*var_r5 != NULL) {
        do {
            M2C_FIELD(var_r5, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
            M2C_FIELD(var_r5, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            temp_r4_2 = sub_08063D80(M2C_FIELD(var_r5, s32 *, 0x50) * M2C_FIELD(arg0, s32 *, 0x18), 0x100);
            sub_08004DE8(arg0, var_r5, temp_r4_2, sub_08063D80(M2C_FIELD(var_r5, s32 *, 0x54) * M2C_FIELD(arg0, s32 *, 0x1C), 0x100));
            sub_08000BC8();
            var_r5 = M2C_FIELD(var_r5, M2C_UNK **, 0);
        } while (*var_r5 != NULL);
    }
    var_r5_2 = M2C_FIELD(arg0, M2C_UNK **, 0xC);
    if (*var_r5_2 != NULL) {
        do {
            M2C_FIELD(var_r5_2, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
            M2C_FIELD(var_r5_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            temp_r4_3 = sub_08063D80(M2C_FIELD(var_r5_2, s32 *, 0x50) * M2C_FIELD(arg0, s32 *, 0x18), 0x100);
            sub_08004DE8(arg0, var_r5_2, temp_r4_3, sub_08063D80(M2C_FIELD(var_r5_2, s32 *, 0x54) * M2C_FIELD(arg0, s32 *, 0x1C), 0x100));
            sub_08000BC8();
            var_r5_2 = M2C_FIELD(var_r5_2, M2C_UNK **, 0);
        } while (*var_r5_2 != NULL);
    }
}
