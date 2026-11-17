/* identical to sub_0804939C in SPYRO 3-U (matched), with its names changed by decompdecomp */
int sub_080600EC(int a, u8 *p, int c) { *p = a | c; return 1; }

s32 sub_08051DB0(s32 *p, s32 dir)
{
    s32 r;
    if (dir >= 0) {
        r = 0xFFF & ~*p;
        *p |= 0xFFF;
    } else {
        r = -(*p & 0xFFF);
        *p &= ~0xFFF;
    }
    return r;
}

s32 sub_08049354(s32 *p, s32 dir)
{
    s32 r;
    if (dir >= 0) {
        r = 0xFFF & ~*p;
        *p = (*p + 0x1000) & ~0xFFF;
    } else {
        r = -(*p & 0xFFF);
        *p = (*p - 0x1000) | 0xFFF;
    }
    return r;
}

typedef s32 (*TileFn)(u32, s32, s32);
struct TileEntry { TileFn fn; u32 pad; };
extern struct TileEntry D_081CD1D4[];
s32 sub_0804A038(u32, s32, s32);

s32 sub_08049110(u32 a, s32 x, s32 y)
{
    s32 r;
    struct TileEntry *e = &D_081CD1D4[(a & 0xFF0000) >> 16];
    if (e->fn != 0)
        r = e->fn(a, x & 0xFFF, y & 0xFFF);
    else
        r = (a & 0xF) << 12;
    if ((a >> 28) != 0)
        r += sub_0804A038(a, x, y);
    return r;
}
