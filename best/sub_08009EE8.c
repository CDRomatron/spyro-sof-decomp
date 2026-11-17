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
u8 sub_0800897C();                                  /* extern */
extern M2C_UNK sub_08009C04;
extern M2C_UNK sub_08009C94;

void sub_08009EE8(void *arg0, u8 arg1) {
    u8 temp_r1;

    temp_r1 = arg1;
    M2C_FIELD(arg0, u8 *, 0x44) = temp_r1;
    switch (temp_r1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 8) = &sub_08009C04;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0), 0x10002);
        M2C_FIELD(arg0, s16 *, 0x42) = (s16) (sub_0800897C() + 0x3C);
        M2C_FIELD(arg0, s16 *, 0x40) = (s16) (sub_0800897C() + 0x50);
        return;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 8) = &sub_08009C94;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0), 0x10001);
        return;
    }
}
