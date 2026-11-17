/* identical to sub_08009E10 in SPYRO 3 (matched), with its names changed by decompdecomp */
s32 sub_08000CC0(void *p);
void sub_080058E4(s32 x);

void sub_08005894(u8 *p)
{
    s32 x;
    x = sub_08000CC0(p);
    while (x != 0) {
        sub_080058E4(x);
        x = sub_08000CC0(p);
    }
    while ((x = sub_08000CC0(p + 0xC)) != 0)
        sub_080058E4(x);
}
