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

M2C_UNK sub_08004478(s32, s32);                     /* extern */
s32 sub_08004520(s32);                              /* extern */
M2C_UNK sub_08050228(s32, void *, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0805209C(void *, s32);                  /* extern */

void sub_08015F14(void *arg0) {
    s32 temp_r4;
    u32 var_r8;
    void *var_r5;
    void *var_r6;

    var_r8 = 0;
    if ((u32) M2C_FIELD(arg0, u8 *, 0x1B4) > 0U) {
        var_r6 = arg0 + 0x4C;
        var_r5 = arg0 + 0x5C;
        do {
            if (M2C_FIELD(var_r5, u8 *, 0x15) == 0) {
                sub_08050228(M2C_FIELD(var_r5, s32 *, 0xC), var_r5, 0, M2C_FIELD(var_r5, s32 *, 0), M2C_FIELD(var_r5, s32 *, 4), M2C_FIELD(var_r5, s32 *, 8) - 1);
                if (M2C_FIELD(var_r5, u8 *, 0x14) != 0) {
                    temp_r4 = M2C_FIELD(var_r5, s32 *, 0x10);
                    sub_08004478(temp_r4, sub_08004520(M2C_FIELD(var_r5, s32 *, 0xC)));
                    sub_0805209C(var_r6, 0);
                }
            }
            var_r6 += 0x50;
            var_r5 += 0x50;
            var_r8 += 1;
        } while (var_r8 < (u32) M2C_FIELD(arg0, u8 *, 0x1B4));
    }
}
