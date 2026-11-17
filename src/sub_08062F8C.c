/* identical to sub_0805F9C8 in SPYRO 3 (matched), with its names changed by decompdecomp */
extern void (*D_03003B8C)(s32);
struct MPTable { u32 *info; s32 a; s32 b; };
extern struct MPTable D_08071014[];
struct SongEntry { u32 header; u16 ms; u16 me; };
extern struct SongEntry D_08071068[];
void sub_0805FB5C(u32 *info);
struct SoundInfoLite { u32 ident; vu8 pcmDmaCounter; };

void sub_0805F458(u16 n)
{
    struct SongEntry *song = &D_08071068[n];
    u32 *info = D_08071014[song->ms].info;
    if (*info == song->header)
        sub_0805FB5C(info);
}

void sub_0805F6F4(s32 a)
{
    D_03003B8C(a);
}

void sub_08062F8C(void)
{
    struct SoundInfoLite *si = *(struct SoundInfoLite **)0x03007FF0;
    u32 ident = si->ident;
    if (ident != 0x68736D53) {
        *(vu16 *)0x040000C6 = 0xB600;
        si->pcmDmaCounter = 0;
        si->ident = ident - 10;
    }
}
