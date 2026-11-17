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

M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */

void sub_0800C748(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r6;
    u32 var_r4;
    void *temp_r2;
    void *temp_r2_2;

    if (M2C_FIELD(arg0, u8 *, 0x60) != 0) {
        temp_r2 = M2C_FIELD(arg0, void **, 0);
        if (temp_r2 != NULL) {
            var_r1 = M2C_FIELD(temp_r2, s32 *, 0xC);
            if (var_r1 < 0) {
                var_r1 += 0xFF;
            }
            var_r2 = M2C_FIELD(temp_r2, s32 *, 0x10);
            if (var_r2 < 0) {
                var_r2 += 0xFF;
            }
            sub_080042A4(M2C_FIELD(temp_r2, s32 *, 0), var_r1 >> 8, var_r2 >> 8);
        }
        var_r4 = 0;
        if ((u32) M2C_FIELD(arg0, u8 *, 0x61) > 0U) {
            var_r6 = 0;
            do {
                temp_r2_2 = var_r6 + M2C_FIELD(arg0, s32 *, 4);
                var_r1_2 = M2C_FIELD(temp_r2_2, s32 *, 0xC);
                if (var_r1_2 < 0) {
                    var_r1_2 += 0xFF;
                }
                var_r2_2 = M2C_FIELD(temp_r2_2, s32 *, 0x10);
                if (var_r2_2 < 0) {
                    var_r2_2 += 0xFF;
                }
                sub_080042A4(M2C_FIELD(temp_r2_2, s32 *, 0), var_r1_2 >> 8, var_r2_2 >> 8);
                var_r6 += 0x28;
                var_r4 += 1;
            } while (var_r4 < (u32) M2C_FIELD(arg0, u8 *, 0x61));
        }
    }
}
