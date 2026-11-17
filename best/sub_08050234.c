/* identical to sub_08048C20 in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef struct { s32 a, b, c; } Box3;
typedef struct { s32 sum; Box3 box; s32 f10; s32 f14; } BoxItem;
typedef struct { u32 pad; BoxItem *items[0x400]; s32 count; } BoxPool;
extern BoxPool * volatile D_0300310C;

void sub_08050234(s32 a0, s32 a1, Box3 *b)
{
    BoxItem *it = D_0300310C->items[D_0300310C->count++];
    it->box = *b;
    it->sum = b->a + b->b;
    it->f10 = a1;
    it->f14 = a0;
}
