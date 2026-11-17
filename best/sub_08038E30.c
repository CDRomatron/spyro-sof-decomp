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
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_08039058(void *, s32);                  /* extern */
M2C_UNK sub_08039364(void *);                       /* extern */

void sub_08038E30(void *arg0) {
    u16 temp_r0;
    u16 temp_r1;
    u16 temp_r5;
    void *temp_r6;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0xA6);
    if ((u32) temp_r1 <= 0x77U) {
        if (!(3 & temp_r1)) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) - 0x80);
            M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 0x80);
        }
        if ((3 & M2C_FIELD(arg0, u16 *, 0xA6)) == 2) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) + 0x80);
            M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) - 0x80);
        }
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xA6) - 1;
    M2C_FIELD(arg0, u16 *, 0xA6) = temp_r0;
    temp_r5 = temp_r0;
    temp_r6 = arg0 + 0x24;
    if (temp_r5 == 0) {
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) temp_r5;
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) temp_r5;
        sub_0800FCA4(0x92, 1, temp_r6);
        sub_08039058(arg0, 0);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x44), 0x190005);
        M2C_FIELD(arg0, u16 *, 0xA4) = temp_r5;
    }
    if (sub_0800D9EC(arg0 + 0x60, temp_r6) == 3) {
        sub_08003220(0x08170E88);
    }
    sub_08039364(arg0);
}
