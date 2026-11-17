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
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800D950(void *, s32);                  /* extern */
M2C_UNK sub_0800FDB4(void *, s32, s32 *);           /* extern */
M2C_UNK sub_080528D4(s32, s32, s32, s32);           /* extern */
extern M2C_UNK sub_08025138;
extern M2C_UNK sub_08025144;

void sub_08024DE0(void *arg0, u16 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r4;
    u16 temp_r6;
    u32 temp_r0;
    u32 temp_r0_2;
    void *temp_r0_3;
    void *temp_r2;

    temp_r6 = arg1;
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    switch (temp_r6) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_08025138;
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x78), -1);
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x78), -1);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x640007);
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = (M2C_UNK *)0x08024D65;
        M2C_FIELD((arg0 + 0x80), s16 *, 0xE) = 0x1A4;
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x78), 0xB);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x78), 0);
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_08025144;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (M2C_FIELD(arg0, u16 *, 0x22) | 1);
        temp_r2 = *(void **)0x03001634;
        temp_r0 = M2C_FIELD(temp_r2, u32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1);
        temp_r0_2 = M2C_FIELD(temp_r2, u32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) ((s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1);
        M2C_FIELD(arg0, s32 *, 0x48) = 0xA00;
        sub_0800D950(arg0 + 0x3C, 2);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x640006);
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x78), -1);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x74);
        if (temp_r4 != 0) {
            temp_r0_3 = arg0 + 0x24;
            sub_080528D4(temp_r4, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r0_3, s32 *, 4), M2C_FIELD(temp_r0_3, s32 *, 8));
            sp0 = (sub_0800897C() & 0x7F) - 0x40;
            sp4 = (sub_0800897C() & 0x7F) - 0x40;
            sp8 = (0x3FF & sub_0800897C()) + 0x600;
            sub_0800FDB4(arg0, M2C_FIELD(arg0, s32 *, 0x74), &sp0);
        }
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x94) = (s8) temp_r6;
}
