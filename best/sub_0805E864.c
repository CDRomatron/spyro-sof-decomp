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

M2C_UNK sub_0800D73C(s32);                          /* extern */
s32 sub_0806436C(s32, s32);                         /* extern */
s8 sub_080643E4(s32, s32);                          /* extern */

void sub_0805E864(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;

    temp_r4 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4, s8 *, 0x6C) = sub_080643E4(arg0, 0xA);
    temp_r0 = sub_0806436C(arg0, 0xA);
    temp_r4_2 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_2, s8 *, 0x6B) = sub_080643E4(temp_r0, 0xA);
    temp_r0_2 = sub_0806436C(temp_r0, 0xA);
    temp_r4_3 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_3, s8 *, 0x6A) = sub_080643E4(temp_r0_2, 0xA);
    temp_r0_3 = sub_0806436C(temp_r0_2, 0xA);
    temp_r4_4 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_4, s8 *, 0x69) = sub_080643E4(temp_r0_3, 0xA);
    temp_r0_4 = sub_0806436C(temp_r0_3, 0xA);
    temp_r4_5 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_5, s8 *, 0x68) = sub_080643E4(temp_r0_4, 0xA);
    temp_r0_5 = sub_0806436C(temp_r0_4, 0xA);
    temp_r4_6 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_6, s8 *, 0x67) = sub_080643E4(temp_r0_5, 0xA);
    temp_r0_6 = sub_0806436C(temp_r0_5, 0xA);
    temp_r4_7 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_7, s8 *, 0x66) = sub_080643E4(temp_r0_6, 0xA);
    temp_r0_7 = sub_0806436C(temp_r0_6, 0xA);
    temp_r4_8 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_8, s8 *, 0x65) = sub_080643E4(temp_r0_7, 0xA);
    temp_r4_9 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_9, s8 *, 0x64) = sub_080643E4(sub_0806436C(temp_r0_7, 0xA), 0xA);
    sub_0800D73C(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x5C));
}
