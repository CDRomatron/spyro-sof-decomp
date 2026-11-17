
extern void *sub_08002B34(s32, s32);
extern s16 sub_0806436C(u16, u16);
extern void *D_03000810;

typedef struct { s32 unk0, unk4, unk8, unkC; } Src;
typedef struct { s32 unk0, unk4, unk8, unkC; s16 unk10, unk12, unk14, unk16; } Dst;

void *sub_08001D7C(s32 arg0) {
    Dst *p = sub_08002B34(0x18, 1);
    Src *q = (Src *)((u8 *)D_03000810 + arg0 * 20);
    u16 v;
    p->unkC = q->unkC;
    p->unk0 = q->unk0;
    p->unk4 = q->unk4 + 4;
    v = *(u16 *)q->unk4;
    p->unk12 = v;
    p->unk10 = v;
    p->unk14 = sub_0806436C(*(u16 *)((u8 *)q->unk4 + 2), v);
    p->unk8 = q->unk8;
    p->unk16 = (s16)(v * v);
    return p;
}

void sub_08001D7A(s16 *p) { *p = (s16)p; }
extern void *D_040000D4;
void sub_08001840(u32 a, s32 *b) { *(u32 *)((u8 *)&D_040000D4 + 8) = (a >> 1) | 0x81000000; *b += 2; }
void sub_08001716(void) { }
