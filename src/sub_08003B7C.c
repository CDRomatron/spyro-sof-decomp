/* identical to sub_080032E8 in SPYRO-U (matched), with its names changed by decompdecomp */

extern void *sub_08002B34(s32, s32);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 unkC;
    u8 unkD;
    u16 unkE;
    s32 unk10;
} Alloc;

Alloc *sub_08003B7C(u8 arg0, u8 arg1, s32 arg2, s32 arg3) {
    Alloc *p = sub_08002B34(0x14, 0);
    p->unk4 = 0;
    p->unk0 = 0;
    p->unk8 = arg3;
    p->unkD = arg1;
    p->unkC = arg0;
    p->unkE = 0;
    p->unk10 = arg2;
    return p;
}

extern void sub_08001940(u32 *);
extern void sub_08002408(void *);
extern void sub_08003160(void);
extern u32 D_03000840[];
extern u32 D_03000850[];

s32 sub_080032B4(void) {
    sub_08001940(D_03000840);
    D_03000840[3] = 0;
    sub_08001940(D_03000850);
    D_03000850[3] = 0;
    sub_08002408(&sub_08003160);
    return 1;
}

typedef struct {
    u8 pad[0xC];
    u8 unkC;
} Obj;

typedef struct {
    u8 pad[0x44];
    s32 unk44;
} Cnt;

extern Cnt *volatile D_030010AC;
extern void sub_080019C8(Obj *);
extern void sub_08002128(Obj *, s32);

void sub_08003340(Obj *obj) {
    u8 v = obj->unkC;
    if (v == 1) goto case1;
    if (v != 3) goto def;
    D_03000840[3]++;
    sub_080019C8(obj);
    D_03000840[3]--;
    goto end;
case1:
    D_030010AC->unk44++;
    sub_080019C8(obj);
    D_030010AC->unk44--;
    goto end;
def:
    sub_080019C8(obj);
end:
    sub_08002128(obj, 0x14);
}

void sub_08003428(Obj *obj) {
    u8 v = obj->unkC;
    if (v == 1) goto case1;
    if (v != 3) goto def;
    D_03000840[3]++;
    sub_080019C8(obj);
    D_03000840[3]--;
    goto end;
case1:
    D_030010AC->unk44++;
    sub_080019C8(obj);
    D_030010AC->unk44--;
    goto end;
def:
    sub_080019C8(obj);
end:
    ;
}
