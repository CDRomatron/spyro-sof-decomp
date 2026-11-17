
typedef struct { s32 f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24; u8 f28; } TblEC50;
extern TblEC50 D_081738DC[];
typedef struct { s32 f0; u8 pad4[0xC]; s16 f10, f12, f14, f16, f18, f1A, f1C, f1E, f20; u8 f22, f23; } ObjEC50;

void sub_0800D950(ObjEC50 *o, s32 i) {
    o->f22 = i;
    o->f0 = D_081738DC[i].f0;
    o->f14 = D_081738DC[i].f4;
    o->f16 = D_081738DC[i].f8;
    o->f18 = D_081738DC[i].fC;
    o->f1A = D_081738DC[i].f10;
    o->f10 = D_081738DC[i].f14;
    o->f12 = D_081738DC[i].f18;
    o->f1E = D_081738DC[i].f1C;
    o->f1C = D_081738DC[i].f20;
    o->f20 = D_081738DC[i].f24;
    o->f23 = D_081738DC[i].f28;
}
