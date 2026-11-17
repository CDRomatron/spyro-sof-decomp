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

M2C_UNK _080100D0(void *, s32);                     /* extern */
s32 sub_08004534(s32);                              /* extern */
u8 sub_0801DA58(void *, s32, s32);                  /* extern */

void sub_0800FEE4(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    u8 temp_r0;
    void *temp_r5;

    temp_r5 = arg0 + 0x24;
    temp_r2 = sub_08004534(M2C_FIELD(arg0, s32 *, 0x8C)) << 8;
    if ((M2C_FIELD(arg0, u8 *, 0xB1) != 0) && ((temp_r0 = sub_0801DA58(temp_r5, 0xA00, temp_r2), (temp_r0 == 2)) || (temp_r0 == 5))) {
        _080100D0(arg0, 3);
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r5, s32 *, 8);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_r0_2 != temp_r1) {
        if (temp_r0_2 <= temp_r1) {
            temp_r0_3 = temp_r0_2 + 0x199;
            M2C_FIELD(temp_r5, s32 *, 8) = temp_r0_3;
            temp_r1_2 = M2C_FIELD(arg0, s32 *, 0xA0);
            if (temp_r0_3 > temp_r1_2) {
                M2C_FIELD(temp_r5, s32 *, 8) = temp_r1_2;
                if (M2C_FIELD(arg0, u8 *, 0xB1) == 0) {
                    _080100D0(arg0, 1);
                }
            }
        } else {
            temp_r0_4 = temp_r0_2 + 0xFFFFFECD;
            M2C_FIELD(temp_r5, s32 *, 8) = temp_r0_4;
            temp_r1_3 = M2C_FIELD(arg0, s32 *, 0xA0);
            if (temp_r0_4 < temp_r1_3) {
                M2C_FIELD(temp_r5, s32 *, 8) = temp_r1_3;
            }
        }
    }
}
