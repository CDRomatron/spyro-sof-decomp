
extern void sub_08063120(s32);
extern void sub_0806303C(void *, s32);
extern void sub_08062890(void *);
extern s32 D_08067B58[];
extern u8 D_08067BA0[];
typedef struct { u32 f0; u16 f4; } A;
typedef struct { s32 f0; s32 f4; } Obj;

void sub_08062A84(void) {
    u16 n = 6;
    s32 *p = (s32 *)D_08067B58;
    u16 i;
    if (n != 0) {
        for (i = n; i != 0; i--) {
            sub_08063120(*p);
            p += 3;
        }
    }
}

void sub_08062A1C(s32 arg0) {
    u32 idx = ((u32)arg0 << 16) >> 13;
    A *a = (A *)(D_08067BA0 + idx);
    Obj *obj = *(Obj **)((u8 *)D_08067B58 + a->f4 * 12);
    if (obj->f0 == (s32)a->f0) sub_08063120((s32)obj);
}

void sub_080629C8(s32 arg0) {
    u32 idx = ((u32)arg0 << 16) >> 13;
    A *a = (A *)(D_08067BA0 + idx);
    Obj *obj = *(Obj **)((u8 *)D_08067B58 + a->f4 * 12);
    s32 v = obj->f0;
    if (v != (s32)a->f0) { sub_0806303C(obj, (s32)a->f0); return; }
    if ((u16)obj->f4 == 0) { sub_0806303C(obj, v); return; }
    if (obj->f4 < 0) sub_08062890(obj);
}

void sub_08062AF8(u8 *arg0, u16 arg1) {
    if (*(u32 *)(arg0 + 0x34) == 0x68736D53) {
        *(u16 *)(arg0 + 0x26) = arg1;
        *(u16 *)(arg0 + 0x24) = arg1;
        *(u16 *)(arg0 + 0x28) = 0x101;
    }
}
