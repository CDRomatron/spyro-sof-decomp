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
s32 sub_0800D9EC(s32, s32);                         /* extern */
M2C_UNK sub_08039058(void *, s32);                  /* extern */

void sub_08039B58(void *arg0) {
    s32 temp_r0;

    temp_r0 = sub_0800D9EC(arg0 + 0x60, arg0 + 0x24);
    if ((temp_r0 == 3) || (temp_r0 == 1)) {
        if ((u32) M2C_FIELD(arg0, u8 *, 0xAC) < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), u16 *, 0x14)) {
            sub_08039058(arg0, 0);
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x44), 0x190005);
            return;
        }
        M2C_FIELD(arg0, s8 *, 0xB1) = 8;
        sub_08039058(arg0, 8);
        M2C_FIELD(arg0, s32 *, 0x3C) = 0x2000;
    }
}
