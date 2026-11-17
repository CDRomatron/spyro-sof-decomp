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

M2C_UNK sub_08000C20(void *, void *);               /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_08004478(s32, s32);                     /* extern */
M2C_UNK sub_0800448C(s32, s32);                     /* extern */
s32 sub_0800897C();                                 /* extern */
void *sub_08060598(s32);                            /* extern */
extern M2C_UNK sub_0805FF98;
extern M2C_UNK sub_08060124;
extern M2C_UNK sub_080601D8;
extern M2C_UNK sub_08060210;

void sub_08060050(s32 arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r1;

    temp_r0 = sub_08060598(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x48));
    M2C_FIELD(temp_r0, M2C_UNK **, 8) = &sub_0805FF98;
    M2C_FIELD(temp_r0, M2C_UNK **, 0x10) = &sub_08060210;
    M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &sub_080601D8;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x18) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x24) = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x34) = (s32) (M2C_FIELD(*(void **)0x030026EC, s32 *, 0xE0) + 0x99);
    M2C_FIELD(temp_r0, s32 *, 0x38) = 0x4000;
    M2C_FIELD(temp_r0, s32 *, 0x30) = (s32) (sub_0800897C() & 0x1F);
    M2C_FIELD(temp_r0, s32 *, 0x3C) = (s32) (sub_0800897C() & 0x1F);
    M2C_FIELD(temp_r0, s32 *, 0x28) = 0x600;
    M2C_FIELD(temp_r0, s32 *, 0x40) = (s32) (0xFFFF & sub_0800897C());
    temp_r1 = *(void **)0x030026EC;
    M2C_FIELD(temp_r1, s32 *, 0x7C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x7C) + 1);
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x24), 0x9B0001);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x24), temp_r0, &sub_08060124);
    sub_08004478(M2C_FIELD(temp_r0, s32 *, 0x24), 2);
    sub_0800448C(M2C_FIELD(temp_r0, s32 *, 0x24), 1);
    sub_08003220(0x081716BC);
    sub_08000C20(*(void **)0x030026EC + 0xC, temp_r0);
}
