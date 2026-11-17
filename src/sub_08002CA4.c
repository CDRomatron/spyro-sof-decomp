
typedef struct { u8 pad[8]; u8 *start; u8 *end; } __attribute__((packed)) HeapRegion;
struct ListNode { struct ListNode *next; struct ListNode *prev; };
typedef struct { struct ListNode node; s32 size; s32 idx; } HeapBlock;
extern volatile HeapRegion D_08065D68[];
extern u8 D_03000828[];
extern s32 D_03001150[];
void sub_08000C14(void *l);
void sub_08000C20(struct ListNode *pos, struct ListNode *n);

s32 sub_08002CA4(void) {
    s32 i;
    s32 off;
    for (i = 0, off = 0; i < 2; off += 0xC, i++) {
        struct ListNode *l = (struct ListNode *)(D_03000828 + off);
        HeapBlock *b;
        s32 size;
        sub_08000C14(l);
        b = (HeapBlock *)D_08065D68[i].start;
        size = D_08065D68[i].end - D_08065D68[i].start;
        b->size = size;
        b->idx = i;
        D_03001150[i] = size;
        sub_08000C20(l, &b->node);
    }
    return 1;
}
