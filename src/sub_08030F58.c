typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16; typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
M2C_UNK sub_08030A10(void *, s32); M2C_UNK sub_08030CE8(void *); s32 sub_08052140(s32, s32); u8 sub_0805399C();
void sub_08030F58(void *arg0) {
    u16 one = 1;
    if ((sub_0805399C() == 3) && ((sub_08052140(arg0 + 0x24, 0x2C00) << 0x18) != 0)) {
        sub_08030A10(arg0, 2);
        M2C_FIELD(arg0, u16 *, 0x22) = (u16)(one | M2C_FIELD(arg0, u16 *, 0x22));
    }
    sub_08030CE8(arg0);
}
