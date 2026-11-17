
extern void sub_08004408(s32, s32); extern void sub_0800443C(s32, s32);
extern void sub_0803075C(void); extern void sub_08030178(void); extern void sub_08030290(void);
void sub_0803030C(u8 *arg0, u16 arg1) {
    u16 t = arg1; s32 zero; u16 v;
    v = (u16)(*(u16 *)(arg0 + 0x22) & 0xFFFE);
    zero = 0;
    *(u16 *)(arg0 + 0x22) = v;
    *(u32 *)(arg0 + 0x50) = zero;
    *(u32 *)(arg0 + 0x54) = zero;
    switch (t) {
    case 0:
        *(u32 *)(arg0 + 0x98) = (u32)sub_0803075C;
        sub_08004408(*(s32 *)(arg0 + 0x44), -1);
        sub_0800443C(*(s32 *)(arg0 + 0x44), -1);
        *(u32 *)(arg0 + 0x40) = t; break;
    case 2:
        *(u32 *)(arg0 + 0x98) = (u32)sub_08030178;
        sub_08004408(*(s32 *)(arg0 + 0x44), -1);
        sub_0800443C(*(s32 *)(arg0 + 0x44), -1); break;
    case 4:
        *(u32 *)(arg0 + 0x98) = (u32)sub_08030290;
        *(u16 *)(arg0 + 0x22) = (u16)(*(volatile u16 *)(arg0 + 0x22) | 1);
        *(u16 *)(arg0 + 0x9E) = 0xB4;
        sub_0800443C(*(s32 *)(arg0 + 0x44), 0xB);
        sub_08004408(*(s32 *)(arg0 + 0x44), 0);
        *(u32 *)(arg0 + 0x40) = zero; break;
    }
    *(u8 *)(arg0 + 0xA3) = (u8)t;
    *(u8 *)(arg0 + 0xA2) = (u8)t;
}
