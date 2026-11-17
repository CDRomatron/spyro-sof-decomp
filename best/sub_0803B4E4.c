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

M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
s32 sub_0800D9EC(void *, s32);                      /* extern */
M2C_UNK sub_080522C8(void *);                       /* extern */

u8 sub_0803B4E4(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    u8 *var_r4;
    u8 temp_r0_2;
    void *temp_r1;

    temp_r4 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x6C));
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x68));
    temp_r0 = sub_0800D9EC(arg0 + 0x34, temp_r4);
    if ((temp_r0 == 3) || (var_r4 = temp_r4 + 0x6A, (temp_r0 == 1))) {
        temp_r1 = arg0 + 0x74;
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x74) + 1;
        M2C_FIELD(arg0, u8 *, 0x74) = temp_r0_2;
        if ((u32) temp_r0_2 > 3U) {
            M2C_FIELD(temp_r1, s8 *, 2) = 0;
            var_r4 = temp_r1 + 2;
        } else {
            sub_08004408(M2C_FIELD(arg0, s32 *, 0x6C), -1);
            var_r4 = arg0 + 0x76;
        }
    }
    sub_080522C8(arg0);
    return *var_r4;
}
