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

M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_08003BD4(M2C_UNK *);                    /* extern */
M2C_UNK sub_080641CC(s32, s32);                     /* extern */

void sub_080008D4(void *arg0) {
    M2C_UNK *var_r0;
    M2C_UNK *var_r0_2;
    M2C_UNK *var_r0_3;
    M2C_UNK *var_r4;
    M2C_UNK *var_r4_2;
    M2C_UNK *var_r4_3;

    if (arg0 == *(s32 *)0x03001108) {
        sub_080641CC(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x24));
        *(s32 *)0x03001108 = 0;
    }
    sub_080641CC(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x14));
    var_r0 = M2C_FIELD(arg0, M2C_UNK **, 0x28);
    var_r4 = *var_r0;
    if (var_r4 != NULL) {
        do {
            sub_08003BD4(var_r0);
            var_r0 = var_r4;
            var_r4 = *var_r4;
        } while (var_r4 != NULL);
    }
    var_r0_2 = M2C_FIELD(arg0, M2C_UNK **, 0x48);
    var_r4_2 = *var_r0_2;
    if (var_r4_2 != NULL) {
        do {
            sub_08003BD4(var_r0_2);
            var_r0_2 = var_r4_2;
            var_r4_2 = *var_r4_2;
        } while (var_r4_2 != NULL);
    }
    M2C_FIELD(arg0, u8 *, 0x44) = (u8) (M2C_FIELD(arg0, u8 *, 0x44) + 1);
    var_r0_3 = M2C_FIELD(arg0, M2C_UNK **, 0x38);
    var_r4_3 = *var_r0_3;
    if (var_r4_3 != NULL) {
        do {
            sub_08003BD4(var_r0_3);
            var_r0_3 = var_r4_3;
            var_r4_3 = *var_r4_3;
        } while (var_r4_3 != NULL);
    }
    M2C_FIELD(arg0, u8 *, 0x44) = (u8) (M2C_FIELD(arg0, u8 *, 0x44) - 1);
    sub_08002BE0(arg0, 0x58);
}
