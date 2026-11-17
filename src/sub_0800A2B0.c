/* identical to sub_0800388C in SPYRO 3 (matched), with its names changed by decompdecomp */
/* identical to sub_08003864 (matched), with its names changed by decompdecomp */
#define NULL ((void *)0)
struct ResNode { struct ResNode *next; u32 unk4; u32 data; u32 unkC; u16 id; u16 refCount; };
struct ResList { struct ResNode *head; };
extern struct ResList D_03000850;
void sub_08009F74(u16 id);
void sub_08001544(struct ResNode *n);
void sub_08003654(struct ResNode *n);
void sub_080014B8(struct ResList *l);

void sub_0800A2B0(u16 *ids, u16 count)
{
    s32 i;
    for (i = count - 1; i >= 0; i--)
        sub_08009F74(ids[i]);
}

void sub_08009F74(u16 id)
{
    struct ResNode *n = D_03000850.head;
    struct ResNode *next;

    for (next = n->next; next != NULL; next = next->next)
    {
        if (n->id == id && --n->refCount == 0)
        {
            sub_08001544(n);
            sub_08003654(n);
        }
        n = next;
    }
}

u32 sub_080038B4(u16 id)
{
    u32 ret = 0;
    struct ResNode *n;

    for (n = D_03000850.head; n->next != NULL; n = n->next)
    {
        if (n->id == id)
        {
            ret = n->data;
            break;
        }
    }
    return ret;
}

s32 sub_080039C0(void)
{
    sub_080014B8(&D_03000850);
    return 1;
}
