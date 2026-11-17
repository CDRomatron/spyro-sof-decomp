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

s32 *sub_08002B34(s32, s32);                        /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08009F74(s32);                          /* extern */
M2C_UNK sub_0800C1A0(s32, s32);                     /* extern */
M2C_UNK sub_08065CF0(s32 *, s32, s32);              /* extern */

s32 *sub_0801D8A8(void) {
    s32 *temp_r0;
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s8 *var_r5;
    u32 var_r6;
    u32 var_r6_2;

    temp_r0 = sub_08002B34(0x19C, 0);
    sub_08065CF0(temp_r0, 0, 0x19C);
    var_r6 = 0;
    var_r4 = temp_r0;
    var_r5 = temp_r0 + 0x42;
    do {
        *var_r4 = sub_08004370();
        *var_r5 = 0;
        sub_0800C1A0(*var_r4, 0x4000);
        var_r4 += 0x44;
        var_r5 += 0x44;
        var_r6 += 1;
    } while (var_r6 <= 4U);
    var_r6_2 = 0;
    var_r4_2 = temp_r0 + 0x164;
    do {
        temp_r0_2 = sub_08004370();
        *var_r4_2 = temp_r0_2;
        var_r4_2 += 4;
        sub_08003C58(temp_r0_2, 0x12000C);
        var_r6_2 += 1;
    } while (var_r6_2 <= 7U);
    temp_r0_3 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x184) = temp_r0_3;
    sub_08003C58(temp_r0_3, 0x12000E);
    sub_08009F74(0x357);
    sub_08009F74(0x43D);
    sub_08009F74(0x3CA);
    M2C_FIELD(temp_r0, s16 *, 0x196) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x194) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x190) = 0;
    return temp_r0;
}
