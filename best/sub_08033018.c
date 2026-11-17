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

M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08032C54(void *, s32);                  /* extern */
M2C_UNK sub_080500F0(void *);                       /* extern */
s32 sub_080529D4();                                 /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

void sub_08033018(void *arg0, u8 arg1) {
    if (arg1 == 1) {
        if (M2C_FIELD(arg0, u8 *, 0x38F) != 0) {
            sub_0800FE28(arg0, sub_080529D4(), 0xF);
            sub_080534A0(3);
            M2C_FIELD(arg0, s8 *, 0x393) = 0;
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x38F) = arg1;
        sub_080500F0(arg0 + 0x68);
        sub_08032C54(arg0, 1);
    }
}
