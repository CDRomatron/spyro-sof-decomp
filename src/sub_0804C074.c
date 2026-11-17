
extern void sub_0800328C(u32);
extern void sub_080096A4(u32, u32, void *);
extern void sub_0804BFA0(void);

void sub_0804C074(s32 unused, s32 arg1) {
    if (arg1 == 0) {
        sub_0800328C(0x08171010);
        sub_080096A4(8, 3, (void *)sub_0804BFA0);
    }
}

void sub_0804C120(s32 arg0) {
    u8 *p;
    s32 v;
    u32 z;
    *(u32 *)((u8 *)*(void **)0x030026A4 + 0xA8) = 0;
    v = arg0 + 0xA794;
    p = (u8 *)(arg0 + 0xA668);
    do {
        *(s32 *)p = v;
        v += -300;
        p += -300;
    } while ((s32)p >= arg0);
    z = 0;
    *(u32 *)(arg0 + 0xA794) = z;
    *(u32 *)(arg0 + 0xA8C0) = arg0;
}

extern void sub_08000C9C(void *);

void sub_0804B964(void **arg0, u16 arg1) {
    s32 i;
    void **p;
    void *next;
    void *slot;

    p = arg0;
    i = 3;
    do {
        if (*p != NULL)
            sub_0804B964(*p, arg1);
        p++;
        i--;
    } while (i >= 0);
    if (*(void **)((u8 *)arg0 + 0x18) != (void *)((u8 *)arg0 + 0x1C)) {
        p = *(void **)((u8 *)arg0 + 0x18);
        do {
            next = *p;
            if (*(u16 *)((u8 *)p + 0xC) == arg1) {
                sub_08000C9C(p);
                slot = *(void **)((u8 *)*(void **)0x030026A4 + 0xD0);
                *p = *(void **)((u8 *)slot + 0x1A40);
                *(void **)((u8 *)slot + 0x1A40) = p;
            }
            p = next;
        } while (*p != NULL);
    }
}

extern u32 sub_0800A2D8(u16);
extern void sub_08002BE0(u32, u32);
extern void sub_08005814(u32);
extern u8 D_08178EF8[];

void sub_0804B8F8(void) {
    u8 *base = D_08178EF8;
    u32 idx = *(u32 *)((u8 *)*(void **)0x030026A4 + 0xB8);
    sub_0800A2D8((u16)*(u32 *)(base + 0x10 + idx * 28));
    sub_08002BE0(*(u32 *)((u8 *)*(void **)0x030026A4 + 0x9C), 0x1200);
    sub_08002BE0(*(u32 *)((u8 *)*(void **)0x030026A4 + 0xD0), 0x1A44);
    if (*(vu32 *)0x0300269C != 0)
        sub_08005814(*(vu32 *)0x0300269C);
}
