
extern s32 sub_0800F538(void);
extern s32 sub_0800FCA4(s32, s32, void *);
extern s32 sub_0800FDA0(void *, s32, void *);
extern s32 sub_080534A0(s32);

s32 sub_0803AAA8(u16 arg0, s32 arg1, u8 *arg2) {
    switch (arg0) {
    case 3: {
        void *p = arg2 + 0xC;
        s32 r = sub_0800FCA4(0x3F, 1, p);
        sub_0800FDA0(arg2, r, p);
        break;
    }
    case 2:
    case 1:
        sub_0800F538();
        sub_080534A0(3);
        break;
    }
    return 1;
}
