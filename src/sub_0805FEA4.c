/* identical to sub_080601D0 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_0805DE48(void *, s32, s32);                 /* extern */
s32 sub_0805E680(s32);                              /* extern */
s32 sub_0805E684();                                 /* extern */
s32 sub_0805E70C(void *, s32);                      /* extern */
M2C_UNK sub_0805EAB4(s32);                          /* extern */
M2C_UNK sub_08060600(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_08061190(void *, s32);                  /* extern */

void sub_0805FEA4(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r5;

    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0x20));
    temp_r5 = arg0 + 0x14;
    sub_08061190(temp_r5, M2C_FIELD(arg0, s32 *, 0x28));
    if (sub_0805DE48(temp_r5, M2C_FIELD(arg0, s32 *, 0x28), 0) != 0) {
        sub_0805EAB4(0x3E8);
        sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18) + 0xFFFFF000, 0, -0x19, 9);
        M2C_FIELD(arg0, s32 *, 0x2C) = 2;
    }
    temp_r0 = sub_0805E70C(temp_r5, M2C_FIELD(arg0, s32 *, 0x28));
    if ((temp_r0 != 0) && ((sub_0805E684() << 0x18) != 0)) {
        temp_r0_2 = sub_0805E680(temp_r0);
        if (temp_r0_2 != 0) {
            sub_0805EAB4(temp_r0_2 * 0x3E8);
            sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18) + 0xFFFFF000, 0, -0x19, 9);
        }
        M2C_FIELD(arg0, s32 *, 0x2C) = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) <= 0xFFF) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) <= 0xFFF) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x40) = 0x4000;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0xF000) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0xF000;
        M2C_FIELD(arg0, s32 *, 0x40) = 0x8000;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) > 0xF000) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0xF000;
        M2C_FIELD(arg0, s32 *, 0x40) = 0xC400;
    }
}
