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

void sub_0800BF04(void *arg0) {
    s32 temp_r5;
    u16 *var_r3;
    u16 temp_r0;
    u16 var_r4;
    void *temp_r1;
    void *temp_r2;
    void *temp_r6;

    temp_r6 = *(void **)0x03002680;
    if (M2C_FIELD(*(void **)0x03002680, u16 *, 0xFB6) != 0) {
        var_r3 = M2C_FIELD(temp_r6, u16 **, 0x410);
        if (var_r3 != NULL) {
            temp_r5 = (3 & M2C_FIELD(arg0, u16 *, 0x12)) << 0xA;
            if ((u32) (M2C_FIELD(*(void **)0x03002680, u16 *, 0x40C) + M2C_FIELD(*(void **)0x03002680, u32 *, 0x414)) <= 0x80U) {
                var_r4 = 0;
                if ((u32) M2C_FIELD(temp_r6, u32 *, 0x414) > 0U) {
                    do {
                        temp_r2 = *(void **)0x03002680;
                        temp_r0 = M2C_FIELD(temp_r2, u16 *, 0x40C);
                        M2C_FIELD(temp_r2, u16 *, 0x40C) = (u16) (temp_r0 + 1);
                        temp_r1 = *(void **)0x03002680 + (((u32) (temp_r0 << 0x10) >> 0xD) + 0xC);
                        M2C_FIELD(temp_r1, s16 *, 0) = (s16) ((0xE3FF & M2C_FIELD(var_r3, u16 *, 0)) | temp_r5);
                        M2C_FIELD(temp_r1, u16 *, 2) = (u16) M2C_FIELD(var_r3, u16 *, 2);
                        var_r3 = var_r3 + 2 + 2;
                        M2C_FIELD((temp_r1 + 2), s16 *, 2) = (s16) ((0xF3FF & *var_r3) | temp_r5);
                        var_r4 += 1;
                    } while ((u32) var_r4 < (u32) M2C_FIELD(temp_r6, u32 *, 0x414));
                }
            }
        }
    }
}
