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

M2C_UNK sub_08003C58(void *, s32);                  /* extern */
void *sub_08004370();                               /* extern */
M2C_UNK sub_08004408(void *, s32);                  /* extern */
M2C_UNK sub_08004454(void *, void *, M2C_UNK *);    /* extern */
M2C_UNK sub_080044A4(void *, s32);                  /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
extern M2C_UNK sub_08015010;

void sub_08014DF0(void *arg0, void *arg1) {
    u8 temp_r4;
    void *temp_r0;
    void *temp_r6;

    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg1, s32 *, 0) + ((sub_0800897C() & 0x3FF) - 0xFF));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg1, s32 *, 4) + ((sub_0800897C() & 0x3FF) - 0xFF));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg1, s32 *, 8) + ((sub_0800897C() & 0x3FF) + 0x601));
    temp_r0 = sub_08004370();
    M2C_FIELD(arg0, void **, 0x34) = temp_r0;
    sub_08003C58(temp_r0, 0x480000);
    sub_080044A4(M2C_FIELD(arg0, void **, 0x34), 1);
    temp_r6 = M2C_FIELD(arg0, void **, 0x34);
    temp_r4 = M2C_FIELD(temp_r6, u8 *, 0x2E);
    sub_08004408(temp_r6, temp_r4 + (1 & sub_0800897C()));
    sub_08004454(M2C_FIELD(arg0, void **, 0x34), arg0, &sub_08015010);
    sub_0800D9D0(arg0, 5);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((sub_0800897C() & 0x1F) - 0x10);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((sub_0800897C() & 0x1F) - 0x10);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((sub_0800897C() & 0x1F) - 0x1F);
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
}
