
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 sub_08004508();
extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_08004020(s32);
extern s32 sub_080528D4(void *, s32, s32, s32);
extern u8 sub_0805399C();
extern s32 sub_080641CC(void *);

void sub_08023CD4(void *arg0) {
    void *p;
    p = arg0 + 0xC;
    sub_08050228(M2C_FIELD(arg0, s32 *, 0x78), p, M2C_FIELD(arg0, s32 *, 0x84));
    if (sub_08004508(M2C_FIELD(arg0, s32 *, 0x78)) != 0x610000) {
        sub_08050228(M2C_FIELD(arg0, s32 *, 0x7C), arg0 + 0x30, M2C_FIELD(arg0, s32 *, 0x84));
    }
}

u8 sub_080248A4(void *arg0) {
    void *temp_r4;
    temp_r4 = arg0 + 0x24;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x84));
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24) + M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(temp_r4, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(temp_r4, s32 *, 8));
    if (M2C_FIELD(arg0, void **, 0x8C) != NULL) {
        sub_080641CC(arg0);
    }
    if ((M2C_FIELD(arg0, u16 *, 0xA2) != 0) && (sub_0805399C() != 5)) {
        M2C_FIELD(arg0, u16 *, 0xA2) = (u16) (M2C_FIELD(arg0, u16 *, 0xA2) - 1);
    }
    return M2C_FIELD(arg0, u8 *, 0xAA);
}
