/* identical to sub_08038B6C in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_0800D9EC(s32, s32);                         /* extern */
M2C_UNK sub_0800FCA4(s32, s32, s32);                /* extern */

void sub_08038AC0(void *arg0) {
    s32 temp_r5;

    temp_r5 = arg0 + 0x24;
    if (sub_0800D9EC(arg0 + 0x30, temp_r5) == 1) {
        sub_0800FCA4(0x18F, 1, temp_r5);
        M2C_FIELD(arg0, s8 *, 0x75) = 0;
    }
}
