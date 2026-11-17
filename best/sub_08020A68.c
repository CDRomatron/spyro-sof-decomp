
extern void *sub_080529D4(void);
extern void sub_0804EC14(void *);
extern void sub_080500D8(void);
extern void sub_0805275C(s32, void *);
extern s32 sub_080502E8(void *);
extern void sub_0800FDA0(u8 *, void *, void *);
extern void *sub_08052B40(u8 *);
extern void sub_0800FD8C(u8 *, void *, void *);
extern void sub_08050168(u8 *, void *);
extern void sub_080534A0(s32);

typedef void (*noreturn_fn)(void) __attribute__((noreturn));

void sub_08020A68(u8 *arg0, s32 arg1) {
    u8 stack[0xC];
    void *p;
    void *q;
    switch (arg1) {
    case 0:
        if (*(u8 *)(arg0 + 0x4A) != 0) {
            p = sub_080529D4();
            sub_0804EC14(p + 0xC);
            sub_080500D8();
        } else {
            p = sub_080529D4();
            sub_0805275C(0xF2, stack);
            *(s32 *)(stack + 8) = sub_080502E8(stack);
            sub_0800FDA0(arg0, p, stack);
            sub_0804EC14(stack);
            sub_080500D8();
            p = sub_080529D4();
            q = sub_08052B40(arg0 + 0xC);
            sub_0800FD8C(arg0, p, q);
        }
        sub_08050168(arg0, sub_08020A68);
        break;
    case 1:
        if (*(u8 *)(arg0 + 0x4A) != 0) {
            sub_080534A0(3);
        } else {
            ((noreturn_fn)0x08020AF6)();
        }
        break;
    }
}
