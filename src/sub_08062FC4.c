/* identical to sub_0805FA00 in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef struct { u8 flags; u8 pad[0x4F]; } MPTrack;
typedef struct { u32 songHeader; u32 status; u8 trackCount; u8 pad09[0x23]; MPTrack *tracks; u32 pad30; u32 ident; void *func; void *intp; } MPInfo;
typedef struct { u32 ident; u8 pad[0x1C]; void *MPlayMainHead; void *musicPlayerHead; } SndArea;
extern SndArea *D_03007FF0;
void sub_08062CB8(MPInfo *mp);
void sub_080622BC(void);

void sub_08062FC4(MPInfo *mp, MPTrack *tracks, u8 trackCount) {
    SndArea *s;
    if (trackCount == 0)
        return;
    if (trackCount > 16)
        trackCount = 16;
    s = D_03007FF0;
    if (s->ident != 0x68736D53)
        return;
    s->ident++;
    sub_08062CB8(mp);
    mp->tracks = tracks;
    mp->trackCount = trackCount;
    mp->status = 0x80000000;
    while (trackCount != 0) {
        tracks->flags = 0;
        trackCount--;
        tracks++;
    }
    if (s->MPlayMainHead != 0) {
        mp->func = s->MPlayMainHead;
        mp->intp = s->musicPlayerHead;
        s->MPlayMainHead = 0;
    }
    s->musicPlayerHead = mp;
    s->MPlayMainHead = sub_080622BC;
    s->ident = 0x68736D53;
    mp->ident = 0x68736D53;
}
