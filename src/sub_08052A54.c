/* identical to sub_0804F8A8 in SPYRO 3-U (matched), with its names changed by decompdecomp */
#define ABS(x) ((x) < 0 ? -(x) : (x))
s32 sub_08052A54(s32 *a, s32 *b, s32 r) {
    s32 d[3];
    s32 res = 0;
    s32 dist;
    d[0] = ABS(b[0] - a[0]);
    d[1] = ABS(b[1] - a[1]);
    if (d[0] > d[1])
        dist = d[0] + d[1] / 4;
    else
        dist = d[1] + d[0] / 4;
    if (dist < r)
        res = 1;
    return res;
}

s32 sub_0804F630(s32 *rect, s32 id, s32 *pt, s32 margin) {
    s32 res = 0;
    s32 x0 = rect[0] - margin;
    s32 y0 = rect[1] - margin;
    s32 x1 = x0 + rect[2] + margin * 2;
    s32 y1 = y0 + rect[3] + margin * 2;
    if (pt[0] >= x0 && pt[0] <= x1 && pt[1] >= y0 && pt[1] <= y1 && id == pt[2])
        res = 1;
    return res;
}
