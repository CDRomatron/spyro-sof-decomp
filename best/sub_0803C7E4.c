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

u16 sub_08063D78(s32, s32);                         /* extern */

s32 sub_0803C7E4(void *arg0, void *arg1, u16 arg2, u32 arg3) {
    s32 var_r0;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;

    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 0x5D:
            M2C_FIELD(arg1, void **, 0x2C) = arg0;
            M2C_FIELD(arg1, s32 *, 0x38) = (s32) sub_08063D78((s32) ((M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg1, s32 *, 0xC)) << 0xC) >> 0x10, (s32) ((M2C_FIELD(arg0, s32 *, 0x10) - M2C_FIELD(arg1, s32 *, 0x10)) << 0xC) >> 0x10);
            break;
        case 0x5A:
            M2C_FIELD(arg1, void **, 0x28) = arg0;
            break;
        case 0x5B:
            M2C_FIELD(arg1, s8 *, 0x3D) = 3;
            temp_r0 = M2C_FIELD(arg1, void **, 0x2C);
            temp_r1 = (arg1 + 0x3D) - 0x31;
            temp_r0_2 = temp_r0 + 0xC;
            M2C_FIELD(temp_r1, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 0xC);
            M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(temp_r0_2, s32 *, 4);
            M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(temp_r0_2, s32 *, 8);
            M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) + 0x5000);
            var_r0 = 0xFFFFFD00;
block_11:
            M2C_FIELD(arg1, s32 *, 0x30) = var_r0;
            break;
        case 0x59:
            M2C_FIELD(arg1, s8 *, 0x3D) = 1;
            var_r0 = 0x300;
            goto block_11;
        }
    }
    return 0;
}
