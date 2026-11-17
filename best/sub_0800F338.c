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

s32 sub_08001D7C(s32);                              /* extern */
s32 sub_08001DD8(s32, s32, s32);                    /* extern */
s32 sub_08001F18(s32, s32, s32, s32, s32, s32);     /* extern */
M2C_UNK sub_08002498(s32, void *);                  /* extern */
M2C_UNK sub_080024DC(s32, s32);                     /* extern */
M2C_UNK sub_08002534(s32, s32);                     /* extern */
M2C_UNK sub_08002540(s32, s32);                     /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_0800380C();                             /* extern */
s32 sub_08003B7C(s32, s32, s32, M2C_UNK *);         /* extern */
M2C_UNK sub_0800A2B0(s32, s32);                     /* extern */
s32 sub_0800A3D4(s32);                              /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_0800EBB8;
extern M2C_UNK sub_0800F820;

void sub_0800F338(void) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x344, 0);
    *(void **)0x030008CC = temp_r0;
    sub_08065CF0(temp_r0, 0, 0x344);
    sub_0800A2B0(0x081756FC, 5);
    M2C_FIELD(temp_r0, s32 *, 0x2F0) = sub_0800A3D4(1);
    M2C_FIELD(temp_r0, s32 *, 0x2F4) = sub_0800A3D4(9);
    M2C_FIELD(temp_r0, s32 *, 0x2BC) = sub_08001D7C(0);
    temp_r0_2 = sub_08001DD8(0, 0x06001100, 0x90);
    M2C_FIELD(temp_r0, s32 *, 0x2C4) = temp_r0_2;
    sub_080024DC(temp_r0_2, M2C_FIELD(temp_r0, s32 *, 0x2BC));
    sub_08002534(M2C_FIELD(temp_r0, s32 *, 0x2C4), 0xF);
    sub_08002540(M2C_FIELD(temp_r0, s32 *, 0x2C4), 0);
    M2C_FIELD(temp_r0, s32 *, 0x2C0) = sub_08001F18(0, 0xA, 0x1E, 8, 0, M2C_FIELD(temp_r0, s32 *, 0x2C4));
    M2C_FIELD(temp_r0, s32 *, 0x2C8) = sub_08003B7C(0, 0, 0, &sub_0800EBB8);
    sub_0800380C();
    M2C_FIELD(temp_r0, s32 *, 0x2CC) = sub_08003B7C(1, 0, 0, &sub_0800F820);
    sub_0800380C();
    M2C_FIELD(temp_r0, s16 *, 0x322) = 0xA0;
    M2C_FIELD(temp_r0, s16 *, 0x324) = 0xA0;
    sub_08002498(0x2C0, temp_r0 + 0x2D4);
}
