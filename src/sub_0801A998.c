/* identical to sub_0801A9D8 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_08008900(s32, s32);                         /* extern */
M2C_UNK sub_0801A130(void *, s32);                  /* extern */
M2C_UNK sub_0801A504(void *, s32);                  /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

s32 sub_0801A998(void *arg0, u16 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x140) == 0) {
        sub_0801A130(arg0, 2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x128) = (s32) (M2C_FIELD(arg0, s32 *, 0x128) - sub_08063D80(M2C_FIELD(arg0, s32 *, 0x128) * 0x19, 0x100));
        M2C_FIELD(arg0, s32 *, 0x12C) = (s32) (M2C_FIELD(arg0, s32 *, 0x12C) - sub_08063D80(M2C_FIELD(arg0, s32 *, 0x12C) * 0x19, 0x100));
    }
    sub_0801A504(arg0, 0xD00);
    if (8 & arg1) {
        if (sub_08008900(arg2, M2C_FIELD(arg0, s32 *, 0x134)) < 0) {
            if ((s32) (0 - sub_08008900(arg2, M2C_FIELD(arg0, s32 *, 0x134))) > 0x40FF) {

            } else {
                goto block_8;
            }
        } else if (sub_08008900(arg2, M2C_FIELD(arg0, s32 *, 0x134)) <= 0x40FF) {
block_8:
            sub_0801A130(arg0, 4);
        }
    }
    return 0;
}
