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

M2C_UNK _080259CC(void *, s32);                     /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
s32 sub_080529D4();                                 /* extern */
u32 sub_08054B9C(s32, s32, s32);                    /* extern */
s32 sub_08054E90(s32, void *);                      /* extern */

void sub_08025DE0(void *arg0) {
    s32 temp_r5;
    u32 temp_r0;
    void *temp_r1;

    temp_r5 = arg0 + 0x24;
    temp_r0 = sub_08054B9C(temp_r5, 0x800, 0x1000);
    switch (temp_r0) {                              /* irregular */
    case 2:
        if (sub_08054E90(temp_r5, arg0) == M2C_FIELD(arg0, s32 *, 0x2C)) {
            _080259CC(arg0, 3);
        } else {
        case 3:
            _080259CC(arg0, 4);
        }
        break;
    case 1:
        temp_r1 = arg0 + 0x58;
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (0 - M2C_FIELD(temp_r1, s32 *, 4));
        M2C_FIELD(temp_r1, s32 *, 8) = (s32) (0 - M2C_FIELD(temp_r1, s32 *, 8));
        M2C_FIELD(temp_r1, s32 *, 0xC) = (s32) (0 - M2C_FIELD(temp_r1, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(temp_r1, s32 *, 0x48);
        M2C_FIELD(temp_r1, s32 *, 0x48) = 0;
        sub_08003220(0x08170E50);
        sub_0800FE28(arg0, sub_080529D4(), 0x10);
        break;
    }
    if (((sub_08052140(arg0 + 0x24, 0x800) << 0x18) != 0) && (M2C_FIELD(arg0, u8 *, 0xBB) == 2)) {
        sub_0800FE28(arg0, M2C_FIELD(*(void **)0x030026C0, s32 *, 0x51C), 0x10);
    }
}
