
typedef struct { vu16 v:16; } VB16;
extern VB16 D_03001160;
typedef struct BgNode { struct BgNode *next; u8 pad[0x60]; u8 bg; } BgNode;
typedef struct BgLists { BgNode *a; s32 f4, f8; BgNode *b; } BgLists;

void sub_08004848(BgLists *l) {
    BgNode *n;
    D_03001160.v &= 0xF0FF;
    for (n = l->a; n->next != 0; n = n->next)
        D_03001160.v |= 1 << (n->bg + 8);
    for (n = l->b; n->next != 0; n = n->next)
        D_03001160.v |= 1 << (n->bg + 8);
}
