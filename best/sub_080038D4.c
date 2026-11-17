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

void sub_080038D4(void *arg0) {
    u8 temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xC);
    if (temp_r0 != 1) {
        if (temp_r0 == 4) {
            M2C_FIELD((void *)0x03000868, u8 *, 0xC) = (u8) (M2C_FIELD((void *)0x03000868, u8 *, 0xC) + 1);
            sub_08000C9C(arg0);
            M2C_FIELD((void *)0x03000868, u8 *, 0xC) = (u8) (M2C_FIELD((void *)0x03000868, u8 *, 0xC) - 1);
            return;
        }
        sub_08000C9C(arg0);
        return;
    }
    temp_r1 = *(void **)0x03001108;
    M2C_FIELD(temp_r1, u8 *, 0x44) = (u8) (M2C_FIELD(temp_r1, u8 *, 0x44) + 1);
    sub_08000C9C(arg0);
    temp_r1_2 = *(void **)0x03001108;
    M2C_FIELD(temp_r1_2, u8 *, 0x44) = (u8) (M2C_FIELD(temp_r1_2, u8 *, 0x44) - 1);
}
