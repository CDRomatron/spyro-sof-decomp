
extern s32 sub_08052B40(s32);

s32 sub_0801F684(s32 arg0) {
    s32 v;
    s32 d;
    s32 r;
    void * volatile *pp;
    v = sub_08052B40(arg0 + 0x24);
    pp = (void * volatile *)0x03001634;
    if (v - *(volatile s32 *)(*pp + 0x28) < 0)
        d = *(volatile s32 *)(*pp + 0x28) - v;
    else
        d = v - *(volatile s32 *)(*pp + 0x28);
    r = 0;
    if (d <= 0x3FFF) r = 1;
    return r;
}
