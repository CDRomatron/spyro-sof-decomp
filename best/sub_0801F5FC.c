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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
extern M2C_UNK sub_0801F068;
extern M2C_UNK sub_0801F12C;
extern M2C_UNK sub_0801F6C4;

void sub_0801F5FC(void *arg0, u16 arg1) {
    u16 temp_r5;

    temp_r5 = arg1;
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
    switch (temp_r5) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_0801F6C4;
        M2C_FIELD(arg0, s32 *, 0x88) = (s32) temp_r5;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x170002);
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_0801F12C;
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_0801F068;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (M2C_FIELD(arg0, u16 *, 0x22) | 1);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x170002);
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x99) = (s8) temp_r5;
}
