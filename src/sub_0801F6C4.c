
extern s32 sub_08052B40(s32);

s32 sub_0801F684(s32 arg0) {
    void **pp;
    s32 v;
    s32 d;
    s32 r;
    v = sub_08052B40(arg0 + 0x24);
    pp = (void **)0x03001634;
    if (v - *(volatile s32 *)(*pp + 0x28) < 0)
        d = *(volatile s32 *)(*pp + 0x28) - v;
    else
        d = v - *(volatile s32 *)(*pp + 0x28);
    r = 0;
    if (d <= 0x3FFF) r = 1;
    return r;
}

extern s32 sub_0801F5FC(void *, s32);
extern s32 sub_08052140(void *, s32);

void sub_0801F6C4(u8 *arg0) {
    u8 *p = arg0 + 0xC;
    s32 *t = (s32 *)(arg0 + 0x88);
    if (*t > 0) {
        *t -= 0x14;
        if (*t < 0) *t = 0;
    }
    if ((sub_08052140(p, 0x4600) << 24) != 0) {
        sub_0801F5FC(arg0, 2);
    }
}
