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

M2C_UNK _080128EC(void *, s32);                     /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_080529E8(void *, s32);                      /* extern */

void sub_08012D8C(void *arg0) {
    void *temp_r1;
    void *temp_r5;

    if (M2C_FIELD(arg0, u16 *, 0x90) == 0) {
        temp_r5 = arg0 + 0x30;
        if ((sub_080529E8(temp_r5, 0x78) << 0x18) == 0) {
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x40), 0x460001);
            _080128EC(arg0, 0);
            temp_r1 = arg0 + 0x24;
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
            M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
            M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
            M2C_FIELD(arg0, s8 *, 0x9A) = 1;
        }
    }
}
