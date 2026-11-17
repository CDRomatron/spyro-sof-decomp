/* identical to sub_0803A4A0 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

u8 sub_08007324();                                  /* extern */
s32 sub_0800F2AC();                                 /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_0803A44C;

void sub_0803A3F4(void *arg0) {
    if ((sub_0800F2AC() << 0x18) != 0) {
        sub_080534A0(5);
        if (sub_08007324() == 7) {
            sub_0800F550(0x1B, &sub_0803A44C, arg0, 1);
        } else {
            sub_0800F550(0x16, &sub_0803A44C, arg0, 1);
        }
        M2C_FIELD(arg0, s8 *, 0x42) = 6;
    }
}
