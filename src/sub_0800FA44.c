
typedef struct { s16 a, b, c, d; s32 e, f; } FxEntry;
typedef struct {
    u8 pad[0x804];
    FxEntry *f804;
    u8 pad808[4];
    FxEntry *f80C;
    u8 pad810[2];
    u16 f812;
    u8 pad814[2];
    u16 f816;
} FxState;
extern FxState *D_03002684;

void sub_0800FA98(s32 a, s32 x, s32 y, s32 z, s32 e, s32 f) {
    FxState *s = D_03002684;
    FxEntry *p = &s->f804[s->f812];
    p->a = a;
    p->b = x / 256;
    p->c = y / 256;
    p->d = z / 256;
    p->e = e;
    p->f = f;
    s->f812++;
}

typedef struct { u16 type; s16 f2; s16 f4; s16 f6; s32 f8; s32 fC; } MapEntry;
typedef struct {
    u8 pad0[0x800];
    MapEntry *entries;
    u8 pad804[4];
    MapEntry *entries2;
    u8 pad80C[4];
    u16 count;
    u8 pad812[2];
    u16 count2;
    u8 pad816[4];
    u16 iter;
} MapEntries;
extern MapEntries *D_03002684x;

s32 sub_0800FA44(s32 *a, s32 *b, s32 *c) {
    MapEntries *m = (MapEntries *)D_03002684;
    s32 r = 0;
    if (m->iter < m->count2) {
        MapEntry *e = &m->entries2[m->iter];
        *a = e->f8;
        *b = e->fC;
        *c = e->f6;
        r = 1;
        m->iter++;
    }
    return r;
}
