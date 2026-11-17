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

/* Warning: missing "bx $lr" in last block of sub_080404D0 (_080404F6). */

M2C_UNK sub_08050168(s32, void (*)(void *, s8));    /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

void sub_080404D0(void *arg0, s8 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, s8 *, 0x45) = arg1;
        sub_08050168(0, sub_080404D0);
        break;
    case 1:
        sub_080534A0(3);
        break;
    }
}
