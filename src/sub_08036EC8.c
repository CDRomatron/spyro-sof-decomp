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
s32 sub_0800D9EC(void *, void *);                   /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
u8 sub_0805399C();                                  /* extern */
extern M2C_UNK sub_08036F50;

void sub_08036EC8(void *arg0) {
    s32 temp_r0;
    void *temp_r5;

    temp_r5 = arg0 + 0x24;
    if (((sub_08052140(temp_r5, 0x1000) << 0x18) != 0) && (sub_0805399C() != 5)) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 1, 0x1000);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x68), 0x230001);
        M2C_FIELD(arg0, M2C_UNK **, 0x70) = &sub_08036F50;
        sub_08003220(0x08170CAC);
    }
    temp_r0 = sub_0800D9EC(arg0 + 0x30, arg0 + 0x24);
    if ((temp_r0 == 1) || (temp_r0 == 3)) {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x68), 0x230001);
        M2C_FIELD(arg0, M2C_UNK **, 0x70) = &sub_08036F50;
        sub_08003220(0x08170CAC);
    }
}
