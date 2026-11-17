
extern s32 sub_080042A4(s32, s32, s32);
typedef struct { s32 pad[5]; s32 f14; s32 f18; s32 pad2[2]; s32 f24; } Arg;
typedef struct { s32 pad[0x4C/4]; s32 f4C; s32 f50; } Global;
extern Global *volatile D_030026EC;

void sub_0805D6E4(Arg *arg0) {
    s32 v = arg0->f24;
    s32 a = arg0->f14;
    s32 b;
    if (a < 0) a += 0xFF;
    a >>= 8;
    a -= D_030026EC->f4C;
    b = arg0->f18;
    if (b < 0) b += 0xFF;
    b >>= 8;
    b -= D_030026EC->f50;
    sub_080042A4(v, a, b);
}

extern s32 sub_08064204(s32, s32);
s32 sub_0805D37C(s32 num, u32 n, s32 *out) {
    s32 pow10 = 1;
    u32 i, j;
    s32 rem, digit, q;
    for (i = 0; i < n; i++) { out[i] = 0; pow10 = pow10 * 10; }
    j = n - 1;
    while (j != (u32)-1) {
        q = sub_08064204(pow10, 10);
        rem = num - q;
        digit = 0;
        while (rem >= 0) { num = rem; digit++; rem -= q; }
        out[j] = digit;
        pow10 = q;
        j--;
    }
    return 0;
}

typedef struct { s32 x0, x1; } Rect;
s32 sub_0805DA94(Rect *a, Rect *b) {
    s32 ax = a->x0;
    s32 bx;
    if (ax < b->x0) return 1;
    bx = b->x1;
    if (ax > bx) return 0;
    if (a->x1 < bx) return 3;
    if (a->x1 <= bx) return 4;
    return 2;
}
