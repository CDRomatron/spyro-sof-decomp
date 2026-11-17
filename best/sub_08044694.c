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

u8 sub_08007470();                                  /* extern */
M2C_UNK sub_0800C3FC(s32, s32, s32);                /* extern */
M2C_UNK sub_0800D73C(s32);                          /* extern */
s32 sub_0806436C(s32, s32);                         /* extern */
s8 sub_080643E4(s32, s32);                          /* extern */

void sub_08044694(void) {
    s32 temp_r0;
    s32 temp_r6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;

    M2C_FIELD(*(void **)0x030026A4, s32 *, 0xAC) = (s32) sub_08007470();
    temp_r6 = M2C_FIELD(*(void **)0x030026A4, s32 *, 0xAC);
    temp_r4 = M2C_FIELD(*(void **)0x030026A4, void **, 0x88);
    M2C_FIELD(temp_r4, s8 *, 0x28) = sub_080643E4(temp_r6, 0xA);
    temp_r0 = sub_0806436C(temp_r6, 0xA);
    temp_r4_2 = M2C_FIELD(*(void **)0x030026A4, void **, 0x88);
    M2C_FIELD(temp_r4_2, s8 *, 0x27) = sub_080643E4(temp_r0, 0xA);
    temp_r4_3 = M2C_FIELD(*(void **)0x030026A4, void **, 0x88);
    M2C_FIELD(temp_r4_3, s8 *, 0x26) = sub_080643E4(sub_0806436C(temp_r0, 0xA), 0xA);
    sub_0800D73C(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, void **, 0x88), s32 *, 0x10));
    sub_0800C3FC(M2C_FIELD(M2C_FIELD(*(void **)0x030026A4, void **, 0x88), s32 *, 0x10), 0, 0);
}
