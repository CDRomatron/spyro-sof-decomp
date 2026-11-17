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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800D950(void *, s32);                  /* extern */
M2C_UNK sub_0800FDB4(void *, s32, s32 *);           /* extern */
M2C_UNK sub_080528D4(s32, s32, s32, s32);           /* extern */
s32 sub_08052BB4(void *);                           /* extern */
extern M2C_UNK sub_08025480;
extern M2C_UNK sub_080258E4;
extern M2C_UNK sub_08025924;
extern M2C_UNK sub_08025954;

void sub_08025514(void *arg0, u16 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r4;
    u16 temp_r2;
    u16 temp_r6;
    u32 temp_r0_2;
    u32 temp_r0_3;
    void *temp_r0_4;
    void *temp_r2_2;

    temp_r6 = arg1;
    temp_r2 = 0xFFFE & M2C_FIELD(arg0, u16 *, 0x22);
    M2C_FIELD(arg0, u16 *, 0x22) = temp_r2;
    switch (temp_r6) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x68) = &sub_080258E4;
        M2C_FIELD(arg0, u16 *, 0x74) = temp_r6;
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x60), -1);
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x60), -1);
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        M2C_FIELD(arg0, s16 *, 0x76) = 0xD2;
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x68) = &sub_08025924;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (temp_r2 | 1);
        temp_r0 = sub_08052BB4(arg0 + 0xC);
        M2C_FIELD(arg0, s32 *, 0x6C) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x70) = (s32) (temp_r0 + 0x10000);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x60), 0x750004);
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x68) = &sub_08025480;
        M2C_FIELD(arg0, u16 *, 0x74) = 0x5AU;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (M2C_FIELD(arg0, u16 *, 0x22) | 1);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x60), 0x750000);
        sub_08003220(0x08170B24);
        break;
    case 3:
        M2C_FIELD(arg0, M2C_UNK **, 0x68) = &sub_08025954;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (temp_r2 | 1);
        temp_r2_2 = *(void **)0x03001634;
        temp_r0_2 = M2C_FIELD(temp_r2_2, u32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1);
        temp_r0_3 = M2C_FIELD(temp_r2_2, u32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) ((s32) (temp_r0_3 + (temp_r0_3 >> 0x1F)) >> 1);
        M2C_FIELD(arg0, s32 *, 0x30) = 0xA00;
        sub_0800D950(arg0 + 0x24, 2);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x60), 0x750002);
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x60), -1);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
        if (temp_r4 != 0) {
            temp_r0_4 = arg0 + 0xC;
            sub_080528D4(temp_r4, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r0_4, s32 *, 4), M2C_FIELD(temp_r0_4, s32 *, 8));
            sp0 = (sub_0800897C() & 0x7F) - 0x40;
            sp4 = (sub_0800897C() & 0x7F) - 0x40;
            sp8 = (0x3FF & sub_0800897C()) + 0x600;
            sub_0800FDB4(arg0, M2C_FIELD(arg0, s32 *, 0x5C), &sp0);
        }
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x7A) = (s8) temp_r6;
}
