/* identical to sub_080215FC (matched), with its names changed by decompdecomp */

extern s32 sub_08004020(s32);
extern s32 sub_08052BB4(void *);
extern void _call_via_r1_080641CC(void *, void *);

u8 sub_08022288(u8 *arg0) {
    u8 *p = arg0;
    u32 fp;
    sub_08004020(*(s32 *)(arg0 + 0x34));
    fp = *(u32 *)(arg0 + 0x3C);
    if (fp != 0) {
        _call_via_r1_080641CC(arg0, (void *)fp);
    }
    *(s32 *)(p + 0x40) = sub_08052BB4(p + 0xC);
    return *(u8 *)(p + 0x48);
}

extern s32 sub_0800F538(void);
extern s32 sub_0800FCA4(s32, s32, void *);
extern s32 sub_0800FDA0(void *, s32, void *);
extern s32 sub_080534A0(s32);
extern s32 sub_08054628(void);

s32 sub_08021724(u16 arg0, s32 arg1, u8 *arg2) {
    switch (arg0) {
    case 3: {
        void *p = arg2 + 0xC;
        s32 r = sub_0800FCA4(0x49, 1, p);
        sub_0800FDA0(arg2, r, p);
        sub_08054628();
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

extern s32 sub_0800FD8C(void *, s32, s32);
extern s32 sub_080529D4(void);

u8 sub_080213D8(u8 *arg0) {
    u8 *q = arg0 + 0x5F;
    u8 *p = arg0;
    u32 fp;
    if (*q != 0) {
        *q = 0;
        sub_080534A0(5);
        sub_0800FD8C(arg0, sub_080529D4(), 0xC000);
    }
    fp = *(u32 *)(arg0 + 0x48);
    if (fp != 0) {
        _call_via_r1_080641CC(arg0, (void *)fp);
    }
    return *(u8 *)(p + 0x60);
}

extern s32 sub_08002BE0(void *, s32);
extern s32 sub_080043A4(s32);
extern s32 sub_0800781C(s32, s32);

void sub_080213A4(u8 *arg0) {
    s32 *p;
    u32 i;
    sub_0800781C(0x67, 0);
    sub_080043A4(*(s32 *)(arg0 + 0x44));
    p = (s32 *)(arg0 + 0x34);
    i = 0;
    do {
        sub_080043A4(*p++);
        i++;
    } while (i <= 3U);
    sub_08002BE0(arg0, 0x64);
}
