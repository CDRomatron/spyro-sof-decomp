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
M2C_UNK sub_08007764(u8);                           /* extern */
s32 sub_0800D9EC(s32, s32);                         /* extern */
M2C_UNK sub_0800FCA4(s32, s32, s32);                /* extern */
u32 sub_08051B3C(s32);                              /* extern */

void sub_0802AAD4(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    u32 temp_r0_2;

    temp_r5 = arg0 + 0x24;
    temp_r0 = sub_0800D9EC(arg0 + 0x3C, temp_r5);
    switch (temp_r0) {                              /* irregular */
    case 3:
        temp_r0_2 = sub_08051B3C(temp_r5);
        if ((temp_r0_2 <= 3U) && (temp_r0_2 >= 1U)) {
            sub_0800FCA4(0x19D, 1, temp_r5);
            M2C_FIELD(arg0, s8 *, 0xAB) = 0;
            sub_08007764(M2C_FIELD(arg0, u8 *, 0xAA));
            return;
        }
        sub_08003220(0x081709B8);
        return;
    case 1:
        M2C_FIELD(arg0, s8 *, 0xAB) = 0;
        sub_0800FCA4(0x18E, 1, temp_r5);
        sub_08007764(M2C_FIELD(arg0, u8 *, 0xAA));
        return;
    }
}
