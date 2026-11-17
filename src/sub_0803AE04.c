
extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_0805209C(void *, s32);

void sub_0803AE04(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x3C), p, *(s32 *)(arg0 + 0x44));
    sub_0805209C(arg0 + 0x24, *(s32 *)(arg0 + 0x44) + 0x4000);
}

void sub_0803AA80(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x38), p, *(s32 *)(arg0 + 0x40));
    sub_0805209C(arg0 + 0x24, *(s32 *)(arg0 + 0x40) + 0x4000);
}

extern s32 sub_0800F538(void);

s32 sub_0803AE2C(u16 arg0, s32 arg1, u8 *arg2) {
    u8 *p = arg2;
    if (arg0 == 1) {
        sub_0800F538();
        p[0x4D] = (u8)arg0;
    }
    return 1;
}

extern s32 sub_0800FCA4(s32, s32, void *);
extern s32 sub_0800FDA0(void *, s32, void *);
extern s32 sub_080534A0(s32);

s32 sub_0803AAA8(u16 arg0, s32 arg1, u8 *arg2) {
    if (arg0 >= 1) {
        if (arg0 > 2) {
            if (arg0 == 3) {
                void *p = arg2 + 0xC;
                s32 v = sub_0800FCA4(0x3F, 1, p);
                sub_0800FDA0(arg2, v, p);
            }
        } else {
            sub_0800F538();
            sub_080534A0(3);
        }
    }
    return 1;
}
