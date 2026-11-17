/* identical to sub_08012054 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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
extern M2C_UNK sub_08011E08;

void sub_08012034(void *arg0, u16 arg1) {
    u16 temp_r5;

    temp_r5 = arg1;
    switch (temp_r5) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &sub_08011E08;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 8));
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x2C) = NULL;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0xC));
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x2C) = NULL;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x10));
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x31) = (s8) temp_r5;
}
