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

u16 **sub_0800B910();                               /* extern */

void sub_0800BB40(void *arg0, u16 arg1, u16 arg2, s32 arg3) {
    s16 temp_r1_2;
    u16 **temp_r0;
    u16 **var_r2;
    u16 temp_r1;
    u16 temp_r2;

    temp_r1 = arg1;
    temp_r2 = arg2;
    if ((M2C_FIELD(*(void **)0x03002680, u16 *, 0xFB6) != 0) && ((temp_r1_2 = (s16) temp_r1, (temp_r1_2 != 0x100)) || ((s16) temp_r2 != temp_r1_2))) {
        var_r2 = M2C_FIELD(arg0, u16 ***, 8);
        if (var_r2 == NULL) {
            temp_r0 = sub_0800B910();
            M2C_FIELD(arg0, u16 ***, 8) = temp_r0;
            if (temp_r0 != NULL) {
                var_r2 = temp_r0;
                M2C_FIELD(var_r2, void **, 0xC) = (void *) (arg0 + 8);
                M2C_FIELD(var_r2, u16 *, 0x10) = (u16) (0x8000 | M2C_FIELD(var_r2, u16 *, 0x10));
                goto block_6;
            }
        } else {
block_6:
            M2C_FIELD(var_r2, u16 *, 0x10) = (u16) (0x4000 | M2C_FIELD(var_r2, u16 *, 0x10));
            M2C_FIELD(arg0, u8 *, 0xD) = (u8) (8 | M2C_FIELD(arg0, u8 *, 0xD));
            M2C_FIELD(arg0, u16 *, 0x12) = (u16) (((arg3 << 6) & 0x40) | M2C_FIELD(arg0, u16 *, 0x12));
            if (0x8000 & M2C_FIELD(var_r2, u16 *, 0x10)) {
                **M2C_FIELD(arg0, u16 ***, 8) = temp_r1;
                M2C_FIELD(*M2C_FIELD(arg0, u16 ***, 8), u16 *, 2) = temp_r2;
            }
        }
    }
}
