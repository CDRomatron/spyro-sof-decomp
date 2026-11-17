/* identical to sub_08018964 in SPYRO 3 (matched), with its names changed by decompdecomp */
void sub_08003DA8(s32 a, s32 b);
void sub_08004408(s32 a, s32 b);
void sub_08050A78(s32 a);
void sub_08050B80(void);

s32 sub_0801E31C(s32 obj, s32 b, s32 kind)
{
    if (kind == 8)
    {
        sub_08003DA8(obj, -1);
        sub_08004408(obj, 0);
    }
    return 1;
}

void sub_08018984(void)
{
    sub_08050A78(5);
}

s32 sub_08018990(s32 obj)
{
    *(u32 *)(obj + 0x1D8) = 0;
    return 0;
}

s32 sub_080189A0(s32 obj, s32 b, u32 kind)
{
    switch (kind)
    {
    case 1:
    case 2:
        break;
    case 8:
        sub_08050B80();
        sub_08004408(obj, 0);
        sub_08003DA8(obj, -1);
        break;
    }
    return 1;
}
