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
M2C_UNK sub_08060238(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_08060600(s32, s32, s32, s32, s32);      /* extern */
s32 sub_08061190(void *, s32);                      /* extern */

void sub_08060324(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r6;
    void *temp_r4;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r6 == 0) {
        temp_r4 = arg0 + 0x14;
        if ((sub_08061190(temp_r4, M2C_FIELD(arg0, s32 *, 0x1C)) << 0x18) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_r6;
            sub_08060238(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), 0, M2C_FIELD(arg0, s32 *, 0x24));
            sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), 0, 0, temp_r6);
        }
        if (sub_0805DE48(temp_r4, M2C_FIELD(arg0, s32 *, 0x1C), 0) != 0) {
            temp_r2 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_r2;
            sub_08060238(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), temp_r2, M2C_FIELD(arg0, s32 *, 0x24));
            temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x28);
            if (temp_r2_2 == 0) {
                sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), 0, 0, temp_r2_2);
                sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18) + 0xFFFFF000, 0, -0x19, 6);
                sub_0805EAB4(0x32);
                M2C_FIELD(arg0, s32 *, 0x20) = 1;
            }
        }
        temp_r0 = sub_0805E70C(temp_r4, M2C_FIELD(arg0, s32 *, 0x1C));
        if ((temp_r0 != 0) && ((sub_0805E684() << 0x18) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
            sub_08060238(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), 0, M2C_FIELD(arg0, s32 *, 0x24));
            temp_r0_2 = sub_0805E680(temp_r0);
            if (temp_r0_2 != 0) {
                sub_0805EAB4(0x32 * temp_r0_2);
                sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18) + 0xFFFFF000, 0, -0x19, 6);
                sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), 0, 0, 0);
            }
        }
    }
}
