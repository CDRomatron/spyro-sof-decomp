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

/* Warning: missing "bx $lr" in last block of sub_08009B98 (_08009BB6). */

M2C_UNK sub_0800328C(s32);                          /* extern */
M2C_UNK sub_080096A4(s32, s32, s32);                /* extern */
extern void **_08009BC4;
extern s32 _08009BC8;

void sub_08009B98(s32 arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = *_08009BC4;
    if (arg1 == 0) {
        sub_0800328C(_08009BC8);
        sub_080096A4(8, 2, M2C_FIELD(temp_r4, s32 *, 0x20));
    }
}
