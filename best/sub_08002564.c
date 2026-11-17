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

void sub_08002564(void *arg0) {
    s16 sp0;
    s16 *var_r0;
    u32 temp_r0;
    u32 var_r1;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 8);
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) M2C_FIELD(temp_r3, s32 *, 8);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((u16) M2C_FIELD(temp_r3, u16 *, 0xC) >> 1) | 0x81000000);
    var_r1 = 0;
    temp_r0 = (u32) M2C_FIELD(arg0, u32 *, 0x10) >> 1;
    if (temp_r0 > 0U) {
        var_r0 = M2C_FIELD(arg0, s16 **, 0xC);
        do {
            *var_r0 = M2C_FIELD(temp_r3, u16 *, 0x1A) | M2C_FIELD(temp_r3, u16 *, 0xE);
            var_r0 += 2;
            var_r1 += 1;
        } while (var_r1 < temp_r0);
    }
}
