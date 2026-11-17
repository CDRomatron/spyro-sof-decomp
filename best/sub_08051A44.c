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

void *sub_08002B34(s32, s32);                       /* extern */
void *sub_08009F74(u16);                            /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void sub_08051A44(u16 arg0) {
    u16 temp_r4;
    void *temp_r6;

    temp_r4 = arg0;
    temp_r6 = sub_08009F74(temp_r4);
    *(void **)0x030026BC = sub_08002B34(0x10, 0);
    sub_08065CF0(*(void **)0x030026BC, 0, 0x10);
    M2C_FIELD(*(void **)0x030026BC, u16 *, 0xC) = temp_r4;
    M2C_FIELD(*(void **)0x030026BC, u16 *, 8) = (u16) M2C_FIELD(temp_r6, u16 *, 0);
    M2C_FIELD(*(void **)0x030026BC, u16 *, 0xA) = (u16) M2C_FIELD(temp_r6, u16 *, 2);
    M2C_FIELD(*(void **)0x030026BC, void **, 0) = (void *) (temp_r6 + 4);
}
