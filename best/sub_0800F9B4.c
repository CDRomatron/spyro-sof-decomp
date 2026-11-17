/* identical to sub_08015130 in SPYRO 3 (matched), with its names changed by decompdecomp */
typedef struct {
    u16 type;
    s16 f2;
    s16 f4;
    s16 f6;
    s32 f8;
    s32 fC;
} MapEntry;

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

extern MapEntries *D_030030D8;

MapEntry *sub_080150A4(void)
{
    MapEntries *m = D_030030D8;
    MapEntry *r = 0;
    m->iter = 0;
    if (m->count != 0) {
        r = m->entries;
        m->iter = 1;
    }
    return r;
}

s32 sub_080150DC(s32 *a, s32 *b, s32 *c)
{
    MapEntries *m = D_030030D8;
    s32 r = 0;
    m->iter = 0;
    if (m->count2 != 0) {
        MapEntry *e = m->entries2;
        *a = e->f8;
        *b = e->fC;
        *c = e->f6;
        r = 1;
        m->iter++;
    }
    return r;
}

MapEntry *sub_0800F9B4(void)
{
    MapEntries *m = D_030030D8;
    MapEntry *r = 0;
    if (m->iter < m->count) {
        r = &m->entries[m->iter];
        m->iter++;
    }
    return r;
}

s32 sub_0801516C(s32 *a, s32 *b, s32 *c)
{
    MapEntries *m = D_030030D8;
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
