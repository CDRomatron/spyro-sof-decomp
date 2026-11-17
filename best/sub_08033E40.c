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

s32 sub_08003220(s32);                              /* extern */
s32 sub_0800D9EC(s32, void *);                      /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_08033884(void *, s32);                  /* extern */
u32 sub_08051B3C(void *);                           /* extern */

s32 sub_08033E40(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    u32 temp_r0;
    void *temp_r0_2;
    void *temp_r5;

    temp_r5 = arg0 + 0x24;
    var_r0 = sub_0800D9EC(arg0 + 0x3C, temp_r5);
    if (var_r0 == 3) {
        temp_r0 = sub_08051B3C(temp_r5);
        if ((temp_r0 <= 3U) && (temp_r0 >= 1U)) {
            var_r0_2 = 0x19D;
            goto block_9;
        }
        if (M2C_FIELD(arg0, u8 *, 0xAE) == 0) {
            return sub_08003220(0x081709B8);
        }
        return sub_08003220(0x08171064);
    }
    if (var_r0 == 1) {
        var_r0_2 = 0x18E;
block_9:
        sub_0800FCA4(var_r0_2, 1, temp_r5);
        sub_08033884(arg0, 0);
        temp_r0_2 = arg0 + 0x98;
        var_r0 = temp_r0_2 + 0xC;
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x98);
        M2C_FIELD(temp_r5, s32 *, 4) = (s32) M2C_FIELD(temp_r0_2, s32 *, 4);
        M2C_FIELD(temp_r5, s32 *, 8) = (s32) M2C_FIELD(temp_r0_2, s32 *, 8);
    }
    return var_r0;
}
