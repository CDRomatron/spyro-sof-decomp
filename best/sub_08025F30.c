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

s32 sub_0806436C(s32, s32);                         /* extern */

void sub_08025F30(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    void *temp_r0;
    void *temp_r6;

    temp_r6 = arg0 + 0x24;
    temp_r0 = arg0 + 0x5C;
    temp_r2 = M2C_FIELD(arg1, s32 *, 8);
    temp_r1 = M2C_FIELD(temp_r6, s32 *, 8);
    var_r0 = temp_r2 - temp_r1;
    if (var_r0 < 0) {
        var_r0 = temp_r1 - temp_r2;
    }
    var_r2 = sub_0806436C(var_r0, arg2);
    if ((s32) M2C_FIELD(arg1, s32 *, 8) < (s32) M2C_FIELD(temp_r6, s32 *, 8)) {
        var_r2 = 0 - var_r2;
    }
    M2C_FIELD(temp_r0, s32 *, 8) = var_r2;
    M2C_FIELD(temp_r0, s32 *, 8) = (s32) (var_r2 + ((u32) (M2C_FIELD(arg0, s16 *, 0x6C) * arg2) >> 1));
    temp_r0_2 = M2C_FIELD(arg1, s32 *, 0);
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_r1_2 = temp_r0_2 - temp_r2_2;
    if (temp_r1_2 >= 0) {
        var_r0_2 = temp_r1_2;
    } else {
        var_r0_2 = temp_r2_2 - temp_r0_2;
    }
    var_r1 = sub_0806436C(var_r0_2, arg2);
    if (temp_r0_2 < (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        var_r1 = 0 - var_r1;
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = var_r1;
    temp_r0_3 = M2C_FIELD(arg1, s32 *, 4);
    temp_r2_3 = M2C_FIELD(temp_r6, s32 *, 4);
    temp_r1_3 = temp_r0_3 - temp_r2_3;
    if (temp_r1_3 >= 0) {
        var_r0_3 = temp_r1_3;
    } else {
        var_r0_3 = temp_r2_3 - temp_r0_3;
    }
    var_r1_2 = sub_0806436C(var_r0_3, arg2);
    if (temp_r0_3 < (s32) M2C_FIELD(temp_r6, s32 *, 4)) {
        var_r1_2 = 0 - var_r1_2;
    }
    M2C_FIELD(temp_r0, s32 *, 4) = var_r1_2;
}
