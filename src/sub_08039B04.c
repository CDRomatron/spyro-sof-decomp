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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
s32 sub_0800D9EC(s32, s32);                         /* extern */
M2C_UNK sub_08039058(void *, s32);                  /* extern */
M2C_UNK sub_08039364(void *);                       /* extern */
s32 sub_08052BB4(s32);                              /* extern */

void sub_08039B04(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r4 = arg0 + 0x24;
    temp_r0 = sub_0800D9EC(arg0 + 0x60, temp_r4);
    if ((temp_r0 == 3) || (temp_r0 == 1)) {
        temp_r4_2 = sub_08052BB4(temp_r4);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x44), -1);
        sub_08039058(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r4_2;
        sub_08003220(0x08170C20);
    }
    sub_08039364(arg0);
}
