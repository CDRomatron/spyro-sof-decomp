
typedef struct { s16 a, b, c, d; s32 e, f; } FxEntry;
typedef struct {
    FxEntry buf[4][32];
    FxEntry *f800;
    FxEntry *f804;
    FxEntry *f808;
    FxEntry *f80C;
    u16 f810, f812, f814, f816;
    u16 f818;
} FxState;
extern FxState *D_03002684;

void sub_0800F84C(void)
{
    FxState *s = D_03002684;
    if (s->f818 == 0) {
        s->f800 = s->buf[1];
        s->f804 = s->buf[0];
        s->f808 = s->buf[3];
        s->f80C = s->buf[2];
        s->f818 = 1;
    } else {
        s->f800 = s->buf[0];
        s->f804 = s->buf[1];
        s->f808 = s->buf[2];
        s->f80C = s->buf[3];
        s->f818 = 0;
    }
    s->f810 = s->f812;
    s->f812 = 0;
    s->f814 = s->f816;
    s->f816 = 0;
}
