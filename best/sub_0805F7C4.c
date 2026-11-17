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

/* Warning: missing "bx $lr" in last block of sub_0805F7C4 (_0805F7EE). */

M2C_UNK sub_08002BE0(s32, s32);                     /* extern */
M2C_UNK sub_08007BB0(s32);                          /* extern */
u32 sub_08007BC4(u16 *, s32, u16);                  /* extern */
M2C_UNK sub_0805EC48();                             /* extern */
M2C_UNK sub_08060D28();                             /* extern */
extern u16 *_0805F840;
extern u16 *_0805F844;
extern void **_0805F848;

void *sub_0805F7C4(void) {
    u16 temp_r2;
    u32 *temp_r4;
    void **temp_r5;

    *_0805F840 = 0;
    temp_r2 = *_0805F844;
    *_0805F844 = 0;
    temp_r5 = _0805F848;
    temp_r4 = *temp_r5 + 0xA4;
    if ((u32) *temp_r4 > sub_08007BC4(_0805F844, 0, temp_r2)) {
        sub_08007BB0(M2C_FIELD(*temp_r5, s32 *, 0xA4));
    }
    sub_08060D28();
    sub_0805EC48();
    sub_08002BE0(M2C_FIELD(*temp_r5, s32 *, 0xCC), 0x20);
    return *temp_r5;
}
