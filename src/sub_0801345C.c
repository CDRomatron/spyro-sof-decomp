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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
extern M2C_UNK sub_08013250;
extern M2C_UNK sub_08013510;

void sub_0801345C(void *arg0, u16 arg1) {
    u16 temp_r1;

    temp_r1 = arg1;
    M2C_FIELD(arg0, s8 *, 0x44) = (s8) temp_r1;
    switch (temp_r1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x30) = &sub_08013250;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x38));
        return;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x30) = &sub_08013510;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x40));
        M2C_FIELD(arg0, s8 *, 0x46) = 0xA;
        if (M2C_FIELD(arg0, u8 *, 0x45) == 1) {
            sub_08003220(0x08171630);
            return;
        }
        sub_08003220(0x08170B08);
        return;
    }
}
