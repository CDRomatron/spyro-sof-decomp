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

M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_0800F6A4();                             /* extern */
M2C_UNK sub_0800FD8C(void *, s32, s32);             /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
s32 sub_080529D4();                                 /* extern */
s32 sub_08052B40(void *);                           /* extern */
s32 sub_08052C28(s32, s32);                         /* extern */
extern M2C_UNK sub_0803EBC4;

s32 sub_0803E67C(u16 arg0, void *arg2) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    u16 temp_r0;
    u8 temp_r1;

    temp_r0 = arg0;
    if ((s32) temp_r0 >= 1) {
        if ((s32) temp_r0 > 2) {
            if (temp_r0 == 3) {
                temp_r1 = M2C_FIELD(arg2, u8 *, 0x4F);
                switch (temp_r1) {                  /* irregular */
                case 0:
                    temp_r4 = sub_080529D4();
                    sub_0800FD8C(arg2, temp_r4, sub_08052B40(M2C_FIELD(arg2, s32 *, 0x38) + 0xC));
                    temp_r5 = M2C_FIELD(arg2, s32 *, 0x38);
                    temp_r4_2 = temp_r5 + 0xC;
                    sub_0800FD8C(arg2, temp_r5, sub_08052C28(temp_r4_2, sub_080529D4() + 0xC));
                    break;
                case 2:
                    temp_r4_3 = sub_080529D4();
                    sub_0800FD8C(arg2, temp_r4_3, sub_08052B40(arg2 + 0xC));
                    break;
                case 1:
                    sub_0800F6A4();
                    temp_r4_4 = sub_080529D4();
                    sub_0800FD8C(arg2, temp_r4_4, sub_08052B40(M2C_FIELD(arg2, s32 *, 0x38) + 0xC));
                    sub_0800FE28(arg2, sub_080529D4(), 0x5E);
                    sub_0800FE28(arg2, M2C_FIELD(arg2, s32 *, 0x38), 0x5F);
                    break;
                case 3:
                    sub_0800F6A4();
                    sub_0800FE28(arg2, M2C_FIELD(arg2, s32 *, 0x38), 0x60);
                    break;
                }
                M2C_FIELD(arg2, u8 *, 0x4F) = (u8) (M2C_FIELD(arg2, u8 *, 0x4F) + 1);
            }
        } else {
            sub_0800F538();
            sub_080501CC(arg2, &sub_0803EBC4);
        }
    }
    return 1;
}
