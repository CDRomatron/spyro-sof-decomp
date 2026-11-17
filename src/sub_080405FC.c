/* identical to sub_0803E61C (matched), with its names changed by decompdecomp */

extern s32 sub_08004478(s32, s32);
extern s32 sub_08004520(s32);
extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_0805209C(void *, s32);

void sub_080405FC(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x38), p, *(s32 *)(arg0 + 0x40));
    sub_08004478(*(s32 *)(arg0 + 0x3C), sub_08004520(*(s32 *)(arg0 + 0x38)));
    sub_0805209C(arg0 + 0x24, *(s32 *)(arg0 + 0x40) + 0x4000);
}

extern s32 sub_080522C8(s32);
extern s32 sub_080528AC(s32);

s32 sub_0803E654(s32 arg1, u32 arg2, s32 arg3) {
    s32 r = 0;
    if ((u16)arg2 == 9) {
        if (arg3 == 1) sub_080522C8(arg1);
        else if (arg3 == 2) sub_080528AC(arg1);
        r = 1;
    }
    return r;
}

extern s32 sub_08004020(s32);
extern s32 sub_08052C28(void *, s32);
extern s32 sub_08052CF4(s32);

u8 sub_0803E5D8(u8 *arg0) {
    u8 *p = arg0;
    u8 *q = arg0 + 0xC;
    if (*(u8 *)(arg0 + 0x44) != 0) {
        *(u8 *)(arg0 + 0x44) = 0;
        {
            s32 t = sub_08052CF4(0x1C3);
            *(s32 *)(arg0 + 0x34) = t;
            *(s32 *)(arg0 + 0x40) = sub_08052C28(q, t + 0xC);
        }
    }
    sub_08004020(*(s32 *)(p + 0x38));
    return *(u8 *)(p + 0x45);
}

extern s32 sub_08003C58(s32, s32);
extern s32 sub_0803E240;
extern s32 sub_0803E294;

void sub_0803E4E0(u8 *arg0, u32 arg1) {
    u16 v = (u16)arg1;
    switch (v) {
    case 0:
        *(s32 **)(arg0 + 0x40) = (s32 *)v;
        sub_08003C58(*(s32 *)(arg0 + 0x48), 0xC8 << 14);
        break;
    case 1:
        *(s32 **)(arg0 + 0x40) = &sub_0803E240;
        *(u16 *)(arg0 + 0x54) = 0x14;
        break;
    case 2:
        *(s32 **)(arg0 + 0x40) = &sub_0803E294;
        *(u16 *)(arg0 + 0x56) = 0x5A;
        break;
    }
    *(u8 *)(arg0 + 0x5A) = (u8)v;
}
