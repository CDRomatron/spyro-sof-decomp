
typedef struct { u8 pad1[0x40B]; u8 f40B; u8 pad2[0x214]; u8 f620; } G7430;
extern G7430 D_03001650;
s32 sub_08007430(s32 arg0) {
    u32 t = (u32)arg0 << 16;
    u16 y = *(u16 *)(0x0817211A + D_03001650.f620 * 2);
    s32 z = *(u8 *)(&D_03001650.f40B + y + (t >> 19));
    s32 shift = (t & 0x70000) >> 16;
    return (z >> shift) & 1;
}
