
extern s32 sub_08052B40(s32);

s32 sub_0801F684(s32 arg0) {
    s32 v;
    s32 d;
    s32 r;
    v = sub_08052B40(arg0 + 0x24);
    if (v - *(s32 *)(*(void **)0x03001634 + 0x28) < 0)
        d = *(s32 *)(*(void **)0x03001634 + 0x28) - v;
    else
        d = v - *(s32 *)(*(void **)0x03001634 + 0x28);
    r = 0;
    if (d <= 0x3FFF) r = 1;
    return r;
}

extern s32 sub_0801F5FC(void *, s32);
extern s32 sub_08052140(s32, s32);

void sub_0801F6C4(u8 *arg0) {
    s32 *t = (s32 *)(arg0 + 0x88);
    if (*t > 0) {
        *t -= 0x14;
        if (*t < 0) *t = 0;
    }
    if ((sub_08052140(arg0 + 0xC, 0x4600) << 24) != 0) {
        sub_0801F5FC(arg0, 2);
    }
}

s32 sub_0801F91C(s32 arg0, u8 *arg1, u16 arg2, s32 arg3) {
    s32 r = 0;
    if (arg2 == 9) {
        if (arg3 == 0x18) {
            *(u8 *)(arg1 + 0x44) = 1;
        }
        r = 1;
    }
    return r;
}

extern s32 sub_08003C58(s32, s32);
extern s32 sub_08004408(s32, s32);
extern s32 sub_08004508(void);
extern s32 sub_0800F6BC(void);

s32 sub_0801F938(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 8) {
        if (sub_08004508() == 0xC0001) {
            sub_08003C58(arg0, 0xC0000);
            sub_08004408(arg0, 5);
            sub_0800F6BC();
        }
    }
    return 1;
}
