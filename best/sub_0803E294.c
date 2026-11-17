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

M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_0800FCA4(s32, s32, s32);                /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_0803E4E0(void *, s32);                  /* extern */

void sub_0803E294(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r1;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x56);
    if (temp_r0 != 0) {
        temp_r1 = temp_r0 - 1;
        M2C_FIELD(arg0, u16 *, 0x56) = temp_r1;
        temp_r0_2 = temp_r1;
        if (temp_r0_2 == 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) temp_r0_2;
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) temp_r0_2;
            sub_0800FCA4(0x92, 1, (arg0 + 0x56) - 0x4A);
            sub_0803E4E0(arg0, 0);
            sub_0800443C(M2C_FIELD(arg0, s32 *, 0x48), -1);
            sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x44), 1);
            return;
        }
        if (!(temp_r1 & 3)) {
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) - 0x80);
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 0x80);
        }
        if ((3 & M2C_FIELD(arg0, u16 *, 0x56)) == 2) {
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 0x80);
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - 0x80);
        }
    }
}
