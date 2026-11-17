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

M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */

void sub_0803E240(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x58);
    if (temp_r0 != 0) {
        temp_r0_2 = temp_r0 - 1;
        M2C_FIELD(arg0, u16 *, 0x58) = temp_r0_2;
        if ((temp_r0_2 << 0x10) == 0) {
            sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x44), 1);
        }
    }
    temp_r0_3 = M2C_FIELD(arg0, u16 *, 0x54);
    if (temp_r0_3 != 0) {
        temp_r0_4 = temp_r0_3 - 1;
        M2C_FIELD(arg0, u16 *, 0x54) = temp_r0_4;
        if ((temp_r0_4 << 0x10) == 0) {
            sub_0800443C(M2C_FIELD(arg0, s32 *, 0x48), 0xB);
            sub_08004408(M2C_FIELD(arg0, s32 *, 0x48), 0);
            M2C_FIELD(arg0, u16 *, 0x58) = 0x3CU;
        }
    }
}
