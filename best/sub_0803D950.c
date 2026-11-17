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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
extern M2C_UNK sub_0803D8BC;
extern M2C_UNK sub_0803DCBC;
extern M2C_UNK sub_0803DD00;

void sub_0803D950(void *arg0, u16 arg1) {
    u16 temp_r6;

    temp_r6 = arg1;
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    switch (temp_r6) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_0803DCBC;
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x78), -1);
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x78), -1);
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        M2C_FIELD(arg0, s16 *, 0x92) = 0x5A;
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_0803DD00;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (M2C_FIELD(arg0, u16 *, 0x22) | 1);
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = 0x800;
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_0803D8BC;
        M2C_FIELD((arg0 + 0x80), s16 *, 0x10) = 0x1E;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (M2C_FIELD(arg0, u16 *, 0x22) | 1);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x6D0000);
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x96) = (s8) temp_r6;
}
