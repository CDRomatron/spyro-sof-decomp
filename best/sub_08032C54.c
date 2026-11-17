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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
extern M2C_UNK sub_08032B94;
extern M2C_UNK sub_08033068;
extern M2C_UNK sub_0803308C;

void sub_08032C54(void *arg0, u16 arg1) {
    u16 temp_r6;

    temp_r6 = arg1;
    switch (temp_r6) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x374) = (M2C_UNK *) temp_r6;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x380), 0x5E0000);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x380), 0);
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x374) = &sub_08033068;
        M2C_FIELD(arg0, s8 *, 0x38E) = 0x5A;
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x380), -1);
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x374) = &sub_0803308C;
        M2C_FIELD(arg0, s8 *, 0x392) = 1;
        M2C_FIELD(arg0, s8 *, 0x38D) = 0x5A;
        M2C_FIELD(arg0, s8 *, 0x38E) = 0x28;
        sub_08003220(0x08170B24);
        break;
    case 3:
        M2C_FIELD(arg0, M2C_UNK **, 0x374) = &sub_08032B94;
        M2C_FIELD(arg0, s8 *, 0x392) = 1;
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
        sub_08003220(0x08170B24);
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x38C) = (s8) temp_r6;
}
