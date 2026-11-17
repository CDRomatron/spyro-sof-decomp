
extern s32 sub_08004020(s32);
extern u32 sub_08007598();
extern s32 sub_08052140(void *, s32);
extern s32 sub_08003220(s32);
extern s32 sub_0800781C(s32, s32);

u8 sub_080181D4(void *arg0) {
    u32 temp;
    temp = sub_08007598();
    if ((u8)temp != 0) {
        *(u8 *)((s8 *)arg0 + 0x3C) = 0U;
        arg0 = (s8 *)arg0 + 0x3C;
    } else {
        s32 v;
        sub_08004020(*(s32 *)((s8 *)arg0 + 0x34));
        v = sub_08052140((s8 *)arg0 + 0xC, 0x800) << 0x18;
        arg0 = (s8 *)arg0 + 0x3C;
        if (v != 0) {
            sub_0800781C(0x5F, 1);
            *(u8 *)arg0 = (u8)temp;
            sub_08003220(0x08170D54);
        }
    }
    return *(u8 *)arg0;
}
