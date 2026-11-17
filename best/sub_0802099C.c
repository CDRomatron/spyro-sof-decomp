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

void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_080044A4(s32, s32);                     /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_0802099C(u16 arg0, void *arg2) {
    s32 temp_r0_2;
    u16 *var_r1;
    u32 var_r2;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x50, 1);
    sub_08065CF0(temp_r0, 0, 0x50);
    M2C_FIELD(temp_r0, s8 *, 0x4C) = 1;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    var_r2 = 0;
    var_r1 = (u16 *)0x0817757C;
loop_3:
    if (*var_r1 == arg0) {
        M2C_FIELD(temp_r0, u16 **, 0x3C) = var_r1;
    } else {
        var_r2 += 1;
        if (var_r2 <= 9U) {
            var_r1 = (var_r2 * 8) + 0x0817757C;
            goto loop_3;
        }
    }
    M2C_FIELD(temp_r0, s32 *, 0x40) = sub_08004370();
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x44) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x570000);
    sub_080044A4(M2C_FIELD(temp_r0, s32 *, 0x44), 1);
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x40), 0x570001);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
