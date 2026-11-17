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

void sub_08063E58(void *arg0) {
    void *temp_r5;

    *(u16 *)0x03000CFC = *(u16 *)0x04000208;
    *(u16 *)0x04000208 = 0;
    temp_r5 = *(void **)0x03000CF8;
    M2C_FIELD(temp_r5, u16 *, 2) = 0U;
    *(s16 *)0x04000202 = 8 << *(u8 *)0x03000CF0;
    *(u16 *)0x04000200 |= 8 << *(u8 *)0x03000CF0;
    *(s8 *)0x03000CF4 = 0;
    *(u16 *)0x03000CF2 = M2C_FIELD(arg0, u16 *, 0);
    M2C_FIELD(temp_r5, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 2);
    *(void **)0x03000CF8 = temp_r5 + 2;
    M2C_FIELD(temp_r5, u16 *, 2) = (u16) M2C_FIELD((arg0 + 2), u16 *, 2);
    *(void **)0x03000CF8 = temp_r5;
    *(u16 *)0x04000208 = 1;
}
