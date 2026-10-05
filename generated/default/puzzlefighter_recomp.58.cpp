#include "puzzlefighter_funcs.58.h"

DEFINE_REX_FUNC(sub_82044B00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82044b30
	goto loc_82044B30;
loc_82044B24:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82044B30:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82044bc4
	if (!ctx.cr6.lt) goto loc_82044BC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82044b54
	if (ctx.cr6.eq) goto loc_82044B54;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82044b8c
	if (!ctx.cr6.eq) goto loc_82044B8C;
loc_82044B54:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82044b88
	if (ctx.cr6.eq) goto loc_82044B88;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8217e370
	ctx.lr = 0x82044B84;
	sub_8217E370(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_82044B88:
	// b 0x82044bc0
	goto loc_82044BC0;
loc_82044B8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82044bc0
	if (ctx.cr6.eq) goto loc_82044BC0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8217e370
	ctx.lr = 0x82044BBC;
	sub_8217E370(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_82044BC0:
	// b 0x82044b24
	goto loc_82044B24;
loc_82044BC4:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820592F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19736
	ctx.r11.s64 = ctx.r11.s64 + -19736;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19720
	ctx.r11.s64 = ctx.r11.s64 + -19720;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19728
	ctx.r11.s64 = ctx.r11.s64 + -19728;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29540
	ctx.r11.s64 = ctx.r11.s64 + -29540;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x82058270
	ctx.lr = 0x8205934C;
	sub_82058270(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217e370
	ctx.lr = 0x82059358;
	sub_8217E370(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8217e370
	ctx.lr = 0x82059360;
	sub_8217E370(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29540
	ctx.r11.s64 = ctx.r11.s64 + -29540;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8217e6c8
	ctx.lr = 0x82059380;
	sub_8217E6C8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,16979
	ctx.r11.s64 = 1112735744;
	// ori r4,r11,20307
	ctx.r4.u64 = ctx.r11.u64 | 20307;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8217e710
	ctx.lr = 0x82059394;
	sub_8217E710(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8217e370
	ctx.lr = 0x8205939C;
	sub_8217E370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8205DF30) {
	REX_FUNC_PROLOGUE();
	// stb r3,23(r1)
	REX_STORE_U8(ctx.r1.u32 + 23, ctx.r3.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lbz r11,23(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 23);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8205df78
	if (ctx.cr0.eq) goto loc_8205DF78;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,17152
	ctx.r11.s64 = ctx.r11.s64 + 17152;
	// lhz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lhz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
loc_8205DF78:
	// lbz r11,23(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 23);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8205dfb4
	if (ctx.cr0.eq) goto loc_8205DFB4;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,17152
	ctx.r11.s64 = ctx.r11.s64 + 17152;
	// lhz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 184);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// lwz r10,172(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lhz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
loc_8205DFB4:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18180
	ctx.r11.s64 = ctx.r11.s64 + -18180;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r10,r10,-18184
	ctx.r10.s64 = ctx.r10.s64 + -18184;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lhz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lhz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820688A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,22(r11)
	REX_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-3260
	ctx.r11.s64 = ctx.r11.s64 + -3260;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820688f8
	if (ctx.cr0.eq) goto loc_820688F8;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820688f8
	if (ctx.cr0.eq) goto loc_820688F8;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// bl 0x82066748
	ctx.lr = 0x820688F8;
	sub_82066748(ctx, base);
loc_820688F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8206C268) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8206CE30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,29(r11)
	REX_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8217e180
	ctx.lr = 0x8206CE80;
	sub_8217E180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8206F5E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8206f634
	if (ctx.cr6.lt) goto loc_8206F634;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8206f66c
	if (ctx.cr6.eq) goto loc_8206F66C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8206f798
	if (ctx.cr6.lt) goto loc_8206F798;
	// b 0x8206f8a4
	goto loc_8206F8A4;
loc_8206F634:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-3220
	ctx.r11.s64 = ctx.r11.s64 + -3220;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8206f668
	if (ctx.cr6.lt) goto loc_8206F668;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_8206F668:
	// b 0x8206f8a4
	goto loc_8206F8A4;
loc_8206F66C:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,32564
	ctx.r10.s64 = ctx.r10.s64 + 32564;
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r11,98(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 98);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// sth r11,98(r10)
	REX_STORE_U16(ctx.r10.u32 + 98, ctx.r11.u16);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r11,98(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 98);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r3,r11,11,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// bl 0x8217fd00
	ctx.lr = 0x8206F6C0;
	sub_8217FD00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,13040
	ctx.r11.s64 = ctx.r11.s64 + 13040;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,13040
	ctx.r11.s64 = ctx.r11.s64 + 13040;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f0,92(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f0,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6828
	ctx.r11.s64 = ctx.r11.s64 + 6828;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8206f748
	if (ctx.cr6.eq) goto loc_8206F748;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,104(r11)
	REX_STORE_U16(ctx.r11.u32 + 104, ctx.r10.u16);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,102(r11)
	REX_STORE_U16(ctx.r11.u32 + 102, ctx.r10.u16);
loc_8206F748:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-3219
	ctx.r11.s64 = ctx.r11.s64 + -3219;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r10,97(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 97);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8206f794
	if (!ctx.cr6.eq) goto loc_8206F794;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_8206F794:
	// b 0x8206f8a4
	goto loc_8206F8A4;
loc_8206F798:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8206f7c8
	if (ctx.cr6.lt) goto loc_8206F7C8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8206f808
	if (ctx.cr6.eq) goto loc_8206F808;
	// b 0x8206f878
	goto loc_8206F878;
loc_8206F7C8:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stb r11,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r10,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, ctx.r10.u16);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,104(r11)
	REX_STORE_U16(ctx.r11.u32 + 104, ctx.r10.u16);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,102(r11)
	REX_STORE_U16(ctx.r11.u32 + 102, ctx.r10.u16);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8206c2a0
	ctx.lr = 0x8206F808;
	sub_8206C2A0(ctx, base);
loc_8206F808:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stb r11,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// sth r11,100(r10)
	REX_STORE_U16(ctx.r10.u32 + 100, ctx.r11.u16);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8206f858
	if (!ctx.cr0.gt) goto loc_8206F858;
	// b 0x8206f8a4
	goto loc_8206F8A4;
loc_8206F858:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stb r11,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
loc_8206F878:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_8206F8A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8207E690) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-2340
	ctx.r10.s64 = ctx.r10.s64 + -2340;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8207F4C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8207f108
	ctx.lr = 0x8207F590;
	sub_8207F108(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82085F90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,143(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 143);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82085fdc
	if (ctx.cr6.eq) goto loc_82085FDC;
	// b 0x82086108
	goto loc_82086108;
loc_82085FDC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,189(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 189);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82086028
	if (ctx.cr6.eq) goto loc_82086028;
	// b 0x82086108
	goto loc_82086108;
loc_82086028:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,129(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 129);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,156
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(156));
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// andi. r11,r11,432
	ctx.r11.u64 = ctx.r11.u64 & 432;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82086060
	if (!ctx.cr0.eq) goto loc_82086060;
	// b 0x82086108
	goto loc_82086108;
loc_82086060:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 140);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820860ac
	if (ctx.cr6.eq) goto loc_820860AC;
	// b 0x820860c8
	goto loc_820860C8;
loc_820860AC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r10.u8);
	// b 0x82086108
	goto loc_82086108;
loc_820860C8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 140);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,140(r10)
	REX_STORE_U8(ctx.r10.u32 + 140, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r10.u8);
loc_82086108:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8208F7F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19520
	ctx.r11.s64 = ctx.r11.s64 + -19520;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32095
	ctx.r10.s64 = -2103377920;
	// addi r10,r10,-19520
	ctx.r10.s64 = ctx.r10.s64 + -19520;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19520
	ctx.r11.s64 = ctx.r11.s64 + -19520;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8208f838
	if (ctx.cr0.gt) goto loc_8208F838;
	// bl 0x82058638
	ctx.lr = 0x8208F838;
	sub_82058638(ctx, base);
loc_8208F838:
	// bl 0x82211af0
	ctx.lr = 0x8208F83C;
	sub_82211AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8208f848
	if (!ctx.cr0.eq) goto loc_8208F848;
	// b 0x8208f948
	goto loc_8208F948;
loc_8208F848:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82078888
	ctx.lr = 0x8208F85C;
	sub_82078888(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8208f878
	if (!ctx.cr6.eq) goto loc_8208F878;
	// b 0x8208f948
	goto loc_8208F948;
loc_8208F878:
	// bl 0x82059160
	ctx.lr = 0x8208F87C;
	sub_82059160(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,333(r11)
	REX_STORE_U8(ctx.r11.u32 + 333, ctx.r10.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,15116(r11)
	REX_STORE_U16(ctx.r11.u32 + 15116, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,140(r11)
	REX_STORE_U8(ctx.r11.u32 + 140, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lis r10,816
	ctx.r10.s64 = 53477376;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821557e8
	ctx.lr = 0x8208F948;
	sub_821557E8(ctx, base);
loc_8208F948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209AA00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-26356
	ctx.r10.s64 = ctx.r10.s64 + -26356;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209AA50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209E288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8209e2e0
	if (!ctx.cr6.eq) goto loc_8209E2E0;
	// b 0x8209e4d8
	goto loc_8209E4D8;
loc_8209E2E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,4956
	ctx.r11.s64 = ctx.r11.s64 + 4956;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,130(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 130);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,159(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 159);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r11,r11,7,16,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFF80;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29384
	ctx.r11.s64 = ctx.r11.s64 + -29384;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,13(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r11,r11,5,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFE0;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,16,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF000FFFF;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8209e0e0
	ctx.lr = 0x8209E4CC;
	sub_8209E0E0(ctx, base);
	// bl 0x8209e0e0
	ctx.lr = 0x8209E4D0;
	sub_8209E0E0(ctx, base);
	// bl 0x8209e0e0
	ctx.lr = 0x8209E4D4;
	sub_8209E0E0(ctx, base);
	// bl 0x8209e0e0
	ctx.lr = 0x8209E4D8;
	sub_8209E0E0(ctx, base);
loc_8209E4D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B3878) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,194
	ctx.r11.s64 = ctx.r11.s64 + 194;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820B38EC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820B3914:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b3978
	if (!ctx.cr6.eq) goto loc_820B3978;
	// b 0x820b3b94
	goto loc_820B3B94;
loc_820B3978:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820b3a0c
	if (!ctx.cr6.gt) goto loc_820B3A0C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820b3a1c
	goto loc_820B3A1C;
loc_820B3A0C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820B3A1C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b3a38
	if (ctx.cr6.eq) goto loc_820B3A38;
	// b 0x820b3a54
	goto loc_820B3A54;
loc_820B3A38:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x820b3b94
	goto loc_820B3B94;
loc_820B3A54:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820b3af8
	if (!ctx.cr6.gt) goto loc_820B3AF8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820b3b08
	goto loc_820B3B08;
loc_820B3AF8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820B3B08:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b3b24
	if (!ctx.cr6.eq) goto loc_820B3B24;
	// b 0x820b3b94
	goto loc_820B3B94;
loc_820B3B24:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b3b80
	if (ctx.cr6.eq) goto loc_820B3B80;
	// b 0x820b3b94
	goto loc_820B3B94;
loc_820B3B80:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,1024(r11)
	REX_STORE_U16(ctx.r11.u32 + 1024, ctx.r10.u16);
loc_820B3B94:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x820b3be4
	if (!ctx.cr6.lt) goto loc_820B3BE4;
	// b 0x820b3914
	goto loc_820B3914;
loc_820B3BE4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x820b3c34
	if (!ctx.cr6.lt) goto loc_820B3C34;
	// b 0x820b38ec
	goto loc_820B38EC;
loc_820B3C34:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,884(r11)
	REX_STORE_U16(ctx.r11.u32 + 884, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820b3cd8
	if (!ctx.cr6.gt) goto loc_820B3CD8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820b3ce8
	goto loc_820B3CE8;
loc_820B3CD8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820B3CE8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820b3d04
	if (!ctx.cr6.lt) goto loc_820B3D04;
	// b 0x820b3dc8
	goto loc_820B3DC8;
loc_820B3D04:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-54
	ctx.r11.s64 = ctx.r11.s64 + -54;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820b3d8c
	if (!ctx.cr6.gt) goto loc_820B3D8C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820b3d9c
	goto loc_820B3D9C;
loc_820B3D8C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820B3D9C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820b3db8
	if (!ctx.cr6.lt) goto loc_820B3DB8;
	// b 0x820b3dc8
	goto loc_820B3DC8;
loc_820B3DB8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820B3DC8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,209(r11)
	REX_STORE_U8(ctx.r11.u32 + 209, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b3e2c
	if (ctx.cr6.eq) goto loc_820B3E2C;
	// b 0x820b40e8
	goto loc_820B40E8;
loc_820B3E2C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b3e78
	if (ctx.cr6.eq) goto loc_820B3E78;
	// b 0x820b40e8
	goto loc_820B40E8;
loc_820B3E78:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,934(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 934);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b3ec4
	if (ctx.cr6.eq) goto loc_820B3EC4;
	// b 0x820b40e8
	goto loc_820B40E8;
loc_820B3EC4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,934(r11)
	REX_STORE_U8(ctx.r11.u32 + 934, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// addi r11,r11,600
	ctx.r11.s64 = ctx.r11.s64 + 600;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,604(r10)
	REX_STORE_U32(ctx.r10.u32 + 604, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,22528
	ctx.r10.u64 = ctx.r10.u64 | 22528;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820b3f34
	if (!ctx.cr6.gt) goto loc_820B3F34;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,22528
	ctx.r10.u64 = ctx.r10.u64 | 22528;
	// stw r10,604(r11)
	REX_STORE_U32(ctx.r11.u32 + 604, ctx.r10.u32);
loc_820B3F34:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,914(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 914);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,914(r10)
	REX_STORE_U8(ctx.r10.u32 + 914, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820f6d98
	ctx.lr = 0x820B3F9C;
	sub_820F6D98(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,914(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 914);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,414(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 414);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,414(r10)
	REX_STORE_U8(ctx.r10.u32 + 414, ctx.r11.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820b40e4
	if (!ctx.cr6.eq) goto loc_820B40E4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15472
	ctx.r11.s64 = ctx.r11.s64 + 15472;
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820b4060
	if (ctx.cr6.lt) goto loc_820B4060;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,352(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16008
	ctx.r10.s64 = ctx.r10.s64 + 16008;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,414(r11)
	REX_STORE_U8(ctx.r11.u32 + 414, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,414(r11)
	REX_STORE_U8(ctx.r11.u32 + 414, ctx.r10.u8);
loc_820B4060:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15472
	ctx.r11.s64 = ctx.r11.s64 + 15472;
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x820b40e4
	if (!ctx.cr0.gt) goto loc_820B40E4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,352(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16008
	ctx.r10.s64 = ctx.r10.s64 + 16008;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,414(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 414);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,414(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 414);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16008
	ctx.r10.s64 = ctx.r10.s64 + 16008;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,414(r10)
	REX_STORE_U8(ctx.r10.u32 + 414, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,414(r11)
	REX_STORE_U8(ctx.r11.u32 + 414, ctx.r10.u8);
loc_820B40E4:
	// bl 0x820ae5d8
	ctx.lr = 0x820B40E8;
	sub_820AE5D8(ctx, base);
loc_820B40E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F8E28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,212(r11)
	REX_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,216(r11)
	REX_STORE_U8(ctx.r11.u32 + 216, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FD2C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820fc898
	ctx.lr = 0x820FD2D0;
	sub_820FC898(ctx, base);
	// bl 0x820fc970
	ctx.lr = 0x820FD2D4;
	sub_820FC970(ctx, base);
	// bl 0x820fcad0
	ctx.lr = 0x820FD2D8;
	sub_820FCAD0(ctx, base);
	// bl 0x820fcc80
	ctx.lr = 0x820FD2DC;
	sub_820FCC80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FD4C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,420(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 420);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,420(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 420);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,420(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 420);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820fd550
	if (!ctx.cr6.gt) goto loc_820FD550;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820fd560
	goto loc_820FD560;
loc_820FD550:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820FD560:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820fd57c
	if (!ctx.cr6.lt) goto loc_820FD57C;
	// b 0x820fd6dc
	goto loc_820FD6DC;
loc_820FD57C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,420
	ctx.r10.s64 = 420;
	// sth r10,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// bl 0x820f9e60
	ctx.lr = 0x820FD5C0;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,13312
	ctx.r10.s64 = 13312;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,5328
	ctx.r10.s64 = ctx.r10.s64 + 5328;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// bl 0x820f9e60
	ctx.lr = 0x820FD620;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,13313
	ctx.r10.s64 = 13313;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,5324
	ctx.r10.s64 = ctx.r10.s64 + 5324;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// bl 0x820f9e60
	ctx.lr = 0x820FD680;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,13314
	ctx.r10.s64 = 13314;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,5320
	ctx.r10.s64 = ctx.r10.s64 + 5320;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_820FD6DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821085C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-19296
	ctx.r10.s64 = ctx.r10.s64 + -19296;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82108610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210B1D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8212b7e8
	ctx.lr = 0x8210B1E0;
	sub_8212B7E8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,26(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8210b22c
	if (ctx.cr6.lt) goto loc_8210B22C;
	// b 0x8210b234
	goto loc_8210B234;
loc_8210B22C:
	// bl 0x820dfbc0
	ctx.lr = 0x8210B230;
	sub_820DFBC0(ctx, base);
	// b 0x8210b238
	goto loc_8210B238;
loc_8210B234:
	// bl 0x820dd0e0
	ctx.lr = 0x8210B238;
	sub_820DD0E0(ctx, base);
loc_8210B238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210DB18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,217(r11)
	REX_STORE_U8(ctx.r11.u32 + 217, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-16384
	ctx.r10.s64 = -16384;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 208);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r11,r11,31,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,46
	ctx.r11.s64 = ctx.r11.s64 + 46;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// bl 0x820def00
	ctx.lr = 0x8210DC10;
	sub_820DEF00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82114778) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82114834
	if (ctx.cr6.lt) goto loc_82114834;
	// b 0x82114860
	goto loc_82114860;
loc_82114834:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
loc_82114860:
	// bl 0x820f7ba0
	ctx.lr = 0x82114864;
	sub_820F7BA0(ctx, base);
	// bl 0x820f7ea0
	ctx.lr = 0x82114868;
	sub_820F7EA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211B580) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,58(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 58);
	// sth r11,58(r10)
	REX_STORE_U16(ctx.r10.u32 + 58, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,130(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 130);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// sth r11,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// bl 0x8211aff0
	ctx.lr = 0x8211B644;
	sub_8211AFF0(ctx, base);
	// bl 0x8211b040
	ctx.lr = 0x8211B648;
	sub_8211B040(ctx, base);
	// bl 0x8211b228
	ctx.lr = 0x8211B64C;
	sub_8211B228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82121AA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-16528
	ctx.r10.s64 = ctx.r10.s64 + -16528;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r11,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// lbz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82121b38
	if (!ctx.cr6.lt) goto loc_82121B38;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -16);
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
loc_82121B38:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5416
	ctx.r11.s64 = ctx.r11.s64 + 5416;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212D588) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-15540
	ctx.r10.s64 = ctx.r10.s64 + -15540;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212D5D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82131DC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5428
	ctx.r11.s64 = ctx.r11.s64 + 5428;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820f7d10
	ctx.lr = 0x82131DF0;
	sub_820F7D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82132F38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8210a2b8
	ctx.lr = 0x82132F48;
	sub_8210A2B8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82132ff8
	if (ctx.cr6.eq) goto loc_82132FF8;
	// b 0x82133024
	goto loc_82133024;
loc_82132FF8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
loc_82133024:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82139268) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82139324
	if (ctx.cr6.eq) goto loc_82139324;
	// b 0x82139390
	goto loc_82139390;
loc_82139324:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,15(r11)
	REX_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5268
	ctx.r11.s64 = ctx.r11.s64 + 5268;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820f7d10
	ctx.lr = 0x82139390;
	sub_820F7D10(ctx, base);
loc_82139390:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821424E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-13280
	ctx.r10.s64 = ctx.r10.s64 + -13280;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82145080) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,298(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 298);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821450ac
	if (ctx.cr6.eq) goto loc_821450AC;
	// bl 0x821295a0
	ctx.lr = 0x821450A8;
	sub_821295A0(ctx, base);
	// b 0x821450f8
	goto loc_821450F8;
loc_821450AC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-12992
	ctx.r10.s64 = ctx.r10.s64 + -12992;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821450DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821450f8
	if (ctx.cr6.eq) goto loc_821450F8;
	// bl 0x820f7ea0
	ctx.lr = 0x821450F8;
	sub_820F7EA0(ctx, base);
loc_821450F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214B0B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5188
	ctx.r11.s64 = ctx.r11.s64 + 5188;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820f7d10
	ctx.lr = 0x8214B114;
	sub_820F7D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214EBB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820f7d10
	ctx.lr = 0x8214EC88;
	sub_820F7D10(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8214e8f8
	ctx.lr = 0x8214EC9C;
	sub_8214E8F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82155868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821557e8
	ctx.lr = 0x82155888;
	sub_821557E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82155D50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,87
	ctx.r4.s64 = 87;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155a00
	ctx.lr = 0x82155D70;
	sub_82155A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82156780) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,166(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 166);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821567a8
	if (ctx.cr6.eq) goto loc_821567A8;
	// b 0x821567c0
	goto loc_821567C0;
loc_821567A8:
	// bl 0x821558e8
	ctx.lr = 0x821567AC;
	sub_821558E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1297
	ctx.r4.s64 = 1297;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155a00
	ctx.lr = 0x821567C0;
	sub_82155A00(ctx, base);
loc_821567C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157798) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82155770
	ctx.lr = 0x821577A8;
	sub_82155770(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155a00
	ctx.lr = 0x821577C4;
	sub_82155A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215B3E8) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215D050) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19744
	ctx.r11.s64 = ctx.r11.s64 + -19744;
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d0a0
	if (ctx.cr0.eq) goto loc_8215D0A0;
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d090
	if (!ctx.cr6.eq) goto loc_8215D090;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,4896
	ctx.r11.s64 = ctx.r11.s64 + 4896;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215d0f4
	goto loc_8215D0F4;
loc_8215D090:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,4900
	ctx.r11.s64 = ctx.r11.s64 + 4900;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215d0f4
	goto loc_8215D0F4;
loc_8215D0A0:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7104
	ctx.r11.s64 = ctx.r11.s64 + 7104;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d0d8
	if (ctx.cr0.eq) goto loc_8215D0D8;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,7112
	ctx.r10.s64 = ctx.r10.s64 + 7112;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8215d0f4
	goto loc_8215D0F4;
loc_8215D0D8:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8215D0F4:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82162DD8) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r11,100
	ctx.r11.s64 = 100;
	// stb r11,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// li r11,100
	ctx.r11.s64 = 100;
	// stb r11,-15(r1)
	REX_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// li r11,80
	ctx.r11.s64 = 80;
	// stb r11,-14(r1)
	REX_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r11,60
	ctx.r11.s64 = 60;
	// stb r11,-13(r1)
	REX_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// li r11,30
	ctx.r11.s64 = 30;
	// stb r11,-12(r1)
	REX_STORE_U8(ctx.r1.u32 + -12, ctx.r11.u8);
	// li r11,30
	ctx.r11.s64 = 30;
	// stb r11,-11(r1)
	REX_STORE_U8(ctx.r1.u32 + -11, ctx.r11.u8);
	// li r11,20
	ctx.r11.s64 = 20;
	// stb r11,-10(r1)
	REX_STORE_U8(ctx.r1.u32 + -10, ctx.r11.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r11,-9(r1)
	REX_STORE_U8(ctx.r1.u32 + -9, ctx.r11.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,-8(r1)
	REX_STORE_U8(ctx.r1.u32 + -8, ctx.r11.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,-7(r1)
	REX_STORE_U8(ctx.r1.u32 + -7, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-6(r1)
	REX_STORE_U8(ctx.r1.u32 + -6, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-13760
	ctx.r11.s64 = ctx.r11.s64 + -13760;
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82162e5c
	if (ctx.cr0.eq) goto loc_82162E5C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x82162ea8
	if (ctx.cr6.lt) goto loc_82162EA8;
loc_82162E5C:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,9(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,232
	ctx.r10.s64 = ctx.r10.s64 + 232;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// sth r11,32(r10)
	REX_STORE_U16(ctx.r10.u32 + 32, ctx.r11.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82162ea4
	if (!ctx.cr6.lt) goto loc_82162EA4;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r10,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
loc_82162EA4:
	// b 0x82162ecc
	goto loc_82162ECC;
loc_82162EA8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// sth r11,32(r10)
	REX_STORE_U16(ctx.r10.u32 + 32, ctx.r11.u16);
loc_82162ECC:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r11,34(r10)
	REX_STORE_U16(ctx.r10.u32 + 34, ctx.r11.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r11,66(r10)
	REX_STORE_U16(ctx.r10.u32 + 66, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82171F20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15440
	ctx.r10.s64 = ctx.r10.s64 + 15440;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82173F00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,10600
	ctx.r10.s64 = ctx.r10.s64 + 10600;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173f34
	if (ctx.cr6.eq) goto loc_82173F34;
	// b 0x8217400c
	goto loc_8217400C;
loc_82173F34:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,23(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173f48
	if (ctx.cr6.eq) goto loc_82173F48;
	// b 0x8217400c
	goto loc_8217400C;
loc_82173F48:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,21(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82173f6c
	if (ctx.cr6.lt) goto loc_82173F6C;
	// b 0x8217400c
	goto loc_8217400C;
loc_82173F6C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,17(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217400c
	if (ctx.cr6.eq) goto loc_8217400C;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173fb4
	if (!ctx.cr6.eq) goto loc_82173FB4;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,21(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x82173fb4
	if (!ctx.cr6.lt) goto loc_82173FB4;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,21(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
loc_82173FB4:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,22(r10)
	REX_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,21(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8217400c
	if (!ctx.cr6.eq) goto loc_8217400C;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,23204
	ctx.r10.s64 = ctx.r10.s64 + 23204;
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215d8e0
	ctx.lr = 0x8217400C;
	sub_8215D8E0(ctx, base);
loc_8217400C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217ADA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8217ade4
	if (ctx.cr6.eq) goto loc_8217ADE4;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2329(r11)
	REX_STORE_U8(ctx.r11.u32 + 2329, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2336(r11)
	REX_STORE_U8(ctx.r11.u32 + 2336, ctx.r10.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821788c8
	ctx.lr = 0x8217ADE0;
	sub_821788C8(ctx, base);
	// b 0x8217adec
	goto loc_8217ADEC;
loc_8217ADE4:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821786e0
	ctx.lr = 0x8217ADEC;
	sub_821786E0(ctx, base);
loc_8217ADEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217BDA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217be00
	if (ctx.cr0.eq) goto loc_8217BE00;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,6568
	ctx.r11.s64 = ctx.r11.s64 + 6568;
	// lwz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82162ef0
	ctx.lr = 0x8217BDE4;
	sub_82162EF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,38(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,125(r10)
	REX_STORE_U8(ctx.r10.u32 + 125, ctx.r11.u8);
	// b 0x8217be8c
	goto loc_8217BE8C;
loc_8217BE00:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,97(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 97);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,6568
	ctx.r10.s64 = ctx.r10.s64 + 6568;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82162ef0
	ctx.lr = 0x8217BE24;
	sub_82162EF0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,125(r10)
	REX_STORE_U8(ctx.r10.u32 + 125, ctx.r11.u8);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8217be8c
	if (!ctx.cr6.eq) goto loc_8217BE8C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// li r10,4
	ctx.r10.s64 = 4;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217be8c
	if (ctx.cr0.eq) goto loc_8217BE8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,38(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,125(r10)
	REX_STORE_U8(ctx.r10.u32 + 125, ctx.r11.u8);
loc_8217BE8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218CF60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8218cdc8
	ctx.lr = 0x8218CF7C;
	sub_8218CDC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E430) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-24184
	ctx.r11.s64 = ctx.r11.s64 + -24184;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8218e478
	if (!ctx.cr0.eq) goto loc_8218E478;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-24184
	ctx.r11.s64 = ctx.r11.s64 + -24184;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-24184
	ctx.r10.s64 = ctx.r10.s64 + -24184;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-30064
	ctx.r3.s64 = ctx.r11.s64 + -30064;
	// bl 0x8219caa0
	ctx.lr = 0x8218E478;
	sub_8219CAA0(ctx, base);
loc_8218E478:
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-30064
	ctx.r3.s64 = ctx.r11.s64 + -30064;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218F680) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x821c4a50
	ctx.lr = 0x8218F6A0;
	sub_821C4A50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218f6f0
	if (ctx.cr0.eq) goto loc_8218F6F0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-384
	ctx.r10.s64 = ctx.r10.s64 + -384;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218f6f0
	if (ctx.cr6.eq) goto loc_8218F6F0;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// lis r9,-32074
	ctx.r9.s64 = -2102001664;
	// addi r9,r9,-384
	ctx.r9.s64 = ctx.r9.s64 + -384;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82272590
	ctx.lr = 0x8218F6F0;
	sub_82272590(ctx, base);
loc_8218F6F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82193B68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r11,r11,9644
	ctx.r11.s64 = ctx.r11.s64 + 9644;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820f7128
	ctx.lr = 0x82193BA0;
	sub_820F7128(ctx, base);
	// bl 0x82155960
	ctx.lr = 0x82193BA4;
	sub_82155960(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82193bd0
	if (!ctx.cr6.lt) goto loc_82193BD0;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,7064
	ctx.r10.s64 = ctx.r10.s64 + 7064;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82193BD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82193be8
	goto loc_82193BE8;
loc_82193BDC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82193BE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82193c94
	if (!ctx.cr6.lt) goto loc_82193C94;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82193c24
	if (ctx.cr6.eq) goto loc_82193C24;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82193c90
	if (!ctx.cr6.eq) goto loc_82193C90;
loc_82193C24:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82193c50
	if (!ctx.cr6.eq) goto loc_82193C50;
	// li r5,7
	ctx.r5.s64 = 7;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r11,32769
	ctx.r4.u64 = ctx.r11.u64 | 32769;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82235730
	ctx.lr = 0x82193C4C;
	sub_82235730(ctx, base);
	// b 0x82193c90
	goto loc_82193C90;
loc_82193C50:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82193c7c
	if (!ctx.cr6.eq) goto loc_82193C7C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r11,32769
	ctx.r4.u64 = ctx.r11.u64 | 32769;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82235730
	ctx.lr = 0x82193C78;
	sub_82235730(ctx, base);
	// b 0x82193c90
	goto loc_82193C90;
loc_82193C7C:
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r11,32769
	ctx.r4.u64 = ctx.r11.u64 | 32769;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82235730
	ctx.lr = 0x82193C90;
	sub_82235730(ctx, base);
loc_82193C90:
	// b 0x82193bdc
	goto loc_82193BDC;
loc_82193C94:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27465
	ctx.r11.s64 = ctx.r11.s64 + -27465;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27465
	ctx.r11.s64 = ctx.r11.s64 + -27465;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r10,r10,-27462
	ctx.r10.s64 = ctx.r10.s64 + -27462;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27462
	ctx.r11.s64 = ctx.r11.s64 + -27462;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r10,r10,-31130
	ctx.r10.s64 = ctx.r10.s64 + -31130;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,345(r11)
	REX_STORE_U8(ctx.r11.u32 + 345, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,346(r11)
	REX_STORE_U8(ctx.r11.u32 + 346, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,143(r11)
	REX_STORE_U8(ctx.r11.u32 + 143, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,141(r11)
	REX_STORE_U8(ctx.r11.u32 + 141, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,172(r11)
	REX_STORE_U8(ctx.r11.u32 + 172, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,173(r11)
	REX_STORE_U8(ctx.r11.u32 + 173, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,171(r11)
	REX_STORE_U8(ctx.r11.u32 + 171, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,216(r11)
	REX_STORE_U8(ctx.r11.u32 + 216, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,131(r11)
	REX_STORE_U8(ctx.r11.u32 + 131, ctx.r10.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29416
	ctx.r11.s64 = ctx.r11.s64 + -29416;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29416
	ctx.r11.s64 = ctx.r11.s64 + -29416;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,296(r11)
	REX_STORE_U16(ctx.r11.u32 + 296, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,240
	ctx.r10.s64 = 240;
	// sth r10,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,38(r11)
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,42(r11)
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,166(r10)
	REX_STORE_U8(ctx.r10.u32 + 166, ctx.r11.u8);
	// bl 0x820fd2c0
	ctx.lr = 0x82193F14;
	sub_820FD2C0(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-24586
	ctx.r11.s64 = ctx.r11.s64 + -24586;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19248
	ctx.r11.s64 = ctx.r11.s64 + -19248;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19248
	ctx.r11.s64 = ctx.r11.s64 + -19248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82193f70
	if (!ctx.cr6.eq) goto loc_82193F70;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,168(r11)
	REX_STORE_U8(ctx.r11.u32 + 168, ctx.r10.u8);
	// b 0x82193f84
	goto loc_82193F84;
loc_82193F70:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,168(r11)
	REX_STORE_U8(ctx.r11.u32 + 168, ctx.r10.u8);
loc_82193F84:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// lbz r11,66(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 66);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,144(r10)
	REX_STORE_U16(ctx.r10.u32 + 144, ctx.r11.u16);
	// bl 0x8207b7a8
	ctx.lr = 0x82193FA8;
	sub_8207B7A8(ctx, base);
	// bl 0x8219de78
	ctx.lr = 0x82193FAC;
	sub_8219DE78(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,222(r10)
	REX_STORE_U8(ctx.r10.u32 + 222, ctx.r11.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-2314
	ctx.r11.s64 = ctx.r11.s64 + -2314;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7081
	ctx.r11.s64 = ctx.r11.s64 + 7081;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82194004
	if (!ctx.cr6.eq) goto loc_82194004;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24352
	ctx.r3.s64 = ctx.r11.s64 + 24352;
	// bl 0x82040be0
	ctx.lr = 0x82194000;
	sub_82040BE0(ctx, base);
	// b 0x82194010
	goto loc_82194010;
loc_82194004:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24936
	ctx.r3.s64 = ctx.r11.s64 + 24936;
	// bl 0x82040be0
	ctx.lr = 0x82194010;
	sub_82040BE0(ctx, base);
loc_82194010:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AD498) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21600(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21600);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821ad4fc
	if (ctx.cr6.eq) goto loc_821AD4FC;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x821ad4d8
	if (!ctx.cr6.eq) goto loc_821AD4D8;
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24132);
	// b 0x821ad4f4
	goto loc_821AD4F4;
loc_821AD4D8:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,21400
	ctx.r11.s64 = ctx.r11.s64 + 21400;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r3,24132(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24132);
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_821AD4F4:
	// bl 0x82217c30
	ctx.lr = 0x821AD4F8;
	sub_82217C30(ctx, base);
	// stw r31,21600(r30)
	REX_STORE_U32(ctx.r30.u32 + 21600, ctx.r31.u32);
loc_821AD4FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AFD40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x821AFD48;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,21319
	ctx.r11.s64 = 1397161984;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ori r9,r11,12849
	ctx.r9.u64 = ctx.r11.u64 | 12849;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// bne cr6,0x821afda0
	if (!ctx.cr6.eq) goto loc_821AFDA0;
	// lis r9,22612
	ctx.r9.s64 = 1481900032;
	// ori r9,r9,12336
	ctx.r9.u64 = ctx.r9.u64 | 12336;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821afda0
	if (!ctx.cr6.eq) goto loc_821AFDA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821afe3c
	goto loc_821AFE3C;
loc_821AFDA0:
	// rlwinm r6,r10,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r31,84
	ctx.r31.s64 = 84;
	// li r30,88
	ctx.r30.s64 = 88;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// rlwinm r4,r11,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r10,83
	ctx.r10.s64 = 83;
	// rlwinm r5,r11,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// rlwinm r3,r11,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r29,49
	ctx.r29.s64 = 49;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r28,50
	ctx.r28.s64 = 50;
	// li r27,71
	ctx.r27.s64 = 71;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// extsb r7,r5
	ctx.r7.s64 = ctx.r5.s8;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// addi r4,r11,20536
	ctx.r4.s64 = ctx.r11.s64 + 20536;
	// extsb r8,r31
	ctx.r8.s64 = ctx.r31.s8;
	// extsb r6,r30
	ctx.r6.s64 = ctx.r30.s8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8219f938
	ctx.lr = 0x821AFE38;
	sub_8219F938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AFE3C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821BB050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821BB058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821bb08c
	if (!ctx.cr6.gt) goto loc_821BB08C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r11,22168
	ctx.r30.s64 = ctx.r11.s64 + 22168;
loc_821BB078:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82274f08
	ctx.lr = 0x821BB084;
	sub_82274F08(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821bb078
	if (!ctx.cr0.eq) goto loc_821BB078;
loc_821BB08C:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb0a0
	if (ctx.cr6.eq) goto loc_821BB0A0;
	// lwz r5,32(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// b 0x821bb0a8
	goto loc_821BB0A8;
loc_821BB0A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,15755
	ctx.r5.s64 = ctx.r11.s64 + 15755;
loc_821BB0A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,22156
	ctx.r4.s64 = ctx.r11.s64 + 22156;
	// bl 0x82274cc8
	ctx.lr = 0x821BB0B8;
	sub_82274CC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821BC688) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x821bc050
	ctx.lr = 0x821BC69C;
	sub_821BC050(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc6c4
	if (ctx.cr0.eq) goto loc_821BC6C4;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc6b8
	if (ctx.cr6.eq) goto loc_821BC6B8;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x821bc6c8
	goto loc_821BC6C8;
loc_821BC6B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15755
	ctx.r3.s64 = ctx.r11.s64 + 15755;
	// b 0x821bc6c8
	goto loc_821BC6C8;
loc_821BC6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC6C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF378) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821BF380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bf47c
	if (ctx.cr6.eq) goto loc_821BF47C;
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 600);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x821bf47c
	if (!ctx.cr6.lt) goto loc_821BF47C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821bf3dc
	if (!ctx.cr6.lt) goto loc_821BF3DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,216
	ctx.r10.s64 = ctx.r31.s64 + 216;
loc_821BF3B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x821bf3d0
	if (ctx.cr6.lt) goto loc_821BF3D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821bf3b0
	if (ctx.cr6.lt) goto loc_821BF3B0;
	// b 0x821bf3d4
	goto loc_821BF3D4;
loc_821BF3D0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821BF3D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x821bf47c
	if (ctx.cr6.lt) goto loc_821BF47C;
loc_821BF3DC:
	// mulli r11,r30,96
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(96));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,216
	ctx.r29.s64 = ctx.r11.s64 + 216;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821bf47c
	if (!ctx.cr6.lt) goto loc_821BF47C;
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf420
	if (ctx.cr6.eq) goto loc_821BF420;
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821bf420
	if (!ctx.cr6.lt) goto loc_821BF420;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// b 0x821bf440
	goto loc_821BF440;
loc_821BF420:
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821bf43c
	if (!ctx.cr6.lt) goto loc_821BF43C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// b 0x821bf440
	goto loc_821BF440;
loc_821BF43C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821BF440:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bf47c
	if (ctx.cr0.eq) goto loc_821BF47C;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82272590
	ctx.lr = 0x821BF454;
	sub_82272590(ctx, base);
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 600);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 600);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,600(r31)
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// b 0x821bf480
	goto loc_821BF480;
loc_821BF47C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821BF480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C4988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821c1c00
	ctx.lr = 0x821C49A0;
	sub_821C1C00(ctx, base);
	// b 0x821c49c8
	goto loc_821C49C8;
loc_821C49A4:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x821c32c0
	ctx.lr = 0x821C49AC;
	sub_821C32C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c49c0
	if (ctx.cr0.eq) goto loc_821C49C0;
	// lwz r11,52(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 52);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821c49f0
	if (ctx.cr6.eq) goto loc_821C49F0;
loc_821C49C0:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x821c1c30
	ctx.lr = 0x821C49C8;
	sub_821C1C30(ctx, base);
loc_821C49C8:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x821c1d68
	ctx.lr = 0x821C49D0;
	sub_821C1D68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c49a4
	if (!ctx.cr0.eq) goto loc_821C49A4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C49DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821C49F0:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x821c49dc
	goto loc_821C49DC;
}

DEFINE_REX_FUNC(sub_821C7C40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,15248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15248);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f0,f2,f0,f1
	ctx.f0.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f0.f64, -ctx.f1.f64)));
	// lfs f13,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f0,f0,f13
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C8AE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,12472
	ctx.r11.s64 = ctx.r11.s64 + 12472;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_821C8B04:
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// beq cr6,0x821c8b48
	if (ctx.cr6.eq) goto loc_821C8B48;
	// lwz r10,-8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821c8b48
	if (ctx.cr6.lt) goto loc_821C8B48;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821c8b48
	if (!ctx.cr6.eq) goto loc_821C8B48;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x821c8b48
	if (!ctx.cr6.lt) goto loc_821C8B48;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r7,r10,r4
	REX_STORE_U64(ctx.r10.u32 + ctx.r4.u32, ctx.r7.u64);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_821C8B48:
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// addi r10,r11,648
	ctx.r10.s64 = ctx.r11.s64 + 648;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821c8b04
	if (ctx.cr6.lt) goto loc_821C8B04;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CB0B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821ca938
	ctx.lr = 0x821CB0D4;
	sub_821CA938(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821cb120
	if (ctx.cr0.eq) goto loc_821CB120;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821cb108
	if (!ctx.cr0.eq) goto loc_821CB108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cdd90
	ctx.lr = 0x821CB0F0;
	sub_821CDD90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,32640
	ctx.r11.s64 = ctx.r11.s64 + 32640;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821d3be8
	ctx.lr = 0x821CB104;
	sub_821D3BE8(ctx, base);
	// b 0x821cb120
	goto loc_821CB120;
loc_821CB108:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821edf18
	ctx.lr = 0x821CB110;
	sub_821EDF18(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x821edf10
	ctx.lr = 0x821CB118;
	sub_821EDF10(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x821ee400
	ctx.lr = 0x821CB120;
	sub_821EE400(ctx, base);
loc_821CB120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CD820) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821cd370
	ctx.lr = 0x821CD830;
	sub_821CD370(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821cd844
	if (ctx.cr0.eq) goto loc_821CD844;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,27868(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 27868);
	// bl 0x821d0b98
	ctx.lr = 0x821CD844;
	sub_821D0B98(ctx, base);
loc_821CD844:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CE4A0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821CE4AC:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x821ce4c0
	if (!ctx.cr6.eq) goto loc_821CE4C0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821ce4f0
	if (ctx.cr6.eq) goto loc_821CE4F0;
loc_821CE4C0:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821ce4d4
	if (!ctx.cr6.eq) goto loc_821CE4D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821CE4D4:
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ce4f8
	if (ctx.cr6.eq) goto loc_821CE4F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821ce4ac
	goto loc_821CE4AC;
loc_821CE4F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821CE4F8:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// stwx r7,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// divw r6,r8,r9
	ctx.r6.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwzx r3,r7,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D51B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x821D51B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D51CC;
	sub_821D4D48(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D51DC;
	sub_821D4D48(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D51EC;
	sub_821D4D48(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D51FC;
	sub_821D4D48(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D520C;
	sub_821D4D48(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D521C;
	sub_821D4D48(ctx, base);
	// li r5,67
	ctx.r5.s64 = 67;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D522C;
	sub_821D4D48(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D523C;
	sub_821D4D48(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D524C;
	sub_821D4D48(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D525C;
	sub_821D4D48(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D526C;
	sub_821D4D48(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4d48
	ctx.lr = 0x821D527C;
	sub_821D4D48(ctx, base);
	// addi r10,r31,556
	ctx.r10.s64 = ctx.r31.s64 + 556;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r31,568
	ctx.r10.s64 = ctx.r31.s64 + 568;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,580
	ctx.r10.s64 = ctx.r31.s64 + 580;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,592
	ctx.r10.s64 = ctx.r31.s64 + 592;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,640
	ctx.r10.s64 = ctx.r31.s64 + 640;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// li r30,14
	ctx.r30.s64 = 14;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,604
	ctx.r10.s64 = ctx.r31.s64 + 604;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r28,16
	ctx.r28.s64 = 16;
	// li r27,17
	ctx.r27.s64 = 17;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,616
	ctx.r10.s64 = ctx.r31.s64 + 616;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,628
	ctx.r10.s64 = ctx.r31.s64 + 628;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,652
	ctx.r10.s64 = ctx.r31.s64 + 652;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// li r3,21
	ctx.r3.s64 = 21;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,664
	ctx.r10.s64 = ctx.r31.s64 + 664;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,676
	ctx.r10.s64 = ctx.r31.s64 + 676;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,688
	ctx.r10.s64 = ctx.r31.s64 + 688;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,700
	ctx.r10.s64 = ctx.r31.s64 + 700;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r31,712
	ctx.r10.s64 = ctx.r31.s64 + 712;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r31,724
	ctx.r11.s64 = ctx.r31.s64 + 724;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r31,736
	ctx.r11.s64 = ctx.r31.s64 + 736;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r31,748
	ctx.r11.s64 = ctx.r31.s64 + 748;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E6480) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821E6488;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6504
	if (ctx.cr6.eq) goto loc_821E6504;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-24956
	ctx.r29.s64 = ctx.r11.s64 + -24956;
loc_821E64A8:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x821e64c0
	if (ctx.cr6.eq) goto loc_821E64C0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x821e64f8
	goto loc_821E64F8;
loc_821E64C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82272a90
	ctx.lr = 0x821E64CC;
	sub_82272A90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e64dc
	if (ctx.cr0.eq) goto loc_821E64DC;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// b 0x821e64e0
	goto loc_821E64E0;
loc_821E64DC:
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
loc_821E64E0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82272c38
	ctx.lr = 0x821E64F0;
	sub_82272C38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e64e0
	if (!ctx.cr0.eq) goto loc_821E64E0;
loc_821E64F8:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e64a8
	if (!ctx.cr6.eq) goto loc_821E64A8;
loc_821E6504:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EB170) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821EB178;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821edcb8
	ctx.lr = 0x821EB18C;
	sub_821EDCB8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821eb204
	if (ctx.cr0.eq) goto loc_821EB204;
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821eb1f8
	if (ctx.cr0.eq) goto loc_821EB1F8;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// addi r29,r11,160
	ctx.r29.s64 = ctx.r11.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cfe70
	ctx.lr = 0x821EB1B4;
	sub_821CFE70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821cfe70
	ctx.lr = 0x821EB1C0;
	sub_821CFE70(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821eb1f8
	if (ctx.cr6.eq) goto loc_821EB1F8;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f11,12(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
loc_821EB1F8:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_821EB204:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821eb284
	if (ctx.cr0.eq) goto loc_821EB284;
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb278
	if (ctx.cr6.eq) goto loc_821EB278;
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// lwz r3,27868(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 27868);
	// bl 0x821d0fc8
	ctx.lr = 0x821EB22C;
	sub_821D0FC8(ctx, base);
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,344(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f12,348(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f13,132(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f12,136(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lwz r3,404(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,27868(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 27868);
	// bl 0x821d0b08
	ctx.lr = 0x821EB278;
	sub_821D0B08(ctx, base);
loc_821EB278:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_821EB284:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F1EF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e34
	ctx.lr = 0x821F1EF8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// bl 0x821c1d20
	ctx.lr = 0x821F1F20;
	sub_821C1D20(ctx, base);
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f2450
	if (!ctx.cr0.eq) goto loc_821F2450;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f1fb0
	if (!ctx.cr0.eq) goto loc_821F1FB0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r25,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821f1f58
	if (!ctx.cr0.eq) goto loc_821F1F58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-20260
	ctx.r3.s64 = ctx.r11.s64 + -20260;
	// bl 0x821d3be8
	ctx.lr = 0x821F1F50;
	sub_821D3BE8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821f2454
	goto loc_821F2454;
loc_821F1F58:
	// bl 0x821dda88
	ctx.lr = 0x821F1F5C;
	sub_821DDA88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821f1fa4
	if (!ctx.cr0.gt) goto loc_821F1FA4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821F1F68:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821d37d0
	ctx.lr = 0x821F1F74;
	sub_821D37D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f1f88
	if (ctx.cr0.eq) goto loc_821F1F88;
	// bl 0x821dda88
	ctx.lr = 0x821F1F84;
	sub_821DDA88(ctx, base);
	// b 0x821f1f8c
	goto loc_821F1F8C;
loc_821F1F88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_821F1F8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f1f9c
	if (!ctx.cr6.gt) goto loc_821F1F9C;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_821F1F9C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821f1f68
	if (!ctx.cr0.eq) goto loc_821F1F68;
loc_821F1FA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821F1FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c1d20
	ctx.lr = 0x821F1FB8;
	sub_821C1D20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r28,r11,18828
	ctx.r28.s64 = ctx.r11.s64 + 18828;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// beq 0x821f2074
	if (ctx.cr0.eq) goto loc_821F2074;
	// bl 0x821ce068
	ctx.lr = 0x821F1FD4;
	sub_821CE068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f2024
	if (!ctx.cr0.eq) goto loc_821F2024;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821ce068
	ctx.lr = 0x821F1FE8;
	sub_821CE068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f2024
	if (!ctx.cr0.eq) goto loc_821F2024;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821ce068
	ctx.lr = 0x821F1FFC;
	sub_821CE068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f201c
	if (!ctx.cr0.eq) goto loc_821F201C;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x821ce068
	ctx.lr = 0x821F2014;
	sub_821CE068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2028
	if (ctx.cr0.eq) goto loc_821F2028;
loc_821F201C:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x821f2028
	goto loc_821F2028;
loc_821F2024:
	// li r23,1
	ctx.r23.s64 = 1;
loc_821F2028:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821ce068
	ctx.lr = 0x821F2034;
	sub_821CE068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f2124
	if (!ctx.cr0.eq) goto loc_821F2124;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821ce068
	ctx.lr = 0x821F2048;
	sub_821CE068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f2124
	if (!ctx.cr0.eq) goto loc_821F2124;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821ce068
	ctx.lr = 0x821F205C;
	sub_821CE068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f211c
	if (!ctx.cr0.eq) goto loc_821F211C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821ce068
	ctx.lr = 0x821F2070;
	sub_821CE068(ctx, base);
	// b 0x821f2114
	goto loc_821F2114;
loc_821F2074:
	// bl 0x821cdfd8
	ctx.lr = 0x821F2078;
	sub_821CDFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f20c8
	if (!ctx.cr0.eq) goto loc_821F20C8;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821cdfd8
	ctx.lr = 0x821F208C;
	sub_821CDFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f20c8
	if (!ctx.cr0.eq) goto loc_821F20C8;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821cdfd8
	ctx.lr = 0x821F20A0;
	sub_821CDFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f20c0
	if (!ctx.cr0.eq) goto loc_821F20C0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x821cdfd8
	ctx.lr = 0x821F20B8;
	sub_821CDFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f20cc
	if (ctx.cr0.eq) goto loc_821F20CC;
loc_821F20C0:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x821f20cc
	goto loc_821F20CC;
loc_821F20C8:
	// li r23,1
	ctx.r23.s64 = 1;
loc_821F20CC:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821cdfd8
	ctx.lr = 0x821F20D8;
	sub_821CDFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f2124
	if (!ctx.cr0.eq) goto loc_821F2124;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821cdfd8
	ctx.lr = 0x821F20EC;
	sub_821CDFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f2124
	if (!ctx.cr0.eq) goto loc_821F2124;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821cdfd8
	ctx.lr = 0x821F2100;
	sub_821CDFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f211c
	if (!ctx.cr0.eq) goto loc_821F211C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821cdfd8
	ctx.lr = 0x821F2114;
	sub_821CDFD8(ctx, base);
loc_821F2114:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2128
	if (ctx.cr0.eq) goto loc_821F2128;
loc_821F211C:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x821f2128
	goto loc_821F2128;
loc_821F2124:
	// li r26,1
	ctx.r26.s64 = 1;
loc_821F2128:
	// clrlwi. r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x821f2198
	if (ctx.cr0.eq) goto loc_821F2198;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2148
	if (ctx.cr0.eq) goto loc_821F2148;
	// bl 0x821dda88
	ctx.lr = 0x821F2140;
	sub_821DDA88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821f214c
	goto loc_821F214C;
loc_821F2148:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_821F214C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// blt cr6,0x821f217c
	if (ctx.cr6.lt) goto loc_821F217C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2174
	if (ctx.cr0.eq) goto loc_821F2174;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// b 0x821f217c
	goto loc_821F217C;
loc_821F2174:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_821F217C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821f1dd0
	ctx.lr = 0x821F218C;
	sub_821F1DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f214c
	if (ctx.cr0.eq) goto loc_821F214C;
	// b 0x821f2200
	goto loc_821F2200;
loc_821F2198:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2200
	if (ctx.cr0.eq) goto loc_821F2200;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f21b8
	if (ctx.cr0.eq) goto loc_821F21B8;
	// bl 0x821dda88
	ctx.lr = 0x821F21B0;
	sub_821DDA88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821f21bc
	goto loc_821F21BC;
loc_821F21B8:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_821F21BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x821f21e8
	if (!ctx.cr0.lt) goto loc_821F21E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f21e4
	if (ctx.cr0.eq) goto loc_821F21E4;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x821f21e8
	goto loc_821F21E8;
loc_821F21E4:
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_821F21E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821f1dd0
	ctx.lr = 0x821F21F8;
	sub_821F1DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f21bc
	if (ctx.cr0.eq) goto loc_821F21BC;
loc_821F2200:
	// clrlwi. r29,r26,24
	ctx.r29.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x821f227c
	if (ctx.cr0.eq) goto loc_821F227C;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2234
	if (ctx.cr0.eq) goto loc_821F2234;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821d37d0
	ctx.lr = 0x821F2220;
	sub_821D37D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2234
	if (ctx.cr0.eq) goto loc_821F2234;
	// bl 0x821dda88
	ctx.lr = 0x821F2230;
	sub_821DDA88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821F2234:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bge 0x821f2260
	if (!ctx.cr0.lt) goto loc_821F2260;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f225c
	if (ctx.cr0.eq) goto loc_821F225C;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x821f2260
	goto loc_821F2260;
loc_821F225C:
	// stw r25,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
loc_821F2260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821f1dd0
	ctx.lr = 0x821F2270;
	sub_821F1DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2234
	if (ctx.cr0.eq) goto loc_821F2234;
	// b 0x821f22f8
	goto loc_821F22F8;
loc_821F227C:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f22f8
	if (ctx.cr0.eq) goto loc_821F22F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f22b0
	if (ctx.cr0.eq) goto loc_821F22B0;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821d37d0
	ctx.lr = 0x821F229C;
	sub_821D37D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f22b0
	if (ctx.cr0.eq) goto loc_821F22B0;
	// bl 0x821dda88
	ctx.lr = 0x821F22AC;
	sub_821DDA88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821F22B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// blt cr6,0x821f22e0
	if (ctx.cr6.lt) goto loc_821F22E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f22d8
	if (ctx.cr0.eq) goto loc_821F22D8;
	// stw r25,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// b 0x821f22e0
	goto loc_821F22E0;
loc_821F22D8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_821F22E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821f1dd0
	ctx.lr = 0x821F22F0;
	sub_821F1DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f22b0
	if (ctx.cr0.eq) goto loc_821F22B0;
loc_821F22F8:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821f2318
	if (!ctx.cr6.eq) goto loc_821F2318;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x821f23ec
	if (ctx.cr6.eq) goto loc_821F23EC;
loc_821F2318:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,-20320
	ctx.r3.s64 = ctx.r11.s64 + -20320;
	// bl 0x821d3be8
	ctx.lr = 0x821F2328;
	sub_821D3BE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x821f1dd0
	ctx.lr = 0x821F2338;
	sub_821F1DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2350
	if (ctx.cr0.eq) goto loc_821F2350;
	// lis r4,-2647
	ctx.r4.s64 = -173473792;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,52844
	ctx.r4.u64 = ctx.r4.u64 | 52844;
	// bl 0x821ed908
	ctx.lr = 0x821F2350;
	sub_821ED908(ctx, base);
loc_821F2350:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x821f1dd0
	ctx.lr = 0x821F2360;
	sub_821F1DD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x821f23dc
	if (ctx.cr0.eq) goto loc_821F23DC;
	// lis r4,28757
	ctx.r4.s64 = 1884618752;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,39137
	ctx.r4.u64 = ctx.r4.u64 | 39137;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ed908
	ctx.lr = 0x821F237C;
	sub_821ED908(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f2390
	if (ctx.cr6.eq) goto loc_821F2390;
	// lis r4,15029
	ctx.r4.s64 = 984940544;
	// ori r4,r4,30247
	ctx.r4.u64 = ctx.r4.u64 | 30247;
	// b 0x821f23a0
	goto loc_821F23A0;
loc_821F2390:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f23ac
	if (ctx.cr0.eq) goto loc_821F23AC;
	// lis r4,-11879
	ctx.r4.s64 = -778502144;
	// ori r4,r4,15551
	ctx.r4.u64 = ctx.r4.u64 | 15551;
loc_821F23A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ed908
	ctx.lr = 0x821F23AC;
	sub_821ED908(ctx, base);
loc_821F23AC:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f23c0
	if (ctx.cr0.eq) goto loc_821F23C0;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// ori r4,r4,4418
	ctx.r4.u64 = ctx.r4.u64 | 4418;
	// b 0x821f23d0
	goto loc_821F23D0;
loc_821F23C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821f23dc
	if (ctx.cr6.eq) goto loc_821F23DC;
	// lis r4,26917
	ctx.r4.s64 = 1764032512;
	// ori r4,r4,23514
	ctx.r4.u64 = ctx.r4.u64 | 23514;
loc_821F23D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ed908
	ctx.lr = 0x821F23DC;
	sub_821ED908(ctx, base);
loc_821F23DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
loc_821F23EC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f1dd0
	ctx.lr = 0x821F23F8;
	sub_821F1DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2414
	if (ctx.cr0.eq) goto loc_821F2414;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F2414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F2414:
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821cdfd8
	ctx.lr = 0x821F2420;
	sub_821CDFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2450
	if (ctx.cr0.eq) goto loc_821F2450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821f1dd0
	ctx.lr = 0x821F2438;
	sub_821F1DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2450
	if (ctx.cr0.eq) goto loc_821F2450;
	// lis r4,17368
	ctx.r4.s64 = 1138229248;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,10930
	ctx.r4.u64 = ctx.r4.u64 | 10930;
	// bl 0x821ed908
	ctx.lr = 0x821F2450;
	sub_821ED908(ctx, base);
loc_821F2450:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F2454:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82272e84
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8221CC08) {
	REX_FUNC_PROLOGUE();
	// stw r4,11876(r3)
	REX_STORE_U32(ctx.r3.u32 + 11876, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221CEC8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,10544(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10544(r3)
	REX_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221D6A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221DCF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 22;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,6064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82223170) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
loc_82223170:
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_8222317C:
	// mfmsr r8
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r9,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822231a0
	if (!ctx.cr6.eq) goto loc_822231A0;
	// stdcx. r10,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = reinterpret_cast<std::atomic<uint64_t>*>(REX_RAW_ADDR(ea))->compare_exchange_strong(ctx.reserved.u64, __builtin_bswap64(ctx.r10.u64), std::memory_order_acq_rel, std::memory_order_acquire);
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8222317c
	if (!ctx.cr0.eq) goto loc_8222317C;
	// b 0x822231a8
	goto loc_822231A8;
loc_822231A0:
	// stdcx. r9,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = reinterpret_cast<std::atomic<uint64_t>*>(REX_RAW_ADDR(ea))->compare_exchange_strong(ctx.reserved.u64, __builtin_bswap64(ctx.r9.u64), std::memory_order_acq_rel, std::memory_order_acquire);
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822231A8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82223170
	if (!ctx.cr6.eq) goto loc_82223170;
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82226D50) {
	REX_FUNC_PROLOGUE();
	// addis r11,r3,8178
	ctx.r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,0(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// eieio 
	std::atomic_thread_fence(std::memory_order_seq_cst);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822279D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82227a14
	if (ctx.cr6.eq) goto loc_82227A14;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822279d0
	ctx.lr = 0x822279F4;
	sub_822279D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8223a030
	ctx.lr = 0x82227A08;
	sub_8223A030(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223a030
	ctx.lr = 0x82227A14;
	sub_8223A030(ctx, base);
loc_82227A14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222B178) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x8222B180;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,17760
	ctx.r30.s64 = ctx.r11.s64 + 17760;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lwz r11,296(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8222b53c
	if (ctx.cr6.gt) goto loc_8222B53C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,10224
	ctx.r12.s64 = ctx.r12.s64 + 10224;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-20016
	ctx.r12.s64 = ctx.r12.s64 + -20016;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8222B2D8;
	case 1:
		goto loc_8222B308;
	case 2:
		goto loc_8222B1D0;
	case 3:
		goto loc_8222B214;
	case 4:
		goto loc_8222B208;
	case 5:
		goto loc_8222B368;
	case 6:
		goto loc_8222B3DC;
	case 7:
		goto loc_8222B46C;
	case 8:
		goto loc_8222B4D4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8222B1D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,10524
	ctx.r3.s64 = ctx.r11.s64 + 10524;
loc_8222B1D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8223a4b0
	ctx.lr = 0x8222B1E4;
	sub_8223A4B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8222b1f8
	if (!ctx.cr0.lt) goto loc_8222B1F8;
loc_8222B1EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B1F0:
	// stw r11,296(r30)
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
	// b 0x8222b53c
	goto loc_8222B53C;
loc_8222B1F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222b0f0
	ctx.lr = 0x8222B200;
	sub_8222B0F0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x8222b1f0
	goto loc_8222B1F0;
loc_8222B208:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,10508
	ctx.r3.s64 = ctx.r11.s64 + 10508;
	// b 0x8222b1d8
	goto loc_8222B1D8;
loc_8222B214:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822244b8
	ctx.lr = 0x8222B21C;
	sub_822244B8(ctx, base);
	// lwz r31,21508(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 21508);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8222b258
	if (ctx.cr0.eq) goto loc_8222B258;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,14848
	ctx.r4.s64 = ctx.r29.s64 + 14848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8336
	ctx.r3.s64 = ctx.r11.s64 + 8336;
	// bl 0x82231778
	ctx.lr = 0x8222B250;
	sub_82231778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21508(r29)
	REX_STORE_U32(ctx.r29.u32 + 21508, ctx.r11.u32);
loc_8222B258:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8223a538
	ctx.lr = 0x8222B260;
	sub_8223A538(ctx, base);
	// lwz r11,1312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1312);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b288
	if (ctx.cr0.eq) goto loc_8222B288;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,10500
	ctx.r4.s64 = ctx.r10.s64 + 10500;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B288:
	// lbz r11,10942(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 10942);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82228bb8
	ctx.lr = 0x8222B298;
	sub_82228BB8(ctx, base);
	// lbz r10,10941(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 10941);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b1ec
	if (ctx.cr0.eq) goto loc_8222B1EC;
	// rlwinm r10,r10,0,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// lwz r11,13416(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 13416);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,10941(r29)
	REX_STORE_U8(ctx.r29.u32 + 10941, ctx.r10.u8);
	// beq 0x8222b2c4
	if (ctx.cr0.eq) goto loc_8222B2C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B2C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B2C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,10304
	ctx.r3.s64 = ctx.r11.s64 + 10304;
	// bl 0x82226ce0
	ctx.lr = 0x8222B2D0;
	sub_82226CE0(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// b 0x8222b1ec
	goto loc_8222B1EC;
loc_8222B2D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822244b8
	ctx.lr = 0x8222B2E0;
	sub_822244B8(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8223a4b0
	ctx.lr = 0x8222B2F0;
	sub_8223A4B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222b1ec
	if (ctx.cr0.lt) goto loc_8222B1EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222b0f0
	ctx.lr = 0x8222B300;
	sub_8222B0F0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8222b1f0
	goto loc_8222B1F0;
loc_8222B308:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822244b8
	ctx.lr = 0x8222B310;
	sub_822244B8(ctx, base);
	// lwz r31,21508(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 21508);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8222b34c
	if (ctx.cr0.eq) goto loc_8222B34C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,14848
	ctx.r4.s64 = ctx.r29.s64 + 14848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8336
	ctx.r3.s64 = ctx.r11.s64 + 8336;
	// bl 0x82231778
	ctx.lr = 0x8222B344;
	sub_82231778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21508(r29)
	REX_STORE_U32(ctx.r29.u32 + 21508, ctx.r11.u32);
loc_8222B34C:
	// lbz r11,10942(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 10942);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82228bb8
	ctx.lr = 0x8222B35C;
	sub_82228BB8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8223a538
	ctx.lr = 0x8222B364;
	sub_8223A538(ctx, base);
	// b 0x8222b1ec
	goto loc_8222B1EC;
loc_8222B368:
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b3b4
	if (ctx.cr6.eq) goto loc_8222B3B4;
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b394
	if (ctx.cr0.eq) goto loc_8222B394;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222b3c8
	if (!ctx.cr0.eq) goto loc_8222B3C8;
loc_8222B394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222B398:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b1ec
	if (ctx.cr6.eq) goto loc_8222B1EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,10272
	ctx.r3.s64 = ctx.r11.s64 + 10272;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,296(r30)
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
	// b 0x8222b464
	goto loc_8222B464;
loc_8222B3B4:
	// lwz r11,1312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1312);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b394
	if (ctx.cr0.eq) goto loc_8222B394;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8222B3C8:
	// li r3,56
	ctx.r3.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B3D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222b398
	goto loc_8222B398;
loc_8222B3DC:
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222b408
	if (ctx.cr6.eq) goto loc_8222B408;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b42c
	if (ctx.cr0.eq) goto loc_8222B42C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b42c
	if (ctx.cr0.eq) goto loc_8222B42C;
	// b 0x8222b41c
	goto loc_8222B41C;
loc_8222B408:
	// lwz r11,1312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1312);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b42c
	if (ctx.cr0.eq) goto loc_8222B42C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8222B41C:
	// li r3,57
	ctx.r3.s64 = 57;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B42C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B42C:
	// lwz r11,1312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1312);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,296(r30)
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b45c
	if (ctx.cr0.eq) goto loc_8222B45C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,10260
	ctx.r4.s64 = ctx.r10.s64 + 10260;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B45C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B45C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,10236
	ctx.r3.s64 = ctx.r11.s64 + 10236;
loc_8222B464:
	// bl 0x82226ce0
	ctx.lr = 0x8222B468;
	sub_82226CE0(ctx, base);
	// b 0x8222b53c
	goto loc_8222B53C;
loc_8222B46C:
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b4ac
	if (ctx.cr6.eq) goto loc_8222B4AC;
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b498
	if (ctx.cr0.eq) goto loc_8222B498;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222b4c0
	if (!ctx.cr0.eq) goto loc_8222B4C0;
loc_8222B498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222B49C:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8222b1f0
	goto loc_8222B1F0;
loc_8222B4AC:
	// lwz r11,1312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1312);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b498
	if (ctx.cr0.eq) goto loc_8222B498;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8222B4C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,61
	ctx.r3.s64 = 61;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B4D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222b49c
	goto loc_8222B49C;
loc_8222B4D4:
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b56c
	if (ctx.cr6.eq) goto loc_8222B56C;
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b500
	if (ctx.cr0.eq) goto loc_8222B500;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222b580
	if (!ctx.cr0.eq) goto loc_8222B580;
loc_8222B500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222B504:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b53c
	if (ctx.cr6.eq) goto loc_8222B53C;
	// lwz r11,1312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1312);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,296(r30)
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b53c
	if (ctx.cr0.eq) goto loc_8222B53C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,10260
	ctx.r4.s64 = ctx.r10.s64 + 10260;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B53C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B53C:
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b594
	if (ctx.cr6.eq) goto loc_8222B594;
	// lwz r11,1728(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1728);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b5b8
	if (ctx.cr0.eq) goto loc_8222B5B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b5b8
	if (ctx.cr0.eq) goto loc_8222B5B8;
	// b 0x8222b5a8
	goto loc_8222B5A8;
loc_8222B56C:
	// lwz r11,1312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1312);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b500
	if (ctx.cr0.eq) goto loc_8222B500;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8222B580:
	// li r3,62
	ctx.r3.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222b504
	goto loc_8222B504;
loc_8222B594:
	// lwz r11,1312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1312);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b5b8
	if (ctx.cr0.eq) goto loc_8222B5B8;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8222B5A8:
	// lwz r4,16536(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 16536);
	// li r3,46
	ctx.r3.s64 = 46;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B5B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B5B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246730) {
	REX_FUNC_PROLOGUE();
	// b 0x8224bc00
	sub_8224BC00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246788) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822467B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822467c0
	if (ctx.cr6.lt) goto loc_822467C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_822467C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247580) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r30,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x822475e4
	if (ctx.cr6.eq) goto loc_822475E4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_822475E4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822495b8
	ctx.lr = 0x822475F0;
	sub_822495B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82247690
	if (ctx.cr6.lt) goto loc_82247690;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,28
	ctx.r4.s64 = 28;
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82247628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247640
	if (ctx.cr6.eq) goto loc_82247640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82245388
	ctx.lr = 0x8224763C;
	sub_82245388(ctx, base);
	// b 0x82247644
	goto loc_82247644;
loc_82247640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82247644:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// bne cr6,0x8224765c
	if (!ctx.cr6.eq) goto loc_8224765C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82247690
	goto loc_82247690;
loc_8224765C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82247674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82247690
	if (ctx.cr6.lt) goto loc_82247690;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82247690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82247690:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82254578) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e10
	ctx.lr = 0x82254580;
	__savegprlr_14(ctx, base);
	// addi r25,r3,13
	ctx.r25.s64 = ctx.r3.s64 + 13;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r20,r3,8
	ctx.r20.s64 = ctx.r3.s64 + 8;
	// lfs f13,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r17,r3,28
	ctx.r17.s64 = ctx.r3.s64 + 28;
	// addi r18,r3,24
	ctx.r18.s64 = ctx.r3.s64 + 24;
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// addi r19,r3,20
	ctx.r19.s64 = ctx.r3.s64 + 20;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// addi r23,r3,48
	ctx.r23.s64 = ctx.r3.s64 + 48;
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// addi r28,r3,52
	ctx.r28.s64 = ctx.r3.s64 + 52;
	// lwz r31,0(r18)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r5,0(r19)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f12,0(r23)
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subf r31,r9,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r9.u64;
	// subf r21,r11,r4
	ctx.r21.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r31,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r31.u32);
	// dcbt r0,r9
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r22,r3,36
	ctx.r22.s64 = ctx.r3.s64 + 36;
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-192
	ctx.r6.s64 = ctx.r1.s64 + -192;
	// vcfsx v0,v0,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r7,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r7.u64);
	// lfd f0,-176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r29,r1,-192
	ctx.r29.s64 = ctx.r1.s64 + -192;
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// li r30,0
	ctx.r30.s64 = 0;
	// vrefp v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx v0,0,r22
	temp.u32 = ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// fmul f12,f12,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f13,15144(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 15144);
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f13.u64);
	// fctidz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f13.u64);
	// vmulfp128 v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// ld r5,-192(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// lvlx v11,r29,r8
	temp.u32 = ctx.r29.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ld r26,-176(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lvlx v10,r7,r8
	temp.u32 = ctx.r7.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// vspltw v9,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vspltw v8,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v7,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// bge cr6,0x82254718
	if (!ctx.cr6.lt) goto loc_82254718;
loc_82254688:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82254718
	if (!ctx.cr6.gt) goto loc_82254718;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822546fc
	if (ctx.cr6.eq) goto loc_822546FC;
	// vspltisb v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x1)));
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// subf r6,r9,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vsr v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubfp v12,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcfux v13,v13,31
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vsldoi v12,v0,v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 12));
	// vmulfp128 v10,v13,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
loc_822546C4:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lvlx v13,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// vsldoi v11,v10,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r7,1024
	ctx.r7.s64 = ctx.r7.s64 + 1024;
	// lvlx v12,0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// vrlimi128 v13,v12,8,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 8));
	// vmsum3fp128 v13,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx v13,r0,r27
	ea = (ctx.r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// bne cr6,0x822546c4
	if (!ctx.cr6.eq) goto loc_822546C4;
loc_822546FC:
	// add r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 + ctx.r5.u64;
	// vaddfp v0,v0,v7
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// vadduwm v9,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// blt cr6,0x82254688
	if (ctx.cr6.lt) goto loc_82254688;
loc_82254718:
	// sradi r11,r5,63
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s64 >> 63;
	// addi r27,r21,-1
	ctx.r27.s64 = ctx.r21.s64 + -1;
	// sradi r8,r5,32
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s64 >> 32;
	// extsw r29,r27
	ctx.r29.s64 = ctx.r27.s32;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r29.s64, ctx.xer);
	// bge cr6,0x82254814
	if (!ctx.cr6.lt) goto loc_82254814;
loc_82254734:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8225487c
	if (ctx.cr6.eq) goto loc_8225487C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822547c8
	if (ctx.cr6.eq) goto loc_822547C8;
	// vspltisb v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x1)));
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// vsr v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubfp v12,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcfux v13,v13,31
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// vsldoi v12,v0,v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 12));
	// vmulfp128 v10,v13,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82254788:
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// vsldoi v11,v10,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lvlx v13,0,r16
	temp.u32 = ctx.r16.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvlx v12,0,r15
	temp.u32 = ctx.r15.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r6,1024
	ctx.r6.s64 = ctx.r6.s64 + 1024;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vrlimi128 v13,v12,8,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 8));
	// vmsum3fp128 v13,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx v13,r0,r14
	ea = (ctx.r14.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// bne cr6,0x82254788
	if (!ctx.cr6.eq) goto loc_82254788;
loc_822547C8:
	// add r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 + ctx.r5.u64;
	// vaddfp v0,v0,v7
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// vadduwm v9,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// sradi r11,r5,32
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s64 >> 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82254808
	if (ctx.cr6.eq) goto loc_82254808;
	// li r7,128
	ctx.r7.s64 = 128;
	// dcbt r7,r8
loc_82254808:
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r29.s64, ctx.xer);
	// blt cr6,0x82254734
	if (ctx.cr6.lt) goto loc_82254734;
loc_82254814:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8225487c
	if (ctx.cr6.eq) goto loc_8225487C;
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r29.s64, ctx.xer);
	// bne cr6,0x82254864
	if (!ctx.cr6.eq) goto loc_82254864;
	// mullw r8,r27,r10
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x8225487c
	if (ctx.cr6.eq) goto loc_8225487C;
	// subf r6,r28,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r28.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82254848:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lfsx f13,r6,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82254848
	if (!ctx.cr6.eq) goto loc_82254848;
	// b 0x8225487c
	goto loc_8225487C;
loc_82254864:
	// extsw r8,r21
	ctx.r8.s64 = ctx.r21.s32;
	// cmpd cr6,r11,r8
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r8.s64, ctx.xer);
	// ble cr6,0x8225487c
	if (!ctx.cr6.gt) goto loc_8225487C;
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rldicr r8,r8,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_8225487C:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stvewx v0,r0,r22
	ea = (ctx.r22.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rldicr r8,r11,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lbz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rotlwi r9,r8,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// std r11,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r11.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// bge cr6,0x822548d8
	if (!ctx.cr6.lt) goto loc_822548D8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822548D8:
	// lwz r8,0(r19)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r9,0(r18)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// subf r10,r8,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822548fc
	if (!ctx.cr6.lt) goto loc_822548FC;
	// stw r8,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r8.u32);
	// b 0x82272e60
	__restgprlr_14(ctx, base);
	return;
loc_822548FC:
	// stw r9,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r9.u32);
	// b 0x82272e60
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226D038) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x8226D040;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,368
	ctx.r31.s64 = ctx.r1.s64 + 368;
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi. r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8226d098
	if (!ctx.cr0.gt) goto loc_8226D098;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8226D074:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8226d074
	if (!ctx.cr0.eq) goto loc_8226D074;
loc_8226D098:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,4092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4092);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8226d0c8
	if (ctx.cr6.eq) goto loc_8226D0C8;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsx f0,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8226D0C8:
	// subfic r10,r9,65
	ctx.xer.ca = ctx.r9.u32 <= 65;
	ctx.r10.u64 = static_cast<uint64_t>(65) - ctx.r9.u64;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,-30344(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -30344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D0EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30344(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -30344);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226da38
	ctx.lr = 0x8226D114;
	sub_8226DA38(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,21176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21176);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,-17696(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17696);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,4088(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4088);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8226d15c
	if (!ctx.cr6.gt) goto loc_8226D15C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8226d160
	goto loc_8226D160;
loc_8226D15C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8226D160:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// ble 0x8226d1b8
	if (!ctx.cr0.gt) goto loc_8226D1B8;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8226D184:
	// srawi r8,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 15;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfsx f13,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f0,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8226d184
	if (!ctx.cr0.eq) goto loc_8226D184;
loc_8226D1B8:
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// srawi r11,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x8226d1e0
	if (ctx.cr6.lt) goto loc_8226D1E0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8226d204
	goto loc_8226D204;
loc_8226D1E0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f0,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f0,r8,r27
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r27.u32, temp.u32);
loc_8226D204:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_24) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_109) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_101) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227D7E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-17488
	ctx.r11.s64 = ctx.r11.s64 + -17488;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x828afb5c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227DB68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e40
	ctx.lr = 0x8227DB70;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bl 0x8227d940
	ctx.lr = 0x8227DB88;
	sub_8227D940(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// lis r27,-32063
	ctx.r27.s64 = -2101280768;
loc_8227DB98:
	// stw r28,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,10600(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 10600);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227dc10
	if (!ctx.cr6.lt) goto loc_8227DC10;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,10596(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 10596);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227dc04
	if (ctx.cr6.eq) goto loc_8227DC04;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227dbe4
	if (ctx.cr0.eq) goto loc_8227DBE4;
	// bl 0x82274ba0
	ctx.lr = 0x8227DBD4;
	sub_82274BA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8227dbe4
	if (ctx.cr6.eq) goto loc_8227DBE4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_8227DBE4:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x8227dc04
	if (ctx.cr6.lt) goto loc_8227DC04;
	// lwz r11,10596(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 10596);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82273808
	ctx.lr = 0x8227DBF8;
	sub_82273808(ctx, base);
	// lwz r11,10596(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 10596);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8227DC04:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8227db98
	goto loc_8227DB98;
loc_8227DC10:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x8227dc28
	ctx.lr = 0x8227DC1C;
	sub_8227DC28(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82272e90
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82285128) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8228514C:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x8228514c
	if (ctx.cr6.lt) goto loc_8228514C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,17920(r31)
	REX_STORE_U32(ctx.r31.u32 + 17920, ctx.r30.u32);
	// li r5,792
	ctx.r5.s64 = 792;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,17944
	ctx.r3.s64 = ctx.r31.s64 + 17944;
	// stw r11,17904(r31)
	REX_STORE_U32(ctx.r31.u32 + 17904, ctx.r11.u32);
	// bl 0x822724f0
	ctx.lr = 0x8228518C;
	sub_822724F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,18736(r31)
	REX_STORE_U32(ctx.r31.u32 + 18736, ctx.r30.u32);
	// stw r30,17940(r31)
	REX_STORE_U32(ctx.r31.u32 + 17940, ctx.r30.u32);
	// stw r30,17924(r31)
	REX_STORE_U32(ctx.r31.u32 + 17924, ctx.r30.u32);
	// lfs f0,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,18744(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 18744, temp.u32);
	// stw r11,18740(r31)
	REX_STORE_U32(ctx.r31.u32 + 18740, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r30,17928(r31)
	REX_STORE_U32(ctx.r31.u32 + 17928, ctx.r30.u32);
	// stw r30,17932(r31)
	REX_STORE_U32(ctx.r31.u32 + 17932, ctx.r30.u32);
	// addi r3,r11,6688
	ctx.r3.s64 = ctx.r11.s64 + 6688;
	// stw r30,17936(r31)
	REX_STORE_U32(ctx.r31.u32 + 17936, ctx.r30.u32);
	// bl 0x82285b98
	ctx.lr = 0x822851C4;
	sub_82285B98(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// bl 0x82284ec8
	ctx.lr = 0x822851D0;
	sub_82284EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828A3F70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,13(r10)
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,15(r10)
	REX_STORE_U8(ctx.r10.u32 + 15, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,17(r11)
	REX_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,19(r11)
	REX_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,22(r10)
	REX_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,28(r10)
	REX_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,29(r10)
	REX_STORE_U8(ctx.r10.u32 + 29, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,30(r10)
	REX_STORE_U8(ctx.r10.u32 + 30, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,31(r10)
	REX_STORE_U8(ctx.r10.u32 + 31, ctx.r11.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5488
	ctx.r11.s64 = ctx.r11.s64 + 5488;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r11.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5488
	ctx.r11.s64 = ctx.r11.s64 + 5488;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,33(r10)
	REX_STORE_U8(ctx.r10.u32 + 33, ctx.r11.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5488
	ctx.r11.s64 = ctx.r11.s64 + 5488;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,34(r10)
	REX_STORE_U8(ctx.r10.u32 + 34, ctx.r11.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5488
	ctx.r11.s64 = ctx.r11.s64 + 5488;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,37(r11)
	REX_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,41(r10)
	REX_STORE_U8(ctx.r10.u32 + 41, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,42(r10)
	REX_STORE_U8(ctx.r10.u32 + 42, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,43(r10)
	REX_STORE_U8(ctx.r10.u32 + 43, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,45(r11)
	REX_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,46(r11)
	REX_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,47(r11)
	REX_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,48(r10)
	REX_STORE_U8(ctx.r10.u32 + 48, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,49(r10)
	REX_STORE_U8(ctx.r10.u32 + 49, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,50(r10)
	REX_STORE_U8(ctx.r10.u32 + 50, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,51(r10)
	REX_STORE_U8(ctx.r10.u32 + 51, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,53(r11)
	REX_STORE_U8(ctx.r11.u32 + 53, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,54(r11)
	REX_STORE_U8(ctx.r11.u32 + 54, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,55(r11)
	REX_STORE_U8(ctx.r11.u32 + 55, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,56(r10)
	REX_STORE_U8(ctx.r10.u32 + 56, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,57(r10)
	REX_STORE_U8(ctx.r10.u32 + 57, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,58(r10)
	REX_STORE_U8(ctx.r10.u32 + 58, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,59(r10)
	REX_STORE_U8(ctx.r10.u32 + 59, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,60(r11)
	REX_STORE_U8(ctx.r11.u32 + 60, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,61(r11)
	REX_STORE_U8(ctx.r11.u32 + 61, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,62(r11)
	REX_STORE_U8(ctx.r11.u32 + 62, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,63(r11)
	REX_STORE_U8(ctx.r11.u32 + 63, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,64(r10)
	REX_STORE_U8(ctx.r10.u32 + 64, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,65(r10)
	REX_STORE_U8(ctx.r10.u32 + 65, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,66(r10)
	REX_STORE_U8(ctx.r10.u32 + 66, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,67(r10)
	REX_STORE_U8(ctx.r10.u32 + 67, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,68(r11)
	REX_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,69(r11)
	REX_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,70(r11)
	REX_STORE_U8(ctx.r11.u32 + 70, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,71(r11)
	REX_STORE_U8(ctx.r11.u32 + 71, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,72(r10)
	REX_STORE_U8(ctx.r10.u32 + 72, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,73(r10)
	REX_STORE_U8(ctx.r10.u32 + 73, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,74(r10)
	REX_STORE_U8(ctx.r10.u32 + 74, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,75(r10)
	REX_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,81(r11)
	REX_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,82(r11)
	REX_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,83(r11)
	REX_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,84(r10)
	REX_STORE_U8(ctx.r10.u32 + 84, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,85(r10)
	REX_STORE_U8(ctx.r10.u32 + 85, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,86(r10)
	REX_STORE_U8(ctx.r10.u32 + 86, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,87(r10)
	REX_STORE_U8(ctx.r10.u32 + 87, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,92(r10)
	REX_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,93(r10)
	REX_STORE_U8(ctx.r10.u32 + 93, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,94(r10)
	REX_STORE_U8(ctx.r10.u32 + 94, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,95(r10)
	REX_STORE_U8(ctx.r10.u32 + 95, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,96(r11)
	REX_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,97(r11)
	REX_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,98(r11)
	REX_STORE_U8(ctx.r11.u32 + 98, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,99(r11)
	REX_STORE_U8(ctx.r11.u32 + 99, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,100(r10)
	REX_STORE_U8(ctx.r10.u32 + 100, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,101(r10)
	REX_STORE_U8(ctx.r10.u32 + 101, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,102(r10)
	REX_STORE_U8(ctx.r10.u32 + 102, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,103(r10)
	REX_STORE_U8(ctx.r10.u32 + 103, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,104(r10)
	REX_STORE_U8(ctx.r10.u32 + 104, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,105(r10)
	REX_STORE_U8(ctx.r10.u32 + 105, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,106(r10)
	REX_STORE_U8(ctx.r10.u32 + 106, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3096
	ctx.r10.s64 = ctx.r10.s64 + 3096;
	// stb r11,107(r10)
	REX_STORE_U8(ctx.r10.u32 + 107, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,108(r11)
	REX_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,110(r11)
	REX_STORE_U8(ctx.r11.u32 + 110, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,111(r11)
	REX_STORE_U8(ctx.r11.u32 + 111, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,113(r11)
	REX_STORE_U8(ctx.r11.u32 + 113, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,114(r11)
	REX_STORE_U8(ctx.r11.u32 + 114, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,115(r11)
	REX_STORE_U8(ctx.r11.u32 + 115, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,116(r11)
	REX_STORE_U8(ctx.r11.u32 + 116, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,117(r11)
	REX_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,118(r11)
	REX_STORE_U8(ctx.r11.u32 + 118, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,119(r11)
	REX_STORE_U8(ctx.r11.u32 + 119, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,120(r11)
	REX_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,121(r11)
	REX_STORE_U8(ctx.r11.u32 + 121, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,122(r11)
	REX_STORE_U8(ctx.r11.u32 + 122, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,123(r11)
	REX_STORE_U8(ctx.r11.u32 + 123, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,124(r11)
	REX_STORE_U8(ctx.r11.u32 + 124, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,125(r11)
	REX_STORE_U8(ctx.r11.u32 + 125, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,126(r11)
	REX_STORE_U8(ctx.r11.u32 + 126, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,127(r11)
	REX_STORE_U8(ctx.r11.u32 + 127, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,129(r11)
	REX_STORE_U8(ctx.r11.u32 + 129, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,130(r11)
	REX_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,131(r11)
	REX_STORE_U8(ctx.r11.u32 + 131, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,132(r11)
	REX_STORE_U8(ctx.r11.u32 + 132, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,133(r11)
	REX_STORE_U8(ctx.r11.u32 + 133, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,134(r11)
	REX_STORE_U8(ctx.r11.u32 + 134, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,135(r11)
	REX_STORE_U8(ctx.r11.u32 + 135, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,136(r11)
	REX_STORE_U8(ctx.r11.u32 + 136, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,137(r11)
	REX_STORE_U8(ctx.r11.u32 + 137, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,139(r11)
	REX_STORE_U8(ctx.r11.u32 + 139, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,140(r11)
	REX_STORE_U8(ctx.r11.u32 + 140, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,141(r11)
	REX_STORE_U8(ctx.r11.u32 + 141, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,142(r11)
	REX_STORE_U8(ctx.r11.u32 + 142, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,143(r11)
	REX_STORE_U8(ctx.r11.u32 + 143, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,144(r11)
	REX_STORE_U8(ctx.r11.u32 + 144, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,145(r11)
	REX_STORE_U8(ctx.r11.u32 + 145, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,146(r11)
	REX_STORE_U8(ctx.r11.u32 + 146, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,148(r11)
	REX_STORE_U8(ctx.r11.u32 + 148, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,149(r11)
	REX_STORE_U8(ctx.r11.u32 + 149, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,150(r11)
	REX_STORE_U8(ctx.r11.u32 + 150, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,151(r11)
	REX_STORE_U8(ctx.r11.u32 + 151, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,152(r11)
	REX_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,153(r11)
	REX_STORE_U8(ctx.r11.u32 + 153, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,154(r11)
	REX_STORE_U8(ctx.r11.u32 + 154, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,155(r11)
	REX_STORE_U8(ctx.r11.u32 + 155, ctx.r10.u8);
	// blr 
	return;
}

