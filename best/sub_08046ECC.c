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

M2C_UNK sub_08044980(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08048E14(s32, s32, s32, s32);           /* extern */

s32 sub_08046ECC(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r3;
    void *temp_r4;

    if (M2C_FIELD(*(void **)0x030026A4, void **, 0x24) != (*(void **)0x030026A4 + 0x28)) {
        temp_r4 = M2C_FIELD(*(void **)0x030026A4, void **, 0x24);
        temp_r1 = M2C_FIELD(temp_r4, s32 *, 0x10);
        temp_r2 = M2C_FIELD(temp_r4, s32 *, 0x14);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
        if (((s32) (temp_r1 + M2C_FIELD(temp_r4, s32 *, 0x2C)) >= (s32) (temp_r3 + M2C_FIELD(arg0, s32 *, 0x2C))) && ((s32) (temp_r1 + M2C_FIELD(temp_r4, s32 *, 0x24)) <= (s32) (temp_r3 + M2C_FIELD(arg0, s32 *, 0x34)))) {
            temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x24);
            if (((s32) (temp_r2 + M2C_FIELD(temp_r4, s32 *, 0x30)) >= (s32) (temp_r1_2 + M2C_FIELD(arg0, s32 *, 0x30))) && ((s32) (temp_r2 + M2C_FIELD(temp_r4, s32 *, 0x28)) <= (s32) (temp_r1_2 + M2C_FIELD(arg0, s32 *, 0x38)))) {
                M2C_FIELD(arg0, s32 *, 0x40) = 2;
                sub_08048E14(temp_r3, temp_r1_2, 3, 1);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x20) < (s32) M2C_FIELD(temp_r4, s32 *, 0x10)) {
                    sub_08044980(temp_r4, 0, 1, 0x32);
                } else {
                    sub_08044980(temp_r4, 1, 1, 0x32);
                }
                return 1;
            }
        }
    }
    return 0;
}
