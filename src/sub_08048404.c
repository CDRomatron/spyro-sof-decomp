
extern void sub_0804A318(void *, void *, void *, void *);

typedef struct {
    s32 pad0[6];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 pad1[6];
    s32 unk40;
} E;

void sub_08048404(E *arg0) {
    E *p = arg0;
    s32 r2 = arg0->unk1C + 0x4C;
    arg0->unk1C = r2;
    if (arg0->unk40 & 0x20) {
        arg0->unk20 = arg0->unk20 + arg0->unk18;
        arg0->unk24 = arg0->unk24 + r2;
        return;
    }
    if (r2 > 0x700) arg0->unk1C = 0x700;
    sub_0804A318(&arg0->unk20, &arg0->unk24, &arg0->unk18, &arg0->unk1C);
    {
        s32 r1 = arg0->unk20;
        if (r1 <= 0x7FF) {
            arg0->unk20 = 0x800;
            return;
        }
        if (r1 > (*(volatile s32 *)((u8 *)*(void * volatile *)0x0300269C + 0x20) - 8) * 256) {
            p->unk20 = (*(volatile s32 *)((u8 *)*(void * volatile *)0x0300269C + 0x20) - 8) * 256;
        }
    }
}
