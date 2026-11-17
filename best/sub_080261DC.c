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

/* Warning: missing "bx $lr" in last block of sub_080261DC (_08026292). */

M2C_UNK _080259CC(void *, s32);                     /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32);                          /* extern */
M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
u32 sub_08004508(s32);                              /* extern */
s32 sub_0802630C(void *);                           /* extern */
u8 sub_0805399C();                                  /* extern */

s32 sub_080261DC(s32 arg0, void *arg1, s32 arg2) {
    u32 temp_r0;

    if (arg2 == 2) {
        if ((u32) (u8) (M2C_FIELD(arg1, u8 *, 0xBB) - 1) <= 1U) {
            sub_08004408(arg0, 0);
        }
    } else if (arg2 == 8) {
        temp_r0 = sub_08004508(arg0);
        switch (temp_r0) {                          /* irregular */
        case 0x550001:
            sub_08003220(0x08170E50);
            if (sub_0805399C() == 3) {
                if ((sub_0802630C(arg1) << 0x18) != 0) {
                    _080259CC(arg1, 2);
                } else if (M2C_FIELD(arg1, u16 *, 0xB4) == 0) {
                    _080259CC(arg1, 1);
                }
            }
            break;
        case 0x550002:
            sub_08003C58(arg0);
            _080259CC(arg1, 0);
            break;
        case 0x550000:
            sub_08004408(arg0, 0);
            sub_08003DA8(arg0, -1);
            break;
        }
    }
    return 1;
}
