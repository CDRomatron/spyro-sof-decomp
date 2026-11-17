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

M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_080500D8();                             /* extern */
M2C_UNK sub_080529D4();                             /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08010E18;

void sub_08010DAC(void *arg0, u8 arg1) {
    u8 temp_r0;

    if (arg1 == 1) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x50);
        switch (temp_r0) {                          /* irregular */
        case 0:
            if (M2C_FIELD(arg0, u8 *, 0x52) != 0) {
                sub_080529D4();
                sub_080500D8();
                M2C_FIELD(arg0, u8 *, 0x50) = arg1;
                sub_080534A0(3);
                sub_0800F538();
                return;
            }
            sub_0800F550(0xB4, &sub_08010E18, arg0, 1);
            return;
        case 1:
            if (M2C_FIELD(arg0, u8 *, 0x52) == 0) {
                sub_0800F550(0xB5, &sub_08010E18, arg0, 1);
            }
            break;
        }
    }
}
