
typedef struct { s32 pad[9]; s32 f24; s32 pad2[2]; s32 f2C; } A;
extern s32 sub_08003C58(s32, s32);
extern void sub_08004454(s32, A *, void *);
extern s32 sub_08004508(s32);

s32 sub_08060124(A *arg1, s32 arg2) {
    s32 r1 = sub_08004508(arg1->f24);
    if (arg2 == 8 && arg1->f2C == 0) {
        if (r1 == 0x009B0001) {
            sub_08003C58(arg1->f24, 0x009B0002);
            sub_08004454(arg1->f24, arg1, sub_08060124);
        } else if (r1 == 0x009B0002) {
            arg1->f2C = 1;
        }
    }
    return 1;
}

extern void sub_080042A4(void);
void sub_08060202(void) { sub_080042A4(); }

s32 sub_080601FA(s32 arg2, void **arg3, s32 arg4) {
    return arg2 - *(s32 *)((u8 *)*arg3 + 0x50);
}
