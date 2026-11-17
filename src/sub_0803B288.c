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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_080044A4(s32, s32);                     /* extern */
s32 sub_0800D9EC(void *, s32);                      /* extern */
s32 sub_080502E8(s32);                              /* extern */
extern M2C_UNK sub_0803B2F0;

s32 sub_0803B288(void *arg0) {
    s32 temp_r5;

    temp_r5 = arg0 + 0x28;
    if (sub_0800D9EC(arg0, temp_r5) == 3) {
        if (sub_080502E8(temp_r5) == 0) {
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x34), 0x780003);
            sub_080044A4(M2C_FIELD(arg0, s32 *, 0x34), 1);
            M2C_FIELD(arg0, M2C_UNK **, 0x38) = &sub_0803B2F0;
            M2C_FIELD(arg0, s8 *, 0x3C) = 1;
            sub_08004020(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            sub_080043A4(M2C_FIELD(arg0, s32 *, 0x34));
            M2C_FIELD(arg0, s8 *, 0x3E) = 1;
        }
    } else {
        sub_08004020(M2C_FIELD(arg0, s32 *, 0x34));
    }
    return 1;
}
