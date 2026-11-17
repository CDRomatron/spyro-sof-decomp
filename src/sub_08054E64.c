/* identical to sub_0804908C in SPYRO 3 (matched), with its names changed by decompdecomp */
struct TileMap { u32 *tiles; u32 unk4; u16 width; u16 height; };
extern struct TileMap *D_03003110;
s32 sub_080502E8(s32 *pos);

void sub_08054E64(s32 *src, s32 *dst)
{
    dst[0] = (src[0] & 0xFFFFF000) | 0x800;
    dst[1] = (src[1] & 0xFFFFF000) | 0x800;
    dst[2] = sub_080502E8(dst);
}

u32 sub_080490B8(s32 x, s32 y)
{
    if (x < 0 || y < 0 || x >= D_03003110->width || y >= D_03003110->height)
        return 0x500FF;
    return D_03003110->tiles[x + y * D_03003110->width];
}

u32 sub_08049044(s32 x, s32 y)
{
    x >>= 12;
    y >>= 12;
    if (x < 0 || y < 0 || x >= D_03003110->width || y >= D_03003110->height)
        return 0x500FF;
    return D_03003110->tiles[x + y * D_03003110->width];
}

s32 sub_080490FC(s32 *pos)
{
    return pos[2] - sub_080502E8(pos);
}
