/* identical to sub_08049044 in SPYRO 3 (matched), with its names changed by decompdecomp */
struct TileMap { u32 *tiles; u32 unk4; u16 width; u16 height; };
extern struct TileMap * volatile D_03003110;

u32 sub_080490B8(s32 x, s32 y)
{
    if (x < 0 || y < 0 || x >= D_03003110->width || y >= D_03003110->height)
        return 0x500FF;
    return D_03003110->tiles[x + y * D_03003110->width];
}

u32 sub_08051B8C(s32 x, s32 y)
{
    x >>= 12;
    y >>= 12;
    if (x < 0 || y < 0 || x >= D_03003110->width || y >= D_03003110->height)
        return 0x500FF;
    return D_03003110->tiles[x + y * D_03003110->width];
}
