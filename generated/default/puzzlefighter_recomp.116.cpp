#include "puzzlefighter_funcs.116.h"

DEFINE_REX_FUNC(sub_82050760) {
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
	// stb r4,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// lbz r3,127(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 127);
	// bl 0x82050698
	ctx.lr = 0x8205077C;
	sub_82050698(ctx, base);
	// sth r3,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lbz r11,127(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 127);
	// mulli r11,r11,156
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(156));
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820507c0
	if (ctx.cr0.eq) goto loc_820507C0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820507b4
	if (ctx.cr6.eq) goto loc_820507B4;
	// bl 0x82155ac0
	ctx.lr = 0x820507B4;
	sub_82155AC0(ctx, base);
loc_820507B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820507c4
	goto loc_820507C4;
loc_820507C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820507C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820554B0) {
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
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82055508
	if (ctx.cr6.lt) goto loc_82055508;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82055548
	if (ctx.cr6.eq) goto loc_82055548;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82055640
	if (ctx.cr6.lt) goto loc_82055640;
	// b 0x820556a0
	goto loc_820556A0;
loc_82055508:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// bl 0x8205cb50
	ctx.lr = 0x82055520;
	sub_8205CB50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4124
	ctx.r11.s64 = ctx.r11.s64 + 4124;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8288
	ctx.r11.s64 = ctx.r11.s64 + 8288;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8284
	ctx.r11.s64 = ctx.r11.s64 + 8284;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82044610
	ctx.lr = 0x82055548;
	sub_82044610(ctx, base);
loc_82055548:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x82050b90
	ctx.lr = 0x82055568;
	sub_82050B90(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,18(r10)
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820506d8
	ctx.lr = 0x82055584;
	sub_820506D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8205560c
	if (ctx.cr0.eq) goto loc_8205560C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82055604
	if (ctx.cr6.eq) goto loc_82055604;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r11.u16);
	// bl 0x8205cb50
	ctx.lr = 0x820555D4;
	sub_8205CB50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4124
	ctx.r11.s64 = ctx.r11.s64 + 4124;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8280
	ctx.r11.s64 = ctx.r11.s64 + 8280;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8276
	ctx.r11.s64 = ctx.r11.s64 + 8276;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82044610
	ctx.lr = 0x820555FC;
	sub_82044610(ctx, base);
	// b 0x820556a0
	goto loc_820556A0;
loc_82055604:
	// b 0x8205561c
	goto loc_8205561C;
loc_8205560C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820507d8
	ctx.lr = 0x82055614;
	sub_820507D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82055638
	if (ctx.cr0.eq) goto loc_82055638;
loc_8205561C:
	// bl 0x820523c0
	ctx.lr = 0x82055620;
	sub_820523C0(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// b 0x820556a0
	goto loc_820556A0;
loc_82055638:
	// bl 0x8204fd58
	ctx.lr = 0x8205563C;
	sub_8204FD58(ctx, base);
	// b 0x820556a0
	goto loc_820556A0;
loc_82055640:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x820552f8
	ctx.lr = 0x82055660;
	sub_820552F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82055680
	if (ctx.cr0.eq) goto loc_82055680;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// b 0x820556a0
	goto loc_820556A0;
loc_82055680:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82051138
	ctx.lr = 0x820556A0;
	sub_82051138(ctx, base);
loc_820556A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8206B448) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8205c460
	ctx.lr = 0x8206B45C;
	sub_8205C460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8206b49c
	if (!ctx.cr0.eq) goto loc_8206B49C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82064c00
	ctx.lr = 0x8206B480;
	sub_82064C00(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi. r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8206b49c
	if (ctx.cr0.eq) goto loc_8206B49C;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,22(r11)
	REX_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
loc_8206B49C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,19032
	ctx.r11.s64 = ctx.r11.s64 + 19032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8206b4c4
	if (ctx.cr6.eq) goto loc_8206B4C4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,19032
	ctx.r11.s64 = ctx.r11.s64 + 19032;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8206b258
	ctx.lr = 0x8206B4C0;
	sub_8206B258(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8206B4C4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8206b5dc
	if (ctx.cr0.eq) goto loc_8206B5DC;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-3260
	ctx.r11.s64 = ctx.r11.s64 + -3260;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8206b5d4
	if (!ctx.cr0.eq) goto loc_8206B5D4;
	// bl 0x8205d998
	ctx.lr = 0x8206B4F0;
	sub_8205D998(ctx, base);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4880
	ctx.r10.s64 = ctx.r10.s64 + -4880;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4880
	ctx.r10.s64 = ctx.r10.s64 + -4880;
	// stb r11,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4880
	ctx.r10.s64 = ctx.r10.s64 + -4880;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// li r10,99
	ctx.r10.s64 = 99;
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lhz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8206b5cc
	if (ctx.cr0.eq) goto loc_8206B5CC;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lhz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4648
	ctx.r10.s64 = ctx.r10.s64 + -4648;
	// sth r11,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
loc_8206B5CC:
	// bl 0x82066748
	ctx.lr = 0x8206B5D0;
	sub_82066748(ctx, base);
	// b 0x8206b5dc
	goto loc_8206B5DC;
loc_8206B5D4:
	// bl 0x8206ad58
	ctx.lr = 0x8206B5D8;
	sub_8206AD58(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8206B5DC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-3260
	ctx.r10.s64 = ctx.r10.s64 + -3260;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1159(r11)
	REX_STORE_U8(ctx.r11.u32 + 1159, ctx.r10.u8);
	// bl 0x82064ae0
	ctx.lr = 0x8206B608;
	sub_82064AE0(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8206b6e4
	if (ctx.cr6.lt) goto loc_8206B6E4;
	// b 0x8206b628
	goto loc_8206B628;
loc_8206B61C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8206B628:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8206b6e4
	if (!ctx.cr6.lt) goto loc_8206B6E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4584
	ctx.r10.s64 = ctx.r10.s64 + -4584;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8206b668
	if (ctx.cr0.eq) goto loc_8206B668;
	// b 0x8206b6e4
	goto loc_8206B6E4;
loc_8206B668:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// lbz r11,1159(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1159);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4584
	ctx.r10.s64 = ctx.r10.s64 + -4584;
	// stb r11,1159(r10)
	REX_STORE_U8(ctx.r10.u32 + 1159, ctx.r11.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4584
	ctx.r10.s64 = ctx.r10.s64 + -4584;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8206b6c4
	if (!ctx.cr0.eq) goto loc_8206B6C4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4584
	ctx.r10.s64 = ctx.r10.s64 + -4584;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8206b6e0
	if (ctx.cr0.eq) goto loc_8206B6E0;
loc_8206B6C4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// lbz r11,1159(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1159);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-4584
	ctx.r10.s64 = ctx.r10.s64 + -4584;
	// stb r11,1159(r10)
	REX_STORE_U8(ctx.r10.u32 + 1159, ctx.r11.u8);
loc_8206B6E0:
	// b 0x8206b61c
	goto loc_8206B61C;
loc_8206B6E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// addi r4,r11,1160
	ctx.r4.s64 = ctx.r11.s64 + 1160;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-4584
	ctx.r3.s64 = ctx.r11.s64 + -4584;
	// bl 0x82066ad8
	ctx.lr = 0x8206B700;
	sub_82066AD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8206b7ac
	if (!ctx.cr6.eq) goto loc_8206B7AC;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lhz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8206b73c
	if (!ctx.cr0.eq) goto loc_8206B73C;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-3259
	ctx.r11.s64 = ctx.r11.s64 + -3259;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8206b738
	if (!ctx.cr6.eq) goto loc_8206B738;
	// bl 0x820639e8
	ctx.lr = 0x8206B738;
	sub_820639E8(ctx, base);
loc_8206B738:
	// b 0x8206b7a8
	goto loc_8206B7A8;
loc_8206B73C:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// addi r7,r11,1160
	ctx.r7.s64 = ctx.r11.s64 + 1160;
	// li r6,15
	ctx.r6.s64 = 15;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15200
	ctx.r11.s64 = ctx.r11.s64 + 15200;
	// lfd f13,0(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15196
	ctx.r11.s64 = ctx.r11.s64 + 15196;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4648
	ctx.r11.s64 = ctx.r11.s64 + -4648;
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,6028
	ctx.r11.s64 = ctx.r11.s64 + 6028;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x8205c488
	ctx.lr = 0x8206B7A8;
	sub_8205C488(ctx, base);
loc_8206B7A8:
	// b 0x8206b808
	goto loc_8206B808;
loc_8206B7AC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8206b808
	if (ctx.cr6.eq) goto loc_8206B808;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8206b808
	if (!ctx.cr6.gt) goto loc_8206B808;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-4584
	ctx.r3.s64 = ctx.r11.s64 + -4584;
	// bl 0x82066ad8
	ctx.lr = 0x8206B7E8;
	sub_82066AD8(ctx, base);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8206b808
	if (!ctx.cr6.eq) goto loc_8206B808;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8206B808:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-3259
	ctx.r11.s64 = ctx.r11.s64 + -3259;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8206b82c
	if (!ctx.cr6.eq) goto loc_8206B82C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8206b82c
	if (!ctx.cr6.eq) goto loc_8206B82C;
	// bl 0x82068100
	ctx.lr = 0x8206B82C;
	sub_82068100(ctx, base);
loc_8206B82C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8205c460
	ctx.lr = 0x8206B834;
	sub_8205C460(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8206b868
	if (ctx.cr6.eq) goto loc_8206B868;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,9383
	ctx.r11.s64 = ctx.r11.s64 + 9383;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,9383
	ctx.r11.s64 = ctx.r11.s64 + 9383;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-3259
	ctx.r10.s64 = ctx.r10.s64 + -3259;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_8206B868:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82080538) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-28680
	ctx.r11.s64 = ctx.r11.s64 + -28680;
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29408
	ctx.r11.s64 = ctx.r11.s64 + -29408;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,7740
	ctx.r11.s64 = ctx.r11.s64 + 7740;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
loc_82080560:
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82080600
	if (!ctx.cr6.lt) goto loc_82080600;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// b 0x82080588
	goto loc_82080588;
loc_8208057C:
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
loc_82080588:
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bge cr6,0x820805f0
	if (!ctx.cr6.lt) goto loc_820805F0;
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-28700
	ctx.r10.s64 = ctx.r10.s64 + -28700;
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// b 0x8208057c
	goto loc_8208057C;
loc_820805F0:
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,440
	ctx.r11.s64 = ctx.r11.s64 + 440;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// b 0x82080560
	goto loc_82080560;
loc_82080600:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82087D10) {
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
	// lbz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
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
	// beq cr6,0x82087d68
	if (ctx.cr6.eq) goto loc_82087D68;
	// b 0x82087dbc
	goto loc_82087DBC;
loc_82087D68:
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
	// lbz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 132);
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
	// addi r10,r10,-28152
	ctx.r10.s64 = ctx.r10.s64 + -28152;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82087DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82087DBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8208D5F0) {
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
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
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
	// sth r11,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// bl 0x82155898
	ctx.lr = 0x8208D62C;
	sub_82155898(ctx, base);
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82091B40) {
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
	// bl 0x82098b70
	ctx.lr = 0x82091B50;
	sub_82098B70(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82091b6c
	if (ctx.cr6.eq) goto loc_82091B6C;
	// bl 0x8208b300
	ctx.lr = 0x82091B68;
	sub_8208B300(ctx, base);
	// b 0x82091c84
	goto loc_82091C84;
loc_82091B6C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subfic r11,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21176
	ctx.r11.s64 = ctx.r11.s64 + 21176;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15140
	ctx.r11.s64 = ctx.r11.s64 + 15140;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// lis r10,-32078
	ctx.r10.s64 = -2102263808;
	// addi r10,r10,9628
	ctx.r10.s64 = ctx.r10.s64 + 9628;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,18(r10)
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
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
	// bge cr6,0x82091c84
	if (!ctx.cr6.lt) goto loc_82091C84;
	// bl 0x8208b300
	ctx.lr = 0x82091C84;
	sub_8208B300(ctx, base);
loc_82091C84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209D100) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,141(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 141);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
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
	// bne cr6,0x8209d16c
	if (!ctx.cr6.eq) goto loc_8209D16C;
	// b 0x8209d170
	goto loc_8209D170;
loc_8209D16C:
	// bl 0x82097228
	ctx.lr = 0x8209D170;
	sub_82097228(ctx, base);
loc_8209D170:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,141(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 141);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
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
	// bne cr6,0x8209d1b0
	if (!ctx.cr6.eq) goto loc_8209D1B0;
	// b 0x8209d1b4
	goto loc_8209D1B4;
loc_8209D1B0:
	// bl 0x82097260
	ctx.lr = 0x8209D1B4;
	sub_82097260(ctx, base);
loc_8209D1B4:
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A69B8) {
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
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
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
	// addi r10,r10,-25888
	ctx.r10.s64 = ctx.r10.s64 + -25888;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820A6A08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,38(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,38(r10)
	REX_STORE_U16(ctx.r10.u32 + 38, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
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
	// sth r11,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AAAB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4092
	ctx.r11.s64 = ctx.r11.s64 + 4092;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f0,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AEFE0) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,6736
	ctx.r11.s64 = ctx.r11.s64 + 6736;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820af02c
	if (ctx.cr0.eq) goto loc_820AF02C;
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
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,6712
	ctx.r10.s64 = ctx.r10.s64 + 6712;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x820af1ec
	goto loc_820AF1EC;
loc_820AF02C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,5
	ctx.r10.s64 = 5;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,161
	ctx.r10.s64 = 161;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF06C;
	sub_820AD7A8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,227
	ctx.r10.s64 = 227;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF09C;
	sub_820AD7A8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,228
	ctx.r10.s64 = 228;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF0CC;
	sub_820AD7A8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,193
	ctx.r10.s64 = 193;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF0FC;
	sub_820AD7A8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,228
	ctx.r10.s64 = 228;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF12C;
	sub_820AD7A8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,228
	ctx.r10.s64 = 228;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF15C;
	sub_820AD7A8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,193
	ctx.r10.s64 = 193;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF18C;
	sub_820AD7A8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,195
	ctx.r10.s64 = 195;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF1BC;
	sub_820AD7A8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,203
	ctx.r10.s64 = 203;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ad7a8
	ctx.lr = 0x820AF1EC;
	sub_820AD7A8(ctx, base);
loc_820AF1EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820D9350) {
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
	// bl 0x820d8c30
	ctx.lr = 0x820D9360;
	sub_820D8C30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DA138) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19900
	ctx.r11.s64 = ctx.r11.s64 + 19900;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19968
	ctx.r11.s64 = ctx.r11.s64 + 19968;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_820DA174:
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
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
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
	// bne cr6,0x820da1f0
	if (!ctx.cr6.eq) goto loc_820DA1F0;
	// b 0x820da8c8
	goto loc_820DA8C8;
loc_820DA1F0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19956
	ctx.r11.s64 = ctx.r11.s64 + 19956;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
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
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
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
	// bne cr6,0x820da258
	if (!ctx.cr6.eq) goto loc_820DA258;
	// b 0x820da938
	goto loc_820DA938;
loc_820DA258:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
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
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// ble cr6,0x820da358
	if (!ctx.cr6.gt) goto loc_820DA358;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820da368
	goto loc_820DA368;
loc_820DA358:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DA368:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820da384
	if (ctx.cr6.eq) goto loc_820DA384;
	// b 0x820da8c8
	goto loc_820DA8C8;
loc_820DA384:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_820DA3B0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
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
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// ble cr6,0x820da490
	if (!ctx.cr6.gt) goto loc_820DA490;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820da4a0
	goto loc_820DA4A0;
loc_820DA490:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DA4A0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820da4bc
	if (ctx.cr6.eq) goto loc_820DA4BC;
	// b 0x820da4f8
	goto loc_820DA4F8;
loc_820DA4BC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x820da4f0
	if (!ctx.cr6.lt) goto loc_820DA4F0;
	// b 0x820da3b0
	goto loc_820DA3B0;
loc_820DA4F0:
	// b 0x820da8c8
	goto loc_820DA8C8;
loc_820DA4F8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19896
	ctx.r11.s64 = ctx.r11.s64 + 19896;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
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
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// ble cr6,0x820da5b8
	if (!ctx.cr6.gt) goto loc_820DA5B8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820da5c8
	goto loc_820DA5C8;
loc_820DA5B8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DA5C8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820da5e4
	if (ctx.cr6.eq) goto loc_820DA5E4;
	// b 0x820da8c8
	goto loc_820DA8C8;
loc_820DA5E4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19896
	ctx.r11.s64 = ctx.r11.s64 + 19896;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// bge cr6,0x820da660
	if (!ctx.cr6.lt) goto loc_820DA660;
	// b 0x820da6cc
	goto loc_820DA6CC;
loc_820DA660:
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
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
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
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
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
	// beq cr6,0x820da6cc
	if (ctx.cr6.eq) goto loc_820DA6CC;
	// b 0x820da89c
	goto loc_820DA89C;
loc_820DA6CC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19896
	ctx.r11.s64 = ctx.r11.s64 + 19896;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// lhz r11,-18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -18);
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
	// bge cr6,0x820da748
	if (!ctx.cr6.lt) goto loc_820DA748;
	// b 0x820da7b4
	goto loc_820DA7B4;
loc_820DA748:
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
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
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
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
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
	// beq cr6,0x820da7b4
	if (ctx.cr6.eq) goto loc_820DA7B4;
	// b 0x820da89c
	goto loc_820DA89C;
loc_820DA7B4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19896
	ctx.r11.s64 = ctx.r11.s64 + 19896;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// lhz r11,-14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -14);
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
	// bge cr6,0x820da830
	if (!ctx.cr6.lt) goto loc_820DA830;
	// b 0x820da8c8
	goto loc_820DA8C8;
loc_820DA830:
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
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
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
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
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
	// bne cr6,0x820da89c
	if (!ctx.cr6.eq) goto loc_820DA89C;
	// b 0x820da8c8
	goto loc_820DA8C8;
loc_820DA89C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_820DA8C8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
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
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15980
	ctx.r10.s64 = ctx.r10.s64 + 15980;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x820da934
	if (!ctx.cr6.lt) goto loc_820DA934;
	// b 0x820da174
	goto loc_820DA174;
loc_820DA934:
	// b 0x820dac00
	goto loc_820DAC00;
loc_820DA938:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
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
	// bne cr6,0x820da988
	if (!ctx.cr6.eq) goto loc_820DA988;
	// b 0x820da8c8
	goto loc_820DA8C8;
loc_820DA988:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
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
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// ble cr6,0x820daa6c
	if (!ctx.cr6.gt) goto loc_820DAA6C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820daa7c
	goto loc_820DAA7C;
loc_820DAA6C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DAA7C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820daa94
	if (ctx.cr6.eq) goto loc_820DAA94;
	// b 0x820da8c8
	goto loc_820DA8C8;
loc_820DAA94:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_820DAAC0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
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
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// ble cr6,0x820daba0
	if (!ctx.cr6.gt) goto loc_820DABA0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820dabb0
	goto loc_820DABB0;
loc_820DABA0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DABB0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dabc8
	if (ctx.cr6.eq) goto loc_820DABC8;
	// b 0x820da4f8
	goto loc_820DA4F8;
loc_820DABC8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x820dabfc
	if (!ctx.cr6.lt) goto loc_820DABFC;
	// b 0x820daac0
	goto loc_820DAAC0;
loc_820DABFC:
	// b 0x820da4f8
	goto loc_820DA4F8;
loc_820DAC00:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82110288) {
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
	// addi r10,r10,-18608
	ctx.r10.s64 = ctx.r10.s64 + -18608;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821102E8;
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

DEFINE_REX_FUNC(sub_821131D0) {
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
	// rlwinm r11,r11,4,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFF0;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,269(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 269);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-18116
	ctx.r10.s64 = ctx.r10.s64 + -18116;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
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
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,5624
	ctx.r10.s64 = ctx.r10.s64 + 5624;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,5624
	ctx.r10.s64 = ctx.r10.s64 + 5624;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15976
	ctx.r11.s64 = ctx.r11.s64 + 15976;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820fe728
	ctx.lr = 0x8211330C;
	sub_820FE728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211BE28) {
	REX_FUNC_PROLOGUE();
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
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-17048
	ctx.r10.s64 = ctx.r10.s64 + -17048;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
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
	// bne cr6,0x8211bf30
	if (!ctx.cr6.eq) goto loc_8211BF30;
	// b 0x8211bf4c
	goto loc_8211BF4C;
loc_8211BF30:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8211BF4C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
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
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-17048
	ctx.r10.s64 = ctx.r10.s64 + -17048;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
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
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// sth r10,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A868) {
	REX_FUNC_PROLOGUE();
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
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// ble cr6,0x8212a950
	if (!ctx.cr6.gt) goto loc_8212A950;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8212a960
	goto loc_8212A960;
loc_8212A950:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8212A960:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a97c
	if (!ctx.cr6.eq) goto loc_8212A97C;
	// b 0x8212a9a0
	goto loc_8212A9A0;
loc_8212A97C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_8212A9A0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-15832
	ctx.r10.s64 = ctx.r10.s64 + -15832;
	// lis r9,-32092
	ctx.r9.s64 = -2103181312;
	// addi r9,r9,16016
	ctx.r9.s64 = ctx.r9.s64 + 16016;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r11,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821349A0) {
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
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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
	// bge cr6,0x821349f8
	if (!ctx.cr6.lt) goto loc_821349F8;
	// b 0x82134b18
	goto loc_82134B18;
loc_821349F8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134a14
	if (ctx.cr6.eq) goto loc_82134A14;
	// b 0x82134b74
	goto loc_82134B74;
loc_82134A14:
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
	// lbz r11,298(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 298);
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
	// beq cr6,0x82134a60
	if (ctx.cr6.eq) goto loc_82134A60;
	// bl 0x8214dcc8
	ctx.lr = 0x82134A5C;
	sub_8214DCC8(ctx, base);
	// b 0x82134c74
	goto loc_82134C74;
loc_82134A60:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
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
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
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
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
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
	// ble cr6,0x82134ae4
	if (!ctx.cr6.gt) goto loc_82134AE4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82134af4
	goto loc_82134AF4;
loc_82134AE4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82134AF4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134b10
	if (ctx.cr6.eq) goto loc_82134B10;
	// bl 0x8214dcc8
	ctx.lr = 0x82134B0C;
	sub_8214DCC8(ctx, base);
	// b 0x82134c74
	goto loc_82134C74;
loc_82134B10:
	// b 0x82134b74
	goto loc_82134B74;
loc_82134B18:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// stb r11,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
loc_82134B74:
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
	// bne cr6,0x82134c24
	if (!ctx.cr6.eq) goto loc_82134C24;
	// bl 0x8214dcc8
	ctx.lr = 0x82134C20;
	sub_8214DCC8(ctx, base);
	// b 0x82134c74
	goto loc_82134C74;
loc_82134C24:
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
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
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
	// bne cr6,0x82134c70
	if (!ctx.cr6.eq) goto loc_82134C70;
	// b 0x82134c74
	goto loc_82134C74;
loc_82134C70:
	// bl 0x820f7ea0
	ctx.lr = 0x82134C74;
	sub_820F7EA0(ctx, base);
loc_82134C74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214A668) {
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
	// blt cr6,0x8214a724
	if (ctx.cr6.lt) goto loc_8214A724;
	// b 0x8214a808
	goto loc_8214A808;
loc_8214A724:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,15(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
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
	// lbz r11,15(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
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
	// stb r11,15(r10)
	REX_STORE_U8(ctx.r10.u32 + 15, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,15(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
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
	// bge cr6,0x8214a7e8
	if (!ctx.cr6.lt) goto loc_8214A7E8;
	// b 0x8214a7f4
	goto loc_8214A7F4;
loc_8214A7E8:
	// bl 0x820f7ba0
	ctx.lr = 0x8214A7EC;
	sub_820F7BA0(ctx, base);
	// bl 0x820f7ea0
	ctx.lr = 0x8214A7F0;
	sub_820F7EA0(ctx, base);
	// b 0x8214a808
	goto loc_8214A808;
loc_8214A7F4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_8214A808:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82155BD0) {
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
	// li r4,35
	ctx.r4.s64 = 35;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155a00
	ctx.lr = 0x82155BF0;
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

DEFINE_REX_FUNC(sub_82156488) {
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
	// beq cr6,0x821564b0
	if (ctx.cr6.eq) goto loc_821564B0;
	// b 0x821564ec
	goto loc_821564EC;
loc_821564B0:
	// bl 0x821558e8
	ctx.lr = 0x821564B4;
	sub_821558E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 256);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-10776
	ctx.r10.s64 = ctx.r10.s64 + -10776;
	// lhzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155a00
	ctx.lr = 0x821564EC;
	sub_82155A00(ctx, base);
loc_821564EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82159800) {
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
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-9856
	ctx.r10.s64 = ctx.r10.s64 + -9856;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215983C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8207ae08
	ctx.lr = 0x82159840;
	sub_8207AE08(ctx, base);
	// bl 0x820ed010
	ctx.lr = 0x82159844;
	sub_820ED010(ctx, base);
	// bl 0x820ec388
	ctx.lr = 0x82159848;
	sub_820EC388(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215D7A0) {
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
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-31800
	ctx.r11.s64 = ctx.r11.s64 + -31800;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d7d4
	if (ctx.cr6.eq) goto loc_8215D7D4;
	// b 0x8215d870
	goto loc_8215D870;
loc_8215D7D4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-31800
	ctx.r11.s64 = ctx.r11.s64 + -31800;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x8215d804
	if (!ctx.cr6.gt) goto loc_8215D804;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8215D804:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x8215d818
	if (!ctx.cr6.gt) goto loc_8215D818;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8215D818:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// ble cr6,0x8215d82c
	if (!ctx.cr6.gt) goto loc_8215D82C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8215D82C:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x8215d840
	if (!ctx.cr6.gt) goto loc_8215D840;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8215D840:
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8215c4b0
	ctx.lr = 0x8215D850;
	sub_8215C4B0(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25245
	ctx.r11.s64 = ctx.r11.s64 + -25245;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8215d870
	if (!ctx.cr6.eq) goto loc_8215D870;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x820f7020
	ctx.lr = 0x8215D870;
	sub_820F7020(ctx, base);
loc_8215D870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82169528) {
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
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mulli r11,r11,184
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(184));
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
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
	// sth r10,98(r11)
	REX_STORE_U16(ctx.r11.u32 + 98, ctx.r10.u16);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,29(r11)
	REX_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821695b0
	if (!ctx.cr0.eq) goto loc_821695B0;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82162ef0
	ctx.lr = 0x821695AC;
	sub_82162EF0(ctx, base);
	// b 0x821695c0
	goto loc_821695C0;
loc_821695B0:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82162ef0
	ctx.lr = 0x821695C0;
	sub_82162EF0(ctx, base);
loc_821695C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,124(r11)
	REX_STORE_U8(ctx.r11.u32 + 124, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,125(r11)
	REX_STORE_U8(ctx.r11.u32 + 125, ctx.r10.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82163dc0
	ctx.lr = 0x821695E0;
	sub_82163DC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82172070) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15440
	ctx.r10.s64 = ctx.r10.s64 + 15440;
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// li r10,120
	ctx.r10.s64 = 120;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82173310) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,62(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217337c
	if (!ctx.cr6.eq) goto loc_8217337C;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r11,-4(r1)
	REX_STORE_U16(ctx.r1.u32 + -4, ctx.r11.u16);
	// b 0x82173464
	goto loc_82173464;
loc_8217337C:
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821733dc
	if (!ctx.cr6.eq) goto loc_821733DC;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// mulli r9,r9,136
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(136));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,-4(r1)
	REX_STORE_U16(ctx.r1.u32 + -4, ctx.r11.u16);
	// b 0x82173464
	goto loc_82173464;
loc_821733DC:
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82173414
	if (!ctx.cr6.eq) goto loc_82173414;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r11,-4(r1)
	REX_STORE_U16(ctx.r1.u32 + -4, ctx.r11.u16);
	// b 0x82173464
	goto loc_82173464;
loc_82173414:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// mulli r9,r9,136
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(136));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,-4(r1)
	REX_STORE_U16(ctx.r1.u32 + -4, ctx.r11.u16);
loc_82173464:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821734c0
	if (ctx.cr6.eq) goto loc_821734C0;
	// lhz r11,-4(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -4);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821734c0
	if (!ctx.cr0.eq) goto loc_821734C0;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,62(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// sth r11,62(r10)
	REX_STORE_U16(ctx.r10.u32 + 62, ctx.r11.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
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
	// lbz r11,50(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 50);
	// stb r11,51(r10)
	REX_STORE_U8(ctx.r10.u32 + 51, ctx.r11.u8);
loc_821734C0:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217E000) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32086
	ctx.r10.s64 = -2102788096;
	// addi r10,r10,-29308
	ctx.r10.s64 = ctx.r10.s64 + -29308;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217E370) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217E3C0) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// stw r8,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217F1D0) {
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
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r11,r11,24048
	ctx.r11.s64 = ctx.r11.s64 + 24048;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// addi r10,r10,24052
	ctx.r10.s64 = ctx.r10.s64 + 24052;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r9,r9,-13864
	ctx.r9.s64 = ctx.r9.s64 + -13864;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8217f22c
	if (!ctx.cr6.lt) goto loc_8217F22C;
	// bl 0x82216c40
	ctx.lr = 0x8217F22C;
	sub_82216C40(ctx, base);
loc_8217F22C:
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r11,r11,24052
	ctx.r11.s64 = ctx.r11.s64 + 24052;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r11,r11,24052
	ctx.r11.s64 = ctx.r11.s64 + 24052;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// addi r10,r10,24052
	ctx.r10.s64 = ctx.r10.s64 + 24052;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218D5C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x822724f0
	ctx.lr = 0x8218D5EC;
	sub_822724F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-28616
	ctx.r11.s64 = ctx.r11.s64 + -28616;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cc20
	ctx.lr = 0x8218D608;
	sub_8223CC20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x8218d620
	goto loc_8218D620;
loc_8218D614:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8218D620:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bge cr6,0x8218d640
	if (!ctx.cr6.lt) goto loc_8218D640;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8218cf90
	ctx.lr = 0x8218D63C;
	sub_8218CF90(ctx, base);
	// b 0x8218d614
	goto loc_8218D614;
loc_8218D640:
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r11,r11,9864
	ctx.r11.s64 = ctx.r11.s64 + 9864;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218c100
	ctx.lr = 0x8218D650;
	sub_8218C100(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27556
	ctx.r3.s64 = ctx.r11.s64 + -27556;
	// bl 0x821cdd88
	ctx.lr = 0x8218D65C;
	sub_821CDD88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8218cdc8
	ctx.lr = 0x8218D664;
	sub_8218CDC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821907A0) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11356
	ctx.r11.s64 = ctx.r11.s64 + 11356;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821907d4
	if (!ctx.cr6.eq) goto loc_821907D4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82190720
	ctx.lr = 0x821907C8;
	sub_82190720(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82190720
	ctx.lr = 0x821907D0;
	sub_82190720(ctx, base);
	// b 0x821907f8
	goto loc_821907F8;
loc_821907D4:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11356
	ctx.r11.s64 = ctx.r11.s64 + 11356;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821907f8
	if (!ctx.cr6.eq) goto loc_821907F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82190720
	ctx.lr = 0x821907F0;
	sub_82190720(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82190720
	ctx.lr = 0x821907F8;
	sub_82190720(ctx, base);
loc_821907F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82193938) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82193974
	if (ctx.cr6.eq) goto loc_82193974;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r11,32769
	ctx.r4.u64 = ctx.r11.u64 | 32769;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82235730
	ctx.lr = 0x82193974;
	sub_82235730(ctx, base);
loc_82193974:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821939a4
	if (ctx.cr6.eq) goto loc_821939A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r11,32769
	ctx.r4.u64 = ctx.r11.u64 | 32769;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82235730
	ctx.lr = 0x821939A4;
	sub_82235730(ctx, base);
loc_821939A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821982b0
	ctx.lr = 0x821939AC;
	sub_821982B0(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-1592
	ctx.r11.s64 = ctx.r11.s64 + -1592;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-24416
	ctx.r3.s64 = ctx.r11.s64 + -24416;
	// bl 0x821cdd88
	ctx.lr = 0x821939E8;
	sub_821CDD88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821cdef8
	ctx.lr = 0x821939F4;
	sub_821CDEF8(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r3,r11,18904
	ctx.r3.s64 = ctx.r11.s64 + 18904;
	// bl 0x821cfac8
	ctx.lr = 0x82193A00;
	sub_821CFAC8(ctx, base);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// bl 0x821cfac8
	ctx.lr = 0x82193A0C;
	sub_821CFAC8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82044d90
	ctx.lr = 0x82193A14;
	sub_82044D90(ctx, base);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16830
	ctx.r11.s64 = ctx.r11.s64 + -16830;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7081
	ctx.r11.s64 = ctx.r11.s64 + 7081;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16568
	ctx.r11.s64 = ctx.r11.s64 + -16568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,6696
	ctx.r11.s64 = ctx.r11.s64 + 6696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r11,r11,9605
	ctx.r11.s64 = ctx.r11.s64 + 9605;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x821c4da0
	ctx.lr = 0x82193A98;
	sub_821C4DA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82199270) {
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
	// bl 0x82190108
	ctx.lr = 0x82199284;
	sub_82190108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821992bc
	if (ctx.cr0.eq) goto loc_821992BC;
	// bl 0x8218e7f0
	ctx.lr = 0x82199290;
	sub_8218E7F0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821992a8
	if (!ctx.cr6.lt) goto loc_821992A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821992b0
	goto loc_821992B0;
loc_821992A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821992B0:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821992f4
	goto loc_821992F4;
loc_821992BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x821992f0
	if (!ctx.cr6.lt) goto loc_821992F0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,7064
	ctx.r10.s64 = ctx.r10.s64 + 7064;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x821992f4
	goto loc_821992F4;
loc_821992F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821992F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219AB20) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11340
	ctx.r11.s64 = ctx.r11.s64 + 11340;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,11340
	ctx.r10.s64 = ctx.r10.s64 + 11340;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11340
	ctx.r11.s64 = ctx.r11.s64 + 11340;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8219ab64
	if (!ctx.cr6.eq) goto loc_8219AB64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8219aa30
	ctx.lr = 0x8219AB64;
	sub_8219AA30(ctx, base);
loc_8219AB64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E0F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8219e19c
	if (ctx.cr6.eq) goto loc_8219E19C;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,7084
	ctx.r10.s64 = ctx.r10.s64 + 7084;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mulli r10,r10,104
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(104));
	// lis r9,-32074
	ctx.r9.s64 = -2102001664;
	// addi r9,r9,160
	ctx.r9.s64 = ctx.r9.s64 + 160;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8219e19c
	if (!ctx.cr6.lt) goto loc_8219E19C;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8219E19C:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3040) {
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
	// bl 0x821a2f68
	ctx.lr = 0x821A3050;
	sub_821A2F68(ctx, base);
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A39A8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3B18) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,-14416
	ctx.r4.s64 = ctx.r11.s64 + -14416;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r6,81(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8219f938
	ctx.lr = 0x821A3B54;
	sub_8219F938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_821A4C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821A4C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,19184
	ctx.r30.s64 = ctx.r11.s64 + 19184;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2fc0
	ctx.lr = 0x821A4C34;
	sub_821A2FC0(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x821a4c40
	if (!ctx.cr6.lt) goto loc_821A4C40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821A4C40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a4c70
	if (ctx.cr6.eq) goto loc_821A4C70;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a3140
	ctx.lr = 0x821A4C5C;
	sub_821A3140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a4c70
	if (ctx.cr0.eq) goto loc_821A4C70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a31d8
	ctx.lr = 0x821A4C70;
	sub_821A31D8(ctx, base);
loc_821A4C70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A7110) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-13896
	ctx.r11.s64 = ctx.r11.s64 + -13896;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821a6fa0
	sub_821A6FA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A7930) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r3,21096(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 21096);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A7950) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A86D8) {
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
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// bl 0x821a7960
	ctx.lr = 0x821A8708;
	sub_821A7960(ctx, base);
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r9,-32073
	ctx.r9.s64 = -2101936128;
	// lwz r8,156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lis r7,-32073
	ctx.r7.s64 = -2101936128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24132);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,24168(r9)
	REX_STORE_U32(ctx.r9.u32 + 24168, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f0,1828(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,24172(r7)
	REX_STORE_U32(ctx.r7.u32 + 24172, ctx.r8.u32);
	// lis r7,-32073
	ctx.r7.s64 = -2101936128;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,24160(r7)
	REX_STORE_U32(ctx.r7.u32 + 24160, ctx.r11.u32);
	// lis r7,-32073
	ctx.r7.s64 = -2101936128;
	// stw r9,24164(r7)
	REX_STORE_U32(ctx.r7.u32 + 24164, ctx.r9.u32);
	// bl 0x8221e908
	ctx.lr = 0x821A8778;
	sub_8221E908(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ADF28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821ADF30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82216c40
	ctx.lr = 0x821ADF3C;
	sub_82216C40(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// lis r28,-32073
	ctx.r28.s64 = -2101936128;
loc_821ADF48:
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821adf84
	if (!ctx.cr6.eq) goto loc_821ADF84;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821adf84
	if (ctx.cr0.eq) goto loc_821ADF84;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lwz r3,24132(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 24132);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x8221b9c8
	ctx.lr = 0x821ADF84;
	sub_8221B9C8(ctx, base);
loc_821ADF84:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x821adf48
	if (ctx.cr6.lt) goto loc_821ADF48;
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821adfb4
	if (ctx.cr0.eq) goto loc_821ADFB4;
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// lwz r3,24132(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 24132);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8221b9c8
	ctx.lr = 0x821ADFB4;
	sub_8221B9C8(ctx, base);
loc_821ADFB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B1338) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821B1340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-14168
	ctx.r29.s64 = ctx.r11.s64 + -14168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B1368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B137C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B1390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B86A8) {
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
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r6,r30,128
	ctx.r6.s64 = ctx.r30.s64 + 128;
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r11,-24028(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -24028);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B86E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,88(r3)
	REX_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,100(r3)
	REX_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,101(r3)
	REX_STORE_U8(ctx.r3.u32 + 101, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,89(r3)
	REX_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,1828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,102(r3)
	REX_STORE_U8(ctx.r3.u32 + 102, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,103(r3)
	REX_STORE_U8(ctx.r3.u32 + 103, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f11,64(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
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

DEFINE_REX_FUNC(sub_821CB418) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ca938
	ctx.lr = 0x821CB430;
	sub_821CA938(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cb478
	if (ctx.cr0.eq) goto loc_821CB478;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821cb478
	if (!ctx.cr6.eq) goto loc_821CB478;
	// lwa r11,328(r3)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 328));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-27608(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -27608);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f0,1828(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// b 0x821cb494
	goto loc_821CB494;
loc_821CB478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cdd90
	ctx.lr = 0x821CB480;
	sub_821CDD90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,32700
	ctx.r11.s64 = ctx.r11.s64 + 32700;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821d3be8
	ctx.lr = 0x821CB494;
	sub_821D3BE8(ctx, base);
loc_821CB494:
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

DEFINE_REX_FUNC(sub_821CDB00) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821cd370
	ctx.lr = 0x821CDB18;
	sub_821CD370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cdb28
	if (ctx.cr0.eq) goto loc_821CDB28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ec698
	ctx.lr = 0x821CDB28;
	sub_821EC698(ctx, base);
loc_821CDB28:
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

DEFINE_REX_FUNC(sub_821CFC08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// stw r3,27528(r11)
	REX_STORE_U32(ctx.r11.u32 + 27528, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D0610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821D0618;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32113
	ctx.r31.s64 = -2104557568;
	// lis r29,-32071
	ctx.r29.s64 = -2101805056;
	// lbz r11,-28088(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -28088);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r30,r11,15928
	ctx.r30.s64 = ctx.r11.s64 + 15928;
	// beq 0x821d0650
	if (ctx.cr0.eq) goto loc_821D0650;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219f850
	ctx.lr = 0x821D0644;
	sub_8219F850(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r3,27856(r29)
	REX_STORE_U64(ctx.r29.u32 + 27856, ctx.r3.u64);
	// stb r11,-28088(r31)
	REX_STORE_U8(ctx.r31.u32 + -28088, ctx.r11.u8);
loc_821D0650:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219f850
	ctx.lr = 0x821D0658;
	sub_8219F850(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// ld r11,27856(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 27856);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r30,r10
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x821d0710
	if (!ctx.cr6.gt) goto loc_821D0710;
	// subf r3,r11,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r11.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x821d068c
	if (!ctx.cr6.gt) goto loc_821D068C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_821D068C:
	// lis r31,-32071
	ctx.r31.s64 = -2101805056;
	// ld r11,27568(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 27568);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-31412(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82272ec0
	ctx.lr = 0x821D06B8;
	sub_82272EC0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// lwz r10,27852(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 27852);
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,27564(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 27564, temp.u32);
	// bge cr6,0x821d06f4
	if (!ctx.cr6.lt) goto loc_821D06F4;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// lfs f13,27576(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27576);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821d06ec
	if (ctx.cr6.lt) goto loc_821D06EC;
	// stfs f0,27576(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 27576, temp.u32);
loc_821D06EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x821d0700
	goto loc_821D0700;
loc_821D06F4:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// stfs f0,27576(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 27576, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_821D0700:
	// stw r10,27852(r11)
	REX_STORE_U32(ctx.r11.u32 + 27852, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r30,27856(r29)
	REX_STORE_U64(ctx.r29.u32 + 27856, ctx.r30.u64);
	// std r11,27568(r31)
	REX_STORE_U64(ctx.r31.u32 + 27568, ctx.r11.u64);
loc_821D0710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D90C8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821d90f4
	if (!ctx.cr6.eq) goto loc_821D90F4;
	// bl 0x821f39f0
	ctx.lr = 0x821D90F0;
	sub_821F39F0(ctx, base);
	// b 0x821d90fc
	goto loc_821D90FC;
loc_821D90F4:
	// bl 0x821d9060
	ctx.lr = 0x821D90F8;
	sub_821D9060(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_821D90FC:
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

DEFINE_REX_FUNC(sub_821DB5D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,22152
	ctx.r4.s64 = ctx.r11.s64 + 22152;
	// b 0x82272bd8
	sub_82272BD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DB918) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821DB920;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bb840
	ctx.lr = 0x821DB938;
	sub_821BB840(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r10,15755
	ctx.r29.s64 = ctx.r10.s64 + 15755;
	// beq cr6,0x821db958
	if (ctx.cr6.eq) goto loc_821DB958;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821db95c
	goto loc_821DB95C;
loc_821DB958:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821DB95C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821db5d0
	ctx.lr = 0x821DB964;
	sub_821DB5D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r11,-28600
	ctx.r4.s64 = ctx.r11.s64 + -28600;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// bl 0x821bb840
	ctx.lr = 0x821DB97C;
	sub_821BB840(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821db994
	if (ctx.cr6.eq) goto loc_821DB994;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821db998
	goto loc_821DB998;
loc_821DB994:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821DB998:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821db5d0
	ctx.lr = 0x821DB9A0;
	sub_821DB5D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r11,-28604
	ctx.r4.s64 = ctx.r11.s64 + -28604;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x821bb840
	ctx.lr = 0x821DB9B8;
	sub_821BB840(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821db9d0
	if (ctx.cr6.eq) goto loc_821DB9D0;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821db9d4
	goto loc_821DB9D4;
loc_821DB9D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821DB9D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821db5d0
	ctx.lr = 0x821DB9DC;
	sub_821DB5D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r11,-28612
	ctx.r4.s64 = ctx.r11.s64 + -28612;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// bl 0x821bb840
	ctx.lr = 0x821DB9F4;
	sub_821BB840(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dba0c
	if (ctx.cr6.eq) goto loc_821DBA0C;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821dba10
	goto loc_821DBA10;
loc_821DBA0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821DBA10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821db5d0
	ctx.lr = 0x821DBA18;
	sub_821DB5D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,22052(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821dba30
	if (ctx.cr6.gt) goto loc_821DBA30;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821DBA30:
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E3608) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e34
	ctx.lr = 0x821E3610;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x821e4db8
	ctx.lr = 0x821E3634;
	sub_821E4DB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e4db8
	ctx.lr = 0x821E3640;
	sub_821E4DB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e4db8
	ctx.lr = 0x821E364C;
	sub_821E4DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x822724f0
	ctx.lr = 0x821E3668;
	sub_822724F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e24c8
	ctx.lr = 0x821E3674;
	sub_821E24C8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x821e369c
	if (!ctx.cr0.eq) goto loc_821E369C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220e0d0
	ctx.lr = 0x821E3684;
	sub_8220E0D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-25476
	ctx.r4.s64 = ctx.r11.s64 + -25476;
loc_821E368C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219f938
	ctx.lr = 0x821E3698;
	sub_8219F938(ctx, base);
	// b 0x821e3754
	goto loc_821E3754;
loc_821E369C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e24c8
	ctx.lr = 0x821E36A8;
	sub_821E24C8(ctx, base);
	// lis r11,-3937
	ctx.r11.s64 = -258015232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,32730
	ctx.r11.u64 = ctx.r11.u64 | 32730;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e36d8
	if (ctx.cr6.eq) goto loc_821E36D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e36d8
	if (!ctx.cr6.eq) goto loc_821E36D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220e0d0
	ctx.lr = 0x821E36CC;
	sub_8220E0D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-25524
	ctx.r4.s64 = ctx.r11.s64 + -25524;
	// b 0x821e368c
	goto loc_821E368C;
loc_821E36D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821e1d48
	ctx.lr = 0x821E36E0;
	sub_821E1D48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,511
	ctx.r5.s64 = 511;
	// addi r7,r11,-23508
	ctx.r7.s64 = ctx.r11.s64 + -23508;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r6,r11,-25552
	ctx.r6.s64 = ctx.r11.s64 + -25552;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-25920
	ctx.r4.s64 = ctx.r11.s64 + -25920;
	// bl 0x821e0ce8
	ctx.lr = 0x821E3704;
	sub_821E0CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821e3734
	if (ctx.cr0.eq) goto loc_821E3734;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-25944
	ctx.r11.s64 = ctx.r11.s64 + -25944;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x821e3280
	ctx.lr = 0x821E3734;
	sub_821E3280(ctx, base);
loc_821E3734:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E3750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821e1d98
	ctx.lr = 0x821E3754;
	sub_821E1D98(ctx, base);
loc_821E3754:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82272e84
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EC7B0) {
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
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-26612(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26612);
	// bl 0x821f2510
	ctx.lr = 0x821EC7CC;
	sub_821F2510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ED650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821ED658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// rlwinm. r11,r11,6,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed68c
	if (ctx.cr0.eq) goto loc_821ED68C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ed68c
	if (!ctx.cr6.eq) goto loc_821ED68C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dd9b0
	ctx.lr = 0x821ED688;
	sub_821DD9B0(ctx, base);
	// stw r3,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
loc_821ED68C:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm. r11,r11,6,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed6b4
	if (ctx.cr0.eq) goto loc_821ED6B4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ed6b4
	if (!ctx.cr6.eq) goto loc_821ED6B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,212(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dd9b0
	ctx.lr = 0x821ED6B0;
	sub_821DD9B0(ctx, base);
	// stw r3,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
loc_821ED6B4:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// rlwinm. r11,r11,6,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed6dc
	if (ctx.cr0.eq) goto loc_821ED6DC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ed6dc
	if (!ctx.cr6.eq) goto loc_821ED6DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,216(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dd9b0
	ctx.lr = 0x821ED6D8;
	sub_821DD9B0(ctx, base);
	// stw r3,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
loc_821ED6DC:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm. r11,r11,6,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed718
	if (ctx.cr0.eq) goto loc_821ED718;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ed718
	if (!ctx.cr6.eq) goto loc_821ED718;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dd9b0
	ctx.lr = 0x821ED700;
	sub_821DD9B0(ctx, base);
	// stw r3,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// rlwinm. r11,r3,0,2,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3C000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ed718
	if (!ctx.cr0.eq) goto loc_821ED718;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22680
	ctx.r3.s64 = ctx.r11.s64 + -22680;
	// bl 0x821d3be8
	ctx.lr = 0x821ED718;
	sub_821D3BE8(ctx, base);
loc_821ED718:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821ed770
	if (ctx.cr0.eq) goto loc_821ED770;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-22704
	ctx.r30.s64 = ctx.r11.s64 + -22704;
loc_821ED72C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed764
	if (ctx.cr0.eq) goto loc_821ED764;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ed764
	if (!ctx.cr6.eq) goto loc_821ED764;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dd9b0
	ctx.lr = 0x821ED750;
	sub_821DD9B0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm. r11,r3,0,2,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3C000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ed764
	if (!ctx.cr0.eq) goto loc_821ED764;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d3be8
	ctx.lr = 0x821ED764;
	sub_821D3BE8(ctx, base);
loc_821ED764:
	// lwz r31,0(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821ed72c
	if (!ctx.cr0.eq) goto loc_821ED72C;
loc_821ED770:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F4D40) {
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
	// bl 0x821f4cb0
	ctx.lr = 0x821F4D58;
	sub_821F4CB0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821c9c08
	ctx.lr = 0x821F4D60;
	sub_821C9C08(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f4d70
	if (ctx.cr0.eq) goto loc_821F4D70;
	// bl 0x821c9c08
	ctx.lr = 0x821F4D70;
	sub_821C9C08(ctx, base);
loc_821F4D70:
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,6876(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6876);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,6876(r11)
	REX_STORE_U32(ctx.r11.u32 + 6876, ctx.r10.u32);
	// bl 0x821c9c08
	ctx.lr = 0x821F4D8C;
	sub_821C9C08(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r10,6880(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6880);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,6880(r11)
	REX_STORE_U32(ctx.r11.u32 + 6880, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_821F72E0) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,104(r31)
	REX_STORE_U16(ctx.r31.u32 + 104, ctx.r30.u16);
	// sth r30,106(r31)
	REX_STORE_U16(ctx.r31.u32 + 106, ctx.r30.u16);
	// sth r30,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r30.u16);
	// bl 0x822724f0
	ctx.lr = 0x821F7318;
	sub_822724F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,4092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r10,r10,27416
	ctx.r10.s64 = ctx.r10.s64 + 27416;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// sth r30,104(r31)
	REX_STORE_U16(ctx.r31.u32 + 104, ctx.r30.u16);
	// sth r30,106(r31)
	REX_STORE_U16(ctx.r31.u32 + 106, ctx.r30.u16);
	// sth r30,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r30.u16);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r11,110(r31)
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r11.u8);
	// stb r11,111(r31)
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r11.u8);
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821FF158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821FF160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,108
	ctx.r31.s64 = ctx.r30.s64 + 108;
	// li r28,128
	ctx.r28.s64 = 128;
loc_821FF174:
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ff1bc
	if (ctx.cr0.eq) goto loc_821FF1BC;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x821ff1a8
	if (!ctx.cr6.eq) goto loc_821FF1A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,-108
	ctx.r3.s64 = ctx.r31.s64 + -108;
	// bl 0x821ff0e8
	ctx.lr = 0x821FF19C;
	sub_821FF0E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ff1bc
	if (ctx.cr0.eq) goto loc_821FF1BC;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
loc_821FF1A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r28.u8);
	// bl 0x821fef48
	ctx.lr = 0x821FF1BC;
	sub_821FEF48(ctx, base);
loc_821FF1BC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// blt cr6,0x821ff174
	if (ctx.cr6.lt) goto loc_821FF174;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82202D98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x82202DA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r3,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x82202de0
	if (ctx.cr6.eq) goto loc_82202DE0;
	// subf r29,r3,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r3.u64;
loc_82202DC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x822028e0
	ctx.lr = 0x82202DD4;
	sub_822028E0(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82202dc8
	if (!ctx.cr6.eq) goto loc_82202DC8;
loc_82202DE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82204630) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e38
	ctx.lr = 0x82204638;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, ctx.r4.u64);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x82272590
	ctx.lr = 0x82204658;
	sub_82272590(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r24,80
	ctx.r24.s64 = 80;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82204670
	if (!ctx.cr0.eq) goto loc_82204670;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8220467c
	goto loc_8220467C;
loc_82204670:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r8,r10,r24
	ctx.r8.u64 = uint32_t((ctx.r24.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r10.s32 / ctx.r24.s32 : 0);
loc_8220467C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8220493c
	if (ctx.cr6.eq) goto loc_8220493C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82204694
	if (!ctx.cr6.eq) goto loc_82204694;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822046a0
	goto loc_822046A0;
loc_82204694:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r10,r10,r24
	ctx.r10.u64 = uint32_t((ctx.r24.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r10.s32 / ctx.r24.s32 : 0);
loc_822046A0:
	// lis r9,819
	ctx.r9.s64 = 53673984;
	// ori r9,r9,13107
	ctx.r9.u64 = ctx.r9.u64 | 13107;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x822046bc
	if (!ctx.cr6.lt) goto loc_822046BC;
	// bl 0x821ded00
	ctx.lr = 0x822046B8;
	sub_821DED00(ctx, base);
	// b 0x8220493c
	goto loc_8220493C;
loc_822046BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822046cc
	if (!ctx.cr6.eq) goto loc_822046CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822046d8
	goto loc_822046D8;
loc_822046CC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r10,r10,r24
	ctx.r10.u64 = uint32_t((ctx.r24.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r10.s32 / ctx.r24.s32 : 0);
loc_822046D8:
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82204824
	if (!ctx.cr6.lt) goto loc_82204824;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822046fc
	if (ctx.cr6.lt) goto loc_822046FC;
	// add r26,r10,r8
	ctx.r26.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_822046FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220470c
	if (!ctx.cr6.eq) goto loc_8220470C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82204718
	goto loc_82204718;
loc_8220470C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r10,r10,r24
	ctx.r10.u64 = uint32_t((ctx.r24.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r10.s32 / ctx.r24.s32 : 0);
loc_82204718:
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8220473c
	if (!ctx.cr6.lt) goto loc_8220473C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204738
	if (ctx.cr6.eq) goto loc_82204738;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r24
	ctx.r11.u64 = uint32_t((ctx.r24.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r11.s32 / ctx.r24.s32 : 0);
loc_82204738:
	// add r26,r11,r25
	ctx.r26.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8220473C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82203ea8
	ctx.lr = 0x82204748;
	sub_82203EA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r28,268(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x8220477c
	goto loc_8220477C;
loc_8220475C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82204774
	if (ctx.cr6.eq) goto loc_82204774;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82272590
	ctx.lr = 0x82204774;
	sub_82272590(ctx, base);
loc_82204774:
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
loc_8220477C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8220475c
	if (!ctx.cr6.eq) goto loc_8220475C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82204290
	ctx.lr = 0x82204798;
	sub_82204290(ctx, base);
	// lwz r29,8(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822047d4
	if (ctx.cr6.eq) goto loc_822047D4;
	// subf r28,r3,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r3.u64;
loc_822047AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822047c4
	if (ctx.cr6.eq) goto loc_822047C4;
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272590
	ctx.lr = 0x822047C4;
	sub_82272590(ctx, base);
loc_822047C4:
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822047ac
	if (!ctx.cr6.eq) goto loc_822047AC;
loc_822047D4:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822047e8
	if (!ctx.cr0.eq) goto loc_822047E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822047f4
	goto loc_822047F4;
loc_822047E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// divw r11,r11,r24
	ctx.r11.u64 = uint32_t((ctx.r24.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r11.s32 / ctx.r24.s32 : 0);
loc_822047F4:
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82204804
	if (ctx.cr6.eq) goto loc_82204804;
	// bl 0x821c9b68
	ctx.lr = 0x82204804;
	sub_821C9B68(ctx, base);
loc_82204804:
	// mulli r10,r26,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(80));
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// mulli r11,r31,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(80));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8220493c
	goto loc_8220493C;
loc_82204824:
	// lwz r29,8(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,268(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r11,r31,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r31.u64;
	// divw r11,r11,r24
	ctx.r11.u64 = uint32_t((ctx.r24.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r11.s32 / ctx.r24.s32 : 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x822048c8
	if (!ctx.cr6.lt) goto loc_822048C8;
	// mulli r28,r25,80
	ctx.r28.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(80));
	// add r27,r28,r31
	ctx.r27.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82204878
	if (ctx.cr6.eq) goto loc_82204878;
	// subf r26,r28,r27
	ctx.r26.u64 = ctx.r27.u64 - ctx.r28.u64;
loc_82204850:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82204868
	if (ctx.cr6.eq) goto loc_82204868;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82272590
	ctx.lr = 0x82204868;
	sub_82272590(ctx, base);
loc_82204868:
	// addi r26,r26,80
	ctx.r26.s64 = ctx.r26.s64 + 80;
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82204850
	if (!ctx.cr6.eq) goto loc_82204850;
loc_82204878:
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r31,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r31.u64;
	// divw r11,r11,r24
	ctx.r11.u64 = uint32_t((ctx.r24.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r11.s32 / ctx.r24.s32 : 0);
	// subf r5,r11,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r11.u64;
	// bl 0x82204290
	ctx.lr = 0x82204894;
	sub_82204290(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subf r29,r28,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r28.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x822048bc
	goto loc_822048BC;
loc_822048A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272590
	ctx.lr = 0x822048B8;
	sub_82272590(ctx, base);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
loc_822048BC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822048a8
	if (!ctx.cr6.eq) goto loc_822048A8;
	// b 0x8220493c
	goto loc_8220493C;
loc_822048C8:
	// mulli r26,r25,80
	ctx.r26.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(80));
	// subf r25,r26,r29
	ctx.r25.u64 = ctx.r29.u64 - ctx.r26.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x822048fc
	goto loc_822048FC;
loc_822048DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822048f4
	if (ctx.cr6.eq) goto loc_822048F4;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82272590
	ctx.lr = 0x822048F4;
	sub_82272590(ctx, base);
loc_822048F4:
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
loc_822048FC:
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822048dc
	if (!ctx.cr6.eq) goto loc_822048DC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r28,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204088
	ctx.lr = 0x82204918;
	sub_82204088(ctx, base);
	// add r30,r26,r31
	ctx.r30.u64 = ctx.r26.u64 + ctx.r31.u64;
	// b 0x82204934
	goto loc_82204934;
loc_82204920:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272590
	ctx.lr = 0x82204930;
	sub_82272590(ctx, base);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
loc_82204934:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82204920
	if (!ctx.cr6.eq) goto loc_82204920;
loc_8220493C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82272e88
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8221C680) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221C780) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221C890) {
	REX_FUNC_PROLOGUE();
	// stb r4,10495(r3)
	REX_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221CCD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,5540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5540);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11892(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 11892, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10600(r3)
	REX_STORE_U16(ctx.r3.u32 + 10600, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221E988) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8221e690
	sub_8221E690(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82222A18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e30
	ctx.lr = 0x82222A20;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82222a6c
	if (!ctx.cr6.eq) goto loc_82222A6C;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222a6c
	if (ctx.cr0.eq) goto loc_82222A6C;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82222a6c
	if (ctx.cr0.eq) goto loc_82222A6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82222A6C:
	// andi. r11,r25,4112
	ctx.r11.u64 = ctx.r25.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82222a80
	if (ctx.cr0.eq) goto loc_82222A80;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82222a84
	goto loc_82222A84;
loc_82222A80:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82222A84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// beq cr6,0x82222aa8
	if (ctx.cr6.eq) goto loc_82222AA8;
	// lwz r10,1724(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1724);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82223be8
	ctx.lr = 0x82222AA8;
	sub_82223BE8(ctx, base);
loc_82222AA8:
	// andi. r11,r25,18
	ctx.r11.u64 = ctx.r25.u64 & 18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82222b80
	if (!ctx.cr0.eq) goto loc_82222B80;
	// lwz r11,1724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1724);
	// rlwinm r9,r28,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r28,3
	ctx.r10.u64 = ctx.r28.u32 & 0x1FFFFFFF;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r30,r26
	ctx.r29.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bl 0x8223a468
	ctx.lr = 0x82222AD8;
	sub_8223A468(ctx, base);
	// lwz r11,10888(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10888);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82222af8
	if (ctx.cr6.eq) goto loc_82222AF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,11816
	ctx.r3.s64 = ctx.r31.s64 + 11816;
	// bl 0x82223100
	ctx.lr = 0x82222AF4;
	sub_82223100(ctx, base);
	// b 0x82222b80
	goto loc_82222B80;
loc_82222AF8:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82222b14
	if (!ctx.cr6.gt) goto loc_82222B14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224238
	ctx.lr = 0x82222B10;
	sub_82224238(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82222B14:
	// li r9,2609
	ctx.r9.s64 = 2609;
	// lwz r8,260(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r6,r29,4095
	ctx.r6.s64 = ctx.r29.s64 + 4095;
	// ori r7,r7,2607
	ctx.r7.u64 = ctx.r7.u64 | 2607;
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwinm r9,r6,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFF000;
	// lis r6,-16380
	ctx.r6.s64 = -1073479680;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// ori r6,r6,15360
	ctx.r6.u64 = ctx.r6.u64 | 15360;
	// li r5,3
	ctx.r5.s64 = 3;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// li r4,2609
	ctx.r4.s64 = 2609;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// li r29,8
	ctx.r29.s64 = 8;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82222B80:
	// rlwinm. r6,r25,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82222b94
	if (!ctx.cr0.eq) goto loc_82222B94;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222c20
	if (ctx.cr0.eq) goto loc_82222C20;
loc_82222B94:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82222c00
	if (!ctx.cr0.eq) goto loc_82222C00;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82222bb8
	if (ctx.cr6.eq) goto loc_82222BB8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82222bb8
	if (ctx.cr6.eq) goto loc_82222BB8;
	// subf r11,r24,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r24.u64;
	// addi r8,r27,24
	ctx.r8.s64 = ctx.r27.s64 + 24;
	// b 0x82222bc0
	goto loc_82222BC0;
loc_82222BB8:
	// subf r11,r23,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r23.u64;
	// addi r8,r27,20
	ctx.r8.s64 = ctx.r27.s64 + 20;
loc_82222BC0:
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r11,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r9,127
	ctx.r11.s64 = ctx.r9.s64 + 127;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82222be8
	if (ctx.cr6.gt) goto loc_82222BE8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82222BE8:
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82222bf4
	if (!ctx.cr6.lt) goto loc_82222BF4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82222BF4:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82222C00:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82222c20
	if (ctx.cr6.eq) goto loc_82222C20;
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r28,3
	ctx.r10.u64 = ctx.r28.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r28,r11,-16384
	ctx.r28.s64 = ctx.r11.s64 + -1073741824;
loc_82222C20:
	// li r11,256
	ctx.r11.s64 = 256;
loc_82222C24:
	// mfmsr r8
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r27
	ea = ctx.r27.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r27
	ea = ctx.r27.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = reinterpret_cast<std::atomic<uint32_t>*>(REX_RAW_ADDR(ea))->compare_exchange_strong(ctx.reserved.u32, __builtin_bswap32(ctx.r9.u32), std::memory_order_acq_rel, std::memory_order_acquire);
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82222c24
	if (!ctx.cr0.eq) goto loc_82222C24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82272e80
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82235000) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x828af90c
	ctx.lr = 0x8223503C;
	__imp__XMsgInProcessCall(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822360C0) {
	REX_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828afabc
	__imp__XamEnumerate(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82236348) {
	REX_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x828afaec
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82236870) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8223b338
	sub_8223B338(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82236B58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e3c
	ctx.lr = 0x82236B60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r30,56
	ctx.r25.s64 = ctx.r30.s64 + 56;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r31,0(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82236bc0
	if (ctx.cr0.eq) goto loc_82236BC0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
loc_82236B8C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82236bac
	if (ctx.cr6.lt) goto loc_82236BAC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82236bcc
	if (ctx.cr6.eq) goto loc_82236BCC;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82236bcc
	if (ctx.cr6.eq) goto loc_82236BCC;
loc_82236BAC:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82236b8c
	if (!ctx.cr0.eq) goto loc_82236B8C;
loc_82236BC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82236BC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82272e8c
	__restgprlr_25(ctx, base);
	return;
loc_82236BCC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x82236bf4
	if (ctx.cr0.eq) goto loc_82236BF4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236BF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82236c10
	goto loc_82236C10;
loc_82236BF4:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828aff7c
	ctx.lr = 0x82236C10;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_82236C10:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82236bc0
	if (ctx.cr6.lt) goto loc_82236BC0;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82236c3c
	if (!ctx.cr6.eq) goto loc_82236C3C;
	// stw r26,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
loc_82236C3C:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82236c6c
	if (ctx.cr0.eq) goto loc_82236C6C;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82236cd8
	if (ctx.cr6.eq) goto loc_82236CD8;
loc_82236C6C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82236c7c
	if (!ctx.cr6.eq) goto loc_82236C7C;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x82236c88
	goto loc_82236C88;
loc_82236C7C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82236C88:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82236cd8
	if (!ctx.cr0.eq) goto loc_82236CD8;
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
loc_82236C98:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82236ccc
	if (!ctx.cr6.lt) goto loc_82236CCC;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82236ccc
	if (ctx.cr0.eq) goto loc_82236CCC;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82236c98
	if (ctx.cr0.eq) goto loc_82236C98;
	// b 0x82236cd8
	goto loc_82236CD8;
loc_82236CCC:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82236bc0
	if (!ctx.cr6.eq) goto loc_82236BC0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82236CD8:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x82236d68
	if (!ctx.cr0.eq) goto loc_82236D68;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82236d28
	if (!ctx.cr6.eq) goto loc_82236D28;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// b 0x82236d34
	goto loc_82236D34;
loc_82236D28:
	// stb r26,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
loc_82236D34:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r31,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r31.u32);
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// b 0x82236d74
	goto loc_82236D74;
loc_82236D68:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
loc_82236D74:
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// sth r10,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// bne 0x82236dac
	if (!ctx.cr0.eq) goto loc_82236DAC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_82236DAC:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82236bc4
	if (!ctx.cr6.eq) goto loc_82236BC4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82236dd8
	goto loc_82236DD8;
loc_82236DC0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82236dd4
	if (ctx.cr6.lt) goto loc_82236DD4;
	// stw r10,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
loc_82236DD4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82236DD8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82236dc0
	if (!ctx.cr0.eq) goto loc_82236DC0;
	// b 0x82236bc4
	goto loc_82236BC4;
}

DEFINE_REX_FUNC(sub_82248260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x82248268;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82248288
	if (!ctx.cr6.eq) goto loc_82248288;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,6440
	ctx.r30.s64 = ctx.r11.s64 + 6440;
loc_82248288:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822482a0
	if (!ctx.cr6.eq) goto loc_822482A0;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// lwz r11,-30576(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30576);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
loc_822482A0:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822482B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822482cc
	if (ctx.cr6.eq) goto loc_822482CC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82248300
	goto loc_82248300;
loc_822482CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822482E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82248318
	if (ctx.cr6.lt) goto loc_82248318;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,81(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,53(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 53);
	// bl 0x8223cce8
	ctx.lr = 0x822482FC;
	sub_8223CCE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82248300:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82248318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224F3A8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F3D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8224f3e4
	if (ctx.cr6.lt) goto loc_8224F3E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_8224F3E4:
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

DEFINE_REX_FUNC(sub_822564B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e18
	ctx.lr = 0x822564C0;
	__savegprlr_16(ctx, base);
	// addi r23,r3,8
	ctx.r23.s64 = ctx.r3.s64 + 8;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r3,13
	ctx.r30.s64 = ctx.r3.s64 + 13;
	// lfs f13,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r20,r3,28
	ctx.r20.s64 = ctx.r3.s64 + 28;
	// addi r21,r3,24
	ctx.r21.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// addi r22,r3,20
	ctx.r22.s64 = ctx.r3.s64 + 20;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// addi r28,r3,48
	ctx.r28.s64 = ctx.r3.s64 + 48;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r3,52
	ctx.r5.s64 = ctx.r3.s64 + 52;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r9,0(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r31,0(r21)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r8,0(r22)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lfs f12,0(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r11,r4
	ctx.r25.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r6,r9,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// dcbt r0,r11
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r27,r3,36
	ctx.r27.s64 = ctx.r3.s64 + 36;
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// vcfsx v0,v0,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r26,r1,-160
	ctx.r26.s64 = ctx.r1.s64 + -160;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r7,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r7.u64);
	// lfd f0,-160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r24,r1,-176
	ctx.r24.s64 = ctx.r1.s64 + -176;
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// li r4,0
	ctx.r4.s64 = 0;
	// vrefp v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx v0,0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp v12,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// fmul f12,f12,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f13,15144(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 15144);
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.f13.u64);
	// fctidz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// ld r9,-176(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// vmulfp128 v12,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stfd f13,0(r26)
	ctx.fpscr.disableFlushModeUnconditional();
	REX_STORE_U64(ctx.r26.u32 + 0, ctx.f13.u64);
	// lvlx v13,r24,r8
	temp.u32 = ctx.r24.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ld r31,-160(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lvlx v10,r7,r8
	temp.u32 = ctx.r7.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v3,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v2,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// bge cr6,0x82256708
	if (!ctx.cr6.lt) goto loc_82256708;
loc_822565C8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82256708
	if (!ctx.cr6.gt) goto loc_82256708;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// vspltisb v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_set1_epi8(char(0x1)));
	// addi r7,r5,12
	ctx.r7.s64 = ctx.r5.s64 + 12;
	// vspltisw v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r26,r10,3072
	ctx.r26.s64 = ctx.r10.s64 + 3072;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// vsr v7,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp v6,v11,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx v9,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16))));
	// vspltw v10,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vsr v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcfux v4,v7,31
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// vsubfp v5,v11,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r7,r5,8
	ctx.r7.s64 = ctx.r5.s64 + 8;
	// vcfsx v8,v8,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// vcfux v9,v9,31
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vsldoi v7,v0,v6,4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 12));
	// vsubfp v6,v11,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v10,v8,8,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 8));
	// vmulfp128 v9,v9,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vsldoi v7,v0,v5,4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 12));
	// vor v5,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmulfp128 v7,v4,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsldoi v9,v9,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmsum3fp128 v10,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// stvewx v10,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r26,r10,1024
	ctx.r26.s64 = ctx.r10.s64 + 1024;
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r10,2048
	ctx.r8.s64 = ctx.r10.s64 + 2048;
	// vupkhsh v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16))));
	// lvlx v9,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// vcfsx v8,v10,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw v10,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vsr v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcfux v12,v9,31
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vsldoi v9,v0,v6,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 12));
	// vor v6,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vrlimi128 v10,v8,8,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 8));
	// vsldoi v8,v7,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmsum3fp128 v10,v10,v8
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmulfp128 v12,v12,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsldoi v9,v12,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// stvewx v10,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lvlx v10,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16))));
	// vspltw v12,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vcfsx v10,v8,15
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vaddfp v0,v0,v2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vsubfp v8,v11,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vrlimi128 v12,v10,8,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 8));
	// vmsum3fp128 v12,v12,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// stvewx v12,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// vsr v12,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvlx v10,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduwm v13,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vupkhsh v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16))));
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfux v7,v12,31
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vspltw v12,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vcfsx v10,v11,15
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vsldoi v11,v6,v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 12));
	// vmulfp128 v11,v7,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vrlimi128 v12,v10,8,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 8));
	// vsldoi v11,v11,v5,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 8));
	// vmsum3fp128 v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx v12,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x822565c8
	if (ctx.cr6.lt) goto loc_822565C8;
loc_82256708:
	// sradi r8,r9,63
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s64 >> 63;
	// addi r24,r25,-1
	ctx.r24.s64 = ctx.r25.s64 + -1;
	// sradi r7,r9,32
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0xFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s64 >> 32;
	// extsw r26,r24
	ctx.r26.s64 = ctx.r24.s32;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpd cr6,r8,r26
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r26.s64, ctx.xer);
	// bge cr6,0x822568cc
	if (!ctx.cr6.lt) goto loc_822568CC;
loc_82256724:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8225698c
	if (ctx.cr6.eq) goto loc_8225698C;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// vspltisb v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_set1_epi8(char(0x1)));
	// vspltisw v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r19,r10,3072
	ctx.r19.s64 = ctx.r10.s64 + 3072;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r18,r8,3
	ctx.r18.s64 = ctx.r8.s64 + 3;
	// vsr v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// vsubfp v6,v11,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// vsr v7,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// addi r16,r7,3
	ctx.r16.s64 = ctx.r7.s64 + 3;
	// vcfux v5,v9,31
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// addi r17,r8,2
	ctx.r17.s64 = ctx.r8.s64 + 2;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// vcfux v7,v7,31
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// lvlx v10,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vupkhsh v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16))));
	// addi r18,r10,2048
	ctx.r18.s64 = ctx.r10.s64 + 2048;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx v8,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16))));
	// vcfsx v10,v10,15
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vsldoi v8,v0,v6,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 12));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vmulfp128 v8,v5,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsubfp v5,v11,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vrlimi128 v10,v9,8,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vsldoi v8,v8,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmsum3fp128 v10,v10,v8
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vsubfp v8,v11,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi v8,v0,v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 12));
	// vsldoi v11,v0,v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 12));
	// stvewx v10,r0,r19
	ea = (ctx.r19.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r19,r7,2
	ctx.r19.s64 = ctx.r7.s64 + 2;
	// lvlx v10,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// vupkhsh v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16))));
	// vmulfp128 v8,v7,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vcfsx v6,v10,15
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vsr v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lvlx v9,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r19,r8,2
	ctx.r19.s64 = ctx.r8.s64 + 2;
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// vsr v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcfux v4,v10,31
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcfux v12,v12,31
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vspltw v10,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// vrlimi128 v10,v9,8,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vsldoi v9,v8,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vsldoi v8,v0,v5,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 12));
	// vmulfp128 v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v10,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmulfp128 v8,v4,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvewx v10,r0,r18
	ea = (ctx.r18.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r18,r7,2
	ctx.r18.s64 = ctx.r7.s64 + 2;
	// lvlx v10,0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r19,r10,1024
	ctx.r19.s64 = ctx.r10.s64 + 1024;
	// vupkhsh v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16))));
	// lvlx v9,0,r18
	temp.u32 = ctx.r18.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfsx v10,v10,15
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vrlimi128 v10,v9,8,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vsldoi v9,v8,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmsum3fp128 v11,v10,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vsldoi v10,v12,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// stvewx v11,r0,r19
	ea = (ctx.r19.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16))));
	// vupkhsh v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16))));
	// vcfsx v12,v12,15
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// vcfsx v11,v11,15
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vadduwm v13,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// sradi r8,r9,32
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0xFFFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s64 >> 32;
	// vaddfp v0,v0,v2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v2.f32)));
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// rlwinm r4,r4,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// vrlimi128 v12,v11,8,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 228), 8));
	// vmsum3fp128 v12,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// stvewx v12,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x822568c0
	if (ctx.cr6.eq) goto loc_822568C0;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbt r4,r7
loc_822568C0:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// cmpd cr6,r8,r26
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r26.s64, ctx.xer);
	// blt cr6,0x82256724
	if (ctx.cr6.lt) goto loc_82256724;
loc_822568CC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8225698c
	if (ctx.cr6.eq) goto loc_8225698C;
	// cmpd cr6,r8,r26
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r26.s64, ctx.xer);
	// bne cr6,0x82256974
	if (!ctx.cr6.eq) goto loc_82256974;
	// rlwinm r7,r24,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r6,6(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r6.u64);
	// lfd f13,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,6076(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 6076);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lhz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r6.u64);
	// lfd f12,-160(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lhz r6,2(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r6.u64);
	// lfd f12,-160(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lhz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// std r7,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r7.u64);
	// lfd f12,-160(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x8225698c
	goto loc_8225698C;
loc_82256974:
	// extsw r7,r25
	ctx.r7.s64 = ctx.r25.s32;
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x8225698c
	if (!ctx.cr6.gt) goto loc_8225698C;
	// subf r7,r7,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rldicr r7,r7,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_8225698C:
	// rldicr r6,r8,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000;
	// stvewx v0,r0,r27
	ea = (ctx.r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// std r9,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// lfd f13,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// bge cr6,0x822569e0
	if (!ctx.cr6.lt) goto loc_822569E0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822569E0:
	// lwz r7,0(r22)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r8,0(r21)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82256a04
	if (!ctx.cr6.lt) goto loc_82256A04;
	// stw r10,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// b 0x82272e68
	__restgprlr_16(ctx, base);
	return;
loc_82256A04:
	// stw r8,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// b 0x82272e68
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82276C80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e38
	ctx.lr = 0x82276C88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82276cec
	if (!ctx.cr6.eq) goto loc_82276CEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82276cec
	if (ctx.cr6.eq) goto loc_82276CEC;
loc_82276CB8:
	// bl 0x82279410
	ctx.lr = 0x82276CBC;
	sub_82279410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x822792d8
	ctx.lr = 0x82276CE0;
	sub_822792D8(ctx, base);
loc_82276CE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82276CE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82272e88
	__restgprlr_24(ctx, base);
	return;
loc_82276CEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82276cb8
	if (ctx.cr6.eq) goto loc_82276CB8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82276cb8
	if (ctx.cr6.eq) goto loc_82276CB8;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82276ce0
	if (ctx.cr6.gt) goto loc_82276CE0;
loc_82276D04:
	// rlwinm. r28,r5,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82276d74
	if (ctx.cr0.eq) goto loc_82276D74;
	// clrlwi. r27,r5,31
	ctx.r27.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82276d1c
	if (!ctx.cr0.eq) goto loc_82276D1C;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_82276D1C:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82276D34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82276d6c
	if (ctx.cr0.eq) goto loc_82276D6C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82276d58
	if (!ctx.cr6.lt) goto loc_82276D58;
	// subf r24,r30,r31
	ctx.r24.u64 = ctx.r31.u64 - ctx.r30.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82276d5c
	if (!ctx.cr6.eq) goto loc_82276D5C;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// b 0x82276d60
	goto loc_82276D60;
loc_82276D58:
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_82276D5C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82276D60:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82276d04
	if (!ctx.cr6.gt) goto loc_82276D04;
	// b 0x82276ce0
	goto loc_82276CE0;
loc_82276D6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82276ce4
	goto loc_82276CE4;
loc_82276D74:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82276ce0
	if (ctx.cr6.eq) goto loc_82276CE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82276D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82276ce4
	if (!ctx.cr0.eq) goto loc_82276CE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82276ce4
	goto loc_82276CE4;
}

DEFINE_REX_FUNC(sub_8227D770) {
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
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r30,r11,-17488
	ctx.r30.s64 = ctx.r11.s64 + -17488;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8227D790:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227d7b4
	if (ctx.cr0.eq) goto loc_8227D7B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8227d7b4
	if (ctx.cr6.eq) goto loc_8227D7B4;
	// bl 0x82273808
	ctx.lr = 0x8227D7AC;
	sub_82273808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8227D7B4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227d790
	if (ctx.cr6.lt) goto loc_8227D790;
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

DEFINE_REX_FUNC(sub_82280430) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82280EB0) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r6,r11,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// clrlwi r7,r8,12
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFFF;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280eec
	if (ctx.cr0.eq) goto loc_82280EEC;
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x82280ee4
	if (ctx.cr6.eq) goto loc_82280EE4;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// b 0x82280f18
	goto loc_82280F18;
loc_82280EE4:
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82280f1c
	goto loc_82280F1C;
loc_82280EEC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82280f10
	if (!ctx.cr6.eq) goto loc_82280F10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82280f10
	if (!ctx.cr6.eq) goto loc_82280F10;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r6,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// stw r11,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// stw r11,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r11.u32);
	// blr 
	return;
loc_82280F10:
	// addi r11,r11,15361
	ctx.r11.s64 = ctx.r11.s64 + 15361;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82280F18:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
loc_82280F1C:
	// rlwinm r11,r9,11,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r9,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// stw r11,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// stw r10,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r10.u32);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82280f7c
	if (!ctx.cr0.eq) goto loc_82280F7C;
loc_82280F40:
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// lwz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r11,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r10.u32);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280f40
	if (ctx.cr0.eq) goto loc_82280F40;
loc_82280F7C:
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82288B58) {
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
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// addi r3,r11,25536
	ctx.r3.s64 = ctx.r11.s64 + 25536;
	// bl 0x821aa288
	ctx.lr = 0x82288B70;
	sub_821AA288(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r3,r11,-2456
	ctx.r3.s64 = ctx.r11.s64 + -2456;
	// bl 0x82273730
	ctx.lr = 0x82288B7C;
	sub_82273730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82899038) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,9(r10)
	REX_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,13(r11)
	REX_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,15(r11)
	REX_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,16(r10)
	REX_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,17(r10)
	REX_STORE_U8(ctx.r10.u32 + 17, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,18(r10)
	REX_STORE_U8(ctx.r10.u32 + 18, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,19(r10)
	REX_STORE_U8(ctx.r10.u32 + 19, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,21(r11)
	REX_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,22(r11)
	REX_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,23(r11)
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,428
	ctx.r11.s64 = ctx.r11.s64 + 428;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,428
	ctx.r11.s64 = ctx.r11.s64 + 428;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,25(r10)
	REX_STORE_U8(ctx.r10.u32 + 25, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,428
	ctx.r11.s64 = ctx.r11.s64 + 428;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,26(r10)
	REX_STORE_U8(ctx.r10.u32 + 26, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,428
	ctx.r11.s64 = ctx.r11.s64 + 428;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,27(r10)
	REX_STORE_U8(ctx.r10.u32 + 27, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,29(r11)
	REX_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,30(r11)
	REX_STORE_U8(ctx.r11.u32 + 30, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,31(r11)
	REX_STORE_U8(ctx.r11.u32 + 31, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,33(r10)
	REX_STORE_U8(ctx.r10.u32 + 33, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,34(r10)
	REX_STORE_U8(ctx.r10.u32 + 34, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,37(r11)
	REX_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,41(r10)
	REX_STORE_U8(ctx.r10.u32 + 41, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,42(r10)
	REX_STORE_U8(ctx.r10.u32 + 42, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,43(r10)
	REX_STORE_U8(ctx.r10.u32 + 43, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,45(r11)
	REX_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,46(r11)
	REX_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,47(r11)
	REX_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,48(r10)
	REX_STORE_U8(ctx.r10.u32 + 48, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,49(r10)
	REX_STORE_U8(ctx.r10.u32 + 49, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,50(r10)
	REX_STORE_U8(ctx.r10.u32 + 50, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,51(r10)
	REX_STORE_U8(ctx.r10.u32 + 51, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,53(r11)
	REX_STORE_U8(ctx.r11.u32 + 53, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,54(r11)
	REX_STORE_U8(ctx.r11.u32 + 54, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,55(r11)
	REX_STORE_U8(ctx.r11.u32 + 55, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,56(r10)
	REX_STORE_U8(ctx.r10.u32 + 56, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,57(r10)
	REX_STORE_U8(ctx.r10.u32 + 57, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,58(r10)
	REX_STORE_U8(ctx.r10.u32 + 58, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,59(r10)
	REX_STORE_U8(ctx.r10.u32 + 59, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,60(r11)
	REX_STORE_U8(ctx.r11.u32 + 60, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,61(r11)
	REX_STORE_U8(ctx.r11.u32 + 61, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,62(r11)
	REX_STORE_U8(ctx.r11.u32 + 62, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,63(r11)
	REX_STORE_U8(ctx.r11.u32 + 63, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,64(r10)
	REX_STORE_U8(ctx.r10.u32 + 64, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,65(r10)
	REX_STORE_U8(ctx.r10.u32 + 65, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,66(r10)
	REX_STORE_U8(ctx.r10.u32 + 66, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,67(r10)
	REX_STORE_U8(ctx.r10.u32 + 67, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,68(r10)
	REX_STORE_U8(ctx.r10.u32 + 68, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,69(r10)
	REX_STORE_U8(ctx.r10.u32 + 69, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,70(r10)
	REX_STORE_U8(ctx.r10.u32 + 70, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,71(r10)
	REX_STORE_U8(ctx.r10.u32 + 71, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,73(r11)
	REX_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,75(r11)
	REX_STORE_U8(ctx.r11.u32 + 75, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,81(r11)
	REX_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,82(r11)
	REX_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,83(r11)
	REX_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,860
	ctx.r11.s64 = ctx.r11.s64 + 860;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,84(r10)
	REX_STORE_U8(ctx.r10.u32 + 84, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,860
	ctx.r11.s64 = ctx.r11.s64 + 860;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,85(r10)
	REX_STORE_U8(ctx.r10.u32 + 85, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,860
	ctx.r11.s64 = ctx.r11.s64 + 860;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,86(r10)
	REX_STORE_U8(ctx.r10.u32 + 86, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,860
	ctx.r11.s64 = ctx.r11.s64 + 860;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,87(r10)
	REX_STORE_U8(ctx.r10.u32 + 87, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,812
	ctx.r11.s64 = ctx.r11.s64 + 812;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,92(r10)
	REX_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,812
	ctx.r11.s64 = ctx.r11.s64 + 812;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,93(r10)
	REX_STORE_U8(ctx.r10.u32 + 93, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,812
	ctx.r11.s64 = ctx.r11.s64 + 812;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,94(r10)
	REX_STORE_U8(ctx.r10.u32 + 94, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,812
	ctx.r11.s64 = ctx.r11.s64 + 812;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,95(r10)
	REX_STORE_U8(ctx.r10.u32 + 95, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,96(r11)
	REX_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,97(r11)
	REX_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,98(r11)
	REX_STORE_U8(ctx.r11.u32 + 98, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,99(r11)
	REX_STORE_U8(ctx.r11.u32 + 99, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,764
	ctx.r11.s64 = ctx.r11.s64 + 764;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,100(r10)
	REX_STORE_U8(ctx.r10.u32 + 100, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,764
	ctx.r11.s64 = ctx.r11.s64 + 764;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,101(r10)
	REX_STORE_U8(ctx.r10.u32 + 101, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,764
	ctx.r11.s64 = ctx.r11.s64 + 764;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,102(r10)
	REX_STORE_U8(ctx.r10.u32 + 102, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,764
	ctx.r11.s64 = ctx.r11.s64 + 764;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,103(r10)
	REX_STORE_U8(ctx.r10.u32 + 103, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,106(r11)
	REX_STORE_U8(ctx.r11.u32 + 106, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,716
	ctx.r11.s64 = ctx.r11.s64 + 716;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,108(r10)
	REX_STORE_U8(ctx.r10.u32 + 108, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,716
	ctx.r11.s64 = ctx.r11.s64 + 716;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,109(r10)
	REX_STORE_U8(ctx.r10.u32 + 109, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,716
	ctx.r11.s64 = ctx.r11.s64 + 716;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,110(r10)
	REX_STORE_U8(ctx.r10.u32 + 110, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,716
	ctx.r11.s64 = ctx.r11.s64 + 716;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,111(r10)
	REX_STORE_U8(ctx.r10.u32 + 111, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,113(r11)
	REX_STORE_U8(ctx.r11.u32 + 113, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,114(r11)
	REX_STORE_U8(ctx.r11.u32 + 114, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,115(r11)
	REX_STORE_U8(ctx.r11.u32 + 115, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,668
	ctx.r11.s64 = ctx.r11.s64 + 668;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,116(r10)
	REX_STORE_U8(ctx.r10.u32 + 116, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,668
	ctx.r11.s64 = ctx.r11.s64 + 668;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,117(r10)
	REX_STORE_U8(ctx.r10.u32 + 117, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,668
	ctx.r11.s64 = ctx.r11.s64 + 668;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,118(r10)
	REX_STORE_U8(ctx.r10.u32 + 118, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,668
	ctx.r11.s64 = ctx.r11.s64 + 668;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,119(r10)
	REX_STORE_U8(ctx.r10.u32 + 119, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,120(r11)
	REX_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,121(r11)
	REX_STORE_U8(ctx.r11.u32 + 121, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,122(r11)
	REX_STORE_U8(ctx.r11.u32 + 122, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,123(r11)
	REX_STORE_U8(ctx.r11.u32 + 123, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,124(r10)
	REX_STORE_U8(ctx.r10.u32 + 124, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,125(r10)
	REX_STORE_U8(ctx.r10.u32 + 125, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,126(r10)
	REX_STORE_U8(ctx.r10.u32 + 126, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,127(r10)
	REX_STORE_U8(ctx.r10.u32 + 127, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,129(r11)
	REX_STORE_U8(ctx.r11.u32 + 129, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,130(r11)
	REX_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,131(r11)
	REX_STORE_U8(ctx.r11.u32 + 131, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,132(r10)
	REX_STORE_U8(ctx.r10.u32 + 132, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,133(r10)
	REX_STORE_U8(ctx.r10.u32 + 133, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,134(r10)
	REX_STORE_U8(ctx.r10.u32 + 134, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,135(r10)
	REX_STORE_U8(ctx.r10.u32 + 135, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,136(r10)
	REX_STORE_U8(ctx.r10.u32 + 136, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,137(r10)
	REX_STORE_U8(ctx.r10.u32 + 137, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,138(r10)
	REX_STORE_U8(ctx.r10.u32 + 138, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stb r11,139(r10)
	REX_STORE_U8(ctx.r10.u32 + 139, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,140(r11)
	REX_STORE_U8(ctx.r11.u32 + 140, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,141(r11)
	REX_STORE_U8(ctx.r11.u32 + 141, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,142(r11)
	REX_STORE_U8(ctx.r11.u32 + 142, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,143(r11)
	REX_STORE_U8(ctx.r11.u32 + 143, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,144(r11)
	REX_STORE_U8(ctx.r11.u32 + 144, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,145(r11)
	REX_STORE_U8(ctx.r11.u32 + 145, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,146(r11)
	REX_STORE_U8(ctx.r11.u32 + 146, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,148(r11)
	REX_STORE_U8(ctx.r11.u32 + 148, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,149(r11)
	REX_STORE_U8(ctx.r11.u32 + 149, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,150(r11)
	REX_STORE_U8(ctx.r11.u32 + 150, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,151(r11)
	REX_STORE_U8(ctx.r11.u32 + 151, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,152(r11)
	REX_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,153(r11)
	REX_STORE_U8(ctx.r11.u32 + 153, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,154(r11)
	REX_STORE_U8(ctx.r11.u32 + 154, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,155(r11)
	REX_STORE_U8(ctx.r11.u32 + 155, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,156(r11)
	REX_STORE_U8(ctx.r11.u32 + 156, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,157(r11)
	REX_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,158(r11)
	REX_STORE_U8(ctx.r11.u32 + 158, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,159(r11)
	REX_STORE_U8(ctx.r11.u32 + 159, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,160(r11)
	REX_STORE_U8(ctx.r11.u32 + 160, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,161(r11)
	REX_STORE_U8(ctx.r11.u32 + 161, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,162(r11)
	REX_STORE_U8(ctx.r11.u32 + 162, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,163(r11)
	REX_STORE_U8(ctx.r11.u32 + 163, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,164(r11)
	REX_STORE_U8(ctx.r11.u32 + 164, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,165(r11)
	REX_STORE_U8(ctx.r11.u32 + 165, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,166(r11)
	REX_STORE_U8(ctx.r11.u32 + 166, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,167(r11)
	REX_STORE_U8(ctx.r11.u32 + 167, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,168(r11)
	REX_STORE_U8(ctx.r11.u32 + 168, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,169(r11)
	REX_STORE_U8(ctx.r11.u32 + 169, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,170(r11)
	REX_STORE_U8(ctx.r11.u32 + 170, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,171(r11)
	REX_STORE_U8(ctx.r11.u32 + 171, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,172(r11)
	REX_STORE_U8(ctx.r11.u32 + 172, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,173(r11)
	REX_STORE_U8(ctx.r11.u32 + 173, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,174(r11)
	REX_STORE_U8(ctx.r11.u32 + 174, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,175(r11)
	REX_STORE_U8(ctx.r11.u32 + 175, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,176(r11)
	REX_STORE_U8(ctx.r11.u32 + 176, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,177(r11)
	REX_STORE_U8(ctx.r11.u32 + 177, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,178(r11)
	REX_STORE_U8(ctx.r11.u32 + 178, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,179(r11)
	REX_STORE_U8(ctx.r11.u32 + 179, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,180(r11)
	REX_STORE_U8(ctx.r11.u32 + 180, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,181(r11)
	REX_STORE_U8(ctx.r11.u32 + 181, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,182(r11)
	REX_STORE_U8(ctx.r11.u32 + 182, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,183(r11)
	REX_STORE_U8(ctx.r11.u32 + 183, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,184(r11)
	REX_STORE_U8(ctx.r11.u32 + 184, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,185(r11)
	REX_STORE_U8(ctx.r11.u32 + 185, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,186(r11)
	REX_STORE_U8(ctx.r11.u32 + 186, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,187(r11)
	REX_STORE_U8(ctx.r11.u32 + 187, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,190(r11)
	REX_STORE_U8(ctx.r11.u32 + 190, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,191(r11)
	REX_STORE_U8(ctx.r11.u32 + 191, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,192(r11)
	REX_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,193(r11)
	REX_STORE_U8(ctx.r11.u32 + 193, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,194(r11)
	REX_STORE_U8(ctx.r11.u32 + 194, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,195(r11)
	REX_STORE_U8(ctx.r11.u32 + 195, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,196(r11)
	REX_STORE_U8(ctx.r11.u32 + 196, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,197(r11)
	REX_STORE_U8(ctx.r11.u32 + 197, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,198(r11)
	REX_STORE_U8(ctx.r11.u32 + 198, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,199(r11)
	REX_STORE_U8(ctx.r11.u32 + 199, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,200(r11)
	REX_STORE_U8(ctx.r11.u32 + 200, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,201(r11)
	REX_STORE_U8(ctx.r11.u32 + 201, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,202(r11)
	REX_STORE_U8(ctx.r11.u32 + 202, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,203(r11)
	REX_STORE_U8(ctx.r11.u32 + 203, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,204(r11)
	REX_STORE_U8(ctx.r11.u32 + 204, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,205(r11)
	REX_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,206(r11)
	REX_STORE_U8(ctx.r11.u32 + 206, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,207(r11)
	REX_STORE_U8(ctx.r11.u32 + 207, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,208(r11)
	REX_STORE_U8(ctx.r11.u32 + 208, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,209(r11)
	REX_STORE_U8(ctx.r11.u32 + 209, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,210(r11)
	REX_STORE_U8(ctx.r11.u32 + 210, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,211(r11)
	REX_STORE_U8(ctx.r11.u32 + 211, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,212(r11)
	REX_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,213(r11)
	REX_STORE_U8(ctx.r11.u32 + 213, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,214(r11)
	REX_STORE_U8(ctx.r11.u32 + 214, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,215(r11)
	REX_STORE_U8(ctx.r11.u32 + 215, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,216(r11)
	REX_STORE_U8(ctx.r11.u32 + 216, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,217(r11)
	REX_STORE_U8(ctx.r11.u32 + 217, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,218(r11)
	REX_STORE_U8(ctx.r11.u32 + 218, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,219(r11)
	REX_STORE_U8(ctx.r11.u32 + 219, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,220(r11)
	REX_STORE_U8(ctx.r11.u32 + 220, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,221(r11)
	REX_STORE_U8(ctx.r11.u32 + 221, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,222(r11)
	REX_STORE_U8(ctx.r11.u32 + 222, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,223(r11)
	REX_STORE_U8(ctx.r11.u32 + 223, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,224(r11)
	REX_STORE_U8(ctx.r11.u32 + 224, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,225(r11)
	REX_STORE_U8(ctx.r11.u32 + 225, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,226(r11)
	REX_STORE_U8(ctx.r11.u32 + 226, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,227(r11)
	REX_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,228(r11)
	REX_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,229(r11)
	REX_STORE_U8(ctx.r11.u32 + 229, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,230(r11)
	REX_STORE_U8(ctx.r11.u32 + 230, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,231(r11)
	REX_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,232(r11)
	REX_STORE_U8(ctx.r11.u32 + 232, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,233(r11)
	REX_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,234(r11)
	REX_STORE_U8(ctx.r11.u32 + 234, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,235(r11)
	REX_STORE_U8(ctx.r11.u32 + 235, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,236(r11)
	REX_STORE_U8(ctx.r11.u32 + 236, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,237(r11)
	REX_STORE_U8(ctx.r11.u32 + 237, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,238(r11)
	REX_STORE_U8(ctx.r11.u32 + 238, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,239(r11)
	REX_STORE_U8(ctx.r11.u32 + 239, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,240(r11)
	REX_STORE_U8(ctx.r11.u32 + 240, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,241(r11)
	REX_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,242(r11)
	REX_STORE_U8(ctx.r11.u32 + 242, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,243(r11)
	REX_STORE_U8(ctx.r11.u32 + 243, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,244(r11)
	REX_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,245(r11)
	REX_STORE_U8(ctx.r11.u32 + 245, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,246(r11)
	REX_STORE_U8(ctx.r11.u32 + 246, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,247(r11)
	REX_STORE_U8(ctx.r11.u32 + 247, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,248(r11)
	REX_STORE_U8(ctx.r11.u32 + 248, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,249(r11)
	REX_STORE_U8(ctx.r11.u32 + 249, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,250(r11)
	REX_STORE_U8(ctx.r11.u32 + 250, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,251(r11)
	REX_STORE_U8(ctx.r11.u32 + 251, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,252(r11)
	REX_STORE_U8(ctx.r11.u32 + 252, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,253(r11)
	REX_STORE_U8(ctx.r11.u32 + 253, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,254(r11)
	REX_STORE_U8(ctx.r11.u32 + 254, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,255(r11)
	REX_STORE_U8(ctx.r11.u32 + 255, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,256(r11)
	REX_STORE_U8(ctx.r11.u32 + 256, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,257(r11)
	REX_STORE_U8(ctx.r11.u32 + 257, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,258(r11)
	REX_STORE_U8(ctx.r11.u32 + 258, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,259(r11)
	REX_STORE_U8(ctx.r11.u32 + 259, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,260(r11)
	REX_STORE_U8(ctx.r11.u32 + 260, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,261(r11)
	REX_STORE_U8(ctx.r11.u32 + 261, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,262(r11)
	REX_STORE_U8(ctx.r11.u32 + 262, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,263(r11)
	REX_STORE_U8(ctx.r11.u32 + 263, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,264(r11)
	REX_STORE_U8(ctx.r11.u32 + 264, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,265(r11)
	REX_STORE_U8(ctx.r11.u32 + 265, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,266(r11)
	REX_STORE_U8(ctx.r11.u32 + 266, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,267(r11)
	REX_STORE_U8(ctx.r11.u32 + 267, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,268(r11)
	REX_STORE_U8(ctx.r11.u32 + 268, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,269(r11)
	REX_STORE_U8(ctx.r11.u32 + 269, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,270(r11)
	REX_STORE_U8(ctx.r11.u32 + 270, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,271(r11)
	REX_STORE_U8(ctx.r11.u32 + 271, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,272(r11)
	REX_STORE_U8(ctx.r11.u32 + 272, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,273(r11)
	REX_STORE_U8(ctx.r11.u32 + 273, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,274(r11)
	REX_STORE_U8(ctx.r11.u32 + 274, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,275(r11)
	REX_STORE_U8(ctx.r11.u32 + 275, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,276(r11)
	REX_STORE_U8(ctx.r11.u32 + 276, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,277(r11)
	REX_STORE_U8(ctx.r11.u32 + 277, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,278(r11)
	REX_STORE_U8(ctx.r11.u32 + 278, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,279(r11)
	REX_STORE_U8(ctx.r11.u32 + 279, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,280(r11)
	REX_STORE_U8(ctx.r11.u32 + 280, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,281(r11)
	REX_STORE_U8(ctx.r11.u32 + 281, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,282(r11)
	REX_STORE_U8(ctx.r11.u32 + 282, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,283(r11)
	REX_STORE_U8(ctx.r11.u32 + 283, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,284(r11)
	REX_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,285(r11)
	REX_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,286(r11)
	REX_STORE_U8(ctx.r11.u32 + 286, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,287(r11)
	REX_STORE_U8(ctx.r11.u32 + 287, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,288(r11)
	REX_STORE_U8(ctx.r11.u32 + 288, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,289(r11)
	REX_STORE_U8(ctx.r11.u32 + 289, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,290(r11)
	REX_STORE_U8(ctx.r11.u32 + 290, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,291(r11)
	REX_STORE_U8(ctx.r11.u32 + 291, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,292(r11)
	REX_STORE_U8(ctx.r11.u32 + 292, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,293(r11)
	REX_STORE_U8(ctx.r11.u32 + 293, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,294(r11)
	REX_STORE_U8(ctx.r11.u32 + 294, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,295(r11)
	REX_STORE_U8(ctx.r11.u32 + 295, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,296(r11)
	REX_STORE_U8(ctx.r11.u32 + 296, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,297(r11)
	REX_STORE_U8(ctx.r11.u32 + 297, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,298(r11)
	REX_STORE_U8(ctx.r11.u32 + 298, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,299(r11)
	REX_STORE_U8(ctx.r11.u32 + 299, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,300(r11)
	REX_STORE_U8(ctx.r11.u32 + 300, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,301(r11)
	REX_STORE_U8(ctx.r11.u32 + 301, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,302(r11)
	REX_STORE_U8(ctx.r11.u32 + 302, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,303(r11)
	REX_STORE_U8(ctx.r11.u32 + 303, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,304(r11)
	REX_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,305(r11)
	REX_STORE_U8(ctx.r11.u32 + 305, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,306(r11)
	REX_STORE_U8(ctx.r11.u32 + 306, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,307(r11)
	REX_STORE_U8(ctx.r11.u32 + 307, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,308(r11)
	REX_STORE_U8(ctx.r11.u32 + 308, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,309(r11)
	REX_STORE_U8(ctx.r11.u32 + 309, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,310(r11)
	REX_STORE_U8(ctx.r11.u32 + 310, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,311(r11)
	REX_STORE_U8(ctx.r11.u32 + 311, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,312(r11)
	REX_STORE_U8(ctx.r11.u32 + 312, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,313(r11)
	REX_STORE_U8(ctx.r11.u32 + 313, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,314(r11)
	REX_STORE_U8(ctx.r11.u32 + 314, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,315(r11)
	REX_STORE_U8(ctx.r11.u32 + 315, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,316(r11)
	REX_STORE_U8(ctx.r11.u32 + 316, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,317(r11)
	REX_STORE_U8(ctx.r11.u32 + 317, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,318(r11)
	REX_STORE_U8(ctx.r11.u32 + 318, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,319(r11)
	REX_STORE_U8(ctx.r11.u32 + 319, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,320(r11)
	REX_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,321(r11)
	REX_STORE_U8(ctx.r11.u32 + 321, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,322(r11)
	REX_STORE_U8(ctx.r11.u32 + 322, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,323(r11)
	REX_STORE_U8(ctx.r11.u32 + 323, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,324(r11)
	REX_STORE_U8(ctx.r11.u32 + 324, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,325(r11)
	REX_STORE_U8(ctx.r11.u32 + 325, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,326(r11)
	REX_STORE_U8(ctx.r11.u32 + 326, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,327(r11)
	REX_STORE_U8(ctx.r11.u32 + 327, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,328(r11)
	REX_STORE_U8(ctx.r11.u32 + 328, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,329(r11)
	REX_STORE_U8(ctx.r11.u32 + 329, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,330(r11)
	REX_STORE_U8(ctx.r11.u32 + 330, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,331(r11)
	REX_STORE_U8(ctx.r11.u32 + 331, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,332(r11)
	REX_STORE_U8(ctx.r11.u32 + 332, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,333(r11)
	REX_STORE_U8(ctx.r11.u32 + 333, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,334(r11)
	REX_STORE_U8(ctx.r11.u32 + 334, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,335(r11)
	REX_STORE_U8(ctx.r11.u32 + 335, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,336(r11)
	REX_STORE_U8(ctx.r11.u32 + 336, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,337(r11)
	REX_STORE_U8(ctx.r11.u32 + 337, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,338(r11)
	REX_STORE_U8(ctx.r11.u32 + 338, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,339(r11)
	REX_STORE_U8(ctx.r11.u32 + 339, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,340(r11)
	REX_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,341(r11)
	REX_STORE_U8(ctx.r11.u32 + 341, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,342(r11)
	REX_STORE_U8(ctx.r11.u32 + 342, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,343(r11)
	REX_STORE_U8(ctx.r11.u32 + 343, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,344(r11)
	REX_STORE_U8(ctx.r11.u32 + 344, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,345(r11)
	REX_STORE_U8(ctx.r11.u32 + 345, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,346(r11)
	REX_STORE_U8(ctx.r11.u32 + 346, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,347(r11)
	REX_STORE_U8(ctx.r11.u32 + 347, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,348(r11)
	REX_STORE_U8(ctx.r11.u32 + 348, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,349(r11)
	REX_STORE_U8(ctx.r11.u32 + 349, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,350(r11)
	REX_STORE_U8(ctx.r11.u32 + 350, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,351(r11)
	REX_STORE_U8(ctx.r11.u32 + 351, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,352(r11)
	REX_STORE_U8(ctx.r11.u32 + 352, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,353(r11)
	REX_STORE_U8(ctx.r11.u32 + 353, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,354(r11)
	REX_STORE_U8(ctx.r11.u32 + 354, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,355(r11)
	REX_STORE_U8(ctx.r11.u32 + 355, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,356(r11)
	REX_STORE_U8(ctx.r11.u32 + 356, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,357(r11)
	REX_STORE_U8(ctx.r11.u32 + 357, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,358(r11)
	REX_STORE_U8(ctx.r11.u32 + 358, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,359(r11)
	REX_STORE_U8(ctx.r11.u32 + 359, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,360(r11)
	REX_STORE_U8(ctx.r11.u32 + 360, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,361(r11)
	REX_STORE_U8(ctx.r11.u32 + 361, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,362(r11)
	REX_STORE_U8(ctx.r11.u32 + 362, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,363(r11)
	REX_STORE_U8(ctx.r11.u32 + 363, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,364(r11)
	REX_STORE_U8(ctx.r11.u32 + 364, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,365(r11)
	REX_STORE_U8(ctx.r11.u32 + 365, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,366(r11)
	REX_STORE_U8(ctx.r11.u32 + 366, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,367(r11)
	REX_STORE_U8(ctx.r11.u32 + 367, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,368(r11)
	REX_STORE_U8(ctx.r11.u32 + 368, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,369(r11)
	REX_STORE_U8(ctx.r11.u32 + 369, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,370(r11)
	REX_STORE_U8(ctx.r11.u32 + 370, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,371(r11)
	REX_STORE_U8(ctx.r11.u32 + 371, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,372(r11)
	REX_STORE_U8(ctx.r11.u32 + 372, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,373(r11)
	REX_STORE_U8(ctx.r11.u32 + 373, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,374(r11)
	REX_STORE_U8(ctx.r11.u32 + 374, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,375(r11)
	REX_STORE_U8(ctx.r11.u32 + 375, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,376(r11)
	REX_STORE_U8(ctx.r11.u32 + 376, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,377(r11)
	REX_STORE_U8(ctx.r11.u32 + 377, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,378(r11)
	REX_STORE_U8(ctx.r11.u32 + 378, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,379(r11)
	REX_STORE_U8(ctx.r11.u32 + 379, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,380(r11)
	REX_STORE_U8(ctx.r11.u32 + 380, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,381(r11)
	REX_STORE_U8(ctx.r11.u32 + 381, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,382(r11)
	REX_STORE_U8(ctx.r11.u32 + 382, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,383(r11)
	REX_STORE_U8(ctx.r11.u32 + 383, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,385(r11)
	REX_STORE_U8(ctx.r11.u32 + 385, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,386(r11)
	REX_STORE_U8(ctx.r11.u32 + 386, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,387(r11)
	REX_STORE_U8(ctx.r11.u32 + 387, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,388(r11)
	REX_STORE_U8(ctx.r11.u32 + 388, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,389(r11)
	REX_STORE_U8(ctx.r11.u32 + 389, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,390(r11)
	REX_STORE_U8(ctx.r11.u32 + 390, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,391(r11)
	REX_STORE_U8(ctx.r11.u32 + 391, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,392(r11)
	REX_STORE_U8(ctx.r11.u32 + 392, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,393(r11)
	REX_STORE_U8(ctx.r11.u32 + 393, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,394(r11)
	REX_STORE_U8(ctx.r11.u32 + 394, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,395(r11)
	REX_STORE_U8(ctx.r11.u32 + 395, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,396(r11)
	REX_STORE_U8(ctx.r11.u32 + 396, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,397(r11)
	REX_STORE_U8(ctx.r11.u32 + 397, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,398(r11)
	REX_STORE_U8(ctx.r11.u32 + 398, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,399(r11)
	REX_STORE_U8(ctx.r11.u32 + 399, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,400(r11)
	REX_STORE_U8(ctx.r11.u32 + 400, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,401(r11)
	REX_STORE_U8(ctx.r11.u32 + 401, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,402(r11)
	REX_STORE_U8(ctx.r11.u32 + 402, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,403(r11)
	REX_STORE_U8(ctx.r11.u32 + 403, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,404(r11)
	REX_STORE_U8(ctx.r11.u32 + 404, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,405(r11)
	REX_STORE_U8(ctx.r11.u32 + 405, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,406(r11)
	REX_STORE_U8(ctx.r11.u32 + 406, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,407(r11)
	REX_STORE_U8(ctx.r11.u32 + 407, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,408(r11)
	REX_STORE_U8(ctx.r11.u32 + 408, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,409(r11)
	REX_STORE_U8(ctx.r11.u32 + 409, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,410(r11)
	REX_STORE_U8(ctx.r11.u32 + 410, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,411(r11)
	REX_STORE_U8(ctx.r11.u32 + 411, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,412(r11)
	REX_STORE_U8(ctx.r11.u32 + 412, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,413(r11)
	REX_STORE_U8(ctx.r11.u32 + 413, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,414(r11)
	REX_STORE_U8(ctx.r11.u32 + 414, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,415(r11)
	REX_STORE_U8(ctx.r11.u32 + 415, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,416(r11)
	REX_STORE_U8(ctx.r11.u32 + 416, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,417(r11)
	REX_STORE_U8(ctx.r11.u32 + 417, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,418(r11)
	REX_STORE_U8(ctx.r11.u32 + 418, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,419(r11)
	REX_STORE_U8(ctx.r11.u32 + 419, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,420(r11)
	REX_STORE_U8(ctx.r11.u32 + 420, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,421(r11)
	REX_STORE_U8(ctx.r11.u32 + 421, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,422(r11)
	REX_STORE_U8(ctx.r11.u32 + 422, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,423(r11)
	REX_STORE_U8(ctx.r11.u32 + 423, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,424(r11)
	REX_STORE_U8(ctx.r11.u32 + 424, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,425(r11)
	REX_STORE_U8(ctx.r11.u32 + 425, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,426(r11)
	REX_STORE_U8(ctx.r11.u32 + 426, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,427(r11)
	REX_STORE_U8(ctx.r11.u32 + 427, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,428(r11)
	REX_STORE_U8(ctx.r11.u32 + 428, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,429(r11)
	REX_STORE_U8(ctx.r11.u32 + 429, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,430(r11)
	REX_STORE_U8(ctx.r11.u32 + 430, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,431(r11)
	REX_STORE_U8(ctx.r11.u32 + 431, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,432(r11)
	REX_STORE_U8(ctx.r11.u32 + 432, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,433(r11)
	REX_STORE_U8(ctx.r11.u32 + 433, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,434(r11)
	REX_STORE_U8(ctx.r11.u32 + 434, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,435(r11)
	REX_STORE_U8(ctx.r11.u32 + 435, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,436(r11)
	REX_STORE_U8(ctx.r11.u32 + 436, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,437(r11)
	REX_STORE_U8(ctx.r11.u32 + 437, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,438(r11)
	REX_STORE_U8(ctx.r11.u32 + 438, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,439(r11)
	REX_STORE_U8(ctx.r11.u32 + 439, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,440(r11)
	REX_STORE_U8(ctx.r11.u32 + 440, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,441(r11)
	REX_STORE_U8(ctx.r11.u32 + 441, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,442(r11)
	REX_STORE_U8(ctx.r11.u32 + 442, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,443(r11)
	REX_STORE_U8(ctx.r11.u32 + 443, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,444(r11)
	REX_STORE_U8(ctx.r11.u32 + 444, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,445(r11)
	REX_STORE_U8(ctx.r11.u32 + 445, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,446(r11)
	REX_STORE_U8(ctx.r11.u32 + 446, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,447(r11)
	REX_STORE_U8(ctx.r11.u32 + 447, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,448(r11)
	REX_STORE_U8(ctx.r11.u32 + 448, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,449(r11)
	REX_STORE_U8(ctx.r11.u32 + 449, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,450(r11)
	REX_STORE_U8(ctx.r11.u32 + 450, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,451(r11)
	REX_STORE_U8(ctx.r11.u32 + 451, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,452(r11)
	REX_STORE_U8(ctx.r11.u32 + 452, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,453(r11)
	REX_STORE_U8(ctx.r11.u32 + 453, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,454(r11)
	REX_STORE_U8(ctx.r11.u32 + 454, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,455(r11)
	REX_STORE_U8(ctx.r11.u32 + 455, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,456(r11)
	REX_STORE_U8(ctx.r11.u32 + 456, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,457(r11)
	REX_STORE_U8(ctx.r11.u32 + 457, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,458(r11)
	REX_STORE_U8(ctx.r11.u32 + 458, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,459(r11)
	REX_STORE_U8(ctx.r11.u32 + 459, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,461(r11)
	REX_STORE_U8(ctx.r11.u32 + 461, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,462(r11)
	REX_STORE_U8(ctx.r11.u32 + 462, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,463(r11)
	REX_STORE_U8(ctx.r11.u32 + 463, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,464(r11)
	REX_STORE_U8(ctx.r11.u32 + 464, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,465(r11)
	REX_STORE_U8(ctx.r11.u32 + 465, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,466(r11)
	REX_STORE_U8(ctx.r11.u32 + 466, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,467(r11)
	REX_STORE_U8(ctx.r11.u32 + 467, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,469(r11)
	REX_STORE_U8(ctx.r11.u32 + 469, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,470(r11)
	REX_STORE_U8(ctx.r11.u32 + 470, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,471(r11)
	REX_STORE_U8(ctx.r11.u32 + 471, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,472(r11)
	REX_STORE_U8(ctx.r11.u32 + 472, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,473(r11)
	REX_STORE_U8(ctx.r11.u32 + 473, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,474(r11)
	REX_STORE_U8(ctx.r11.u32 + 474, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,475(r11)
	REX_STORE_U8(ctx.r11.u32 + 475, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,476(r11)
	REX_STORE_U8(ctx.r11.u32 + 476, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,477(r11)
	REX_STORE_U8(ctx.r11.u32 + 477, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,478(r11)
	REX_STORE_U8(ctx.r11.u32 + 478, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,479(r11)
	REX_STORE_U8(ctx.r11.u32 + 479, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,480(r11)
	REX_STORE_U8(ctx.r11.u32 + 480, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,481(r11)
	REX_STORE_U8(ctx.r11.u32 + 481, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,482(r11)
	REX_STORE_U8(ctx.r11.u32 + 482, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,483(r11)
	REX_STORE_U8(ctx.r11.u32 + 483, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,484(r11)
	REX_STORE_U8(ctx.r11.u32 + 484, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,485(r11)
	REX_STORE_U8(ctx.r11.u32 + 485, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,486(r11)
	REX_STORE_U8(ctx.r11.u32 + 486, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,487(r11)
	REX_STORE_U8(ctx.r11.u32 + 487, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,488(r11)
	REX_STORE_U8(ctx.r11.u32 + 488, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,489(r11)
	REX_STORE_U8(ctx.r11.u32 + 489, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,490(r11)
	REX_STORE_U8(ctx.r11.u32 + 490, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,491(r11)
	REX_STORE_U8(ctx.r11.u32 + 491, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,492(r11)
	REX_STORE_U8(ctx.r11.u32 + 492, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,493(r11)
	REX_STORE_U8(ctx.r11.u32 + 493, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,494(r11)
	REX_STORE_U8(ctx.r11.u32 + 494, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,495(r11)
	REX_STORE_U8(ctx.r11.u32 + 495, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,496(r11)
	REX_STORE_U8(ctx.r11.u32 + 496, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,497(r11)
	REX_STORE_U8(ctx.r11.u32 + 497, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,498(r11)
	REX_STORE_U8(ctx.r11.u32 + 498, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,499(r11)
	REX_STORE_U8(ctx.r11.u32 + 499, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,500(r11)
	REX_STORE_U8(ctx.r11.u32 + 500, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,501(r11)
	REX_STORE_U8(ctx.r11.u32 + 501, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,502(r11)
	REX_STORE_U8(ctx.r11.u32 + 502, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,503(r11)
	REX_STORE_U8(ctx.r11.u32 + 503, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,504(r11)
	REX_STORE_U8(ctx.r11.u32 + 504, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,505(r11)
	REX_STORE_U8(ctx.r11.u32 + 505, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,506(r11)
	REX_STORE_U8(ctx.r11.u32 + 506, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,507(r11)
	REX_STORE_U8(ctx.r11.u32 + 507, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,508(r11)
	REX_STORE_U8(ctx.r11.u32 + 508, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,509(r11)
	REX_STORE_U8(ctx.r11.u32 + 509, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,510(r11)
	REX_STORE_U8(ctx.r11.u32 + 510, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,511(r11)
	REX_STORE_U8(ctx.r11.u32 + 511, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,512(r11)
	REX_STORE_U8(ctx.r11.u32 + 512, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,513(r11)
	REX_STORE_U8(ctx.r11.u32 + 513, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,514(r11)
	REX_STORE_U8(ctx.r11.u32 + 514, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,515(r11)
	REX_STORE_U8(ctx.r11.u32 + 515, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,516(r11)
	REX_STORE_U8(ctx.r11.u32 + 516, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,517(r11)
	REX_STORE_U8(ctx.r11.u32 + 517, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,518(r11)
	REX_STORE_U8(ctx.r11.u32 + 518, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,519(r11)
	REX_STORE_U8(ctx.r11.u32 + 519, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,520(r11)
	REX_STORE_U8(ctx.r11.u32 + 520, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,521(r11)
	REX_STORE_U8(ctx.r11.u32 + 521, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,522(r11)
	REX_STORE_U8(ctx.r11.u32 + 522, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,523(r11)
	REX_STORE_U8(ctx.r11.u32 + 523, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,524(r11)
	REX_STORE_U8(ctx.r11.u32 + 524, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,525(r11)
	REX_STORE_U8(ctx.r11.u32 + 525, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,526(r11)
	REX_STORE_U8(ctx.r11.u32 + 526, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,527(r11)
	REX_STORE_U8(ctx.r11.u32 + 527, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,528(r11)
	REX_STORE_U8(ctx.r11.u32 + 528, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,529(r11)
	REX_STORE_U8(ctx.r11.u32 + 529, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,530(r11)
	REX_STORE_U8(ctx.r11.u32 + 530, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,531(r11)
	REX_STORE_U8(ctx.r11.u32 + 531, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,532(r11)
	REX_STORE_U8(ctx.r11.u32 + 532, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,533(r11)
	REX_STORE_U8(ctx.r11.u32 + 533, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,534(r11)
	REX_STORE_U8(ctx.r11.u32 + 534, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,535(r11)
	REX_STORE_U8(ctx.r11.u32 + 535, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,536(r11)
	REX_STORE_U8(ctx.r11.u32 + 536, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,537(r11)
	REX_STORE_U8(ctx.r11.u32 + 537, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,538(r11)
	REX_STORE_U8(ctx.r11.u32 + 538, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,539(r11)
	REX_STORE_U8(ctx.r11.u32 + 539, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,540(r11)
	REX_STORE_U8(ctx.r11.u32 + 540, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,541(r11)
	REX_STORE_U8(ctx.r11.u32 + 541, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,542(r11)
	REX_STORE_U8(ctx.r11.u32 + 542, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,543(r11)
	REX_STORE_U8(ctx.r11.u32 + 543, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,544(r11)
	REX_STORE_U8(ctx.r11.u32 + 544, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,545(r11)
	REX_STORE_U8(ctx.r11.u32 + 545, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,546(r11)
	REX_STORE_U8(ctx.r11.u32 + 546, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,547(r11)
	REX_STORE_U8(ctx.r11.u32 + 547, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,548(r11)
	REX_STORE_U8(ctx.r11.u32 + 548, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,549(r11)
	REX_STORE_U8(ctx.r11.u32 + 549, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,550(r11)
	REX_STORE_U8(ctx.r11.u32 + 550, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,551(r11)
	REX_STORE_U8(ctx.r11.u32 + 551, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,552(r11)
	REX_STORE_U8(ctx.r11.u32 + 552, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,553(r11)
	REX_STORE_U8(ctx.r11.u32 + 553, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,554(r11)
	REX_STORE_U8(ctx.r11.u32 + 554, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,555(r11)
	REX_STORE_U8(ctx.r11.u32 + 555, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,557(r11)
	REX_STORE_U8(ctx.r11.u32 + 557, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,558(r11)
	REX_STORE_U8(ctx.r11.u32 + 558, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,559(r11)
	REX_STORE_U8(ctx.r11.u32 + 559, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,560(r11)
	REX_STORE_U8(ctx.r11.u32 + 560, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,561(r11)
	REX_STORE_U8(ctx.r11.u32 + 561, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,562(r11)
	REX_STORE_U8(ctx.r11.u32 + 562, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,563(r11)
	REX_STORE_U8(ctx.r11.u32 + 563, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,564(r11)
	REX_STORE_U8(ctx.r11.u32 + 564, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,565(r11)
	REX_STORE_U8(ctx.r11.u32 + 565, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,566(r11)
	REX_STORE_U8(ctx.r11.u32 + 566, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,567(r11)
	REX_STORE_U8(ctx.r11.u32 + 567, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,568(r11)
	REX_STORE_U8(ctx.r11.u32 + 568, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,570(r11)
	REX_STORE_U8(ctx.r11.u32 + 570, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,571(r11)
	REX_STORE_U8(ctx.r11.u32 + 571, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,572(r11)
	REX_STORE_U8(ctx.r11.u32 + 572, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,573(r11)
	REX_STORE_U8(ctx.r11.u32 + 573, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,574(r11)
	REX_STORE_U8(ctx.r11.u32 + 574, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,575(r11)
	REX_STORE_U8(ctx.r11.u32 + 575, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,576(r11)
	REX_STORE_U8(ctx.r11.u32 + 576, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,577(r11)
	REX_STORE_U8(ctx.r11.u32 + 577, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,578(r11)
	REX_STORE_U8(ctx.r11.u32 + 578, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,579(r11)
	REX_STORE_U8(ctx.r11.u32 + 579, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,580(r11)
	REX_STORE_U8(ctx.r11.u32 + 580, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,581(r11)
	REX_STORE_U8(ctx.r11.u32 + 581, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,582(r11)
	REX_STORE_U8(ctx.r11.u32 + 582, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,583(r11)
	REX_STORE_U8(ctx.r11.u32 + 583, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,585(r11)
	REX_STORE_U8(ctx.r11.u32 + 585, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,586(r11)
	REX_STORE_U8(ctx.r11.u32 + 586, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,587(r11)
	REX_STORE_U8(ctx.r11.u32 + 587, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,588(r11)
	REX_STORE_U8(ctx.r11.u32 + 588, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,589(r11)
	REX_STORE_U8(ctx.r11.u32 + 589, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,590(r11)
	REX_STORE_U8(ctx.r11.u32 + 590, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,591(r11)
	REX_STORE_U8(ctx.r11.u32 + 591, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,592(r11)
	REX_STORE_U8(ctx.r11.u32 + 592, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,593(r11)
	REX_STORE_U8(ctx.r11.u32 + 593, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,594(r11)
	REX_STORE_U8(ctx.r11.u32 + 594, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,595(r11)
	REX_STORE_U8(ctx.r11.u32 + 595, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,596(r11)
	REX_STORE_U8(ctx.r11.u32 + 596, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,597(r11)
	REX_STORE_U8(ctx.r11.u32 + 597, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,598(r11)
	REX_STORE_U8(ctx.r11.u32 + 598, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,599(r11)
	REX_STORE_U8(ctx.r11.u32 + 599, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,600(r11)
	REX_STORE_U8(ctx.r11.u32 + 600, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,601(r11)
	REX_STORE_U8(ctx.r11.u32 + 601, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,602(r11)
	REX_STORE_U8(ctx.r11.u32 + 602, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,603(r11)
	REX_STORE_U8(ctx.r11.u32 + 603, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,604(r11)
	REX_STORE_U8(ctx.r11.u32 + 604, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,605(r11)
	REX_STORE_U8(ctx.r11.u32 + 605, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,606(r11)
	REX_STORE_U8(ctx.r11.u32 + 606, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,607(r11)
	REX_STORE_U8(ctx.r11.u32 + 607, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,608(r11)
	REX_STORE_U8(ctx.r11.u32 + 608, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,609(r11)
	REX_STORE_U8(ctx.r11.u32 + 609, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,610(r11)
	REX_STORE_U8(ctx.r11.u32 + 610, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,611(r11)
	REX_STORE_U8(ctx.r11.u32 + 611, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,612(r11)
	REX_STORE_U8(ctx.r11.u32 + 612, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,613(r11)
	REX_STORE_U8(ctx.r11.u32 + 613, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,614(r11)
	REX_STORE_U8(ctx.r11.u32 + 614, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,615(r11)
	REX_STORE_U8(ctx.r11.u32 + 615, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,616(r11)
	REX_STORE_U8(ctx.r11.u32 + 616, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,617(r11)
	REX_STORE_U8(ctx.r11.u32 + 617, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,618(r11)
	REX_STORE_U8(ctx.r11.u32 + 618, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,619(r11)
	REX_STORE_U8(ctx.r11.u32 + 619, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,620(r11)
	REX_STORE_U8(ctx.r11.u32 + 620, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,621(r11)
	REX_STORE_U8(ctx.r11.u32 + 621, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,622(r11)
	REX_STORE_U8(ctx.r11.u32 + 622, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,623(r11)
	REX_STORE_U8(ctx.r11.u32 + 623, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,624(r11)
	REX_STORE_U8(ctx.r11.u32 + 624, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,625(r11)
	REX_STORE_U8(ctx.r11.u32 + 625, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,626(r11)
	REX_STORE_U8(ctx.r11.u32 + 626, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,627(r11)
	REX_STORE_U8(ctx.r11.u32 + 627, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,628(r11)
	REX_STORE_U8(ctx.r11.u32 + 628, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,629(r11)
	REX_STORE_U8(ctx.r11.u32 + 629, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,630(r11)
	REX_STORE_U8(ctx.r11.u32 + 630, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,631(r11)
	REX_STORE_U8(ctx.r11.u32 + 631, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,632(r11)
	REX_STORE_U8(ctx.r11.u32 + 632, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,633(r11)
	REX_STORE_U8(ctx.r11.u32 + 633, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,634(r11)
	REX_STORE_U8(ctx.r11.u32 + 634, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,635(r11)
	REX_STORE_U8(ctx.r11.u32 + 635, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,636(r11)
	REX_STORE_U8(ctx.r11.u32 + 636, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,637(r11)
	REX_STORE_U8(ctx.r11.u32 + 637, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,638(r11)
	REX_STORE_U8(ctx.r11.u32 + 638, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,639(r11)
	REX_STORE_U8(ctx.r11.u32 + 639, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,640(r11)
	REX_STORE_U8(ctx.r11.u32 + 640, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,641(r11)
	REX_STORE_U8(ctx.r11.u32 + 641, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,642(r11)
	REX_STORE_U8(ctx.r11.u32 + 642, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,643(r11)
	REX_STORE_U8(ctx.r11.u32 + 643, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,644(r11)
	REX_STORE_U8(ctx.r11.u32 + 644, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,645(r11)
	REX_STORE_U8(ctx.r11.u32 + 645, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,646(r11)
	REX_STORE_U8(ctx.r11.u32 + 646, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,647(r11)
	REX_STORE_U8(ctx.r11.u32 + 647, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,648(r11)
	REX_STORE_U8(ctx.r11.u32 + 648, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,649(r11)
	REX_STORE_U8(ctx.r11.u32 + 649, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,650(r11)
	REX_STORE_U8(ctx.r11.u32 + 650, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,651(r11)
	REX_STORE_U8(ctx.r11.u32 + 651, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,652(r11)
	REX_STORE_U8(ctx.r11.u32 + 652, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,653(r11)
	REX_STORE_U8(ctx.r11.u32 + 653, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,654(r11)
	REX_STORE_U8(ctx.r11.u32 + 654, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,655(r11)
	REX_STORE_U8(ctx.r11.u32 + 655, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,656(r11)
	REX_STORE_U8(ctx.r11.u32 + 656, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,657(r11)
	REX_STORE_U8(ctx.r11.u32 + 657, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,658(r11)
	REX_STORE_U8(ctx.r11.u32 + 658, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,659(r11)
	REX_STORE_U8(ctx.r11.u32 + 659, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,660(r11)
	REX_STORE_U8(ctx.r11.u32 + 660, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,661(r11)
	REX_STORE_U8(ctx.r11.u32 + 661, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,662(r11)
	REX_STORE_U8(ctx.r11.u32 + 662, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,663(r11)
	REX_STORE_U8(ctx.r11.u32 + 663, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,664(r11)
	REX_STORE_U8(ctx.r11.u32 + 664, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,665(r11)
	REX_STORE_U8(ctx.r11.u32 + 665, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,666(r11)
	REX_STORE_U8(ctx.r11.u32 + 666, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,667(r11)
	REX_STORE_U8(ctx.r11.u32 + 667, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,668(r11)
	REX_STORE_U8(ctx.r11.u32 + 668, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,669(r11)
	REX_STORE_U8(ctx.r11.u32 + 669, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,670(r11)
	REX_STORE_U8(ctx.r11.u32 + 670, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,671(r11)
	REX_STORE_U8(ctx.r11.u32 + 671, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,672(r11)
	REX_STORE_U8(ctx.r11.u32 + 672, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,673(r11)
	REX_STORE_U8(ctx.r11.u32 + 673, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,674(r11)
	REX_STORE_U8(ctx.r11.u32 + 674, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,675(r11)
	REX_STORE_U8(ctx.r11.u32 + 675, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,676(r11)
	REX_STORE_U8(ctx.r11.u32 + 676, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,677(r11)
	REX_STORE_U8(ctx.r11.u32 + 677, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,678(r11)
	REX_STORE_U8(ctx.r11.u32 + 678, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,679(r11)
	REX_STORE_U8(ctx.r11.u32 + 679, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,680(r11)
	REX_STORE_U8(ctx.r11.u32 + 680, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,681(r11)
	REX_STORE_U8(ctx.r11.u32 + 681, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,682(r11)
	REX_STORE_U8(ctx.r11.u32 + 682, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,683(r11)
	REX_STORE_U8(ctx.r11.u32 + 683, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,684(r11)
	REX_STORE_U8(ctx.r11.u32 + 684, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,685(r11)
	REX_STORE_U8(ctx.r11.u32 + 685, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,686(r11)
	REX_STORE_U8(ctx.r11.u32 + 686, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,687(r11)
	REX_STORE_U8(ctx.r11.u32 + 687, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,688(r11)
	REX_STORE_U8(ctx.r11.u32 + 688, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,689(r11)
	REX_STORE_U8(ctx.r11.u32 + 689, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,690(r11)
	REX_STORE_U8(ctx.r11.u32 + 690, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,691(r11)
	REX_STORE_U8(ctx.r11.u32 + 691, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,692(r11)
	REX_STORE_U8(ctx.r11.u32 + 692, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,693(r11)
	REX_STORE_U8(ctx.r11.u32 + 693, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,694(r11)
	REX_STORE_U8(ctx.r11.u32 + 694, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,695(r11)
	REX_STORE_U8(ctx.r11.u32 + 695, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,696(r11)
	REX_STORE_U8(ctx.r11.u32 + 696, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,697(r11)
	REX_STORE_U8(ctx.r11.u32 + 697, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,698(r11)
	REX_STORE_U8(ctx.r11.u32 + 698, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,699(r11)
	REX_STORE_U8(ctx.r11.u32 + 699, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,700(r11)
	REX_STORE_U8(ctx.r11.u32 + 700, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,701(r11)
	REX_STORE_U8(ctx.r11.u32 + 701, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,702(r11)
	REX_STORE_U8(ctx.r11.u32 + 702, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,703(r11)
	REX_STORE_U8(ctx.r11.u32 + 703, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,704(r11)
	REX_STORE_U8(ctx.r11.u32 + 704, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,705(r11)
	REX_STORE_U8(ctx.r11.u32 + 705, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,706(r11)
	REX_STORE_U8(ctx.r11.u32 + 706, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,707(r11)
	REX_STORE_U8(ctx.r11.u32 + 707, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,708(r11)
	REX_STORE_U8(ctx.r11.u32 + 708, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,709(r11)
	REX_STORE_U8(ctx.r11.u32 + 709, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,710(r11)
	REX_STORE_U8(ctx.r11.u32 + 710, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,711(r11)
	REX_STORE_U8(ctx.r11.u32 + 711, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,712(r11)
	REX_STORE_U8(ctx.r11.u32 + 712, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,713(r11)
	REX_STORE_U8(ctx.r11.u32 + 713, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,714(r11)
	REX_STORE_U8(ctx.r11.u32 + 714, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,715(r11)
	REX_STORE_U8(ctx.r11.u32 + 715, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,716(r11)
	REX_STORE_U8(ctx.r11.u32 + 716, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,717(r11)
	REX_STORE_U8(ctx.r11.u32 + 717, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,718(r11)
	REX_STORE_U8(ctx.r11.u32 + 718, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,719(r11)
	REX_STORE_U8(ctx.r11.u32 + 719, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,720(r11)
	REX_STORE_U8(ctx.r11.u32 + 720, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,721(r11)
	REX_STORE_U8(ctx.r11.u32 + 721, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,722(r11)
	REX_STORE_U8(ctx.r11.u32 + 722, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,723(r11)
	REX_STORE_U8(ctx.r11.u32 + 723, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,724(r11)
	REX_STORE_U8(ctx.r11.u32 + 724, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,725(r11)
	REX_STORE_U8(ctx.r11.u32 + 725, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,726(r11)
	REX_STORE_U8(ctx.r11.u32 + 726, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,727(r11)
	REX_STORE_U8(ctx.r11.u32 + 727, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,728(r11)
	REX_STORE_U8(ctx.r11.u32 + 728, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,729(r11)
	REX_STORE_U8(ctx.r11.u32 + 729, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,730(r11)
	REX_STORE_U8(ctx.r11.u32 + 730, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,731(r11)
	REX_STORE_U8(ctx.r11.u32 + 731, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,732(r11)
	REX_STORE_U8(ctx.r11.u32 + 732, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,733(r11)
	REX_STORE_U8(ctx.r11.u32 + 733, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,734(r11)
	REX_STORE_U8(ctx.r11.u32 + 734, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,735(r11)
	REX_STORE_U8(ctx.r11.u32 + 735, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,736(r11)
	REX_STORE_U8(ctx.r11.u32 + 736, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,737(r11)
	REX_STORE_U8(ctx.r11.u32 + 737, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,738(r11)
	REX_STORE_U8(ctx.r11.u32 + 738, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,739(r11)
	REX_STORE_U8(ctx.r11.u32 + 739, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,740(r11)
	REX_STORE_U8(ctx.r11.u32 + 740, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,741(r11)
	REX_STORE_U8(ctx.r11.u32 + 741, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,742(r11)
	REX_STORE_U8(ctx.r11.u32 + 742, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,743(r11)
	REX_STORE_U8(ctx.r11.u32 + 743, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,744(r11)
	REX_STORE_U8(ctx.r11.u32 + 744, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,745(r11)
	REX_STORE_U8(ctx.r11.u32 + 745, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,746(r11)
	REX_STORE_U8(ctx.r11.u32 + 746, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,747(r11)
	REX_STORE_U8(ctx.r11.u32 + 747, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,748(r11)
	REX_STORE_U8(ctx.r11.u32 + 748, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,749(r11)
	REX_STORE_U8(ctx.r11.u32 + 749, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,750(r11)
	REX_STORE_U8(ctx.r11.u32 + 750, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,751(r11)
	REX_STORE_U8(ctx.r11.u32 + 751, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,752(r11)
	REX_STORE_U8(ctx.r11.u32 + 752, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,753(r11)
	REX_STORE_U8(ctx.r11.u32 + 753, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,754(r11)
	REX_STORE_U8(ctx.r11.u32 + 754, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,755(r11)
	REX_STORE_U8(ctx.r11.u32 + 755, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,756(r11)
	REX_STORE_U8(ctx.r11.u32 + 756, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,757(r11)
	REX_STORE_U8(ctx.r11.u32 + 757, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,758(r11)
	REX_STORE_U8(ctx.r11.u32 + 758, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,759(r11)
	REX_STORE_U8(ctx.r11.u32 + 759, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,760(r11)
	REX_STORE_U8(ctx.r11.u32 + 760, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,761(r11)
	REX_STORE_U8(ctx.r11.u32 + 761, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,762(r11)
	REX_STORE_U8(ctx.r11.u32 + 762, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,763(r11)
	REX_STORE_U8(ctx.r11.u32 + 763, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,764(r11)
	REX_STORE_U8(ctx.r11.u32 + 764, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,765(r11)
	REX_STORE_U8(ctx.r11.u32 + 765, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,766(r11)
	REX_STORE_U8(ctx.r11.u32 + 766, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,767(r11)
	REX_STORE_U8(ctx.r11.u32 + 767, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,768(r11)
	REX_STORE_U8(ctx.r11.u32 + 768, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,769(r11)
	REX_STORE_U8(ctx.r11.u32 + 769, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,770(r11)
	REX_STORE_U8(ctx.r11.u32 + 770, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,771(r11)
	REX_STORE_U8(ctx.r11.u32 + 771, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,772(r11)
	REX_STORE_U8(ctx.r11.u32 + 772, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,773(r11)
	REX_STORE_U8(ctx.r11.u32 + 773, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,774(r11)
	REX_STORE_U8(ctx.r11.u32 + 774, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,775(r11)
	REX_STORE_U8(ctx.r11.u32 + 775, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,776(r11)
	REX_STORE_U8(ctx.r11.u32 + 776, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,777(r11)
	REX_STORE_U8(ctx.r11.u32 + 777, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,778(r11)
	REX_STORE_U8(ctx.r11.u32 + 778, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,779(r11)
	REX_STORE_U8(ctx.r11.u32 + 779, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,780(r11)
	REX_STORE_U8(ctx.r11.u32 + 780, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,781(r11)
	REX_STORE_U8(ctx.r11.u32 + 781, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,782(r11)
	REX_STORE_U8(ctx.r11.u32 + 782, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,783(r11)
	REX_STORE_U8(ctx.r11.u32 + 783, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,784(r11)
	REX_STORE_U8(ctx.r11.u32 + 784, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,785(r11)
	REX_STORE_U8(ctx.r11.u32 + 785, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,786(r11)
	REX_STORE_U8(ctx.r11.u32 + 786, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,787(r11)
	REX_STORE_U8(ctx.r11.u32 + 787, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,788(r11)
	REX_STORE_U8(ctx.r11.u32 + 788, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,789(r11)
	REX_STORE_U8(ctx.r11.u32 + 789, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,790(r11)
	REX_STORE_U8(ctx.r11.u32 + 790, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,791(r11)
	REX_STORE_U8(ctx.r11.u32 + 791, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,792(r11)
	REX_STORE_U8(ctx.r11.u32 + 792, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,793(r11)
	REX_STORE_U8(ctx.r11.u32 + 793, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,794(r11)
	REX_STORE_U8(ctx.r11.u32 + 794, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,795(r11)
	REX_STORE_U8(ctx.r11.u32 + 795, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,796(r11)
	REX_STORE_U8(ctx.r11.u32 + 796, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,797(r11)
	REX_STORE_U8(ctx.r11.u32 + 797, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,798(r11)
	REX_STORE_U8(ctx.r11.u32 + 798, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,799(r11)
	REX_STORE_U8(ctx.r11.u32 + 799, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,800(r11)
	REX_STORE_U8(ctx.r11.u32 + 800, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,801(r11)
	REX_STORE_U8(ctx.r11.u32 + 801, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,802(r11)
	REX_STORE_U8(ctx.r11.u32 + 802, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,803(r11)
	REX_STORE_U8(ctx.r11.u32 + 803, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,804(r11)
	REX_STORE_U8(ctx.r11.u32 + 804, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,805(r11)
	REX_STORE_U8(ctx.r11.u32 + 805, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,806(r11)
	REX_STORE_U8(ctx.r11.u32 + 806, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,807(r11)
	REX_STORE_U8(ctx.r11.u32 + 807, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,808(r11)
	REX_STORE_U8(ctx.r11.u32 + 808, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,809(r11)
	REX_STORE_U8(ctx.r11.u32 + 809, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,810(r11)
	REX_STORE_U8(ctx.r11.u32 + 810, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,811(r11)
	REX_STORE_U8(ctx.r11.u32 + 811, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,812(r11)
	REX_STORE_U8(ctx.r11.u32 + 812, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,813(r11)
	REX_STORE_U8(ctx.r11.u32 + 813, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,814(r11)
	REX_STORE_U8(ctx.r11.u32 + 814, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,815(r11)
	REX_STORE_U8(ctx.r11.u32 + 815, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,816(r11)
	REX_STORE_U8(ctx.r11.u32 + 816, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,817(r11)
	REX_STORE_U8(ctx.r11.u32 + 817, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,818(r11)
	REX_STORE_U8(ctx.r11.u32 + 818, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,819(r11)
	REX_STORE_U8(ctx.r11.u32 + 819, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,820(r11)
	REX_STORE_U8(ctx.r11.u32 + 820, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,821(r11)
	REX_STORE_U8(ctx.r11.u32 + 821, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,822(r11)
	REX_STORE_U8(ctx.r11.u32 + 822, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,823(r11)
	REX_STORE_U8(ctx.r11.u32 + 823, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,824(r11)
	REX_STORE_U8(ctx.r11.u32 + 824, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,825(r11)
	REX_STORE_U8(ctx.r11.u32 + 825, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,826(r11)
	REX_STORE_U8(ctx.r11.u32 + 826, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,827(r11)
	REX_STORE_U8(ctx.r11.u32 + 827, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,828(r11)
	REX_STORE_U8(ctx.r11.u32 + 828, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,829(r11)
	REX_STORE_U8(ctx.r11.u32 + 829, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,830(r11)
	REX_STORE_U8(ctx.r11.u32 + 830, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,831(r11)
	REX_STORE_U8(ctx.r11.u32 + 831, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,832(r11)
	REX_STORE_U8(ctx.r11.u32 + 832, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,833(r11)
	REX_STORE_U8(ctx.r11.u32 + 833, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,834(r11)
	REX_STORE_U8(ctx.r11.u32 + 834, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,835(r11)
	REX_STORE_U8(ctx.r11.u32 + 835, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,836(r11)
	REX_STORE_U8(ctx.r11.u32 + 836, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,837(r11)
	REX_STORE_U8(ctx.r11.u32 + 837, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,838(r11)
	REX_STORE_U8(ctx.r11.u32 + 838, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,839(r11)
	REX_STORE_U8(ctx.r11.u32 + 839, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,840(r11)
	REX_STORE_U8(ctx.r11.u32 + 840, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,841(r11)
	REX_STORE_U8(ctx.r11.u32 + 841, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,842(r11)
	REX_STORE_U8(ctx.r11.u32 + 842, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,843(r11)
	REX_STORE_U8(ctx.r11.u32 + 843, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,844(r11)
	REX_STORE_U8(ctx.r11.u32 + 844, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,845(r11)
	REX_STORE_U8(ctx.r11.u32 + 845, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,846(r11)
	REX_STORE_U8(ctx.r11.u32 + 846, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,847(r11)
	REX_STORE_U8(ctx.r11.u32 + 847, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,848(r11)
	REX_STORE_U8(ctx.r11.u32 + 848, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,849(r11)
	REX_STORE_U8(ctx.r11.u32 + 849, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,850(r11)
	REX_STORE_U8(ctx.r11.u32 + 850, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,851(r11)
	REX_STORE_U8(ctx.r11.u32 + 851, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,852(r11)
	REX_STORE_U8(ctx.r11.u32 + 852, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,853(r11)
	REX_STORE_U8(ctx.r11.u32 + 853, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,854(r11)
	REX_STORE_U8(ctx.r11.u32 + 854, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,855(r11)
	REX_STORE_U8(ctx.r11.u32 + 855, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,856(r11)
	REX_STORE_U8(ctx.r11.u32 + 856, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,857(r11)
	REX_STORE_U8(ctx.r11.u32 + 857, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,858(r11)
	REX_STORE_U8(ctx.r11.u32 + 858, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,859(r11)
	REX_STORE_U8(ctx.r11.u32 + 859, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,860(r11)
	REX_STORE_U8(ctx.r11.u32 + 860, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,861(r11)
	REX_STORE_U8(ctx.r11.u32 + 861, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,862(r11)
	REX_STORE_U8(ctx.r11.u32 + 862, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,863(r11)
	REX_STORE_U8(ctx.r11.u32 + 863, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,864(r11)
	REX_STORE_U8(ctx.r11.u32 + 864, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,865(r11)
	REX_STORE_U8(ctx.r11.u32 + 865, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,866(r11)
	REX_STORE_U8(ctx.r11.u32 + 866, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,867(r11)
	REX_STORE_U8(ctx.r11.u32 + 867, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,868(r11)
	REX_STORE_U8(ctx.r11.u32 + 868, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,869(r11)
	REX_STORE_U8(ctx.r11.u32 + 869, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,870(r11)
	REX_STORE_U8(ctx.r11.u32 + 870, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,871(r11)
	REX_STORE_U8(ctx.r11.u32 + 871, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,872(r11)
	REX_STORE_U8(ctx.r11.u32 + 872, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,873(r11)
	REX_STORE_U8(ctx.r11.u32 + 873, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,874(r11)
	REX_STORE_U8(ctx.r11.u32 + 874, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,875(r11)
	REX_STORE_U8(ctx.r11.u32 + 875, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,876(r11)
	REX_STORE_U8(ctx.r11.u32 + 876, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,877(r11)
	REX_STORE_U8(ctx.r11.u32 + 877, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,878(r11)
	REX_STORE_U8(ctx.r11.u32 + 878, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,879(r11)
	REX_STORE_U8(ctx.r11.u32 + 879, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,880(r11)
	REX_STORE_U8(ctx.r11.u32 + 880, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,881(r11)
	REX_STORE_U8(ctx.r11.u32 + 881, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,882(r11)
	REX_STORE_U8(ctx.r11.u32 + 882, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,883(r11)
	REX_STORE_U8(ctx.r11.u32 + 883, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,884(r11)
	REX_STORE_U8(ctx.r11.u32 + 884, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,885(r11)
	REX_STORE_U8(ctx.r11.u32 + 885, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,886(r11)
	REX_STORE_U8(ctx.r11.u32 + 886, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,887(r11)
	REX_STORE_U8(ctx.r11.u32 + 887, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,888(r11)
	REX_STORE_U8(ctx.r11.u32 + 888, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,889(r11)
	REX_STORE_U8(ctx.r11.u32 + 889, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,890(r11)
	REX_STORE_U8(ctx.r11.u32 + 890, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,891(r11)
	REX_STORE_U8(ctx.r11.u32 + 891, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,892(r11)
	REX_STORE_U8(ctx.r11.u32 + 892, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,893(r11)
	REX_STORE_U8(ctx.r11.u32 + 893, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,894(r11)
	REX_STORE_U8(ctx.r11.u32 + 894, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,895(r11)
	REX_STORE_U8(ctx.r11.u32 + 895, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,896(r11)
	REX_STORE_U8(ctx.r11.u32 + 896, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,897(r11)
	REX_STORE_U8(ctx.r11.u32 + 897, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,898(r11)
	REX_STORE_U8(ctx.r11.u32 + 898, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,899(r11)
	REX_STORE_U8(ctx.r11.u32 + 899, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,900(r11)
	REX_STORE_U8(ctx.r11.u32 + 900, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,901(r11)
	REX_STORE_U8(ctx.r11.u32 + 901, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,902(r11)
	REX_STORE_U8(ctx.r11.u32 + 902, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,903(r11)
	REX_STORE_U8(ctx.r11.u32 + 903, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,904(r11)
	REX_STORE_U8(ctx.r11.u32 + 904, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,905(r11)
	REX_STORE_U8(ctx.r11.u32 + 905, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,906(r11)
	REX_STORE_U8(ctx.r11.u32 + 906, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,907(r11)
	REX_STORE_U8(ctx.r11.u32 + 907, ctx.r10.u8);
	// blr 
	return;
}

