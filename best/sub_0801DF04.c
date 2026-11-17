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

s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0801A130(void *, s32);                  /* extern */

void sub_0801DF04(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x140);
    if (temp_r1 > 0xC0) {
        sub_0801A130(arg0, 5);
        return;
    }
    if (temp_r1 != 0) {
        sub_0801A130(arg0, 4);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x150) = (s16) temp_r1;
    M2C_FIELD(arg0, s16 *, 0x14E) = (s16) ((sub_0800897C() & 0x3F) + 0x3C);
    M2C_FIELD(arg0, s32 *, 0x134) = (s32) ((M2C_FIELD(arg0, s32 *, 0x134) + 0x1000) & 0xE000);
}
