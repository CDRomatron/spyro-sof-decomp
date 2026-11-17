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

M2C_UNK sub_08062AB0(void *);                       /* extern */
M2C_UNK sub_08063120(void *);                       /* extern */
M2C_UNK sub_080638B0(void *, s32, u16);             /* extern */

void sub_08003440(u16 arg0) {
    s32 temp_r1;
    u8 temp_r2;
    void *temp_r5;

    temp_r2 = M2C_FIELD((void *)0x03000840, u8 *, 0x1F);
    if (temp_r2 != arg0) {
        if (M2C_FIELD((void *)0x03000840, s32 *, 0x10) != 0) {
            temp_r5 = *(void **)0x08067B58;
            temp_r1 = M2C_FIELD(temp_r5, s32 *, 4);
            if ((u16) temp_r1 != 0) {
                if (temp_r1 < 0) {
                    if ((temp_r2 == 0) && (arg0 != 0)) {
                        sub_08062AB0(temp_r5);
                        if (arg0 != 0x80) {
                            goto block_9;
                        }
                    }
                } else if (arg0 != 0) {
block_9:
                    sub_080638B0(temp_r5, 0xFFFF, arg0);
                } else {
                    sub_08063120(temp_r5);
                }
            }
        }
        M2C_FIELD((void *)0x03000840, u8 *, 0x1F) = (u8) arg0;
    }
}
