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

M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
s32 sub_080529E8(void *, s32);                      /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_08037D00(void *arg0) {
    u16 temp_r1;
    void *temp_r4;
    void *temp_r7;

    temp_r7 = *(void **)0x03001634;
    temp_r4 = arg0 + 0x24;
    if ((sub_0805399C() == 3) && ((sub_080529E8(temp_r4, 0x1400) << 0x18) != 0)) {
        temp_r1 = M2C_FIELD(temp_r7, u16 *, 0x30);
        if ((temp_r1 == 0x200) || (temp_r1 == 0x2000)) {
            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r4, s32 *, 4), M2C_FIELD(temp_r4, s32 *, 8), 0, 0x1400);
            return;
        }
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r4, s32 *, 4), M2C_FIELD(temp_r4, s32 *, 8), 1, 0x1400);
    }
}
