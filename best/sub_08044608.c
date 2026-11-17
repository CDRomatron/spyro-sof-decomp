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

M2C_UNK sub_0800C3FC(s32, s32, s32);                /* extern */
M2C_UNK sub_0800D73C(s32);                          /* extern */
s32 sub_0806436C(s32, s32);                         /* extern */
s8 sub_080643E4(s32, s32);                          /* extern */

void sub_08044608(void) {
    s32 *temp_r5;
    s32 *temp_r5_2;
    s32 *temp_r5_3;
    s32 *temp_r5_4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(*(void **)0x030026A4, s32 *, 0xB0);
    temp_r5 = M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88);
    M2C_FIELD(temp_r5, s8 *, 0x1F) = sub_080643E4(temp_r6, 0xA);
    temp_r0 = sub_0806436C(temp_r6, 0xA);
    temp_r5_2 = M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88);
    M2C_FIELD(temp_r5_2, s8 *, 0x1E) = sub_080643E4(temp_r0, 0xA);
    temp_r0_2 = sub_0806436C(temp_r0, 0xA);
    temp_r5_3 = M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88);
    M2C_FIELD(temp_r5_3, s8 *, 0x1D) = sub_080643E4(temp_r0_2, 0xA);
    temp_r5_4 = M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88);
    M2C_FIELD(temp_r5_4, s8 *, 0x1C) = sub_080643E4(sub_0806436C(temp_r0_2, 0xA), 0xA);
    sub_0800D73C(*M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88));
    sub_0800C3FC(*M2C_FIELD(*(void **)0x030026A4, s32 **, 0x88), 0, 0);
}
