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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
s32 sub_08004534(s32);                              /* extern */
u16 sub_0800D9EC(s32, s32);                         /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08015168(void *, s32);                  /* extern */
s32 sub_0801DA58(void *, s32, s32);                 /* extern */

void sub_08015030(void *arg0) {
    s32 temp_r0_4;
    u16 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r2;
    void *temp_r1;

    temp_r0 = sub_0800D9EC(arg0 + 0x24, arg0 + 0xC);
    if (temp_r0 == 3) {
        sub_08003220(0x081714A8);
    }
    if (temp_r0 == 1) {
        M2C_FIELD(arg0, u8 *, 0x74) = (u8) temp_r0;
    }
    temp_r1 = arg0 + 0x70;
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x70) - 1;
    M2C_FIELD(arg0, u8 *, 0x70) = temp_r0_2;
    if ((temp_r0_2 << 0x18) == 0) {
        M2C_FIELD(arg0, u8 *, 0x70) = 0x3CU;
        temp_r0_3 = M2C_FIELD(temp_r1, u8 *, 1);
        if (temp_r0_3 == 0) {
            sub_08003DA8(M2C_FIELD(arg0, s32 *, 0x60), 0);
            sub_08015168(arg0, 1);
            sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x5C), 0x1C);
        } else {
            temp_r2 = temp_r0_3 - 1;
            M2C_FIELD(temp_r1, u8 *, 1) = temp_r2;
            if ((M2C_FIELD(arg0, u8 *, 0x75) == 0) && ((u32) temp_r2 <= 2U)) {
                M2C_FIELD(arg0, u8 *, 0x75) = 1U;
                sub_08003220(0x08171080);
            }
        }
    }
    if ((M2C_FIELD(arg0, u8 *, 0x74) != 0) && ((temp_r0_4 = sub_0801DA58(arg0 + 0xC, 0x400, sub_08004534(M2C_FIELD(arg0, s32 *, 0x60)) << 8), (temp_r0_4 == 2)) || (temp_r0_4 == 5))) {
        M2C_FIELD(arg0, u8 *, 0x70) = 0x3CU;
        M2C_FIELD(arg0, s8 *, 0x71) = 0xA;
        M2C_FIELD(arg0, u8 *, 0x75) = 0U;
        M2C_FIELD(arg0, u8 *, 0x74) = 0U;
        M2C_FIELD(arg0, s32 *, 0x30) = 0x580;
        sub_08003220(0x0817164C);
    }
}
