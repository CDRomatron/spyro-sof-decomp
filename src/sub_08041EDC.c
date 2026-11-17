/* identical to sub_0803050C (matched), with its names changed by decompdecomp */

extern s32 sub_08004534(s32);
extern void sub_08007764(u8);
extern s32 sub_0800897C(void);
extern void sub_0800FA98(s32, s32, s32, s32, s32, s32);
extern void sub_0800FCA4(s32, s32, void *);
extern void sub_0800FDB4(void *, s32, s32 *);
extern s32 sub_0801DA58(void *, s32, s32);
extern void sub_08041CE0(void *, s32);
extern u8 sub_08052140(void *, s32);
extern void sub_080528D4(s32, s32, s32, s32);
extern u8 sub_0805399C(void);

void sub_08041EDC(u8 *arg0) {
    s32 sp[3];
    void *g = *(void **)0x03001634;
    u8 *p = arg0 + 0x24;
    u8 t0;
    u16 t1;

    if (sub_0805399C() != 3) return;
    t0 = sub_08052140(p, 0x800);
    if (t0 != 0) {
        t1 = *(u16 *)((u8 *)g + 0x30);
        if (t1 == 0x200 || t1 == 0x2000) {
            if (*(u8 *)(arg0 + 0xA2) == 4) {
                if (*(s32 *)(arg0 + 0x4C) != 0) {
                    sub_080528D4(*(s32 *)(arg0 + 0x4C), *(s32 *)(arg0 + 0x24), *(s32 *)(p + 4), *(s32 *)(p + 8));
                    sp[0] = (sub_0800897C() & 0x7F) - 0x40;
                    sp[1] = (sub_0800897C() & 0x7F) - 0x40;
                    sp[2] = (sub_0800897C() & 0x3FF) + 0x600;
                    sub_0800FDB4(arg0, *(s32 *)(arg0 + 0x4C), sp);
                }
                *(u8 *)(arg0 + 0xA5) = 0;
                sub_08007764(*(u8 *)(arg0 + 0xA0));
                sub_0800FCA4(0x8D, 1, p);
                return;
            }
            sub_0800FA98(6, *(s32 *)(arg0 + 0x24), *(s32 *)(p + 4), *(s32 *)(p + 8), 0, 0x800);
            return;
        }
        if (*(u8 *)(arg0 + 0xA2) == 4) {
            sub_0800FA98(6, *(s32 *)(arg0 + 0x24), *(s32 *)(p + 4), *(s32 *)(p + 8), 0, 0x800);
        } else {
            sub_0800FA98(6, *(s32 *)(arg0 + 0x24), *(s32 *)(p + 4), *(s32 *)(p + 8), 1, 0x800);
        }
        return;
    }
    {
        s32 r = sub_0801DA58(p, 0x800, sub_08004534(*(s32 *)(arg0 + 0x44)) << 8);
        switch (r) {
        case 2:
            sub_08041CE0(arg0, 4);
            break;
        case 5:
            if (*(s32 *)(arg0 + 0x4C) != 0) {
                sub_080528D4(*(s32 *)(arg0 + 0x4C), *(s32 *)(arg0 + 0x24), *(s32 *)(p + 4), *(s32 *)(p + 8));
                sp[0] = (sub_0800897C() & 0x7F) - 0x40;
                sp[1] = (sub_0800897C() & 0x7F) - 0x40;
                sp[2] = (sub_0800897C() & 0x3FF) + 0x600;
                sub_0800FDB4(arg0, *(s32 *)(arg0 + 0x4C), sp);
            }
            *(u8 *)(arg0 + 0xA5) = t0;
            sub_08007764(*(u8 *)(arg0 + 0xA0));
            sub_0800FCA4(0x8D, 1, p);
            break;
        }
    }
}
