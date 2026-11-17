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

extern M2C_UNK sub_08015030;
extern M2C_UNK sub_0801510C;
extern M2C_UNK sub_080153E8;

void sub_08015168(void *arg0, u16 arg1) {
    s8 *var_r1;
    u16 temp_r3;
    void *temp_r1;

    temp_r3 = arg1;
    switch (temp_r3) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x6C) = &sub_080153E8;
        var_r1 = arg0 + 0x76;
block_10:
        *var_r1 = 1;
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x6C) = NULL;
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x6C) = &sub_08015030;
        temp_r1 = arg0 + 0x70;
        M2C_FIELD(arg0, s8 *, 0x70) = 0x3C;
        M2C_FIELD(temp_r1, s8 *, 1) = 0xA;
        var_r1 = temp_r1 + 1 + 3;
        goto block_10;
    case 3:
        M2C_FIELD(arg0, M2C_UNK **, 0x6C) = &sub_0801510C;
        M2C_FIELD(arg0, s8 *, 0x70) = 0x3C;
        M2C_FIELD(arg0, s8 *, 0x72) = (s8) temp_r3;
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x73) = (s8) temp_r3;
}
