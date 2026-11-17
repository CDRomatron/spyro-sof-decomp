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
s32 sub_08008900(s32, s32);                         /* extern */
s32 sub_0800FCA4(s32, s32, M2C_UNK *);              /* extern */
M2C_UNK sub_0800FD8C(s32, s32, s32);                /* extern */
M2C_UNK sub_08034588(void *, s32);                  /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_08054DCC(void *, s32, s32, M2C_UNK *);  /* extern */
s32 sub_08054E90(M2C_UNK *, s32);                   /* extern */
s32 sub_08054F80(M2C_UNK *, s32);                   /* extern */

void sub_08034490(void *arg0) {
    M2C_UNK sp0;
    M2C_UNK spC;
    s32 temp_r1;
    s32 temp_r5;
    s32 var_r4;
    s32 var_r7;
    void *temp_r0;

    if ((u32) M2C_FIELD(arg0, u16 *, 0x48) > 0xF0U) {
        temp_r0 = arg0 + 0xC;
        M2C_FIELD(&spC, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(&spC, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
        M2C_FIELD(&spC, s32 *, 8) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
        if (sub_08008900(M2C_FIELD(arg0, s32 *, 0x30), 0) < 0) {
            var_r4 = 0 - sub_08008900(M2C_FIELD(arg0, s32 *, 0x30), 0);
        } else {
            var_r4 = sub_08008900(M2C_FIELD(arg0, s32 *, 0x30), 0);
        }
        if (sub_08008900(M2C_FIELD(arg0, s32 *, 0x30), 0x4000) < 0) {
            if ((s64) (var_r4 + sub_08008900(M2C_FIELD(arg0, s32 *, 0x30), 0x4000)) >= 0) {
                goto block_9;
            }
            goto block_8;
        }
        if (var_r4 < sub_08008900(M2C_FIELD(arg0, s32 *, 0x30), 0x4000)) {
block_8:
            var_r7 = 0;
        } else {
block_9:
            var_r7 = 0x4000;
        }
        M2C_FIELD(&spC, s32 *, 8) = (s32) (M2C_FIELD(&spC, s32 *, 8) + 0x2E00);
        sub_08054DCC(arg0 + 0xC, var_r7, 0x1000, &sp0);
        temp_r5 = sub_08054E90(&sp0, 0);
        temp_r1 = sub_08054F80(&sp0, 0);
        if ((temp_r5 > (s32) M2C_FIELD(&spC, s32 *, 8)) || (temp_r1 != 0)) {
            M2C_FIELD(arg0, u16 *, 0x48) = 0U;
        } else {
            sub_0800FD8C(0, sub_0800FCA4(0x180, 1, &spC), var_r7);
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x34), 0x110003);
            sub_08034588(arg0, 1);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x30) = sub_08052BB4(arg0 + 0xC);
}
