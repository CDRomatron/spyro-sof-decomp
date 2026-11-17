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
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_08060238(s32, s32, s32, s32);           /* extern */
void *sub_08060598(s32);                            /* extern */
s32 sub_080643E4(s32, s32);                         /* extern */
extern M2C_UNK sub_08060510;
extern M2C_UNK sub_08060514;
extern M2C_UNK sub_0806054C;

void sub_08060424(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = sub_08060598(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x48));
    M2C_FIELD(temp_r0, M2C_UNK **, 8) = &sub_08060514;
    M2C_FIELD(temp_r0, M2C_UNK **, 0x10) = &sub_0806054C;
    M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &sub_08060510;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x18) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0x800;
    M2C_FIELD(temp_r0, s32 *, 0x28) = 3;
    M2C_FIELD(temp_r0, s32 *, 0x24) = sub_080643E4(sub_0800897C(), 3);
    sub_08000C20(*(void **)0x030026EC + 0x18, temp_r0);
    sub_08060238(M2C_FIELD(temp_r0, s32 *, 0x14), M2C_FIELD(temp_r0, s32 *, 0x18), M2C_FIELD(temp_r0, s32 *, 0x28), M2C_FIELD(temp_r0, s32 *, 0x24));
}
