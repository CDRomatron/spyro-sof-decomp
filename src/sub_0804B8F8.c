
extern u32 sub_0800A2D8(u16);
extern void sub_08002BE0(u32, u32);
extern void sub_08005814(u32);
extern u8 D_08178EF8[];

void sub_0804B8F8(void) {
    u8 *base = D_08178EF8;
    u32 idx = *(u32 *)((u8 *)*(void **)0x030026A4 + 0xB8);
    u32 off = idx * 28;
    u8 *row = base + 0x10;
    sub_0800A2D8((u16)*(vu32 *)(row + off));
    sub_08002BE0(*(u32 *)((u8 *)*(void **)0x030026A4 + 0x9C), 0x1200);
    sub_08002BE0(*(u32 *)((u8 *)*(void **)0x030026A4 + 0xD0), 0x1A44);
    if (*(vu32 *)0x0300269C != 0)
        sub_08005814(*(vu32 *)0x0300269C);
}
