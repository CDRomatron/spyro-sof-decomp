
extern u8 *D_03002680;

void sub_0800C0CC(void)
{
    u32 i;
    u16 *o;
    vu32 *dma;
    *(u16 *)(D_03002680 + 0x40C) = i = 0;
    *(u16 *)(D_03002680 + 0x40E) = i;
    o = (u16 *)(D_03002680 + 0xC);
    for (; i < 128; i++) { *o = 0x200; o += 4; }
    dma = (vu32 *)0x040000D4;
    dma[0] = (u32)(D_03002680 + 0xC);
    dma[1] = 0x07000000;
    dma[2] = 0x84000100;
    dma[2];
}

u16 sub_0800C130(s32 *arg0) {
    return (u16)(((*arg0 - 0x698 - (s32)D_03002680) >> 3) << 9);
}

void sub_0800B9C4(void *a);
void sub_0800C17C(u8 *obj)
{
    D_03002680;
    if (*(u16 *)(obj + 0x10) & 0x8000)
        sub_0800B9C4(obj);
}

extern s32 sub_08063D90(void *, void *, s32, s32);
s32 sub_0800C1DC(u8 *arg1) {
    s32 v = *(s32 *)(arg1 + 0x7A4);
    if (v != 0) {
        sub_08063D90(arg1 + 0x698, arg1 + 0x12, v, 8);
    }
    return 1;
}
