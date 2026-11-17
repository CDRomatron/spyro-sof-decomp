/* identical to sub_08018F9C in SPYRO 3 (matched), with its names changed by decompdecomp */
void sub_08004408(void *, int);
void sub_08003DA8(void *, int);
void sub_0801925C(void) {}
int sub_0801E3DC(void *p, u32 a, int msg) {
    switch (msg) {
    case 2:
        sub_08004408(p, 0);
        break;
    case 8:
        sub_08003DA8(p, -1);
        sub_08004408(p, 0);
        break;
    }
    return 1;
}
void sub_08019538(u8 *p) {
    *(s32 *)(p + 0x1E0) = 0x200;
    *(s32 *)(p + 0x1DC) = 0;
}
int sub_08019550(u8 *p) {
    *(s32 *)(p + 0x1D8) -= 11;
    return 0;
}
