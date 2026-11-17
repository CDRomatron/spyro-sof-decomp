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

void sub_0800BFC8(s32 arg0, u8 arg1) {
    u16 temp_r0_2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;

    if (M2C_FIELD(*(void **)0x03002680, u16 *, 0xFB6) != 0) {
        temp_r0 = *(void **)0x03002680;
        temp_r4 = M2C_FIELD(temp_r0, void **, 0x410);
        if ((temp_r4 != NULL) && ((u32) (M2C_FIELD(*(void **)0x03002680, u16 *, 0x40C) + M2C_FIELD(*(void **)0x03002680, s32 *, 0x414)) <= 0x80U)) {
            temp_r1 = *(void **)0x03002680;
            temp_r0_2 = M2C_FIELD(temp_r1, u16 *, 0x40C);
            M2C_FIELD(temp_r1, u16 *, 0x40C) = (u16) (temp_r0_2 + 1);
            temp_r2 = *(void **)0x03002680 + (((u32) (temp_r0_2 << 0x10) >> 0xD) + 0xC);
            M2C_FIELD(temp_r0, void **, 0x410) = temp_r2;
            M2C_FIELD(*(void **)0x03002680, s32 *, 0x414) = 1;
            M2C_FIELD(temp_r2, s16 *, 0) = (s16) ((0xFF00 & M2C_FIELD(temp_r4, u16 *, 0)) | arg1);
            M2C_FIELD(temp_r2, s16 *, 2) = (s16) ((0xFE00 & M2C_FIELD(temp_r4, u16 *, 2)) | (arg0 & 0x1FF));
            M2C_FIELD((temp_r2 + 2), u16 *, 2) = (u16) M2C_FIELD((temp_r4 + 2), u16 *, 2);
        }
    }
}
