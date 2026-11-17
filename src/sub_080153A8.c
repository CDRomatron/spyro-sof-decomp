
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16; typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
M2C_UNK sub_08015168(void *, s32);
M2C_UNK sub_0800FE28(void *, s32, s32);

s32 sub_080153A8(s32 a0, void *arg1, u16 arg2, u32 arg3) {
    s32 var_r1;
    var_r1 = 0;
    if (arg2 == 9) {
        switch (arg3) {
        case 27: sub_08015168(arg1, 2); break;
        case 29: sub_08015168(arg1, 3); break;
        case 31: M2C_FIELD(arg1, s8 *, 0x77) = 0; break;
        }
        var_r1 = 1;
    }
    return var_r1;
}

void sub_0801510C(void *arg0) {
    s8 var_r2;
    u8 temp_r0;
    u8 temp_r1;
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x70) - 1;
    M2C_FIELD(arg0, u8 *, 0x70) = temp_r1;
    if ((temp_r1 << 0x18) == 0) {
        M2C_FIELD(arg0, u8 *, 0x70) = 0x3CU;
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x72);
        if (temp_r0 == 0) {
            M2C_FIELD((arg0 + 0x72), s8 *, 4) = 1;
            sub_08015168(arg0, 1);
            sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x5C), 0x1E);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x72) = (u8) (temp_r0 - 1);
        return;
    }
    var_r2 = 0;
    if ((u32) temp_r1 > 0x14U) {
        var_r2 = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x76) = var_r2;
}
