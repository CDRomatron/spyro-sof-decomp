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

M2C_UNK _080465AC(void *);                          /* extern */
M2C_UNK sub_08003C58(s32);                          /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */
M2C_UNK sub_0800445C(s32, s32, s32);                /* extern */
s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_080467A8(void *);                       /* extern */
M2C_UNK sub_080469B0(void *);                       /* extern */

void sub_08046834(void *arg0) {
    s32 temp_r2;
    s32 var_r1;
    s32 var_r1_2;

    if (M2C_FIELD(arg0, s32 *, 0x3C) != M2C_FIELD(arg0, s32 *, 0x34)) {
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    _080465AC(arg0);
    sub_080467A8(arg0);
    temp_r2 = sub_08004508(M2C_FIELD(arg0, s32 *, 0x20));
    if (M2C_FIELD(arg0, s32 *, 0x34) == 4) {
        if (temp_r2 != 0x820000) {
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x20));
        }
    } else if (temp_r2 != 0x820001) {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x20));
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) & 2) {
        sub_0800445C(M2C_FIELD(arg0, s32 *, 0x20), 1, 0);
    } else {
        sub_0800445C(M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x20));
    var_r1 = M2C_FIELD(arg0, s32 *, 0x10) - *(s32 *)0x03002694;
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    var_r1_2 = M2C_FIELD(arg0, s32 *, 0x14) - *(s32 *)0x03002698;
    if (var_r1_2 < 0) {
        var_r1_2 += 0xFF;
    }
    sub_080042A4(M2C_FIELD(arg0, s32 *, 0x20), var_r1 >> 8, var_r1_2 >> 8);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
    if (M2C_FIELD(arg0, s32 *, 0x34) == 8) {
        sub_080469B0(arg0);
    }
}
