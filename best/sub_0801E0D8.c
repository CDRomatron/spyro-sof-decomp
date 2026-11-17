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

M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_0801A130(void *, s32);                  /* extern */
s32 sub_08051AD8(void *);                           /* extern */

s32 sub_0801E0D8(void *arg0) {
    void *temp_r4;

    if ((u32) M2C_FIELD(arg0, u16 *, 0x14C) > (u32) M2C_FIELD(arg0, u16 *, 0x14E)) {
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x24), -1);
        temp_r4 = arg0 + 0xC;
        if (sub_08051AD8(temp_r4) > 0) {
            sub_0801A130(arg0, 0xA);
        } else {
            sub_0801A130(arg0, 2);
        }
        sub_0800FCA4(0x91, 1, temp_r4);
    }
    return 0;
}
