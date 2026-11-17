
extern void sub_08003BF8(s32);
extern void sub_08003BD4(s32);
extern void sub_0800C2A0(s32);
extern void sub_0800D730(s32, s32);
extern void sub_0800C748(s32);
extern void *D_030026C4;

void sub_08054A04(u8 *arg0, s32 arg1) {
    u32 i;
    u8 *p;
    s32 off;
    if (*(u32 *)(arg0 + 0x106C) > 0U) {
        p = arg0 + 0x1015;
        off = 0;
        for (i = 0; i < *(u32 *)(arg0 + 0x106C); i++) {
            if (*p == arg1) sub_08003BF8(*(s32 *)(arg0 + 0x100C + off));
            p += 0xC;
            off += 0xC;
        }
    }
}

void sub_08054AAC(u8 *arg0) {
    u32 i;
    s32 off;
    if (*(u32 *)(arg0 + 0x106C) > 0U) {
        off = 0;
        for (i = 0; i < *(u32 *)(arg0 + 0x106C); i++) {
            sub_08003BD4(*(s32 *)(arg0 + 0x100C + off));
            off += 0xC;
        }
    }
    *(u32 *)(arg0 + 0x106C) = 0;
}

void sub_08054768(s32 arg0, s32 arg1) {
    u8 *base = D_030026C4;
    u32 i;
    u8 *p;
    if ((arg1 << 0x18) != 0) {
        p = base;
        for (i = 0; i <= 8U; i++) {
            if ((*(u16 *)(p + 8) != 0) && (*(u16 *)(p + 0xE) == arg0))
                sub_0800D730(*(s32 *)(p + 0), 0x78);
            p += 0x10;
        }
        return;
    }
    p = base;
    for (i = 0; i <= 8U; i++) {
        if ((*(u16 *)(p + 8) != 0) && (*(u16 *)(p + 0xE) == arg0))
            sub_0800C2A0(*(s32 *)(p + 0));
        p += 0x10;
    }
}

void sub_080546DC(void) {
    u8 *base = D_030026C4;
    u32 i;
    u8 *p = base;
    for (i = 0; i <= 8U; i++) {
        if (*(u16 *)(p + 8) != 0) sub_0800C748(*(s32 *)(p + 0));
        p += 0x10;
    }
}
