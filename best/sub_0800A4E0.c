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

void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_0800380C(s32);                          /* extern */
s32 sub_08003B7C(s32, s32, void *, M2C_UNK *);      /* extern */
M2C_UNK sub_08003BF8(s32);                          /* extern */
M2C_UNK sub_0800B844();                             /* extern */
M2C_UNK sub_0800C0CC();                             /* extern */
M2C_UNK sub_0800C1C0();                             /* extern */
extern M2C_UNK sub_0800A818;
extern M2C_UNK sub_0800A8A4;
extern M2C_UNK sub_0800C1DC;

s32 sub_0800A4E0(void) {
    *(void **)0x03002680 = sub_08002B34(0xFB8, 0);
    sub_0800C0CC();
    sub_0800B844();
    sub_0800C1C0();
    M2C_FIELD(*(void **)0x03002680, s32 *, 0xBAC) = 0;
    M2C_FIELD(*(void **)0x03002680, s32 *, 0xBA8) = 0;
    M2C_FIELD(*(void **)0x03002680, s32 *, 0x410) = 0;
    M2C_FIELD(*(void **)0x03002680, s32 *, 0x414) = 0;
    M2C_FIELD(*(void **)0x03002680, s32 *, 0xFB0) = 0;
    M2C_FIELD(*(void **)0x03002680, s32 *, 8) = sub_08003B7C(3, -0x78, *(void **)0x03002680, &sub_0800C1DC);
    sub_0800380C(M2C_FIELD(*(void **)0x03002680, s32 *, 8));
    sub_08003BF8(M2C_FIELD(*(void **)0x03002680, s32 *, 8));
    M2C_FIELD(*(void **)0x03002680, s32 *, 0) = sub_08003B7C(5, 0x78, *(void **)0x03002680, &sub_0800A8A4);
    sub_0800380C(M2C_FIELD(*(void **)0x03002680, s32 *, 0));
    sub_08003BF8(M2C_FIELD(*(void **)0x03002680, s32 *, 0));
    M2C_FIELD(*(void **)0x03002680, s32 *, 4) = sub_08003B7C(5, -0x78, *(void **)0x03002680, &sub_0800A818);
    sub_0800380C(M2C_FIELD(*(void **)0x03002680, s32 *, 4));
    sub_08003BF8(M2C_FIELD(*(void **)0x03002680, s32 *, 4));
    M2C_FIELD((void *)0x03001160, u16 *, 0) = (u16) ((M2C_FIELD((void *)0x03001160, u16 *, 0) | 0x1040) & 0xFF7F);
    M2C_FIELD((void *)0x03001160, u16 *, 0x50) = 0xF00U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x52) = 0x80CU;
    M2C_FIELD(*(void **)0x03002680, s16 *, 0xFB6) = 1;
    M2C_FIELD(*(void **)0x03002680, s16 *, 0xFB4) = 3;
    return 1;
}
