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
s32 sub_08008900(s32, s32);                         /* extern */
s32 sub_0800D9EC(void *, s32);                      /* extern */
M2C_UNK sub_0803D770(void *);                       /* extern */
M2C_UNK sub_0803D950(void *, s32);                  /* extern */
s32 sub_08052BB4(s32);                              /* extern */

void sub_0803DD00(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r7;
    s32 var_r0;

    temp_r7 = arg0 + 0x24;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = sub_08008900(temp_r4, sub_08052BB4(temp_r7));
    if (temp_r0 > 0x380) {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x84);
        if (temp_r0 >= 0) {
            var_r0 = temp_r0_2 + 0x380;
        } else {
            var_r0 = temp_r0_2 + 0xFFFFFC80;
        }
        M2C_FIELD(arg0, s32 *, 0x84) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x84);
    }
    if (sub_0800D9EC(arg0 + 0x3C, temp_r7) == 3) {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x6D0004);
        sub_0803D950(arg0, 0);
    }
    sub_0803D770(arg0);
}
