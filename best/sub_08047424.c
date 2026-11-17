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

M2C_UNK sub_08003C58(s32);                          /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */
s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_0804738C(void *);                       /* extern */

void sub_08047424(void *arg0) {
    s32 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r2;

    temp_r2 = sub_08004508(M2C_FIELD(arg0, s32 *, 0x20));
    if ((M2C_FIELD(arg0, s32 *, 0x34) == 0) && (temp_r2 != 0x830000)) {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x20));
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x20));
    var_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    var_r0_2 = *(s32 *)0x03002694;
    if (var_r0_2 < 0) {
        var_r0_2 += 0xFF;
    }
    var_r2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r2 < 0) {
        var_r2 += 0xFF;
    }
    var_r0_3 = *(s32 *)0x03002698;
    if (var_r0_3 < 0) {
        var_r0_3 += 0xFF;
    }
    sub_080042A4(M2C_FIELD(arg0, s32 *, 0x20), (var_r0 >> 8) - (var_r0_2 >> 8), (var_r2 >> 8) - (var_r0_3 >> 8));
    if (M2C_FIELD(arg0, s32 *, 0x34) == 1) {
        sub_0804738C(arg0);
    }
}
