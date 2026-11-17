
extern void *sub_08002B34(s32, s32);
extern s16 sub_0806436C(u16, u16);

typedef struct { s32 unk0, unk4, unk8, unkC; } Src;
typedef struct { s32 unk0, unk4, unk8, unkC; s16 unk10, unk12, unk14, unk16; } Dst;

void *sub_08001D7C(s32 arg0) {
    Dst *p = sub_08002B34(0x18, 1);
    Src *q = (Src *)(0x03000810 + arg0 * 20);
    u16 a, b;
    p->unkC = q->unkC;
    p->unk0 = q->unk0;
    p->unk4 = q->unk4 + 4;
    a = *(u16 *)q->unk4;
    p->unk12 = a;
    b = *(u16 *)q->unk4;
    p->unk10 = b;
    p->unk14 = sub_0806436C(*(u16 *)((u8 *)q->unk4 + 2), p->unk10);
    p->unk8 = q->unk8;
    p->unk16 = (s16)(a * b);
    return p;
}
