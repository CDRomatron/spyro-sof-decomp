/* identical to List_Unlink in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef struct ListNode { struct ListNode *next; struct ListNode *prev; } ListNode;

void sub_08000C9C(ListNode *node)
{
    if (node->next != 0 && node->prev != 0) {
        node->next->prev = node->prev;
        node->prev->next = node->next;
    }
    node->prev = 0;
    node->next = 0;
}
