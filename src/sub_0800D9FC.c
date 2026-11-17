/* identical to sub_0804EC0C in SPYRO 3-U (matched), with its names changed by decompdecomp */
/* identical to sub_0804F250 in SPYRO 3 (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_08008638(void *, void *, void *);       /* extern */

s32 sub_0800D9FC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s16 *, 0x14));
    sub_08008638(arg1, arg0 + 4, arg1);
    if ((s32) M2C_FIELD(arg1, s32 *, 8) < (s32) M2C_FIELD(arg0, u16 *, 0x1E)) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg0, u16 *, 0x20));
    }
    return 0;
}
