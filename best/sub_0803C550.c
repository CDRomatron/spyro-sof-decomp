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

M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08050098(s32, M2C_UNK *, void *);       /* extern */
s32 sub_080529D4();                                 /* extern */
extern M2C_UNK sub_0803C414;
extern M2C_UNK sub_0803C600;

s32 sub_0803C550(void *arg1, u16 arg2, s32 arg3) {
    u32 temp_r0;
    void *temp_r2;

    if ((arg2 == 9) && (arg3 == 0x58)) {
        temp_r0 = M2C_FIELD(arg1, u32 *, 0x38) + 1;
        M2C_FIELD(arg1, u32 *, 0x38) = temp_r0;
        temp_r2 = M2C_FIELD(arg1, void **, 0x28);
        if (temp_r0 >= (u32) M2C_FIELD(temp_r2, u16 *, 0x14)) {
            sub_08050098(sub_080529D4() + 0xC, &sub_0803C414, arg1);
            sub_0800FE28(arg1, *(s32 *)0x0300268C, 0x55);
        } else {
            sub_08050098(M2C_FIELD(temp_r2, s32 *, 0xC) + (temp_r0 * 0xC), &sub_0803C600, arg1);
        }
    }
    return 0;
}
