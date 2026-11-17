/* identical to sub_080194B8 in SPYRO 3 (matched), with its names changed by decompdecomp */
void sub_0801A130(s32 a, s32 b);
void sub_0801A504(s32 a, s32 b);
s32 sub_08000854(s32 a);
void Obj_SetAnim(s32 a);
s32 sub_08003300(void);

s32 sub_0801DF64(s32 obj, u16 flags)
{
    if (flags & 8)
        sub_0801A130(obj, 4);
    sub_0801A504(obj, 0xD00);
    return 0;
}

s32 sub_080194B4(void)
{
    return 1;
}

s32 sub_080194E4(s32 a, s32 b)
{
    sub_0801A130(b, 2);
    return 1;
}

s32 sub_080194F4(s32 a, s32 b, s32 c)
{
    if (c == 8 && sub_08000854(a) != 0x7E0013) {
        Obj_SetAnim(a);
        *(u16 *)(b + 0x1E8) = 0;
        *(u16 *)(b + 0x1EA) = (sub_08003300() & 0x3F) + 0x3C;
    }
    return 1;
}
