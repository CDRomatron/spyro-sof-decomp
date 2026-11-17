/* identical to sub_08026174 (matched), with its names changed by decompdecomp */

s32 sub_08027C2C(s32 *a, s32 *b) {
    s32 dx = a[0] - b[0];
    if (dx >= 0) {
        if (dx == 0x1000) goto eqx;
    } else if (a[0] == b[0] - 0x1000) {
        goto eqx;
    }
    goto checky;
eqx:
    if (a[1] == b[1]) return 1;
checky:
    {
        s32 dy = a[1] - b[1];
        if (dy >= 0) {
            if (dy == 0x1000) goto eqy;
        } else if (a[1] == b[1] - 0x1000) {
            goto eqy;
        }
    }
    return 0;
eqy:
    if (a[0] != b[0]) return 0;
    return 1;
}
