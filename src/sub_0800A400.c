
typedef struct Resource { const void *src; u32 size; vu16 type; } Resource;
extern Resource D_0817B728[];
void sub_08063D84(const void *, void *);
void sub_08063D8C(const void *, void *);
void sub_08063D98(const void *, void *);
void sub_0800A400(u16 id, void *dst)
{
    switch (D_0817B728[id].type) {
    case 2: sub_08063D8C(D_0817B728[id].src, dst); break;
    case 1: sub_08063D84(D_0817B728[id].src, dst); break;
    case 3: sub_08063D98(D_0817B728[id].src, dst); break;
    case 0: {
        vu32 *dma = (vu32 *)0x040000D4;
        dma[0] = (u32)D_0817B728[id].src;
        dma[1] = (u32)dst;
        dma[2] = (D_0817B728[id].size >> 1) | 0x80000000;
        dma[2];
        break;
    }
    }
}
