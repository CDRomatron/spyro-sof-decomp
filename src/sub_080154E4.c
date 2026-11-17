
s32 sub_08004478(s32, s32);
s32 sub_08004520(s32);
s32 sub_08050228(s32, void *, s32);
s32 sub_0805209C(void *, s32);
s32 sub_08015168(void *, s32);
s32 sub_08004020(s32);
s32 sub_0800FA98(s32, s32, s32, s32, s32, s32);
s32 sub_08052140(void *, s32);
s32 sub_080641CC(void *);
s32 sub_0800FE28(void *, s32, s32);

void sub_080154E4(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x34), p, *(s32 *)(arg0 + 0x3C));
    sub_08004478(*(s32 *)(arg0 + 0x38), sub_08004520(*(s32 *)(arg0 + 0x34)));
    sub_0805209C(arg0 + 0x24, *(s32 *)(arg0 + 0x3C) + 0x4000);
}

s32 sub_080153A8(void *arg1, u16 arg2, u32 arg3) {
    s32 r = 0;
    if (arg2 == 9) {
        switch (arg3) {
        case 27: sub_08015168(arg1, 2); break;
        case 29: sub_08015168(arg1, 3); break;
        case 31: *(s8 *)((u8 *)arg1 + 0x77) = 0; break;
        }
        r = 1;
    }
    return r;
}

u8 sub_080152D8(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08004020(*(s32 *)(arg0 + 0x60));
    sub_08004020(*(s32 *)(arg0 + 0x68));
    if (*(s32 *)(arg0 + 0x6C) != 0) sub_080641CC(arg0);
    if ((sub_08052140(p, 0x400) << 0x18) != 0) {
        sub_0800FA98(6, *(s32 *)(arg0 + 0xC), *(s32 *)((u8 *)p + 4), *(s32 *)((u8 *)p + 8), 0, 0x400);
    }
    return *(u8 *)(arg0 + 0x77);
}

void sub_0801510C(u8 *arg0) {
    u8 t = *(u8 *)(arg0 + 0x70) - 1;
    *(u8 *)(arg0 + 0x70) = t;
    if ((t << 0x18) == 0) {
        *(u8 *)(arg0 + 0x70) = 0x3C;
        if (*(u8 *)(arg0 + 0x72) == 0) {
            *(u8 *)(arg0 + 0x76) = 1;
            sub_08015168(arg0, 1);
            sub_0800FE28(arg0, *(s32 *)(arg0 + 0x5C), 0x1E);
            return;
        }
        *(u8 *)(arg0 + 0x72) = *(u8 *)(arg0 + 0x72) - 1;
        return;
    }
    *(s8 *)(arg0 + 0x76) = (s8)((u32)t > 0x14U);
}
