/* identical to Pal_BlendColors in SPYRO 3-U (matched), with its names changed by decompdecomp */
void sub_080036B8(u16 *src, u16 *dst, u16 *out, u32 t, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        u32 r, g, b;
        s32 dr, dg, db;
        r = src[i] & 0x1F;
        g = (src[i] & 0x3E0) >> 5;
        b = (src[i] & 0x7C00) >> 10;
        dr = (dst[i] & 0x1F) - r;
        dg = ((dst[i] & 0x3E0) >> 5) - g;
        db = ((dst[i] & 0x7C00) >> 10) - b;
        r += (t * dr) >> 8;
        g += (t * dg) >> 8;
        b += (t * db) >> 8;
        out[i] = (r & 0x1F) | ((g & 0x1F) << 5) | ((b & 0x1F) << 10);
    }
}
