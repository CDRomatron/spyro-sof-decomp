
extern s32 sub_08003220(u32);
extern u32 D_0817148C;

s32 sub_0801E414(u32 arg2) {
    switch (arg2) {
    case 1:
        sub_08003220((u32)&D_0817148C);
        break;
    case 2:
        break;
    }
    return 1;
}

extern s32 sub_08003C58(s32);
extern s32 sub_08004508(void);
extern s32 sub_0800897C(void);

s32 sub_0801E434(s32 arg0, u8 *arg1, u32 arg2) {
    switch (arg2) {
    case 8:
        if (sub_08004508() != 0x70000F) {
            sub_08003C58(arg0);
            *(u16 *)(arg1 + 0x14C) = 0;
            *(u16 *)(arg1 + 0x14E) = (sub_0800897C() & 0x3F) + 0x3C;
        }
        break;
    case 2:
        break;
    }
    return 1;
}

extern s32 sub_0801A130(s32, s32);

s32 sub_0801E47C(s32 arg0, s32 arg1) {
    sub_0801A130(arg1, 2);
    return 1;
}

extern s32 sub_08004408(s32, s32);

s32 sub_0801E374(s32 arg0, u8 *arg1, u32 arg2) {
    switch (arg2) {
    case 2:
        sub_08004408(arg0, 0);
        break;
    case 4:
        break;
    case 8:
        sub_0801A130((s32)arg1, 2);
        *(u16 *)(arg1 + 0x152) = 0x1E;
        *(u32 *)(arg1 + 0x138) = *(u32 *)(arg1 + 0x134);
        break;
    }
    return 1;
}
