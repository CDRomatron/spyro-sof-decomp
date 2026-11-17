extern void sub_080645EC(u32 *args, u32 *out);
extern s32 sub_08064DC8(u32 *a, u32 *b);
extern void sub_080644A4(u32 *out);
typedef struct { u32 a,b; } Pair;
void sub_08064EC8(Pair p0, Pair p1) {
    u32 res[2][5];
    sub_080645EC((u32*)&p0, res[0]);
    sub_080645EC((u32*)&p1, res[1]);
    sub_08064DC8(res[0], res[1]);
}
s32 sub_08064EF4(Pair p0, Pair p1) {
    u32 res[2][5];
    u32 c0, c1;
    sub_080645EC((u32*)&p0, res[0]);
    sub_080645EC((u32*)&p1, res[1]);
    c0 = (res[0][0] <= 1U);
    if (c0) return 1;
    c1 = (res[1][0] <= 1U);
    if (!c1) return sub_08064DC8(res[0], res[1]);
    return 1;
}
s32 sub_08064F8C(Pair p0, Pair p1) {
    u32 res[2][5];
    u32 c0, c1;
    sub_080645EC((u32*)&p0, res[0]);
    sub_080645EC((u32*)&p1, res[1]);
    c0 = (res[0][0] <= 1U);
    if (c0) return -1;
    c1 = (res[1][0] <= 1U);
    if (!c1) return sub_08064DC8(res[0], res[1]);
    return -1;
}
void sub_080651AC(Pair p) {
    u32 res[5];
    sub_080645EC((u32*)&p, res);
    res[1] = !res[1];
    sub_080644A4(res);
}
