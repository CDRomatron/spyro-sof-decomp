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

M2C_UNK sub_080639F4(void *);                       /* extern */

void sub_08063A14(void *arg0, u16 arg1, u8 arg2) {
    s32 temp_r1;
    s32 var_r7;
    u8 temp_r2;
    u8 var_r5;
    void *var_r4;

    temp_r2 = arg2;
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r1 == 0x68736D53) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r1 + 1);
        var_r5 = M2C_FIELD(arg0, u8 *, 8);
        var_r4 = M2C_FIELD(arg0, void **, 0x2C);
        var_r7 = 1;
        if ((s32) var_r5 > 0) {
            do {
                if ((arg1 & var_r7) && (0x80 & M2C_FIELD(var_r4, u8 *, 0))) {
                    M2C_FIELD(var_r4, u8 *, 0x17) = temp_r2;
                    if (temp_r2 == 0) {
                        sub_080639F4(var_r4);
                    }
                }
                var_r5 -= 1;
                var_r4 += 0x50;
                var_r7 *= 2;
            } while ((s32) var_r5 > 0);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = 0x68736D53;
    }
}
