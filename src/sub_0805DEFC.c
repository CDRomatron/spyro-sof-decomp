
extern s32 sub_080042A4(s32, s32, s32);
extern s32 sub_08004644(s32, u16, s32);
typedef struct {
    s32 pad[3]; s32 f0C; s32 pad2[2]; u16 f18; u8 pad3[6]; s32 f20; s32 f24;
} Entry;

s32 sub_0805D200(void **arg0) {
    Entry *p = *arg0;
    s32 i = 6;
    s32 a, b, base;
    do {
        sub_08004644(p->f0C, p->f18, 0);
        base = p->f0C;
        a = p->f20;
        if (a < 0) a += 0xFF;
        a >>= 8;
        b = p->f24;
        if (b < 0) b += 0xFF;
        b >>= 8;
        sub_080042A4(base, a, b);
        p++;
        i--;
    } while (i >= 0);
    return 0;
}

typedef struct {
    s32 pad[4]; s32 f10; s32 pad2[4]; s32 f24; s32 pad3; s32 f2C; s32 f30; u32 f34;
} S;

void sub_0805DEFC(S *arg0) {
    if (arg0->f2C == 0) {
        s32 v = arg0->f30;
        if (v != 0) {
            if (v == 1) {
                if (arg0->f34++ > 0xB4U) arg0->f2C = v;
            }
        }
    }
}

extern void sub_0805DC70(S *);
extern void sub_08004020(s32);
extern void sub_080611F8(void);
extern void sub_080641CC(S *, s32);

void sub_0805DF24(S *arg0) {
    S *p = arg0;
    S *q = arg0;
    if (p->f2C == 0) {
        s32 v = p->f30;
        if (v != 0) {
            if (v == 1) {
                if (p->f34++ > 0xB4U) p->f2C = v;
            }
        }
    }
    sub_0805DC70(arg0);
    sub_08004020(q->f24);
    if (q->f2C == 1) {
        if (q->f30 == 0) sub_080611F8();
        sub_080641CC(arg0, q->f10);
    }
}

extern s32 sub_08064204(s32, s32);
s32 sub_0805D37C(s32 num, u32 n, s32 *out) {
    s32 pow10 = 1;
    u32 i;
    s32 j;
    s32 digit, q, rem;
    for (i = 0; i < n; i++) { out[i] = 0; pow10 = pow10 * 10; }
    j = n - 1;
    while (j >= 0) {
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
