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

void *sub_080529D4();                               /* extern */

s32 sub_08055038(void *arg0) {
    s32 var_r5;
    void *temp_r0;

    var_r5 = 0;
    temp_r0 = sub_080529D4();
    if (((M2C_FIELD(temp_r0, s32 *, 0xC) & 0xFFFFF000) == (M2C_FIELD(arg0, s32 *, 0) & 0xFFFFF000)) && ((M2C_FIELD((temp_r0 + 0xC), s32 *, 4) & 0xFFFFF000) == (M2C_FIELD(arg0, s32 *, 4) & 0xFFFFF000))) {
        var_r5 = 1;
    }
    return var_r5;
}
