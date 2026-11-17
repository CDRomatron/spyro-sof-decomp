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

u32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
s32 sub_0801DA58(void *, s32, s32);                 /* extern */
M2C_UNK sub_080367F8(void *, s32);                  /* extern */
s32 sub_080529E8(void *, s32);                      /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_080369F4(void *arg0) {
    s32 temp_r4_2;
    u32 temp_r0;
    void *temp_r4;

    temp_r4 = arg0 + 0x24;
    if (sub_0805399C() == 3) {
        if ((sub_080529E8(temp_r4, 0x800) << 0x18) != 0) {
            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r4, s32 *, 4), M2C_FIELD(temp_r4, s32 *, 8), 0, 0x800);
        }
        temp_r4_2 = sub_0801DA58(temp_r4, 0x800, 0x1000);
        temp_r0 = sub_08004508(M2C_FIELD(arg0, s32 *, 0x48));
        switch (temp_r0) {                          /* irregular */
        case 0x330001:
            if (temp_r4_2 == 5) {
block_11:
                sub_080367F8(arg0, 2);
                return;
            }
            break;
        case 0x220001:
            if (temp_r4_2 == 4) {
                goto block_11;
            }
            break;
        case 0x1B0001:
            if (temp_r4_2 == 3) {
                sub_080367F8(arg0, 2);
            }
            break;
        }
    }
}
