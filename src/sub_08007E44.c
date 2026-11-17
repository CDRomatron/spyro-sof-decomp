/* identical to sub_0800D66C in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef struct {
    s32 f0;
    s32 x;
    s32 y;
    s32 tx;
    s32 ty;
    s32 dx;
    s32 dy;
} Wobble;
u32 sub_0800897C(void);

void sub_08007E44(Wobble *w) {
    if (w->x < w->tx) {
        w->x += w->dx;
        if (w->x >= w->tx) {
            w->tx = (sub_0800897C() & 0x1FF) | 1;
            w->dx = 1;
        }
    } else {
        w->x -= w->dx;
        if (w->x <= w->tx) {
            w->tx = (sub_0800897C() & 0xFF) | 1;
            w->dx = 1;
        }
    }
    if (w->y < w->ty) {
        w->y += w->dy;
        if (w->y >= w->ty) {
            w->ty = sub_0800897C() & 0xFF;
            w->dy = 2;
        }
    } else {
        w->y -= w->dy;
        if (w->y <= w->ty) {
            w->ty = sub_0800897C() & 0xFF;
            w->dy = 2;
        }
    }
}
