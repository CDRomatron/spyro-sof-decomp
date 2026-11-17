/* identical to sub_0800FD28 in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef struct 
{
  u8 pad0[0xC];
  s32 fC;
  s32 f10;
  u8 pad14[0xF];
  u8 f23;
  u8 f24;
} Inner;
extern s32 D_081C0460[];
void sub_0800D684(Inner **p, s32 a, s32 b)
{
  Inner *in;
  s32 *new_var;
  s32 j;
  (*p)->f23 = a;
  (*p)->f24 = b;
  in = *p;
  new_var = D_081C0460;
  j = b * 2;
  in->fC = new_var[j];
  in->f10 = D_081C0460[j + 1];
}

