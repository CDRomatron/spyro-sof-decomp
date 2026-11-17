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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_08039058(void *, s32);                  /* extern */
M2C_UNK sub_08039364(void *);                       /* extern */

void sub_08039AA0(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0xA4) == 0) {
        sub_08039058(arg0, 0);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x44), 0x190001);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x44), -1);
    }
    sub_08039364(arg0);
}
