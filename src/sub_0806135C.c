/* identical to sub_0805D7B8 (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_08000C9C(void *);                       /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_08060578(s32, void *);                  /* extern */

void sub_0806135C(void *arg0) {
    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x24));
    sub_08000C9C(arg0);
    sub_08060578(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x48), arg0);
}
