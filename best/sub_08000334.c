
extern s32 sub_08002B34(s32, s32);
extern void sub_080001D0(void);
struct DmaSlot { vu8 used : 8; u8 pad[3]; void (*func)(struct DmaSlot *); u8 pad2[0x10]; };
extern struct DmaSlot *D_03001100;
extern struct DmaSlot *D_03001A80;

void sub_0800038A(s16 *arg0) { *arg0 = (s16)arg0; }

s32 sub_0800038C(void) {
    u8 **pp = (u8 **)0x03001100;
    s32 off = 0;
    s32 i;
    *pp = (u8 *)sub_08002B34(0x180, 1);
    for (i = 0xF; i >= 0; i--) {
        (*pp)[off] = 0;
        off += 0x18;
    }
    return 1;
}

void sub_080003D8(void) {
    struct DmaSlot *slots = D_03001100;
    struct DmaSlot *p = slots;
    struct DmaSlot *q = p;
    s32 i;
    for (i = 0; i < 16; i++) {
        if (p->used) {
            p->used = 0;
            q->func(p);
        }
        q++;
        p++;
    }
    i = (s32)slots;
}

void sub_08000334(void) { }
