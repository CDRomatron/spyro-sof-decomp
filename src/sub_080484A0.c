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
void *sub_0804C168(s32);                            /* extern */
extern M2C_UNK sub_08048480;
extern M2C_UNK sub_080484F4;

void *sub_080484A0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = sub_0804C168(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84));
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x10) = arg0;
        M2C_FIELD(temp_r0, s32 *, 0x14) = arg1;
        M2C_FIELD(temp_r0, s32 *, 0x1C) = arg2;
        M2C_FIELD(temp_r0, s32 *, 0x18) = arg2;
        M2C_FIELD(temp_r0, M2C_UNK **, 8) = &sub_080484F4;
        M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &sub_08048480;
        sub_08000C20(*(void **)0x030026A4 + 0x6C, temp_r0);
    }
    return temp_r0;
}
