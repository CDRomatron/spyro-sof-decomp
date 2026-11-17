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

void sub_0801DC78(void *arg0) {
    u16 temp_r0;
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x190);
    if (temp_r4 != 0) {
        temp_r0 = M2C_FIELD(arg0, u16 *, 0x194);
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, u16 *, 0x194) = (u16) (temp_r0 - 1);
            return;
        }
        if (temp_r4 == 1) {
            M2C_FIELD(arg0, u16 *, 0x190) = 2U;
            M2C_FIELD(arg0, u16 *, 0x194) = 0xAU;
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x190) = temp_r0;
    }
}
