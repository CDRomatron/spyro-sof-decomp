/* identical to sub_0802E8D4 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0802E488(void *, s32);                  /* extern */
s32 sub_08052140(void *, s32);                      /* extern */

void sub_0802E830(void *arg0) {
    void *temp_r4;

    temp_r4 = arg0 + 0xC;
    if ((sub_08052140(temp_r4, 0x2000) << 0x18) == 0) {
        sub_0802E488(arg0, 1);
        return;
    }
    if ((sub_08052140(temp_r4, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r4, s32 *, 4), M2C_FIELD(temp_r4, s32 *, 8), 0, 0x800);
    }
}
