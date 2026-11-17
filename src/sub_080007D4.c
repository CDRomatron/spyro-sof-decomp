
struct DmaReq { u32 f0; u32 f4; u16 *src; u8 *dest; u16 width; u16 height; u16 base; u16 pal; };
extern u16 D_030010C0[];

#define DmaSet3(src, dest, control) { \
    vu32 *dmaRegs = (vu32 *)0x040000D4; \
    dmaRegs[0] = (u32)(src); \
    dmaRegs[1] = (u32)(dest); \
    dmaRegs[2] = (u32)(control); \
    dmaRegs[2]; }

void sub_080007D4(struct DmaReq *r)
{
    u16 *src = r->src;
    s32 y, x;
    u8 *dest;

    for (y = 0; y < r->height; y++) {
        x = 0;
        dest = r->dest;
        for (; x < r->width; x++)
            D_030010C0[x] = r->pal + (src[x] + r->base);
        DmaSet3(D_030010C0, dest, 0x80000000 | r->width);
        src += r->width;
        r->dest = dest + 0x40;
    }
}
