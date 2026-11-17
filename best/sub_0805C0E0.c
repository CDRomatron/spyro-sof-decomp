/* identical to sub_0805D700 in SPYRO 3 (matched), with its names changed by decompdecomp */
struct Unk3154 { u32 f0; u32 f4; void (*f8)(void); u8 padC[0x1C - 0xC]; u16 f1C; u8 pad1E[0x2A - 0x1E]; u8 f2A; };
extern struct Unk3154 *D_03003154;
struct Unk24B0 { u8 pad[0x12]; vu16 f12 : 16; };
extern struct Unk24B0 D_030024B0;

s32 sub_0805C0E0(void)
{
    struct Unk3154 *p = D_03003154;
    struct Unk24B0 *q = &D_030024B0;
    q->f12 = p->f1C & 0x1FF;
    return 0;
}
