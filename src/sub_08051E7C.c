/* identical to sub_08049354 in SPYRO 3-U (matched), with its names changed by decompdecomp */
s32 sub_08051E7C(s32 *p, s32 dir)
{
    s32 r;
    if (dir < 0) {
        r = -(*p & 0xFFF);
        *p = (*p - 0x1000) | 0xFFF;
        return r;
    }
    r = 0xFFF & ~*p;
    *p = (*p + 0x1000) & ~0xFFF;
    return r;
}
