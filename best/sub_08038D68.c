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

s32 sub_0801DAF4();                                 /* extern */
s32 sub_0801DB18();                                 /* extern */
M2C_UNK sub_08039058(void *, s32);                  /* extern */
M2C_UNK sub_08039364(void *);                       /* extern */
s32 sub_08052140(s32, s32);                         /* extern */
s32 sub_080529E8(void *, s32);                      /* extern */
s32 sub_08052B40(void *);                           /* extern */
s32 sub_08052BB4(s32);                              /* extern */

void sub_08038D68(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r4_2;

    temp_r4 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 0x3C) = sub_08052BB4(temp_r4);
    if (((sub_08052140(temp_r4, 0x1000) << 0x18) != 0) && ((sub_0801DAF4() << 0x18) == 0) && ((sub_0801DB18() << 0x18) == 0)) {
        M2C_FIELD(arg0, s8 *, 0xB2) = 3;
        return;
    }
    temp_r4_2 = arg0 + 0x24;
    if (((sub_080529E8(temp_r4_2, 0x2800) << 0x18) != 0) && ((sub_080529E8(temp_r4_2, 0x2000) << 0x18) == 0)) {
        temp_r0 = sub_08052B40(temp_r4_2);
        if ((s32) (temp_r0 - M2C_FIELD(*(void **)0x03001634, s32 *, 0x28)) < 0) {
            if ((s32) (M2C_FIELD(*(void **)0x03001634, s32 *, 0x28) - temp_r0) > 0x1FFF) {
                goto block_11;
            }
            goto block_10;
        }
        if ((s32) (temp_r0 - M2C_FIELD(*(void **)0x03001634, s32 *, 0x28)) <= 0x1FFF) {
block_10:
            sub_08039058(arg0, 1);
            return;
        }
        goto block_11;
    }
block_11:
    if (M2C_FIELD(arg0, u16 *, 0xA4) == 0) {
        sub_08039058(arg0, 1);
    }
    sub_08039364(arg0);
}
