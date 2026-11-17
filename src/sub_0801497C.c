/* identical to sub_08014998 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_0800FCEC(s32);                          /* extern */
M2C_UNK sub_0804EC14(s32);                          /* extern */
M2C_UNK sub_080500D8();                             /* extern */
M2C_UNK sub_08050168(void *, void (*)(void *, s32)); /* extern */
s32 sub_080529D4();                                 /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

void sub_0801497C(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        sub_0800FCEC(M2C_FIELD(arg0, s32 *, 0x98));
        sub_0804EC14(sub_080529D4() + 0xC);
        sub_080500D8();
        sub_08050168(arg0, sub_0801497C);
        return;
    case 1:
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        sub_080534A0(3);
        sub_0800F538();
        return;
    }
}
