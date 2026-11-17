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

s32 sub_0800038C();                                 /* extern */
u8 sub_08000954();                                  /* extern */
s32 sub_08000AB0();                                 /* extern */
s32 sub_08000C0C();                                 /* extern */
u8 sub_08002420();                                  /* extern */
s32 sub_08002CA4();                                 /* extern */
s32 sub_08002E54();                                 /* extern */
s32 sub_08003758();                                 /* extern */
s32 sub_08003B3C();                                 /* extern */
u8 sub_08061AEC();                                  /* extern */

u32 sub_08002974(void) {
    u32 var_r0;
    u32 var_r1;
    u32 var_r4;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    *(s8 *)0x030010B8 = 0;
    var_r4 = 0;
    if (((sub_08000C0C() << 0x18) != 0) && ((sub_08003758() << 0x18) != 0) && ((sub_08002CA4() << 0x18) != 0) && ((sub_08000AB0() << 0x18) != 0) && ((sub_08002E54() << 0x18) != 0) && ((sub_08003B3C() << 0x18) != 0) && ((sub_0800038C() << 0x18) != 0)) {
        temp_r0 = sub_08000954();
        var_r4 = (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
    }
    var_r1 = 0;
    if (var_r4 != 0) {
        temp_r0_2 = sub_08002420();
        var_r1 = (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F;
    }
    var_r0 = 0;
    if (var_r1 != 0) {
        temp_r0_3 = sub_08061AEC();
        var_r0 = (u32) ((0 - temp_r0_3) | temp_r0_3) >> 0x1F;
    }
    return var_r0;
}
