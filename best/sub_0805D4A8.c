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
M2C_UNK sub_0805E69C();                             /* extern */
s32 sub_0805E70C(void *, s32);                      /* extern */
M2C_UNK sub_0805EAB4(s32);                          /* extern */
s32 sub_08060498(void *, s32);                      /* extern */
M2C_UNK sub_080604E0(s32);                          /* extern */
M2C_UNK sub_08060600(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_08061190(void *, s32);                  /* extern */

void sub_0805D4A8(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    void *temp_r4;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) > 0xB4U) {
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 0xC);
    }
    temp_r4 = arg0 + 0x14;
    temp_r0 = sub_08060498(temp_r4, M2C_FIELD(arg0, s32 *, 0x28));
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 2;
        sub_080604E0(temp_r0);
    }
    temp_r0_2 = sub_0805E70C(temp_r4, M2C_FIELD(arg0, s32 *, 0x28));
    if (temp_r0_2 != 0) {
        sub_0805E69C();
        temp_r0_3 = sub_0805E680(temp_r0_2);
        if (temp_r0_3 != 0) {
            sub_0805EAB4(0x64 * temp_r0_3);
            sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18) + 0xFFFFF000, 0, -0x19, 7);
        }
        M2C_FIELD(arg0, s32 *, 0x2C) = 2;
    }
    if (sub_0805DE48(temp_r4, M2C_FIELD(arg0, s32 *, 0x28), 0) != 0) {
        sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18) + 0xFFFFF000, 0, -0x19, 7);
        sub_0805EAB4(0x64);
        M2C_FIELD(arg0, s32 *, 0x2C) = 2;
        return;
    }
    sub_08061190(temp_r4, M2C_FIELD(arg0, s32 *, 0x28));
}
