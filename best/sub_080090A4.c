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

u8 sub_080071DC(u8);                                /* extern */
u8 sub_08007324();                                  /* extern */
u8 sub_08007BD0();                                  /* extern */

void sub_080090A4(void *arg0) {
    u32 temp_r0;
    u32 temp_r1_2;
    u8 temp_r0_2;
    u8 temp_r1;
    u8 temp_r2;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x18) + 1;
    M2C_FIELD(arg0, u32 *, 0x18) = temp_r0;
    if (temp_r0 >= (u32) M2C_FIELD(arg0, u16 *, 0x14)) {
        M2C_FIELD(arg0, u32 *, 0x18) = 0U;
    }
    if ((u32) (M2C_FIELD(arg0, s32 *, 8) - 5) <= 1U) {
        if (M2C_FIELD(arg0, u32 *, 0x18) == 4) {
            temp_r1 = sub_08007BD0();
            if (temp_r1 == 0) {
                if (M2C_FIELD(arg0, s32 *, 8) == 5) {
                    M2C_FIELD(arg0, u32 *, 0x18) = (u32) temp_r1;
                } else {
                    M2C_FIELD(arg0, u32 *, 0x18) = (u32) (M2C_FIELD(arg0, u32 *, 0x18) + 1);
                }
            }
        }
        if ((M2C_FIELD(arg0, u32 *, 0x18) == 0) && ((sub_080071DC(0U) << 0x18) == 0) && ((sub_080071DC(1U) << 0x18) == 0) && ((sub_080071DC(2U) << 0x18) == 0)) {
            M2C_FIELD(arg0, u32 *, 0x18) = (u32) (M2C_FIELD(arg0, u32 *, 0x18) + 1);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 0xA) {
loop_18:
        temp_r2 = sub_080071DC((u8) M2C_FIELD(arg0, u32 *, 0x18));
        if (temp_r2 == 0) {
            temp_r1_2 = M2C_FIELD(arg0, u32 *, 0x18);
            if (temp_r1_2 == (M2C_FIELD(arg0, u16 *, 0x14) - 1)) {
                M2C_FIELD(arg0, u32 *, 0x18) = (u32) temp_r2;
            } else {
                M2C_FIELD(arg0, u32 *, 0x18) = (u32) (temp_r1_2 + 1);
            }
            goto loop_18;
        }
    }
    if ((M2C_FIELD(arg0, u32 *, 0x18) == 4) && (M2C_FIELD(arg0, s32 *, 8) == 8) && ((temp_r0_2 = sub_08007324(), (temp_r0_2 == 0)) || (temp_r0_2 == 0xB) || (temp_r0_2 == 0x18))) {
        M2C_FIELD(arg0, u32 *, 0x18) = (u32) (M2C_FIELD(arg0, u32 *, 0x18) + 1);
    }
}
