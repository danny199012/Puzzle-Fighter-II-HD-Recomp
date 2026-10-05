#include "puzzlefighter_funcs.71.h"

DEFINE_REX_FUNC(sub_820455D8) {
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
	// sth r3,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// sth r4,126(r1)
	REX_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lhz r11,126(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 126);
	// rlwinm r11,r11,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,1280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1280, ctx.xer);
	// bne cr6,0x8204561c
	if (!ctx.cr6.eq) goto loc_8204561C;
	// lhz r11,126(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 126);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82044d90
	ctx.lr = 0x82045614;
	sub_82044D90(ctx, base);
	// b 0x82045778
	goto loc_82045778;
loc_8204561C:
	// lhz r11,126(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 126);
	// cmplwi cr6,r11,65285
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65285, ctx.xer);
	// beq cr6,0x82045640
	if (ctx.cr6.eq) goto loc_82045640;
	// lhz r11,126(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 126);
	// cmplwi cr6,r11,65296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65296, ctx.xer);
	// beq cr6,0x82045640
	if (ctx.cr6.eq) goto loc_82045640;
	// lhz r11,126(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 126);
	// cmplwi cr6,r11,65297
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65297, ctx.xer);
	// bne cr6,0x82045648
	if (!ctx.cr6.eq) goto loc_82045648;
loc_82045640:
	// bl 0x82044e80
	ctx.lr = 0x82045644;
	sub_82044E80(ctx, base);
	// b 0x82045778
	goto loc_82045778;
loc_82045648:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26588
	ctx.r11.s64 = ctx.r11.s64 + 26588;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-18464
	ctx.r10.s64 = ctx.r10.s64 + -18464;
	// lhz r9,118(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// sthx r9,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26588
	ctx.r11.s64 = ctx.r11.s64 + 26588;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-18464
	ctx.r10.s64 = ctx.r10.s64 + -18464;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,126(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 126);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// addi r10,r10,26588
	ctx.r10.s64 = ctx.r10.s64 + 26588;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32092
	ctx.r9.s64 = -2103181312;
	// addi r9,r9,-18464
	ctx.r9.s64 = ctx.r9.s64 + -18464;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// addi r10,r10,26588
	ctx.r10.s64 = ctx.r10.s64 + 26588;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32092
	ctx.r9.s64 = -2103181312;
	// addi r9,r9,-18464
	ctx.r9.s64 = ctx.r9.s64 + -18464;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// addi r10,r10,26588
	ctx.r10.s64 = ctx.r10.s64 + 26588;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32092
	ctx.r9.s64 = -2103181312;
	// addi r9,r9,-18464
	ctx.r9.s64 = ctx.r9.s64 + -18464;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// addi r10,r10,26588
	ctx.r10.s64 = ctx.r10.s64 + 26588;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32092
	ctx.r9.s64 = -2103181312;
	// addi r9,r9,-18464
	ctx.r9.s64 = ctx.r9.s64 + -18464;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26588
	ctx.r11.s64 = ctx.r11.s64 + 26588;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// addi r10,r10,26588
	ctx.r10.s64 = ctx.r10.s64 + 26588;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26588
	ctx.r11.s64 = ctx.r11.s64 + 26588;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// addi r10,r10,26588
	ctx.r10.s64 = ctx.r10.s64 + 26588;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_82045778:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82060228) {
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
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25250
	ctx.r11.s64 = ctx.r11.s64 + -25250;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,168(r11)
	REX_STORE_U8(ctx.r11.u32 + 168, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,141(r11)
	REX_STORE_U8(ctx.r11.u32 + 141, ctx.r10.u8);
	// bl 0x8205ff20
	ctx.lr = 0x82060274;
	sub_8205FF20(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27482
	ctx.r11.s64 = ctx.r11.s64 + -27482;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27485
	ctx.r11.s64 = ctx.r11.s64 + -27485;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27486
	ctx.r11.s64 = ctx.r11.s64 + -27486;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27487
	ctx.r11.s64 = ctx.r11.s64 + -27487;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27501
	ctx.r11.s64 = ctx.r11.s64 + -27501;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27502
	ctx.r11.s64 = ctx.r11.s64 + -27502;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27525
	ctx.r11.s64 = ctx.r11.s64 + -27525;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27526
	ctx.r11.s64 = ctx.r11.s64 + -27526;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8206036c
	if (ctx.cr6.eq) goto loc_8206036C;
	// bl 0x8205fdc8
	ctx.lr = 0x82060304;
	sub_8205FDC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82061af8
	ctx.lr = 0x8206030C;
	sub_82061AF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82061af8
	ctx.lr = 0x82060314;
	sub_82061AF8(ctx, base);
	// bl 0x820592f8
	ctx.lr = 0x82060318;
	sub_820592F8(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25261
	ctx.r11.s64 = ctx.r11.s64 + -25261;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25262
	ctx.r11.s64 = ctx.r11.s64 + -25262;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25545
	ctx.r11.s64 = ctx.r11.s64 + -25545;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25546
	ctx.r11.s64 = ctx.r11.s64 + -25546;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8205cea8
	ctx.lr = 0x8206035C;
	sub_8205CEA8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-18448
	ctx.r3.s64 = ctx.r11.s64 + -18448;
	// bl 0x82040be0
	ctx.lr = 0x82060368;
	sub_82040BE0(ctx, base);
	// b 0x82060370
	goto loc_82060370;
loc_8206036C:
	// bl 0x8205fda8
	ctx.lr = 0x82060370;
	sub_8205FDA8(ctx, base);
loc_82060370:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8206D278) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,97(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 97);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8206d304
	if (!ctx.cr6.gt) goto loc_8206D304;
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8206d2b0
	if (!ctx.cr6.gt) goto loc_8206D2B0;
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8206d2f0
	if (ctx.cr6.eq) goto loc_8206D2F0;
	// b 0x8206d304
	goto loc_8206D304;
loc_8206D2B0:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,97(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 97);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lbz r10,132(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 132);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8206d2ec
	if (!ctx.cr6.eq) goto loc_8206D2EC;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_8206D2EC:
	// b 0x8206d304
	goto loc_8206D304;
loc_8206D2F0:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,137(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 137);
	// stb r11,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
loc_8206D304:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82070730) {
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
	// bl 0x82071c38
	ctx.lr = 0x82070740;
	sub_82071C38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82071740) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,144(r11)
	REX_STORE_U16(ctx.r11.u32 + 144, ctx.r10.u16);
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
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820720E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,34(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
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
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
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
	// sth r10,74(r11)
	REX_STORE_U16(ctx.r11.u32 + 74, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,74(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 74);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27520
	ctx.r10.s64 = ctx.r10.s64 + -27520;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,38(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
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
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
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
	// sth r10,78(r11)
	REX_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,78(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 78);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27528
	ctx.r10.s64 = ctx.r10.s64 + -27528;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,42(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
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
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
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
	// sth r10,82(r11)
	REX_STORE_U16(ctx.r11.u32 + 82, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,82(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 82);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27536
	ctx.r10.s64 = ctx.r10.s64 + -27536;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,256
	ctx.r10.s64 = 256;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
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
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
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
	// sth r10,76(r11)
	REX_STORE_U16(ctx.r11.u32 + 76, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 76);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27524
	ctx.r10.s64 = ctx.r10.s64 + -27524;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,768
	ctx.r10.s64 = 768;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
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
	// sth r10,80(r11)
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27532
	ctx.r10.s64 = ctx.r10.s64 + -27532;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,1792
	ctx.r10.s64 = 1792;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
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
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
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
	// sth r10,84(r11)
	REX_STORE_U16(ctx.r11.u32 + 84, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 84);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27540
	ctx.r10.s64 = ctx.r10.s64 + -27540;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,768
	ctx.r10.s64 = 768;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,46(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 46);
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
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
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
	// sth r10,86(r11)
	REX_STORE_U16(ctx.r11.u32 + 86, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,86(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 86);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27544
	ctx.r10.s64 = ctx.r10.s64 + -27544;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82086778) {
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
	// beq cr6,0x820867d0
	if (ctx.cr6.eq) goto loc_820867D0;
	// bl 0x820ee2b0
	ctx.lr = 0x820867CC;
	sub_820EE2B0(ctx, base);
	// b 0x820867d4
	goto loc_820867D4;
loc_820867D0:
	// bl 0x8208a1a8
	ctx.lr = 0x820867D4;
	sub_8208A1A8(ctx, base);
loc_820867D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8208A418) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
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
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
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
	// stb r10,129(r11)
	REX_STORE_U8(ctx.r11.u32 + 129, ctx.r10.u8);
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
	// stb r10,130(r11)
	REX_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,130(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 130);
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
	// stb r11,130(r10)
	REX_STORE_U8(ctx.r10.u32 + 130, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,158(r11)
	REX_STORE_U8(ctx.r11.u32 + 158, ctx.r10.u8);
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
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,152(r11)
	REX_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
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
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,170(r11)
	REX_STORE_U8(ctx.r11.u32 + 170, ctx.r10.u8);
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
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,171(r11)
	REX_STORE_U8(ctx.r11.u32 + 171, ctx.r10.u8);
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
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,180(r11)
	REX_STORE_U8(ctx.r11.u32 + 180, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,154(r11)
	REX_STORE_U16(ctx.r11.u32 + 154, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
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
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82095C10) {
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
	// addi r11,r11,6696
	ctx.r11.s64 = ctx.r11.s64 + 6696;
	// li r10,17
	ctx.r10.s64 = 17;
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
	// addi r10,r10,-26924
	ctx.r10.s64 = ctx.r10.s64 + -26924;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82095C70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8208b858
	ctx.lr = 0x82095C74;
	sub_8208B858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209AA60) {
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
	// lhz r11,318(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 318);
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
	// addi r10,r10,-26336
	ctx.r10.s64 = ctx.r10.s64 + -26336;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209AAB0;
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

DEFINE_REX_FUNC(sub_8209E4E8) {
	REX_FUNC_PROLOGUE();
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-26164
	ctx.r11.s64 = ctx.r11.s64 + -26164;
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
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8209E63C:
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8209e6bc
	if (!ctx.cr6.lt) goto loc_8209E6BC;
	// b 0x8209e8fc
	goto loc_8209E8FC;
loc_8209E6BC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8209e6d8
	if (!ctx.cr6.eq) goto loc_8209E6D8;
	// b 0x8209e85c
	goto loc_8209E85C;
loc_8209E6D8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
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
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
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
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,512(r11)
	REX_STORE_U16(ctx.r11.u32 + 512, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,514(r11)
	REX_STORE_U16(ctx.r11.u32 + 514, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
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
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,516(r11)
	REX_STORE_U16(ctx.r11.u32 + 516, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,518(r11)
	REX_STORE_U16(ctx.r11.u32 + 518, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8209e63c
	goto loc_8209E63C;
loc_8209E85C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,516(r11)
	REX_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,512(r11)
	REX_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8209e63c
	goto loc_8209E63C;
loc_8209E8FC:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820D6698) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,620(r11)
	REX_STORE_U8(ctx.r11.u32 + 620, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,621(r11)
	REX_STORE_U8(ctx.r11.u32 + 621, ctx.r10.u8);
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D671C:
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
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D6744:
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
	// beq cr6,0x820d6790
	if (ctx.cr6.eq) goto loc_820D6790;
	// b 0x820d6e6c
	goto loc_820D6E6C;
loc_820D6790:
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
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
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
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
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
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
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
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
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
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
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
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
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
	// ble cr6,0x820d68dc
	if (!ctx.cr6.gt) goto loc_820D68DC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820d68ec
	goto loc_820D68EC;
loc_820D68DC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D68EC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d6908
	if (!ctx.cr6.eq) goto loc_820D6908;
	// b 0x820d69c0
	goto loc_820D69C0;
loc_820D6908:
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
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820d698c
	if (!ctx.cr6.gt) goto loc_820D698C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820d699c
	goto loc_820D699C;
loc_820D698C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D699C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d69b8
	if (ctx.cr6.eq) goto loc_820D69B8;
	// b 0x820d6ed0
	goto loc_820D6ED0;
loc_820D69B8:
	// b 0x820d6e50
	goto loc_820D6E50;
loc_820D69C0:
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
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820d6a44
	if (!ctx.cr6.gt) goto loc_820D6A44;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820d6a54
	goto loc_820D6A54;
loc_820D6A44:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D6A54:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d6a70
	if (ctx.cr6.eq) goto loc_820D6A70;
	// b 0x820d6e34
	goto loc_820D6E34;
loc_820D6A70:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,624(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 624);
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
	// lhz r11,626(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 626);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
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
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
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
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
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
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
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
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
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
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
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
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
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
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
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
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
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
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
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
	// ble cr6,0x820d6c50
	if (!ctx.cr6.gt) goto loc_820D6C50;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820d6c60
	goto loc_820D6C60;
loc_820D6C50:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D6C60:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820d6c7c
	if (!ctx.cr6.gt) goto loc_820D6C7C;
	// b 0x820d6d3c
	goto loc_820D6D3C;
loc_820D6C7C:
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
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820d6cf4
	if (!ctx.cr6.gt) goto loc_820D6CF4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820d6d04
	goto loc_820D6D04;
loc_820D6CF4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D6D04:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820d6d20
	if (ctx.cr6.gt) goto loc_820D6D20;
	// b 0x820d6e18
	goto loc_820D6E18;
loc_820D6D20:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// b 0x820d6ed0
	goto loc_820D6ED0;
loc_820D6D3C:
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
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820d6db4
	if (!ctx.cr6.gt) goto loc_820D6DB4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820d6dc4
	goto loc_820D6DC4;
loc_820D6DB4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D6DC4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820d6de0
	if (ctx.cr6.gt) goto loc_820D6DE0;
	// b 0x820d6dfc
	goto loc_820D6DFC;
loc_820D6DE0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// b 0x820d6ed0
	goto loc_820D6ED0;
loc_820D6DFC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// b 0x820d6ed0
	goto loc_820D6ED0;
loc_820D6E18:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// b 0x820d6ed0
	goto loc_820D6ED0;
loc_820D6E34:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// b 0x820d6ed0
	goto loc_820D6ED0;
loc_820D6E50:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// b 0x820d6ed0
	goto loc_820D6ED0;
loc_820D6E6C:
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
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x820d6ebc
	if (!ctx.cr6.lt) goto loc_820D6EBC;
	// b 0x820d6744
	goto loc_820D6744;
loc_820D6EBC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
loc_820D6ED0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,556(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 556);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
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
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,621(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 621);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
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
	// ble cr6,0x820d6f74
	if (!ctx.cr6.gt) goto loc_820D6F74;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820d6f84
	goto loc_820D6F84;
loc_820D6F74:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D6F84:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820d6fa0
	if (ctx.cr6.gt) goto loc_820D6FA0;
	// b 0x820d6fec
	goto loc_820D6FEC;
loc_820D6FA0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,621(r11)
	REX_STORE_U8(ctx.r11.u32 + 621, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15996
	ctx.r10.s64 = ctx.r10.s64 + 15996;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,620(r11)
	REX_STORE_U8(ctx.r11.u32 + 620, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,613(r11)
	REX_STORE_U8(ctx.r11.u32 + 613, ctx.r10.u8);
loc_820D6FEC:
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
	// bge cr6,0x820d703c
	if (!ctx.cr6.lt) goto loc_820D703C;
	// b 0x820d671c
	goto loc_820D671C;
loc_820D703C:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821063F0) {
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
	// bl 0x820fa0f8
	ctx.lr = 0x82106400;
	sub_820FA0F8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210641c
	if (!ctx.cr6.eq) goto loc_8210641C;
	// b 0x82106474
	goto loc_82106474;
loc_8210641C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r10,r10,513
	ctx.r10.u64 = ctx.r10.u64 | 513;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,52(r10)
	REX_STORE_U16(ctx.r10.u32 + 52, ctx.r11.u16);
loc_82106474:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82109498) {
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
	// lbz r11,231(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 231);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,129(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 129);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
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
	// bne cr6,0x82109500
	if (!ctx.cr6.eq) goto loc_82109500;
	// b 0x82109504
	goto loc_82109504;
loc_82109500:
	// bl 0x82109000
	ctx.lr = 0x82109504;
	sub_82109000(ctx, base);
loc_82109504:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210C190) {
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
	// addi r10,r10,-18728
	ctx.r10.s64 = ctx.r10.s64 + -18728;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8210C1F0;
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

DEFINE_REX_FUNC(sub_821100D8) {
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
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
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
	// addi r10,r10,-18648
	ctx.r10.s64 = ctx.r10.s64 + -18648;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82110138;
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

DEFINE_REX_FUNC(sub_82112568) {
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
	// addi r10,r10,-18224
	ctx.r10.s64 = ctx.r10.s64 + -18224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821125B8;
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

DEFINE_REX_FUNC(sub_82115308) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
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
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82119308) {
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
	// addi r11,r11,5376
	ctx.r11.s64 = ctx.r11.s64 + 5376;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x82114060
	ctx.lr = 0x82119330;
	sub_82114060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211AF90) {
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
	// addi r10,r10,-17460
	ctx.r10.s64 = ctx.r10.s64 + -17460;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AFE0;
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

DEFINE_REX_FUNC(sub_8211EDC0) {
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
	// li r4,115
	ctx.r4.s64 = 115;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21980
	ctx.r3.s64 = ctx.r11.s64 + 21980;
	// bl 0x821717d8
	ctx.lr = 0x8211EDDC;
	sub_821717D8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
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
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
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
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,13(r10)
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// li r4,121
	ctx.r4.s64 = 121;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21980
	ctx.r3.s64 = ctx.r11.s64 + 21980;
	// bl 0x821717d8
	ctx.lr = 0x8211EE68;
	sub_821717D8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-16688
	ctx.r10.s64 = ctx.r10.s64 + -16688;
	// lis r9,-32092
	ctx.r9.s64 = -2103181312;
	// addi r9,r9,16024
	ctx.r9.s64 = ctx.r9.s64 + 16024;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r11,10(r9)
	REX_STORE_U8(ctx.r9.u32 + 10, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82123EA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6244
	ctx.r11.s64 = ctx.r11.s64 + 6244;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82123ee8
	if (!ctx.cr0.eq) goto loc_82123EE8;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6244
	ctx.r11.s64 = ctx.r11.s64 + 6244;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6244
	ctx.r10.s64 = ctx.r10.s64 + 6244;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,6228
	ctx.r3.s64 = ctx.r11.s64 + 6228;
	// bl 0x820aaa58
	ctx.lr = 0x82123EE8;
	sub_820AAA58(ctx, base);
loc_82123EE8:
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
	// lbz r11,131(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 131);
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
	// beq cr6,0x82123f34
	if (ctx.cr6.eq) goto loc_82123F34;
	// b 0x82124498
	goto loc_82124498;
loc_82123F34:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,293(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 293);
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
	// lbz r11,293(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 293);
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
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
	// lbz r11,293(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 293);
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
	// ble cr6,0x82123fb8
	if (!ctx.cr6.gt) goto loc_82123FB8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82123fc8
	goto loc_82123FC8;
loc_82123FB8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82123FC8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82123fe4
	if (!ctx.cr6.eq) goto loc_82123FE4;
	// b 0x82124498
	goto loc_82124498;
loc_82123FE4:
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
	// lbz r11,294(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 294);
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
	// beq cr6,0x82124030
	if (ctx.cr6.eq) goto loc_82124030;
	// b 0x82124498
	goto loc_82124498;
loc_82124030:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,294(r11)
	REX_STORE_U8(ctx.r11.u32 + 294, ctx.r10.u8);
	// bl 0x820f9e60
	ctx.lr = 0x82124048;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82124064
	if (!ctx.cr6.eq) goto loc_82124064;
	// b 0x82124498
	goto loc_82124498;
loc_82124064:
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
	// li r10,30
	ctx.r10.s64 = 30;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,50(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-32086
	ctx.r10.s64 = -2102788096;
	// addi r10,r10,-29460
	ctx.r10.s64 = ctx.r10.s64 + -29460;
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
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,170(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 170);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,170(r10)
	REX_STORE_U8(ctx.r10.u32 + 170, ctx.r11.u8);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,231(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 231);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,129(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 129);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
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
	// bne cr6,0x821241c8
	if (!ctx.cr6.eq) goto loc_821241C8;
	// b 0x821241ec
	goto loc_821241EC;
loc_821241C8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_821241EC:
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
	// addi r10,r10,-16384
	ctx.r10.s64 = ctx.r10.s64 + -16384;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
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
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6224
	ctx.r10.s64 = ctx.r10.s64 + 6224;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6224
	ctx.r11.s64 = ctx.r11.s64 + 6224;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821242b4
	if (!ctx.cr6.eq) goto loc_821242B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21724
	ctx.r3.s64 = ctx.r11.s64 + 21724;
	// bl 0x821cdd88
	ctx.lr = 0x8212424C;
	sub_821CDD88(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820aaab0
	ctx.lr = 0x82124260;
	sub_820AAAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821cfb68
	ctx.lr = 0x82124278;
	sub_821CFB68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21704
	ctx.r3.s64 = ctx.r11.s64 + 21704;
	// bl 0x821cdd88
	ctx.lr = 0x82124284;
	sub_821CDD88(ctx, base);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820aaab0
	ctx.lr = 0x82124298;
	sub_820AAAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r3,r11,18904
	ctx.r3.s64 = ctx.r11.s64 + 18904;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821cfb68
	ctx.lr = 0x821242B0;
	sub_821CFB68(ctx, base);
	// b 0x82124448
	goto loc_82124448;
loc_821242B4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6224
	ctx.r11.s64 = ctx.r11.s64 + 6224;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8212433c
	if (!ctx.cr6.eq) goto loc_8212433C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22080
	ctx.r3.s64 = ctx.r11.s64 + 22080;
	// bl 0x821cdd88
	ctx.lr = 0x821242D4;
	sub_821CDD88(ctx, base);
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820aaab0
	ctx.lr = 0x821242E8;
	sub_820AAAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821cfb68
	ctx.lr = 0x82124300;
	sub_821CFB68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21704
	ctx.r3.s64 = ctx.r11.s64 + 21704;
	// bl 0x821cdd88
	ctx.lr = 0x8212430C;
	sub_821CDD88(ctx, base);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820aaab0
	ctx.lr = 0x82124320;
	sub_820AAAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r3,r11,18904
	ctx.r3.s64 = ctx.r11.s64 + 18904;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821cfb68
	ctx.lr = 0x82124338;
	sub_821CFB68(ctx, base);
	// b 0x82124448
	goto loc_82124448;
loc_8212433C:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6224
	ctx.r11.s64 = ctx.r11.s64 + 6224;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821243c4
	if (!ctx.cr6.eq) goto loc_821243C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22064
	ctx.r3.s64 = ctx.r11.s64 + 22064;
	// bl 0x821cdd88
	ctx.lr = 0x8212435C;
	sub_821CDD88(ctx, base);
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820aaab0
	ctx.lr = 0x82124370;
	sub_820AAAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821cfb68
	ctx.lr = 0x82124388;
	sub_821CFB68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22040
	ctx.r3.s64 = ctx.r11.s64 + 22040;
	// bl 0x821cdd88
	ctx.lr = 0x82124394;
	sub_821CDD88(ctx, base);
	// stw r3,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820aaab0
	ctx.lr = 0x821243A8;
	sub_820AAAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r3,r11,18904
	ctx.r3.s64 = ctx.r11.s64 + 18904;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821cfb68
	ctx.lr = 0x821243C0;
	sub_821CFB68(ctx, base);
	// b 0x82124448
	goto loc_82124448;
loc_821243C4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6224
	ctx.r11.s64 = ctx.r11.s64 + 6224;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82124448
	if (!ctx.cr6.eq) goto loc_82124448;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22020
	ctx.r3.s64 = ctx.r11.s64 + 22020;
	// bl 0x821cdd88
	ctx.lr = 0x821243E4;
	sub_821CDD88(ctx, base);
	// stw r3,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x820aaab0
	ctx.lr = 0x821243F8;
	sub_820AAAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-16788
	ctx.r3.s64 = ctx.r11.s64 + -16788;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821cfb68
	ctx.lr = 0x82124410;
	sub_821CFB68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21992
	ctx.r3.s64 = ctx.r11.s64 + 21992;
	// bl 0x821cdd88
	ctx.lr = 0x8212441C;
	sub_821CDD88(ctx, base);
	// stw r3,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r4,r11,6228
	ctx.r4.s64 = ctx.r11.s64 + 6228;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x820aaab0
	ctx.lr = 0x82124430;
	sub_820AAAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r3,r11,18904
	ctx.r3.s64 = ctx.r11.s64 + 18904;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821cfb68
	ctx.lr = 0x82124448;
	sub_821CFB68(ctx, base);
loc_82124448:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-112
	ctx.r10.s64 = -112;
	// stb r10,293(r11)
	REX_STORE_U8(ctx.r11.u32 + 293, ctx.r10.u8);
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// b 0x821244d0
	goto loc_821244D0;
loc_82124498:
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
loc_821244D0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82152970) {
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
	// lbz r11,300(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 300);
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
	// lbz r11,300(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 300);
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
	// lbz r11,300(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 300);
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
	// ble cr6,0x82152a00
	if (!ctx.cr6.gt) goto loc_82152A00;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82152a10
	goto loc_82152A10;
loc_82152A00:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82152A10:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82152a2c
	if (ctx.cr6.eq) goto loc_82152A2C;
	// b 0x82152a74
	goto loc_82152A74;
loc_82152A2C:
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
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// bl 0x82155bd0
	ctx.lr = 0x82152A70;
	sub_82155BD0(ctx, base);
	// bl 0x821527e8
	ctx.lr = 0x82152A74;
	sub_821527E8(ctx, base);
loc_82152A74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157428) {
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
	// bl 0x82155620
	ctx.lr = 0x82157438;
	sub_82155620(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r4,270
	ctx.r4.s64 = 270;
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
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82155a00
	ctx.lr = 0x82157468;
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

DEFINE_REX_FUNC(sub_8215BE70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,10568
	ctx.r11.s64 = ctx.r11.s64 + 10568;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215bea0
	if (ctx.cr0.eq) goto loc_8215BEA0;
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215bebc
	if (!ctx.cr6.eq) goto loc_8215BEBC;
loc_8215BEA0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15440
	ctx.r10.s64 = ctx.r10.s64 + 15440;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_8215BEBC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15440
	ctx.r10.s64 = ctx.r10.s64 + 15440;
	// stb r11,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215bf18
	if (ctx.cr0.eq) goto loc_8215BF18;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,13(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,268(r10)
	REX_STORE_U8(ctx.r10.u32 + 268, ctx.r11.u8);
loc_8215BF18:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82161048) {
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
	// stb r3,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r3.u8);
	// stb r4,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r4.u8);
	// stb r5,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// stb r6,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r6.u8);
	// stw r7,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,135(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 135);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821610ec
	if (ctx.cr6.eq) goto loc_821610EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821610d8
	if (ctx.cr6.eq) goto loc_821610D8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821610b0
	if (ctx.cr6.eq) goto loc_821610B0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821610c4
	if (ctx.cr6.eq) goto loc_821610C4;
	// b 0x821610fc
	goto loc_821610FC;
loc_821610B0:
	// lbz r11,159(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// b 0x821610fc
	goto loc_821610FC;
loc_821610C4:
	// lbz r11,159(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// b 0x821610fc
	goto loc_821610FC;
loc_821610D8:
	// lbz r11,151(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// b 0x821610fc
	goto loc_821610FC;
loc_821610EC:
	// lbz r11,151(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
loc_821610FC:
	// lbz r11,151(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,159(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821612cc
	if (ctx.cr0.eq) goto loc_821612CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,143(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 143);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821612cc
	if (!ctx.cr6.eq) goto loc_821612CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821612cc
	if (!ctx.cr0.eq) goto loc_821612CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821612cc
	if (!ctx.cr0.eq) goto loc_821612CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm r11,r11,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// bne cr6,0x82161198
	if (!ctx.cr6.eq) goto loc_82161198;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82161198:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821611cc
	if (ctx.cr0.eq) goto loc_821611CC;
	// lbz r11,143(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 143);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_821611CC:
	// lbz r11,135(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 135);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8216120c
	if (ctx.cr6.eq) goto loc_8216120C;
	// lbz r11,159(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8216120c
	if (!ctx.cr6.gt) goto loc_8216120C;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r6,159(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r5,151(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r4,143(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 143);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82161048
	ctx.lr = 0x82161200;
	sub_82161048(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8216120C:
	// lbz r11,135(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 135);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8216124c
	if (ctx.cr6.eq) goto loc_8216124C;
	// lbz r11,159(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bge cr6,0x8216124c
	if (!ctx.cr6.lt) goto loc_8216124C;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r6,159(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r5,151(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r4,143(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 143);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82161048
	ctx.lr = 0x82161240;
	sub_82161048(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8216124C:
	// lbz r11,135(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 135);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8216128c
	if (ctx.cr6.eq) goto loc_8216128C;
	// lbz r11,151(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8216128c
	if (!ctx.cr0.gt) goto loc_8216128C;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r6,159(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r5,151(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r4,143(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 143);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82161048
	ctx.lr = 0x82161280;
	sub_82161048(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8216128C:
	// lbz r11,135(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 135);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821612cc
	if (ctx.cr6.eq) goto loc_821612CC;
	// lbz r11,151(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x821612cc
	if (!ctx.cr6.lt) goto loc_821612CC;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r6,159(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r5,151(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r4,143(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 143);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82161048
	ctx.lr = 0x821612C0;
	sub_82161048(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821612CC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217B2F8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2338(r11)
	REX_STORE_U8(ctx.r11.u32 + 2338, ctx.r10.u8);
	// b 0x8217b32c
	goto loc_8217B32C;
loc_8217B318:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,2338(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2338);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,2338(r10)
	REX_STORE_U8(ctx.r10.u32 + 2338, ctx.r11.u8);
loc_8217B32C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,2338(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2338);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8217b350
	if (!ctx.cr6.lt) goto loc_8217B350;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8217b158
	ctx.lr = 0x8217B344;
	sub_8217B158(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8217a308
	ctx.lr = 0x8217B34C;
	sub_8217A308(ctx, base);
	// b 0x8217b318
	goto loc_8217B318;
loc_8217B350:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2338(r11)
	REX_STORE_U8(ctx.r11.u32 + 2338, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// sth r11,64(r10)
	REX_STORE_U16(ctx.r10.u32 + 64, ctx.r11.u16);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8217b3a0
	if (ctx.cr6.lt) goto loc_8217B3A0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,2330(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2330);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,2330(r10)
	REX_STORE_U8(ctx.r10.u32 + 2330, ctx.r11.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82179d18
	ctx.lr = 0x8217B3A0;
	sub_82179D18(ctx, base);
loc_8217B3A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217E710) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stb r5,39(r1)
	REX_STORE_U8(ctx.r1.u32 + 39, ctx.r5.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217F140) {
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
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25100
	ctx.r11.s64 = ctx.r11.s64 + 25100;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82272fb8
	ctx.lr = 0x8217F170;
	sub_82272FB8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82185710) {
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
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15712
	ctx.r11.s64 = ctx.r11.s64 + 15712;
	// lfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,7288
	ctx.r11.s64 = ctx.r11.s64 + 7288;
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25300
	ctx.r11.s64 = ctx.r11.s64 + 25300;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25296
	ctx.r11.s64 = ctx.r11.s64 + 25296;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82184208
	ctx.lr = 0x82185754;
	sub_82184208(ctx, base);
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15712
	ctx.r11.s64 = ctx.r11.s64 + 15712;
	// lfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,7288
	ctx.r11.s64 = ctx.r11.s64 + 7288;
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25300
	ctx.r11.s64 = ctx.r11.s64 + 25300;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21188
	ctx.r11.s64 = ctx.r11.s64 + 21188;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82184208
	ctx.lr = 0x8218578C;
	sub_82184208(ctx, base);
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15208
	ctx.r11.s64 = ctx.r11.s64 + 15208;
	// lfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25292
	ctx.r11.s64 = ctx.r11.s64 + 25292;
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25300
	ctx.r11.s64 = ctx.r11.s64 + 25300;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25296
	ctx.r11.s64 = ctx.r11.s64 + 25296;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82184208
	ctx.lr = 0x821857C4;
	sub_82184208(ctx, base);
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15208
	ctx.r11.s64 = ctx.r11.s64 + 15208;
	// lfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25292
	ctx.r11.s64 = ctx.r11.s64 + 25292;
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21220
	ctx.r11.s64 = ctx.r11.s64 + 21220;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25296
	ctx.r11.s64 = ctx.r11.s64 + 25296;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82184208
	ctx.lr = 0x821857FC;
	sub_82184208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82192588) {
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
	// li r4,238
	ctx.r4.s64 = 238;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-26304
	ctx.r3.s64 = ctx.r11.s64 + -26304;
	// bl 0x821a6690
	ctx.lr = 0x821925A4;
	sub_821A6690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821937A8) {
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
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821938b0
	if (!ctx.cr6.eq) goto loc_821938B0;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16849
	ctx.r11.s64 = ctx.r11.s64 + -16849;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821938b0
	if (ctx.cr0.eq) goto loc_821938B0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,190(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 190);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821938b0
	if (ctx.cr6.eq) goto loc_821938B0;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1182(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1182);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32086
	ctx.r10.s64 = -2102788096;
	// addi r10,r10,-29460
	ctx.r10.s64 = ctx.r10.s64 + -29460;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,2206(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2206);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// xor. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821938b0
	if (ctx.cr0.eq) goto loc_821938B0;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1182(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219386c
	if (!ctx.cr6.eq) goto loc_8219386C;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822357e8
	ctx.lr = 0x82193850;
	sub_822357E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8219386c
	if (ctx.cr0.eq) goto loc_8219386C;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821c50a0
	ctx.lr = 0x8219386C;
	sub_821C50A0(ctx, base);
loc_8219386C:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,2206(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2206);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821938b0
	if (!ctx.cr6.eq) goto loc_821938B0;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822357e8
	ctx.lr = 0x82193894;
	sub_822357E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821938b0
	if (ctx.cr0.eq) goto loc_821938B0;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821c50a0
	ctx.lr = 0x821938B0;
	sub_821C50A0(ctx, base);
loc_821938B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82198F80) {
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
	// bl 0x821c2410
	ctx.lr = 0x82198F90;
	sub_821C2410(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82199160) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82199184
	goto loc_82199184;
loc_82199178:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82199184:
	// bl 0x8218e7f0
	ctx.lr = 0x82199188;
	sub_8218E7F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821991c0
	if (!ctx.cr6.lt) goto loc_821991C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-32628
	ctx.r10.s64 = ctx.r10.s64 + -32628;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821c4a50
	ctx.lr = 0x821991AC;
	sub_821C4A50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821991bc
	if (ctx.cr0.eq) goto loc_821991BC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821991dc
	goto loc_821991DC;
loc_821991BC:
	// b 0x82199178
	goto loc_82199178;
loc_821991C0:
	// bl 0x82190108
	ctx.lr = 0x821991C4;
	sub_82190108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821991d8
	if (ctx.cr0.eq) goto loc_821991D8;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82193468
	ctx.lr = 0x821991D8;
	sub_82193468(ctx, base);
loc_821991D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821991DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A6C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-23272
	ctx.r3.s64 = ctx.r11.s64 + -23272;
	// bl 0x822362b8
	ctx.lr = 0x8219A6E4;
	sub_822362B8(ctx, base);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,15896
	ctx.r11.s64 = ctx.r11.s64 + 15896;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219CB78) {
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
	// lwz r11,4868(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4868);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8219cba0
	if (ctx.cr6.gt) goto loc_8219CBA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219cc30
	goto loc_8219CC30;
loc_8219CBA0:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4868(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4868);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4852);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8219cbd0
	if (ctx.cr6.lt) goto loc_8219CBD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219cc30
	goto loc_8219CC30;
loc_8219CBD0:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4852);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219cbf8
	if (!ctx.cr6.gt) goto loc_8219CBF8;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4852(r11)
	REX_STORE_U32(ctx.r11.u32 + 4852, ctx.r10.u32);
	// b 0x8219cc0c
	goto loc_8219CC0C;
loc_8219CBF8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4852);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,4852(r10)
	REX_STORE_U32(ctx.r10.u32 + 4852, ctx.r11.u32);
loc_8219CC0C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,4860(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4860);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,4852(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4852);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,4856(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4856);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8219c548
	ctx.lr = 0x8219CC2C;
	sub_8219C548(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8219CC30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A2C90) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e24
	ctx.lr = 0x821A2C98;
	__savegprlr_19(ctx, base);
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x821a2cd8
	if (!ctx.cr6.eq) goto loc_821A2CD8;
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,65521
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65521, ctx.xer);
	// ori r19,r9,65521
	ctx.r19.u64 = ctx.r9.u64 | 65521;
	// blt cr6,0x821a2cc4
	if (ctx.cr6.lt) goto loc_821A2CC4;
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r19.u64;
loc_821A2CC4:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65521
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65521, ctx.xer);
	// blt cr6,0x821a2f5c
	if (ctx.cr6.lt) goto loc_821A2F5C;
	// subf r10,r19,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r19.u64;
	// b 0x821a2f5c
	goto loc_821A2F5C;
loc_821A2CD8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821a2ce8
	if (!ctx.cr6.eq) goto loc_821A2CE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821a2f64
	goto loc_821A2F64;
loc_821A2CE8:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x821a2d34
	if (!ctx.cr6.lt) goto loc_821A2D34;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a2d10
	if (ctx.cr6.eq) goto loc_821A2D10;
loc_821A2CF8:
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x821a2cf8
	if (!ctx.cr0.eq) goto loc_821A2CF8;
loc_821A2D10:
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,65521
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65521, ctx.xer);
	// ori r19,r9,65521
	ctx.r19.u64 = ctx.r9.u64 | 65521;
	// blt cr6,0x821a2d24
	if (ctx.cr6.lt) goto loc_821A2D24;
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r19.u64;
loc_821A2D24:
	// divwu r9,r10,r19
	ctx.r9.u64 = uint32_t(ctx.r19.u32 ? ctx.r10.u32 / ctx.r19.u32 : 0);
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// b 0x821a2f5c
	goto loc_821A2F5C;
loc_821A2D34:
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,5552
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5552, ctx.xer);
	// ori r19,r9,65521
	ctx.r19.u64 = ctx.r9.u64 | 65521;
	// blt cr6,0x821a2e40
	if (ctx.cr6.lt) goto loc_821A2E40;
	// li r9,5552
	ctx.r9.s64 = 5552;
	// divwu r20,r5,r9
	ctx.r20.u64 = uint32_t(ctx.r9.u32 ? ctx.r5.u32 / ctx.r9.u32 : 0);
loc_821A2D4C:
	// addi r5,r5,-5552
	ctx.r5.s64 = ctx.r5.s64 + -5552;
	// li r9,347
	ctx.r9.s64 = 347;
loc_821A2D54:
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r21,1(r4)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r22,2(r4)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r23,3(r4)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r24,4(r4)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lbz r25,5(r4)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r26,6(r4)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r27,7(r4)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lbz r28,8(r4)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r29,9(r4)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,10(r4)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lbz r31,11(r4)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,13(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lbz r7,14(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r8,15(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x821a2d54
	if (!ctx.cr0.eq) goto loc_821A2D54;
	// divwu r9,r11,r19
	ctx.r9.u64 = uint32_t(ctx.r19.u32 ? ctx.r11.u32 / ctx.r19.u32 : 0);
	// divwu r8,r10,r19
	ctx.r8.u64 = uint32_t(ctx.r19.u32 ? ctx.r10.u32 / ctx.r19.u32 : 0);
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// mullw r8,r8,r19
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r19.s32);
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// bne 0x821a2d4c
	if (!ctx.cr0.eq) goto loc_821A2D4C;
loc_821A2E40:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a2f5c
	if (ctx.cr6.eq) goto loc_821A2F5C;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x821a2f24
	if (ctx.cr6.lt) goto loc_821A2F24;
	// rlwinm r9,r5,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
loc_821A2E54:
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r21,1(r4)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r22,2(r4)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r23,3(r4)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r24,4(r4)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lbz r25,5(r4)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r26,6(r4)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r27,7(r4)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lbz r28,8(r4)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r29,9(r4)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,10(r4)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lbz r31,11(r4)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,13(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lbz r7,14(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r8,15(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x821a2e54
	if (!ctx.cr0.eq) goto loc_821A2E54;
loc_821A2F24:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a2f44
	if (ctx.cr6.eq) goto loc_821A2F44;
loc_821A2F2C:
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x821a2f2c
	if (!ctx.cr0.eq) goto loc_821A2F2C;
loc_821A2F44:
	// divwu r9,r11,r19
	ctx.r9.u64 = uint32_t(ctx.r19.u32 ? ctx.r11.u32 / ctx.r19.u32 : 0);
	// divwu r8,r10,r19
	ctx.r8.u64 = uint32_t(ctx.r19.u32 ? ctx.r10.u32 / ctx.r19.u32 : 0);
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// mullw r8,r8,r19
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r19.s32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
loc_821A2F5C:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_821A2F64:
	// b 0x82272e74
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821BA378) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x821BA380;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA3B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r29,-32113
	ctx.r29.s64 = -2104557568;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-28872(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -28872);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BA3E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// stfs f29,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r8,-32113
	ctx.r8.s64 = -2104557568;
	// lis r9,-32073
	ctx.r9.s64 = -2101936128;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,-28876(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28876);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lfs f12,-28880(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -28880);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,24132(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24132);
	// lfs f0,-28884(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28884);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f31,4092(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4092);
	ctx.f31.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,-28888(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28888);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f30,1828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f30.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,-28872(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -28872);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,6016(r11)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 6016, temp.u32);
	// lfs f0,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6020(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// lfs f0,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// lfs f0,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24132(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24132);
	// stfs f0,6032(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6032, temp.u32);
	// lfs f0,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6036(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6036, temp.u32);
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6040(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6040, temp.u32);
	// lfs f0,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6044(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6044, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x821a9570
	ctx.lr = 0x821BA4E0;
	sub_821A9570(ctx, base);
	// bl 0x821a87f8
	ctx.lr = 0x821BA4E4;
	sub_821A87F8(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x821ba220
	ctx.lr = 0x821BA574;
	sub_821BA220(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a9570
	ctx.lr = 0x821BA580;
	sub_821A9570(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C7A10) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bgt cr6,0x821c7a2c
	if (ctx.cr6.gt) goto loc_821C7A2C;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-28712
	ctx.r11.s64 = ctx.r11.s64 + -28712;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_821C7A2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C82B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821C82B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821c7e98
	ctx.lr = 0x821C82CC;
	sub_821C7E98(ctx, base);
	// b 0x821c8378
	goto loc_821C8378;
loc_821C82D0:
	// bl 0x821c7ff8
	ctx.lr = 0x821C82D4;
	sub_821C7FF8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821c8328
	if (!ctx.cr6.eq) goto loc_821C8328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c81f0
	ctx.lr = 0x821C82E4;
	sub_821C81F0(ctx, base);
loc_821C82E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7ee0
	ctx.lr = 0x821C82EC;
	sub_821C7EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c8378
	if (!ctx.cr0.eq) goto loc_821C8378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7ff8
	ctx.lr = 0x821C82FC;
	sub_821C7FF8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x821c8378
	if (!ctx.cr6.eq) goto loc_821C8378;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7f48
	ctx.lr = 0x821C8314;
	sub_821C7F48(ctx, base);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x821c8258
	ctx.lr = 0x821C8324;
	sub_821C8258(ctx, base);
	// b 0x821c82e4
	goto loc_821C82E4;
loc_821C8328:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821c8368
	if (!ctx.cr6.eq) goto loc_821C8368;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821c7f48
	ctx.lr = 0x821C8340;
	sub_821C7F48(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c8258
	ctx.lr = 0x821C8354;
	sub_821C8258(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c8190
	ctx.lr = 0x821C8364;
	sub_821C8190(ctx, base);
	// b 0x821c8378
	goto loc_821C8378;
loc_821C8368:
	// bl 0x821c81f0
	ctx.lr = 0x821C836C;
	sub_821C81F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c8128
	ctx.lr = 0x821C8378;
	sub_821C8128(ctx, base);
loc_821C8378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7ee0
	ctx.lr = 0x821C8380;
	sub_821C7EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x821c82d0
	if (ctx.cr0.eq) goto loc_821C82D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,1032
	ctx.r5.s64 = 1032;
	// bl 0x82272590
	ctx.lr = 0x821C8398;
	sub_82272590(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CC618) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821ca938
	ctx.lr = 0x821CC638;
	sub_821CA938(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cc680
	if (ctx.cr0.eq) goto loc_821CC680;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821cc66c
	if (ctx.cr6.eq) goto loc_821CC66C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cdd90
	ctx.lr = 0x821CC654;
	sub_821CDD90(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-32516
	ctx.r11.s64 = ctx.r11.s64 + -32516;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821d3be8
	ctx.lr = 0x821CC668;
	sub_821D3BE8(ctx, base);
	// b 0x821cc680
	goto loc_821CC680;
loc_821CC66C:
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,308(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x821e9cd8
	ctx.lr = 0x821CC680;
	sub_821E9CD8(ctx, base);
loc_821CC680:
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

DEFINE_REX_FUNC(sub_821CE318) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821CE320;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,68(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821ce34c
	if (!ctx.cr6.gt) goto loc_821CE34C;
	// lfs f0,64(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 64, temp.u32);
loc_821CE34C:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_821CE358:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821ce380
	if (ctx.cr6.lt) goto loc_821CE380;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ce380
	if (ctx.cr6.eq) goto loc_821CE380;
	// stw r28,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_821CE380:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ce150
	ctx.lr = 0x821CE38C;
	sub_821CE150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cdfd0
	ctx.lr = 0x821CE394;
	sub_821CDFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ce3a0
	if (!ctx.cr0.eq) goto loc_821CE3A0;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_821CE3A0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ce1e0
	ctx.lr = 0x821CE3B0;
	sub_821CE1E0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x821ce358
	if (ctx.cr6.lt) goto loc_821CE358;
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821ce3d4
	if (ctx.cr6.lt) goto loc_821CE3D4;
	// stfs f31,64(r30)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r30.u32 + 64, temp.u32);
loc_821CE3D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D7C00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821D7C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,48(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821d7bc8
	ctx.lr = 0x821D7C28;
	sub_821D7BC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821d7c44
	if (!ctx.cr0.eq) goto loc_821D7C44;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x821d78e8
	ctx.lr = 0x821D7C38;
	sub_821D78E8(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
loc_821D7C44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D8DD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821D8DD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821d8e48
	if (!ctx.cr6.gt) goto loc_821D8E48;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
loc_821D8DFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x821d8e48
	if (ctx.cr6.eq) goto loc_821D8E48;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x821d8e24
	if (ctx.cr6.lt) goto loc_821D8E24;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// bne cr6,0x821d8e24
	if (!ctx.cr6.eq) goto loc_821D8E24;
	// li r11,-2
	ctx.r11.s64 = -2;
	// b 0x821d8e30
	goto loc_821D8E30;
loc_821D8E24:
	// bl 0x821fda40
	ctx.lr = 0x821D8E28;
	sub_821FDA40(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_821D8E30:
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821d8dfc
	if (ctx.cr6.lt) goto loc_821D8DFC;
loc_821D8E48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x821d8e5c
	if (!ctx.cr6.gt) goto loc_821D8E5C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821D8E5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821d8ee0
	if (!ctx.cr6.gt) goto loc_821D8EE0;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
loc_821D8E70:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x821d8e84
	if (!ctx.cr6.eq) goto loc_821D8E84;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x821d8ebc
	goto loc_821D8EBC;
loc_821D8E84:
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bne cr6,0x821d8e94
	if (!ctx.cr6.eq) goto loc_821D8E94;
	// li r11,256
	ctx.r11.s64 = 256;
	// b 0x821d8ebc
	goto loc_821D8EBC;
loc_821D8E94:
	// bl 0x821fd9e8
	ctx.lr = 0x821D8E98;
	sub_821FD9E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d8ea8
	if (ctx.cr0.eq) goto loc_821D8EA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821d8ebc
	goto loc_821D8EBC;
loc_821D8EA8:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x821fdaf0
	ctx.lr = 0x821D8EB0;
	sub_821FDAF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d8ecc
	if (ctx.cr0.eq) goto loc_821D8ECC;
	// lis r11,256
	ctx.r11.s64 = 16777216;
loc_821D8EBC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_821D8ECC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821d8e70
	if (ctx.cr6.lt) goto loc_821D8E70;
loc_821D8EE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E0258) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821E0260;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_821E0288:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x821e0288
	if (!ctx.cr0.eq) goto loc_821E0288;
	// subf r11,r5,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x821af058
	ctx.lr = 0x821E02C0;
	sub_821AF058(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e0308
	if (ctx.cr6.eq) goto loc_821E0308;
	// lwa r11,92(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lbz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_821E0308:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821e0350
	if (ctx.cr6.eq) goto loc_821E0350;
	// lwa r11,88(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 88));
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lbz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_821E0350:
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E87E0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e8618
	ctx.lr = 0x821E87F8;
	sub_821E8618(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821e882c
	if (ctx.cr0.eq) goto loc_821E882C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24200
	ctx.r3.s64 = ctx.r11.s64 + -24200;
	// bl 0x821cdd88
	ctx.lr = 0x821E880C;
	sub_821CDD88(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,316(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// ori r9,r9,24
	ctx.r9.u64 = ctx.r9.u64 | 24;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,204(r10)
	REX_STORE_U32(ctx.r10.u32 + 204, ctx.r11.u32);
loc_821E882C:
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

DEFINE_REX_FUNC(sub_821EBE70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821EBE78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// stw r11,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821ebf8c
	if (!ctx.cr0.eq) goto loc_821EBF8C;
loc_821EBE9C:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// blt cr6,0x821ebf50
	if (ctx.cr6.lt) goto loc_821EBF50;
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// rlwinm. r9,r9,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821ebef8
	if (!ctx.cr0.eq) goto loc_821EBEF8;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ebef8
	if (ctx.cr6.lt) goto loc_821EBEF8;
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ebf80
	if (ctx.cr0.eq) goto loc_821EBF80;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ebf80
	if (ctx.cr0.eq) goto loc_821EBF80;
	// stw r29,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// b 0x821ebf50
	goto loc_821EBF50;
loc_821EBEF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb6c0
	ctx.lr = 0x821EBF00;
	sub_821EB6C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ebf50
	if (!ctx.cr0.eq) goto loc_821EBF50;
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ebf2c
	if (ctx.cr0.eq) goto loc_821EBF2C;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ebf2c
	if (!ctx.cr0.eq) goto loc_821EBF2C;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// b 0x821ebf50
	goto loc_821EBF50;
loc_821EBF2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// bl 0x821eb8d0
	ctx.lr = 0x821EBF38;
	sub_821EB8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821ebf50
	if (ctx.cr0.eq) goto loc_821EBF50;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// bl 0x821eb6c0
	ctx.lr = 0x821EBF50;
	sub_821EB6C0(ctx, base);
loc_821EBF50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb010
	ctx.lr = 0x821EBF58;
	sub_821EB010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ebf6c
	if (!ctx.cr0.eq) goto loc_821EBF6C;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821ebe9c
	if (!ctx.cr6.gt) goto loc_821EBE9C;
loc_821EBF6C:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821ebf80
	if (!ctx.cr6.gt) goto loc_821EBF80;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_821EBF80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EBF84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
loc_821EBF8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb6c0
	ctx.lr = 0x821EBF94;
	sub_821EB6C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ebf80
	if (!ctx.cr0.eq) goto loc_821EBF80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23688
	ctx.r3.s64 = ctx.r11.s64 + -23688;
	// bl 0x821d3be8
	ctx.lr = 0x821EBFA8;
	sub_821D3BE8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821ebf84
	goto loc_821EBF84;
}

DEFINE_REX_FUNC(sub_821F2C50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8219fdd8
	ctx.lr = 0x821F2C6C;
	sub_8219FDD8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-14384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14384);
	ctx.f31.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x8219fdd8
	ctx.lr = 0x821F2C94;
	sub_8219FDD8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x8219fdd8
	ctx.lr = 0x821F2CB4;
	sub_8219FDD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F7040) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,2,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821e4cf8
	sub_821E4CF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F9A10) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822106a0
	sub_822106A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F9C50) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821f9b78
	sub_821F9B78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F9CB0) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25520
	ctx.r5.s64 = ctx.r11.s64 + -25520;
	// addi r3,r10,-11740
	ctx.r3.s64 = ctx.r10.s64 + -11740;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821F9CD4;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10072
	ctx.r5.s64 = ctx.r11.s64 + -10072;
	// addi r3,r10,-11752
	ctx.r3.s64 = ctx.r10.s64 + -11752;
	// li r4,73
	ctx.r4.s64 = 73;
	// bl 0x821d8d28
	ctx.lr = 0x821F9CEC;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18400
	ctx.r5.s64 = ctx.r11.s64 + -18400;
	// addi r3,r10,-11764
	ctx.r3.s64 = ctx.r10.s64 + -11764;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x821d8d28
	ctx.lr = 0x821F9D04;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3032
	ctx.r5.s64 = ctx.r11.s64 + 3032;
	// addi r3,r10,-11788
	ctx.r3.s64 = ctx.r10.s64 + -11788;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x821d8d28
	ctx.lr = 0x821F9D1C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3096
	ctx.r5.s64 = ctx.r11.s64 + 3096;
	// addi r3,r10,-11812
	ctx.r3.s64 = ctx.r10.s64 + -11812;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x821d8d28
	ctx.lr = 0x821F9D34;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3496
	ctx.r5.s64 = ctx.r11.s64 + 3496;
	// addi r3,r10,-11844
	ctx.r3.s64 = ctx.r10.s64 + -11844;
	// li r4,119
	ctx.r4.s64 = 119;
	// bl 0x821d8d28
	ctx.lr = 0x821F9D4C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3512
	ctx.r5.s64 = ctx.r11.s64 + 3512;
	// addi r3,r10,-11872
	ctx.r3.s64 = ctx.r10.s64 + -11872;
	// li r4,119
	ctx.r4.s64 = 119;
	// bl 0x821d8d28
	ctx.lr = 0x821F9D64;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-12600
	ctx.r5.s64 = ctx.r11.s64 + -12600;
	// addi r3,r10,-11892
	ctx.r3.s64 = ctx.r10.s64 + -11892;
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x821d8d28
	ctx.lr = 0x821F9D7C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25512
	ctx.r5.s64 = ctx.r11.s64 + -25512;
	// addi r3,r10,-11912
	ctx.r3.s64 = ctx.r10.s64 + -11912;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821F9D94;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25480
	ctx.r5.s64 = ctx.r11.s64 + -25480;
	// addi r3,r10,-11936
	ctx.r3.s64 = ctx.r10.s64 + -11936;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821F9DAC;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,21792
	ctx.r5.s64 = ctx.r11.s64 + 21792;
	// addi r3,r10,-11948
	ctx.r3.s64 = ctx.r10.s64 + -11948;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x821d8d28
	ctx.lr = 0x821F9DC4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-11972
	ctx.r3.s64 = ctx.r10.s64 + -11972;
	// li r4,98
	ctx.r4.s64 = 98;
	// bl 0x821d8d28
	ctx.lr = 0x821F9DDC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-11992
	ctx.r3.s64 = ctx.r10.s64 + -11992;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821F9DF4;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r4,59
	ctx.r4.s64 = 59;
	// addi r5,r11,18280
	ctx.r5.s64 = ctx.r11.s64 + 18280;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-11996
	ctx.r3.s64 = ctx.r11.s64 + -11996;
	// bl 0x821d8d28
	ctx.lr = 0x821F9E0C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10424
	ctx.r5.s64 = ctx.r11.s64 + -10424;
	// addi r3,r10,-12008
	ctx.r3.s64 = ctx.r10.s64 + -12008;
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x821d8d28
	ctx.lr = 0x821F9E24;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10584
	ctx.r5.s64 = ctx.r11.s64 + -10584;
	// addi r3,r10,-12020
	ctx.r3.s64 = ctx.r10.s64 + -12020;
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x821d8d28
	ctx.lr = 0x821F9E3C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-29896
	ctx.r5.s64 = ctx.r11.s64 + -29896;
	// addi r3,r10,-12040
	ctx.r3.s64 = ctx.r10.s64 + -12040;
	// li r4,102
	ctx.r4.s64 = 102;
	// bl 0x821d8d28
	ctx.lr = 0x821F9E54;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,23696
	ctx.r5.s64 = ctx.r11.s64 + 23696;
	// addi r3,r10,-12072
	ctx.r3.s64 = ctx.r10.s64 + -12072;
	// li r4,101
	ctx.r4.s64 = 101;
	// bl 0x821d8d28
	ctx.lr = 0x821F9E6C;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,22400
	ctx.r5.s64 = ctx.r11.s64 + 22400;
	// addi r3,r10,-12108
	ctx.r3.s64 = ctx.r10.s64 + -12108;
	// li r4,139
	ctx.r4.s64 = 139;
	// bl 0x821d8d28
	ctx.lr = 0x821F9E84;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-30512
	ctx.r5.s64 = ctx.r11.s64 + -30512;
	// addi r3,r10,-12124
	ctx.r3.s64 = ctx.r10.s64 + -12124;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821F9E9C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,1160
	ctx.r5.s64 = ctx.r11.s64 + 1160;
	// addi r3,r10,-12144
	ctx.r3.s64 = ctx.r10.s64 + -12144;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x821d8d28
	ctx.lr = 0x821F9EB4;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10152
	ctx.r5.s64 = ctx.r11.s64 + -10152;
	// addi r3,r10,-12164
	ctx.r3.s64 = ctx.r10.s64 + -12164;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x821d8d28
	ctx.lr = 0x821F9ECC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-22216
	ctx.r5.s64 = ctx.r11.s64 + -22216;
	// addi r3,r10,-12180
	ctx.r3.s64 = ctx.r10.s64 + -12180;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821d8d28
	ctx.lr = 0x821F9EE4;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,25024
	ctx.r5.s64 = ctx.r11.s64 + 25024;
	// addi r3,r10,-12200
	ctx.r3.s64 = ctx.r10.s64 + -12200;
	// li r4,66
	ctx.r4.s64 = 66;
	// bl 0x821d8d28
	ctx.lr = 0x821F9EFC;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-30816
	ctx.r5.s64 = ctx.r11.s64 + -30816;
	// addi r3,r10,-12212
	ctx.r3.s64 = ctx.r10.s64 + -12212;
	// li r4,135
	ctx.r4.s64 = 135;
	// bl 0x821d8d28
	ctx.lr = 0x821F9F14;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-29672
	ctx.r5.s64 = ctx.r11.s64 + -29672;
	// addi r3,r10,-12232
	ctx.r3.s64 = ctx.r10.s64 + -12232;
	// li r4,107
	ctx.r4.s64 = 107;
	// bl 0x821d8d28
	ctx.lr = 0x821F9F2C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31864
	ctx.r5.s64 = ctx.r11.s64 + -31864;
	// addi r3,r10,-12252
	ctx.r3.s64 = ctx.r10.s64 + -12252;
	// li r4,111
	ctx.r4.s64 = 111;
	// bl 0x821d8d28
	ctx.lr = 0x821F9F44;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31928
	ctx.r5.s64 = ctx.r11.s64 + -31928;
	// addi r3,r10,-12268
	ctx.r3.s64 = ctx.r10.s64 + -12268;
	// li r4,106
	ctx.r4.s64 = 106;
	// bl 0x821d8d28
	ctx.lr = 0x821F9F5C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31992
	ctx.r5.s64 = ctx.r11.s64 + -31992;
	// addi r3,r10,-12284
	ctx.r3.s64 = ctx.r10.s64 + -12284;
	// li r4,106
	ctx.r4.s64 = 106;
	// bl 0x821d8d28
	ctx.lr = 0x821F9F74;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-32184
	ctx.r5.s64 = ctx.r11.s64 + -32184;
	// addi r3,r10,-12296
	ctx.r3.s64 = ctx.r10.s64 + -12296;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x821d8d28
	ctx.lr = 0x821F9F8C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-32056
	ctx.r5.s64 = ctx.r11.s64 + -32056;
	// addi r3,r10,-12312
	ctx.r3.s64 = ctx.r10.s64 + -12312;
	// li r4,106
	ctx.r4.s64 = 106;
	// bl 0x821d8d28
	ctx.lr = 0x821F9FA4;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31624
	ctx.r5.s64 = ctx.r11.s64 + -31624;
	// addi r3,r10,-12324
	ctx.r3.s64 = ctx.r10.s64 + -12324;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x821d8d28
	ctx.lr = 0x821F9FBC;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31608
	ctx.r5.s64 = ctx.r11.s64 + -31608;
	// addi r3,r10,-12340
	ctx.r3.s64 = ctx.r10.s64 + -12340;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821F9FD4;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-29752
	ctx.r5.s64 = ctx.r11.s64 + -29752;
	// addi r3,r10,-12352
	ctx.r3.s64 = ctx.r10.s64 + -12352;
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x821d8d28
	ctx.lr = 0x821F9FEC;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31704
	ctx.r5.s64 = ctx.r11.s64 + -31704;
	// addi r3,r10,-12368
	ctx.r3.s64 = ctx.r10.s64 + -12368;
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x821d8d28
	ctx.lr = 0x821FA004;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31792
	ctx.r5.s64 = ctx.r11.s64 + -31792;
	// addi r3,r10,-12384
	ctx.r3.s64 = ctx.r10.s64 + -12384;
	// li r4,110
	ctx.r4.s64 = 110;
	// bl 0x821d8d28
	ctx.lr = 0x821FA01C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-12396
	ctx.r3.s64 = ctx.r10.s64 + -12396;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FA034;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8360
	ctx.r5.s64 = ctx.r11.s64 + -8360;
	// addi r3,r10,-12416
	ctx.r3.s64 = ctx.r10.s64 + -12416;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FA04C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8320
	ctx.r5.s64 = ctx.r11.s64 + -8320;
	// addi r3,r10,-12428
	ctx.r3.s64 = ctx.r10.s64 + -12428;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FA064;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8392
	ctx.r5.s64 = ctx.r11.s64 + -8392;
	// addi r3,r10,-12444
	ctx.r3.s64 = ctx.r10.s64 + -12444;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FA07C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,102
	ctx.r4.s64 = 102;
	// addi r5,r11,-8424
	ctx.r5.s64 = ctx.r11.s64 + -8424;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12460
	ctx.r3.s64 = ctx.r11.s64 + -12460;
	// bl 0x821d8d28
	ctx.lr = 0x821FA094;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8456
	ctx.r5.s64 = ctx.r11.s64 + -8456;
	// addi r3,r10,-12476
	ctx.r3.s64 = ctx.r10.s64 + -12476;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FA0AC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8488
	ctx.r5.s64 = ctx.r11.s64 + -8488;
	// addi r3,r10,-12492
	ctx.r3.s64 = ctx.r10.s64 + -12492;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FA0C4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8528
	ctx.r5.s64 = ctx.r11.s64 + -8528;
	// addi r3,r10,-12508
	ctx.r3.s64 = ctx.r10.s64 + -12508;
	// li r4,58
	ctx.r4.s64 = 58;
	// bl 0x821d8d28
	ctx.lr = 0x821FA0DC;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25592
	ctx.r5.s64 = ctx.r11.s64 + -25592;
	// addi r3,r10,-12528
	ctx.r3.s64 = ctx.r10.s64 + -12528;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x821d8d28
	ctx.lr = 0x821FA0F4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8568
	ctx.r5.s64 = ctx.r11.s64 + -8568;
	// addi r3,r10,-12544
	ctx.r3.s64 = ctx.r10.s64 + -12544;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821d8d28
	ctx.lr = 0x821FA10C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-12552
	ctx.r3.s64 = ctx.r10.s64 + -12552;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x821d8d28
	ctx.lr = 0x821FA124;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-26896
	ctx.r5.s64 = ctx.r11.s64 + -26896;
	// addi r3,r10,-12564
	ctx.r3.s64 = ctx.r10.s64 + -12564;
	// li r4,58
	ctx.r4.s64 = 58;
	// bl 0x821d8d28
	ctx.lr = 0x821FA13C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18432
	ctx.r5.s64 = ctx.r11.s64 + -18432;
	// addi r3,r10,-12584
	ctx.r3.s64 = ctx.r10.s64 + -12584;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x821d8d28
	ctx.lr = 0x821FA154;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11248
	ctx.r5.s64 = ctx.r11.s64 + -11248;
	// addi r3,r10,-12604
	ctx.r3.s64 = ctx.r10.s64 + -12604;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x821d8d28
	ctx.lr = 0x821FA16C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11096
	ctx.r5.s64 = ctx.r11.s64 + -11096;
	// addi r3,r10,-12632
	ctx.r3.s64 = ctx.r10.s64 + -12632;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x821d8d28
	ctx.lr = 0x821FA184;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11320
	ctx.r5.s64 = ctx.r11.s64 + -11320;
	// addi r3,r10,-12656
	ctx.r3.s64 = ctx.r10.s64 + -12656;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x821d8d28
	ctx.lr = 0x821FA19C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11184
	ctx.r5.s64 = ctx.r11.s64 + -11184;
	// addi r3,r10,-12688
	ctx.r3.s64 = ctx.r10.s64 + -12688;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x821d8d28
	ctx.lr = 0x821FA1B4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,6896
	ctx.r5.s64 = ctx.r11.s64 + 6896;
	// addi r3,r10,-12708
	ctx.r3.s64 = ctx.r10.s64 + -12708;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821d8d28
	ctx.lr = 0x821FA1CC;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,26568
	ctx.r5.s64 = ctx.r11.s64 + 26568;
	// addi r3,r10,-12724
	ctx.r3.s64 = ctx.r10.s64 + -12724;
	// li r4,67
	ctx.r4.s64 = 67;
	// bl 0x821d8d28
	ctx.lr = 0x821FA1E4;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-30520
	ctx.r5.s64 = ctx.r11.s64 + -30520;
	// addi r3,r10,-12744
	ctx.r3.s64 = ctx.r10.s64 + -12744;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x821d8d28
	ctx.lr = 0x821FA1FC;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-30608
	ctx.r5.s64 = ctx.r11.s64 + -30608;
	// addi r3,r10,-12764
	ctx.r3.s64 = ctx.r10.s64 + -12764;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x821d8d28
	ctx.lr = 0x821FA214;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31592
	ctx.r5.s64 = ctx.r11.s64 + -31592;
	// addi r3,r10,-12772
	ctx.r3.s64 = ctx.r10.s64 + -12772;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821d8d28
	ctx.lr = 0x821FA22C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-26008
	ctx.r5.s64 = ctx.r11.s64 + -26008;
	// addi r3,r10,-12788
	ctx.r3.s64 = ctx.r10.s64 + -12788;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x821d8d28
	ctx.lr = 0x821FA244;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1232
	ctx.r5.s64 = ctx.r11.s64 + -1232;
	// addi r3,r10,-12804
	ctx.r3.s64 = ctx.r10.s64 + -12804;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821d8d28
	ctx.lr = 0x821FA25C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-32408
	ctx.r5.s64 = ctx.r11.s64 + -32408;
	// addi r3,r10,-12820
	ctx.r3.s64 = ctx.r10.s64 + -12820;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x821d8d28
	ctx.lr = 0x821FA274;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8608
	ctx.r5.s64 = ctx.r11.s64 + -8608;
	// addi r3,r10,-12836
	ctx.r3.s64 = ctx.r10.s64 + -12836;
	// li r4,58
	ctx.r4.s64 = 58;
	// bl 0x821d8d28
	ctx.lr = 0x821FA28C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,6896
	ctx.r5.s64 = ctx.r11.s64 + 6896;
	// addi r3,r10,-12860
	ctx.r3.s64 = ctx.r10.s64 + -12860;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821d8d28
	ctx.lr = 0x821FA2A4;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-32640
	ctx.r5.s64 = ctx.r11.s64 + -32640;
	// addi r3,r10,-12872
	ctx.r3.s64 = ctx.r10.s64 + -12872;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x821d8d28
	ctx.lr = 0x821FA2BC;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-26080
	ctx.r5.s64 = ctx.r11.s64 + -26080;
	// addi r3,r10,-12888
	ctx.r3.s64 = ctx.r10.s64 + -12888;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821d8d28
	ctx.lr = 0x821FA2D4;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11408
	ctx.r5.s64 = ctx.r11.s64 + -11408;
	// addi r3,r10,-12904
	ctx.r3.s64 = ctx.r10.s64 + -12904;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821d8d28
	ctx.lr = 0x821FA2EC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8648
	ctx.r5.s64 = ctx.r11.s64 + -8648;
	// addi r3,r10,-12920
	ctx.r3.s64 = ctx.r10.s64 + -12920;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x821d8d28
	ctx.lr = 0x821FA304;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r5,r11,13632
	ctx.r5.s64 = ctx.r11.s64 + 13632;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// bl 0x821d8d28
	ctx.lr = 0x821FA31C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-29792
	ctx.r5.s64 = ctx.r11.s64 + -29792;
	// addi r3,r10,-12952
	ctx.r3.s64 = ctx.r10.s64 + -12952;
	// li r4,86
	ctx.r4.s64 = 86;
	// bl 0x821d8d28
	ctx.lr = 0x821FA334;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25896
	ctx.r5.s64 = ctx.r11.s64 + -25896;
	// addi r3,r10,-12956
	ctx.r3.s64 = ctx.r10.s64 + -12956;
	// li r4,70
	ctx.r4.s64 = 70;
	// bl 0x821d8d28
	ctx.lr = 0x821FA34C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19208
	ctx.r5.s64 = ctx.r11.s64 + -19208;
	// addi r3,r10,-12980
	ctx.r3.s64 = ctx.r10.s64 + -12980;
	// li r4,90
	ctx.r4.s64 = 90;
	// bl 0x821d8d28
	ctx.lr = 0x821FA364;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19424
	ctx.r5.s64 = ctx.r11.s64 + -19424;
	// addi r3,r10,-13012
	ctx.r3.s64 = ctx.r10.s64 + -13012;
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x821d8d28
	ctx.lr = 0x821FA37C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21344
	ctx.r5.s64 = ctx.r11.s64 + -21344;
	// addi r3,r10,-13044
	ctx.r3.s64 = ctx.r10.s64 + -13044;
	// li r4,89
	ctx.r4.s64 = 89;
	// bl 0x821d8d28
	ctx.lr = 0x821FA394;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-448
	ctx.r5.s64 = ctx.r11.s64 + -448;
	// addi r3,r10,-13064
	ctx.r3.s64 = ctx.r10.s64 + -13064;
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x821d8d28
	ctx.lr = 0x821FA3AC;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-536
	ctx.r5.s64 = ctx.r11.s64 + -536;
	// addi r3,r10,-13084
	ctx.r3.s64 = ctx.r10.s64 + -13084;
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x821d8d28
	ctx.lr = 0x821FA3C4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-13092
	ctx.r3.s64 = ctx.r10.s64 + -13092;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FA3DC;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,25536
	ctx.r5.s64 = ctx.r11.s64 + 25536;
	// addi r3,r10,-13120
	ctx.r3.s64 = ctx.r10.s64 + -13120;
	// li r4,71
	ctx.r4.s64 = 71;
	// bl 0x821d8d28
	ctx.lr = 0x821FA3F4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-13136
	ctx.r3.s64 = ctx.r10.s64 + -13136;
	// li r4,102
	ctx.r4.s64 = 102;
	// bl 0x821d8d28
	ctx.lr = 0x821FA40C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1232
	ctx.r5.s64 = ctx.r11.s64 + -1232;
	// addi r3,r10,-13148
	ctx.r3.s64 = ctx.r10.s64 + -13148;
	// li r4,102
	ctx.r4.s64 = 102;
	// bl 0x821d8d28
	ctx.lr = 0x821FA424;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-13160
	ctx.r3.s64 = ctx.r10.s64 + -13160;
	// li r4,102
	ctx.r4.s64 = 102;
	// bl 0x821d8d28
	ctx.lr = 0x821FA43C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// addi r3,r10,-13176
	ctx.r3.s64 = ctx.r10.s64 + -13176;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x821d8d28
	ctx.lr = 0x821FA454;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,640
	ctx.r5.s64 = ctx.r11.s64 + 640;
	// addi r3,r10,-13200
	ctx.r3.s64 = ctx.r10.s64 + -13200;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x821d8d28
	ctx.lr = 0x821FA46C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,704
	ctx.r5.s64 = ctx.r11.s64 + 704;
	// addi r3,r10,-13224
	ctx.r3.s64 = ctx.r10.s64 + -13224;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x821d8d28
	ctx.lr = 0x821FA484;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-26112
	ctx.r5.s64 = ctx.r11.s64 + -26112;
	// addi r3,r10,-13244
	ctx.r3.s64 = ctx.r10.s64 + -13244;
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x821d8d28
	ctx.lr = 0x821FA49C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,936
	ctx.r5.s64 = ctx.r11.s64 + 936;
	// addi r3,r10,-13256
	ctx.r3.s64 = ctx.r10.s64 + -13256;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x821d8d28
	ctx.lr = 0x821FA4B4;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1232
	ctx.r5.s64 = ctx.r11.s64 + -1232;
	// addi r3,r10,-13276
	ctx.r3.s64 = ctx.r10.s64 + -13276;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FA4CC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,592
	ctx.r5.s64 = ctx.r11.s64 + 592;
	// addi r3,r10,-13284
	ctx.r3.s64 = ctx.r10.s64 + -13284;
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x821d8d28
	ctx.lr = 0x821FA4E4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,776
	ctx.r5.s64 = ctx.r11.s64 + 776;
	// addi r3,r10,-13300
	ctx.r3.s64 = ctx.r10.s64 + -13300;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x821d8d28
	ctx.lr = 0x821FA4FC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,880
	ctx.r5.s64 = ctx.r11.s64 + 880;
	// addi r3,r10,-13316
	ctx.r3.s64 = ctx.r10.s64 + -13316;
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x821d8d28
	ctx.lr = 0x821FA514;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,1400
	ctx.r5.s64 = ctx.r11.s64 + 1400;
	// addi r3,r10,-13340
	ctx.r3.s64 = ctx.r10.s64 + -13340;
	// li r4,41
	ctx.r4.s64 = 41;
	// bl 0x821d8d28
	ctx.lr = 0x821FA52C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// addi r3,r10,-13356
	ctx.r3.s64 = ctx.r10.s64 + -13356;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x821d8d28
	ctx.lr = 0x821FA544;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-26144
	ctx.r5.s64 = ctx.r11.s64 + -26144;
	// addi r3,r10,-13368
	ctx.r3.s64 = ctx.r10.s64 + -13368;
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x821d8d28
	ctx.lr = 0x821FA55C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,936
	ctx.r5.s64 = ctx.r11.s64 + 936;
	// addi r3,r10,-13384
	ctx.r3.s64 = ctx.r10.s64 + -13384;
	// li r4,39
	ctx.r4.s64 = 39;
	// bl 0x821d8d28
	ctx.lr = 0x821FA574;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31312
	ctx.r5.s64 = ctx.r11.s64 + -31312;
	// addi r3,r10,-13392
	ctx.r3.s64 = ctx.r10.s64 + -13392;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x821d8d28
	ctx.lr = 0x821FA58C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r11,-25984
	ctx.r5.s64 = ctx.r11.s64 + -25984;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13404
	ctx.r3.s64 = ctx.r11.s64 + -13404;
	// bl 0x821d8d28
	ctx.lr = 0x821FA5A4;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-32648
	ctx.r5.s64 = ctx.r11.s64 + -32648;
	// addi r3,r10,-13420
	ctx.r3.s64 = ctx.r10.s64 + -13420;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FA5BC;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25984
	ctx.r5.s64 = ctx.r11.s64 + -25984;
	// addi r3,r10,-13436
	ctx.r3.s64 = ctx.r10.s64 + -13436;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821FA5D4;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-32656
	ctx.r5.s64 = ctx.r11.s64 + -32656;
	// addi r3,r10,-13448
	ctx.r3.s64 = ctx.r10.s64 + -13448;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FA5EC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-13460
	ctx.r3.s64 = ctx.r10.s64 + -13460;
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x821d8d28
	ctx.lr = 0x821FA604;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25968
	ctx.r5.s64 = ctx.r11.s64 + -25968;
	// addi r3,r10,-13476
	ctx.r3.s64 = ctx.r10.s64 + -13476;
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x821d8d28
	ctx.lr = 0x821FA61C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10832
	ctx.r5.s64 = ctx.r11.s64 + -10832;
	// addi r3,r10,-13500
	ctx.r3.s64 = ctx.r10.s64 + -13500;
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x821d8d28
	ctx.lr = 0x821FA634;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9944
	ctx.r5.s64 = ctx.r11.s64 + -9944;
	// addi r3,r10,-13516
	ctx.r3.s64 = ctx.r10.s64 + -13516;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821FA64C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11008
	ctx.r5.s64 = ctx.r11.s64 + -11008;
	// addi r3,r10,-13540
	ctx.r3.s64 = ctx.r10.s64 + -13540;
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x821d8d28
	ctx.lr = 0x821FA664;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10920
	ctx.r5.s64 = ctx.r11.s64 + -10920;
	// addi r3,r10,-13564
	ctx.r3.s64 = ctx.r10.s64 + -13564;
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x821d8d28
	ctx.lr = 0x821FA67C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11488
	ctx.r5.s64 = ctx.r11.s64 + -11488;
	// addi r3,r10,-13576
	ctx.r3.s64 = ctx.r10.s64 + -13576;
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x821d8d28
	ctx.lr = 0x821FA694;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-24248
	ctx.r5.s64 = ctx.r11.s64 + -24248;
	// addi r3,r10,-13596
	ctx.r3.s64 = ctx.r10.s64 + -13596;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FA6AC;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,24000
	ctx.r5.s64 = ctx.r11.s64 + 24000;
	// addi r3,r10,-13624
	ctx.r3.s64 = ctx.r10.s64 + -13624;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821FA6C4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-13632
	ctx.r3.s64 = ctx.r10.s64 + -13632;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x821d8d28
	ctx.lr = 0x821FA6DC;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,24920
	ctx.r5.s64 = ctx.r11.s64 + 24920;
	// addi r3,r10,-13664
	ctx.r3.s64 = ctx.r10.s64 + -13664;
	// li r4,141
	ctx.r4.s64 = 141;
	// bl 0x821d8d28
	ctx.lr = 0x821FA6F4;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,24816
	ctx.r5.s64 = ctx.r11.s64 + 24816;
	// addi r3,r10,-13692
	ctx.r3.s64 = ctx.r10.s64 + -13692;
	// li r4,146
	ctx.r4.s64 = 146;
	// bl 0x821d8d28
	ctx.lr = 0x821FA70C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-13704
	ctx.r3.s64 = ctx.r10.s64 + -13704;
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x821d8d28
	ctx.lr = 0x821FA724;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25360
	ctx.r5.s64 = ctx.r11.s64 + -25360;
	// addi r3,r10,-13720
	ctx.r3.s64 = ctx.r10.s64 + -13720;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FA73C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11736
	ctx.r5.s64 = ctx.r11.s64 + -11736;
	// addi r3,r10,-13736
	ctx.r3.s64 = ctx.r10.s64 + -13736;
	// li r4,71
	ctx.r4.s64 = 71;
	// bl 0x821d8d28
	ctx.lr = 0x821FA754;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18416
	ctx.r5.s64 = ctx.r11.s64 + -18416;
	// addi r3,r10,-13756
	ctx.r3.s64 = ctx.r10.s64 + -13756;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x821d8d28
	ctx.lr = 0x821FA76C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-26152
	ctx.r5.s64 = ctx.r11.s64 + -26152;
	// addi r3,r10,-13772
	ctx.r3.s64 = ctx.r10.s64 + -13772;
	// li r4,79
	ctx.r4.s64 = 79;
	// bl 0x821d8d28
	ctx.lr = 0x821FA784;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-24264
	ctx.r5.s64 = ctx.r11.s64 + -24264;
	// addi r3,r10,-13788
	ctx.r3.s64 = ctx.r10.s64 + -13788;
	// li r4,104
	ctx.r4.s64 = 104;
	// bl 0x821d8d28
	ctx.lr = 0x821FA79C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-25448
	ctx.r5.s64 = ctx.r11.s64 + -25448;
	// addi r3,r10,-13800
	ctx.r3.s64 = ctx.r10.s64 + -13800;
	// li r4,85
	ctx.r4.s64 = 85;
	// bl 0x821d8d28
	ctx.lr = 0x821FA7B4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-13812
	ctx.r3.s64 = ctx.r10.s64 + -13812;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821d8d28
	ctx.lr = 0x821FA7CC;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,23848
	ctx.r5.s64 = ctx.r11.s64 + 23848;
	// addi r3,r10,-13836
	ctx.r3.s64 = ctx.r10.s64 + -13836;
	// li r4,71
	ctx.r4.s64 = 71;
	// bl 0x821d8d28
	ctx.lr = 0x821FA7E4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8680
	ctx.r5.s64 = ctx.r11.s64 + -8680;
	// addi r3,r10,-13852
	ctx.r3.s64 = ctx.r10.s64 + -13852;
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x821d8d28
	ctx.lr = 0x821FA7FC;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19592
	ctx.r5.s64 = ctx.r11.s64 + -19592;
	// addi r3,r10,-13880
	ctx.r3.s64 = ctx.r10.s64 + -13880;
	// li r4,93
	ctx.r4.s64 = 93;
	// bl 0x821d8d28
	ctx.lr = 0x821FA814;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r4,99
	ctx.r4.s64 = 99;
	// addi r5,r11,-31160
	ctx.r5.s64 = ctx.r11.s64 + -31160;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13904
	ctx.r3.s64 = ctx.r11.s64 + -13904;
	// bl 0x821d8d28
	ctx.lr = 0x821FA82C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31072
	ctx.r5.s64 = ctx.r11.s64 + -31072;
	// addi r3,r10,-13940
	ctx.r3.s64 = ctx.r10.s64 + -13940;
	// li r4,65
	ctx.r4.s64 = 65;
	// bl 0x821d8d28
	ctx.lr = 0x821FA844;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19808
	ctx.r5.s64 = ctx.r11.s64 + -19808;
	// addi r3,r10,-13972
	ctx.r3.s64 = ctx.r10.s64 + -13972;
	// li r4,94
	ctx.r4.s64 = 94;
	// bl 0x821d8d28
	ctx.lr = 0x821FA85C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-23928
	ctx.r5.s64 = ctx.r11.s64 + -23928;
	// addi r3,r10,-14004
	ctx.r3.s64 = ctx.r10.s64 + -14004;
	// li r4,92
	ctx.r4.s64 = 92;
	// bl 0x821d8d28
	ctx.lr = 0x821FA874;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3400
	ctx.r5.s64 = ctx.r11.s64 + 3400;
	// addi r3,r10,-14024
	ctx.r3.s64 = ctx.r10.s64 + -14024;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FA88C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3336
	ctx.r5.s64 = ctx.r11.s64 + 3336;
	// addi r3,r10,-14044
	ctx.r3.s64 = ctx.r10.s64 + -14044;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FA8A4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2184
	ctx.r5.s64 = ctx.r11.s64 + 2184;
	// addi r3,r10,-14060
	ctx.r3.s64 = ctx.r10.s64 + -14060;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821d8d28
	ctx.lr = 0x821FA8BC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2264
	ctx.r5.s64 = ctx.r11.s64 + 2264;
	// addi r3,r10,-14080
	ctx.r3.s64 = ctx.r10.s64 + -14080;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821d8d28
	ctx.lr = 0x821FA8D4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2424
	ctx.r5.s64 = ctx.r11.s64 + 2424;
	// addi r3,r10,-14100
	ctx.r3.s64 = ctx.r10.s64 + -14100;
	// li r4,129
	ctx.r4.s64 = 129;
	// bl 0x821d8d28
	ctx.lr = 0x821FA8EC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2344
	ctx.r5.s64 = ctx.r11.s64 + 2344;
	// addi r3,r10,-14120
	ctx.r3.s64 = ctx.r10.s64 + -14120;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821d8d28
	ctx.lr = 0x821FA904;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2520
	ctx.r5.s64 = ctx.r11.s64 + 2520;
	// addi r3,r10,-14140
	ctx.r3.s64 = ctx.r10.s64 + -14140;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821d8d28
	ctx.lr = 0x821FA91C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2776
	ctx.r5.s64 = ctx.r11.s64 + 2776;
	// addi r3,r10,-14164
	ctx.r3.s64 = ctx.r10.s64 + -14164;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821d8d28
	ctx.lr = 0x821FA934;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2680
	ctx.r5.s64 = ctx.r11.s64 + 2680;
	// addi r3,r10,-14184
	ctx.r3.s64 = ctx.r10.s64 + -14184;
	// li r4,129
	ctx.r4.s64 = 129;
	// bl 0x821d8d28
	ctx.lr = 0x821FA94C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2936
	ctx.r5.s64 = ctx.r11.s64 + 2936;
	// addi r3,r10,-14208
	ctx.r3.s64 = ctx.r10.s64 + -14208;
	// li r4,129
	ctx.r4.s64 = 129;
	// bl 0x821d8d28
	ctx.lr = 0x821FA964;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2104
	ctx.r5.s64 = ctx.r11.s64 + 2104;
	// addi r3,r10,-14232
	ctx.r3.s64 = ctx.r10.s64 + -14232;
	// li r4,132
	ctx.r4.s64 = 132;
	// bl 0x821d8d28
	ctx.lr = 0x821FA97C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,1928
	ctx.r5.s64 = ctx.r11.s64 + 1928;
	// addi r3,r10,-14252
	ctx.r3.s64 = ctx.r10.s64 + -14252;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x821d8d28
	ctx.lr = 0x821FA994;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2600
	ctx.r5.s64 = ctx.r11.s64 + 2600;
	// addi r3,r10,-14272
	ctx.r3.s64 = ctx.r10.s64 + -14272;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821d8d28
	ctx.lr = 0x821FA9AC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2856
	ctx.r5.s64 = ctx.r11.s64 + 2856;
	// addi r3,r10,-14296
	ctx.r3.s64 = ctx.r10.s64 + -14296;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821d8d28
	ctx.lr = 0x821FA9C4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,2016
	ctx.r5.s64 = ctx.r11.s64 + 2016;
	// addi r3,r10,-14316
	ctx.r3.s64 = ctx.r10.s64 + -14316;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x821d8d28
	ctx.lr = 0x821FA9DC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3160
	ctx.r5.s64 = ctx.r11.s64 + 3160;
	// addi r3,r10,-14336
	ctx.r3.s64 = ctx.r10.s64 + -14336;
	// li r4,131
	ctx.r4.s64 = 131;
	// bl 0x821d8d28
	ctx.lr = 0x821FA9F4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3288
	ctx.r5.s64 = ctx.r11.s64 + 3288;
	// addi r3,r10,-14352
	ctx.r3.s64 = ctx.r10.s64 + -14352;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FAA0C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,3448
	ctx.r5.s64 = ctx.r11.s64 + 3448;
	// addi r3,r10,-14376
	ctx.r3.s64 = ctx.r10.s64 + -14376;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FAA24;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-30336
	ctx.r5.s64 = ctx.r11.s64 + -30336;
	// addi r3,r10,-14400
	ctx.r3.s64 = ctx.r10.s64 + -14400;
	// li r4,77
	ctx.r4.s64 = 77;
	// bl 0x821d8d28
	ctx.lr = 0x821FAA3C;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-30456
	ctx.r5.s64 = ctx.r11.s64 + -30456;
	// addi r3,r10,-14416
	ctx.r3.s64 = ctx.r10.s64 + -14416;
	// li r4,114
	ctx.r4.s64 = 114;
	// bl 0x821d8d28
	ctx.lr = 0x821FAA54;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10264
	ctx.r5.s64 = ctx.r11.s64 + -10264;
	// addi r3,r10,-14444
	ctx.r3.s64 = ctx.r10.s64 + -14444;
	// li r4,71
	ctx.r4.s64 = 71;
	// bl 0x821d8d28
	ctx.lr = 0x821FAA6C;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-14456
	ctx.r3.s64 = ctx.r10.s64 + -14456;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FAA84;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-14480
	ctx.r3.s64 = ctx.r10.s64 + -14480;
	// li r4,97
	ctx.r4.s64 = 97;
	// bl 0x821d8d28
	ctx.lr = 0x821FAA9C;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r4,59
	ctx.r4.s64 = 59;
	// addi r5,r11,-11840
	ctx.r5.s64 = ctx.r11.s64 + -11840;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14508
	ctx.r3.s64 = ctx.r11.s64 + -14508;
	// bl 0x821d8d28
	ctx.lr = 0x821FAAB4;
	sub_821D8D28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,23736
	ctx.r5.s64 = ctx.r11.s64 + 23736;
	// addi r3,r10,-14536
	ctx.r3.s64 = ctx.r10.s64 + -14536;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821FAACC;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-26096
	ctx.r5.s64 = ctx.r11.s64 + -26096;
	// addi r3,r10,-14556
	ctx.r3.s64 = ctx.r10.s64 + -14556;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821FAAE4;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-14568
	ctx.r3.s64 = ctx.r10.s64 + -14568;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821d8d28
	ctx.lr = 0x821FAAFC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,912
	ctx.r5.s64 = ctx.r11.s64 + 912;
	// addi r3,r10,-14584
	ctx.r3.s64 = ctx.r10.s64 + -14584;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x821d8d28
	ctx.lr = 0x821FAB14;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31360
	ctx.r5.s64 = ctx.r11.s64 + -31360;
	// addi r3,r10,-14604
	ctx.r3.s64 = ctx.r10.s64 + -14604;
	// li r4,81
	ctx.r4.s64 = 81;
	// bl 0x821d8d28
	ctx.lr = 0x821FAB2C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10744
	ctx.r5.s64 = ctx.r11.s64 + -10744;
	// addi r3,r10,-14640
	ctx.r3.s64 = ctx.r10.s64 + -14640;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x821d8d28
	ctx.lr = 0x821FAB44;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10632
	ctx.r5.s64 = ctx.r11.s64 + -10632;
	// addi r3,r10,-14676
	ctx.r3.s64 = ctx.r10.s64 + -14676;
	// li r4,134
	ctx.r4.s64 = 134;
	// bl 0x821d8d28
	ctx.lr = 0x821FAB5C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10872
	ctx.r5.s64 = ctx.r11.s64 + -10872;
	// addi r3,r10,-14704
	ctx.r3.s64 = ctx.r10.s64 + -14704;
	// li r4,102
	ctx.r4.s64 = 102;
	// bl 0x821d8d28
	ctx.lr = 0x821FAB74;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20160
	ctx.r5.s64 = ctx.r11.s64 + -20160;
	// addi r3,r10,-14736
	ctx.r3.s64 = ctx.r10.s64 + -14736;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x821d8d28
	ctx.lr = 0x821FAB8C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20360
	ctx.r5.s64 = ctx.r11.s64 + -20360;
	// addi r3,r10,-14764
	ctx.r3.s64 = ctx.r10.s64 + -14764;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FABA4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20640
	ctx.r5.s64 = ctx.r11.s64 + -20640;
	// addi r3,r10,-14788
	ctx.r3.s64 = ctx.r10.s64 + -14788;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FABBC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20576
	ctx.r5.s64 = ctx.r11.s64 + -20576;
	// addi r3,r10,-14816
	ctx.r3.s64 = ctx.r10.s64 + -14816;
	// li r4,123
	ctx.r4.s64 = 123;
	// bl 0x821d8d28
	ctx.lr = 0x821FABD4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21728
	ctx.r5.s64 = ctx.r11.s64 + -21728;
	// addi r3,r10,-14832
	ctx.r3.s64 = ctx.r10.s64 + -14832;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FABEC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21192
	ctx.r5.s64 = ctx.r11.s64 + -21192;
	// addi r3,r10,-14852
	ctx.r3.s64 = ctx.r10.s64 + -14852;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FAC04;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21072
	ctx.r5.s64 = ctx.r11.s64 + -21072;
	// addi r3,r10,-14880
	ctx.r3.s64 = ctx.r10.s64 + -14880;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x821d8d28
	ctx.lr = 0x821FAC1C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21016
	ctx.r5.s64 = ctx.r11.s64 + -21016;
	// addi r3,r10,-14904
	ctx.r3.s64 = ctx.r10.s64 + -14904;
	// li r4,133
	ctx.r4.s64 = 133;
	// bl 0x821d8d28
	ctx.lr = 0x821FAC34;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21592
	ctx.r5.s64 = ctx.r11.s64 + -21592;
	// addi r3,r10,-14928
	ctx.r3.s64 = ctx.r10.s64 + -14928;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FAC4C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21512
	ctx.r5.s64 = ctx.r11.s64 + -21512;
	// addi r3,r10,-14948
	ctx.r3.s64 = ctx.r10.s64 + -14948;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FAC64;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r3,r10,-14972
	ctx.r3.s64 = ctx.r10.s64 + -14972;
	// li r4,119
	ctx.r4.s64 = 119;
	// bl 0x821d8d28
	ctx.lr = 0x821FAC7C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20880
	ctx.r5.s64 = ctx.r11.s64 + -20880;
	// addi r3,r10,-14992
	ctx.r3.s64 = ctx.r10.s64 + -14992;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FAC94;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20768
	ctx.r5.s64 = ctx.r11.s64 + -20768;
	// addi r3,r10,-15016
	ctx.r3.s64 = ctx.r10.s64 + -15016;
	// li r4,119
	ctx.r4.s64 = 119;
	// bl 0x821d8d28
	ctx.lr = 0x821FACAC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20720
	ctx.r5.s64 = ctx.r11.s64 + -20720;
	// addi r3,r10,-15040
	ctx.r3.s64 = ctx.r10.s64 + -15040;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FACC4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21352
	ctx.r5.s64 = ctx.r11.s64 + -21352;
	// addi r3,r10,-15060
	ctx.r3.s64 = ctx.r10.s64 + -15060;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FACDC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21240
	ctx.r5.s64 = ctx.r11.s64 + -21240;
	// addi r3,r10,-15088
	ctx.r3.s64 = ctx.r10.s64 + -15088;
	// li r4,119
	ctx.r4.s64 = 119;
	// bl 0x821d8d28
	ctx.lr = 0x821FACF4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-20304
	ctx.r5.s64 = ctx.r11.s64 + -20304;
	// addi r3,r10,-15120
	ctx.r3.s64 = ctx.r10.s64 + -15120;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x821d8d28
	ctx.lr = 0x821FAD0C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21672
	ctx.r5.s64 = ctx.r11.s64 + -21672;
	// addi r3,r10,-15148
	ctx.r3.s64 = ctx.r10.s64 + -15148;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FAD24;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r5,r11,-20424
	ctx.r5.s64 = ctx.r11.s64 + -20424;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15172
	ctx.r3.s64 = ctx.r11.s64 + -15172;
	// bl 0x821d8d28
	ctx.lr = 0x821FAD3C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8712
	ctx.r5.s64 = ctx.r11.s64 + -8712;
	// addi r3,r10,-15204
	ctx.r3.s64 = ctx.r10.s64 + -15204;
	// li r4,134
	ctx.r4.s64 = 134;
	// bl 0x821d8d28
	ctx.lr = 0x821FAD54;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8744
	ctx.r5.s64 = ctx.r11.s64 + -8744;
	// addi r3,r10,-15232
	ctx.r3.s64 = ctx.r10.s64 + -15232;
	// li r4,136
	ctx.r4.s64 = 136;
	// bl 0x821d8d28
	ctx.lr = 0x821FAD6C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19000
	ctx.r5.s64 = ctx.r11.s64 + -19000;
	// addi r3,r10,-15252
	ctx.r3.s64 = ctx.r10.s64 + -15252;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FAD84;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18848
	ctx.r5.s64 = ctx.r11.s64 + -18848;
	// addi r3,r10,-15276
	ctx.r3.s64 = ctx.r10.s64 + -15276;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FAD9C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-12024
	ctx.r5.s64 = ctx.r11.s64 + -12024;
	// addi r3,r10,-15304
	ctx.r3.s64 = ctx.r10.s64 + -15304;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FADB4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11752
	ctx.r5.s64 = ctx.r11.s64 + -11752;
	// addi r3,r10,-15328
	ctx.r3.s64 = ctx.r10.s64 + -15328;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FADCC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10272
	ctx.r5.s64 = ctx.r11.s64 + -10272;
	// addi r3,r10,-15352
	ctx.r3.s64 = ctx.r10.s64 + -15352;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FADE4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11880
	ctx.r5.s64 = ctx.r11.s64 + -11880;
	// addi r3,r10,-15376
	ctx.r3.s64 = ctx.r10.s64 + -15376;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FADFC;
	sub_821D8D28(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,27712
	ctx.r5.s64 = ctx.r11.s64 + 27712;
	// addi r3,r10,-15412
	ctx.r3.s64 = ctx.r10.s64 + -15412;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FAE14;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-13168
	ctx.r5.s64 = ctx.r11.s64 + -13168;
	// addi r3,r10,-15436
	ctx.r3.s64 = ctx.r10.s64 + -15436;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FAE2C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16008
	ctx.r5.s64 = ctx.r11.s64 + -16008;
	// addi r3,r10,-15468
	ctx.r3.s64 = ctx.r10.s64 + -15468;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FAE44;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-15672
	ctx.r5.s64 = ctx.r11.s64 + -15672;
	// addi r3,r10,-15492
	ctx.r3.s64 = ctx.r10.s64 + -15492;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FAE5C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-15160
	ctx.r5.s64 = ctx.r11.s64 + -15160;
	// addi r3,r10,-15516
	ctx.r3.s64 = ctx.r10.s64 + -15516;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FAE74;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-14936
	ctx.r5.s64 = ctx.r11.s64 + -14936;
	// addi r3,r10,-15540
	ctx.r3.s64 = ctx.r10.s64 + -15540;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FAE8C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-15048
	ctx.r5.s64 = ctx.r11.s64 + -15048;
	// addi r3,r10,-15564
	ctx.r3.s64 = ctx.r10.s64 + -15564;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FAEA4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-15840
	ctx.r5.s64 = ctx.r11.s64 + -15840;
	// addi r3,r10,-15600
	ctx.r3.s64 = ctx.r10.s64 + -15600;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FAEBC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-15504
	ctx.r5.s64 = ctx.r11.s64 + -15504;
	// addi r3,r10,-15616
	ctx.r3.s64 = ctx.r10.s64 + -15616;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FAED4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-15384
	ctx.r5.s64 = ctx.r11.s64 + -15384;
	// addi r3,r10,-15636
	ctx.r3.s64 = ctx.r10.s64 + -15636;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FAEEC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-15272
	ctx.r5.s64 = ctx.r11.s64 + -15272;
	// addi r3,r10,-15656
	ctx.r3.s64 = ctx.r10.s64 + -15656;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FAF04;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-13480
	ctx.r5.s64 = ctx.r11.s64 + -13480;
	// addi r3,r10,-15684
	ctx.r3.s64 = ctx.r10.s64 + -15684;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FAF1C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-13376
	ctx.r5.s64 = ctx.r11.s64 + -13376;
	// addi r3,r10,-15712
	ctx.r3.s64 = ctx.r10.s64 + -15712;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FAF34;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-13272
	ctx.r5.s64 = ctx.r11.s64 + -13272;
	// addi r3,r10,-15740
	ctx.r3.s64 = ctx.r10.s64 + -15740;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FAF4C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-13584
	ctx.r5.s64 = ctx.r11.s64 + -13584;
	// addi r3,r10,-15764
	ctx.r3.s64 = ctx.r10.s64 + -15764;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FAF64;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-14000
	ctx.r5.s64 = ctx.r11.s64 + -14000;
	// addi r3,r10,-15784
	ctx.r3.s64 = ctx.r10.s64 + -15784;
	// li r4,126
	ctx.r4.s64 = 126;
	// bl 0x821d8d28
	ctx.lr = 0x821FAF7C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-14112
	ctx.r5.s64 = ctx.r11.s64 + -14112;
	// addi r3,r10,-15808
	ctx.r3.s64 = ctx.r10.s64 + -15808;
	// li r4,117
	ctx.r4.s64 = 117;
	// bl 0x821d8d28
	ctx.lr = 0x821FAF94;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16128
	ctx.r5.s64 = ctx.r11.s64 + -16128;
	// addi r3,r10,-15832
	ctx.r3.s64 = ctx.r10.s64 + -15832;
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x821d8d28
	ctx.lr = 0x821FAFAC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r5,r11,-14440
	ctx.r5.s64 = ctx.r11.s64 + -14440;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15852
	ctx.r3.s64 = ctx.r11.s64 + -15852;
	// bl 0x821d8d28
	ctx.lr = 0x821FAFC4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-14328
	ctx.r5.s64 = ctx.r11.s64 + -14328;
	// addi r3,r10,-15880
	ctx.r3.s64 = ctx.r10.s64 + -15880;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FAFDC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-13768
	ctx.r5.s64 = ctx.r11.s64 + -13768;
	// addi r3,r10,-15908
	ctx.r3.s64 = ctx.r10.s64 + -15908;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x821d8d28
	ctx.lr = 0x821FAFF4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-13888
	ctx.r5.s64 = ctx.r11.s64 + -13888;
	// addi r3,r10,-15940
	ctx.r3.s64 = ctx.r10.s64 + -15940;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FB00C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-14568
	ctx.r5.s64 = ctx.r11.s64 + -14568;
	// addi r3,r10,-15960
	ctx.r3.s64 = ctx.r10.s64 + -15960;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FB024;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-14240
	ctx.r5.s64 = ctx.r11.s64 + -14240;
	// addi r3,r10,-15984
	ctx.r3.s64 = ctx.r10.s64 + -15984;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FB03C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-14696
	ctx.r5.s64 = ctx.r11.s64 + -14696;
	// addi r3,r10,-16008
	ctx.r3.s64 = ctx.r10.s64 + -16008;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FB054;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-14824
	ctx.r5.s64 = ctx.r11.s64 + -14824;
	// addi r3,r10,-16028
	ctx.r3.s64 = ctx.r10.s64 + -16028;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FB06C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18696
	ctx.r5.s64 = ctx.r11.s64 + -18696;
	// addi r3,r10,-16048
	ctx.r3.s64 = ctx.r10.s64 + -16048;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FB084;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18512
	ctx.r5.s64 = ctx.r11.s64 + -18512;
	// addi r3,r10,-16068
	ctx.r3.s64 = ctx.r10.s64 + -16068;
	// li r4,115
	ctx.r4.s64 = 115;
	// bl 0x821d8d28
	ctx.lr = 0x821FB09C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18312
	ctx.r5.s64 = ctx.r11.s64 + -18312;
	// addi r3,r10,-16088
	ctx.r3.s64 = ctx.r10.s64 + -16088;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB0B4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-22288
	ctx.r5.s64 = ctx.r11.s64 + -22288;
	// addi r3,r10,-16108
	ctx.r3.s64 = ctx.r10.s64 + -16108;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FB0CC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11680
	ctx.r5.s64 = ctx.r11.s64 + -11680;
	// addi r3,r10,-16132
	ctx.r3.s64 = ctx.r10.s64 + -16132;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB0E4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10208
	ctx.r5.s64 = ctx.r11.s64 + -10208;
	// addi r3,r10,-16156
	ctx.r3.s64 = ctx.r10.s64 + -16156;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB0FC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-22256
	ctx.r5.s64 = ctx.r11.s64 + -22256;
	// addi r3,r10,-16188
	ctx.r3.s64 = ctx.r10.s64 + -16188;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FB114;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9408
	ctx.r5.s64 = ctx.r11.s64 + -9408;
	// addi r3,r10,-16220
	ctx.r3.s64 = ctx.r10.s64 + -16220;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FB12C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9936
	ctx.r5.s64 = ctx.r11.s64 + -9936;
	// addi r3,r10,-16252
	ctx.r3.s64 = ctx.r10.s64 + -16252;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x821d8d28
	ctx.lr = 0x821FB144;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9568
	ctx.r5.s64 = ctx.r11.s64 + -9568;
	// addi r3,r10,-16280
	ctx.r3.s64 = ctx.r10.s64 + -16280;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FB15C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9184
	ctx.r5.s64 = ctx.r11.s64 + -9184;
	// addi r3,r10,-16312
	ctx.r3.s64 = ctx.r10.s64 + -16312;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x821d8d28
	ctx.lr = 0x821FB174;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9016
	ctx.r5.s64 = ctx.r11.s64 + -9016;
	// addi r3,r10,-16340
	ctx.r3.s64 = ctx.r10.s64 + -16340;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FB18C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8872
	ctx.r5.s64 = ctx.r11.s64 + -8872;
	// addi r3,r10,-16364
	ctx.r3.s64 = ctx.r10.s64 + -16364;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FB1A4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9064
	ctx.r5.s64 = ctx.r11.s64 + -9064;
	// addi r3,r10,-16396
	ctx.r3.s64 = ctx.r10.s64 + -16396;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FB1BC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9680
	ctx.r5.s64 = ctx.r11.s64 + -9680;
	// addi r3,r10,-16420
	ctx.r3.s64 = ctx.r10.s64 + -16420;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FB1D4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9888
	ctx.r5.s64 = ctx.r11.s64 + -9888;
	// addi r3,r10,-16448
	ctx.r3.s64 = ctx.r10.s64 + -16448;
	// li r4,115
	ctx.r4.s64 = 115;
	// bl 0x821d8d28
	ctx.lr = 0x821FB1EC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8968
	ctx.r5.s64 = ctx.r11.s64 + -8968;
	// addi r3,r10,-16476
	ctx.r3.s64 = ctx.r10.s64 + -16476;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB204;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9776
	ctx.r5.s64 = ctx.r11.s64 + -9776;
	// addi r3,r10,-16496
	ctx.r3.s64 = ctx.r10.s64 + -16496;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB21C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-8920
	ctx.r5.s64 = ctx.r11.s64 + -8920;
	// addi r3,r10,-16528
	ctx.r3.s64 = ctx.r10.s64 + -16528;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB234;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,127
	ctx.r4.s64 = 127;
	// addi r5,r11,-9312
	ctx.r5.s64 = ctx.r11.s64 + -9312;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16568
	ctx.r3.s64 = ctx.r11.s64 + -16568;
	// bl 0x821d8d28
	ctx.lr = 0x821FB24C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-22272
	ctx.r5.s64 = ctx.r11.s64 + -22272;
	// addi r3,r10,-16600
	ctx.r3.s64 = ctx.r10.s64 + -16600;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FB264;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9472
	ctx.r5.s64 = ctx.r11.s64 + -9472;
	// addi r3,r10,-16632
	ctx.r3.s64 = ctx.r10.s64 + -16632;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FB27C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10000
	ctx.r5.s64 = ctx.r11.s64 + -10000;
	// addi r3,r10,-16664
	ctx.r3.s64 = ctx.r10.s64 + -16664;
	// li r4,115
	ctx.r4.s64 = 115;
	// bl 0x821d8d28
	ctx.lr = 0x821FB294;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9632
	ctx.r5.s64 = ctx.r11.s64 + -9632;
	// addi r3,r10,-16692
	ctx.r3.s64 = ctx.r10.s64 + -16692;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FB2AC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9248
	ctx.r5.s64 = ctx.r11.s64 + -9248;
	// addi r3,r10,-16724
	ctx.r3.s64 = ctx.r10.s64 + -16724;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x821d8d28
	ctx.lr = 0x821FB2C4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9128
	ctx.r5.s64 = ctx.r11.s64 + -9128;
	// addi r3,r10,-16756
	ctx.r3.s64 = ctx.r10.s64 + -16756;
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x821d8d28
	ctx.lr = 0x821FB2DC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10152
	ctx.r5.s64 = ctx.r11.s64 + -10152;
	// addi r3,r10,-16788
	ctx.r3.s64 = ctx.r10.s64 + -16788;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FB2F4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9728
	ctx.r5.s64 = ctx.r11.s64 + -9728;
	// addi r3,r10,-16808
	ctx.r3.s64 = ctx.r10.s64 + -16808;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB30C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-22240
	ctx.r5.s64 = ctx.r11.s64 + -22240;
	// addi r3,r10,-16844
	ctx.r3.s64 = ctx.r10.s64 + -16844;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB324;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9360
	ctx.r5.s64 = ctx.r11.s64 + -9360;
	// addi r3,r10,-16876
	ctx.r3.s64 = ctx.r10.s64 + -16876;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB33C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9520
	ctx.r5.s64 = ctx.r11.s64 + -9520;
	// addi r3,r10,-16908
	ctx.r3.s64 = ctx.r10.s64 + -16908;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB354;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-9824
	ctx.r5.s64 = ctx.r11.s64 + -9824;
	// addi r3,r10,-16940
	ctx.r3.s64 = ctx.r10.s64 + -16940;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB36C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21824
	ctx.r5.s64 = ctx.r11.s64 + -21824;
	// addi r3,r10,-16960
	ctx.r3.s64 = ctx.r10.s64 + -16960;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FB384;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-21992
	ctx.r5.s64 = ctx.r11.s64 + -21992;
	// addi r3,r10,-16980
	ctx.r3.s64 = ctx.r10.s64 + -16980;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FB39C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11288
	ctx.r5.s64 = ctx.r11.s64 + -11288;
	// addi r3,r10,-16996
	ctx.r3.s64 = ctx.r10.s64 + -16996;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FB3B4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-22088
	ctx.r5.s64 = ctx.r11.s64 + -22088;
	// addi r3,r10,-17012
	ctx.r3.s64 = ctx.r10.s64 + -17012;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FB3CC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11216
	ctx.r5.s64 = ctx.r11.s64 + -11216;
	// addi r3,r10,-17036
	ctx.r3.s64 = ctx.r10.s64 + -17036;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB3E4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11392
	ctx.r5.s64 = ctx.r11.s64 + -11392;
	// addi r3,r10,-17052
	ctx.r3.s64 = ctx.r10.s64 + -17052;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB3FC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11000
	ctx.r5.s64 = ctx.r11.s64 + -11000;
	// addi r3,r10,-17076
	ctx.r3.s64 = ctx.r10.s64 + -17076;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FB414;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-11128
	ctx.r5.s64 = ctx.r11.s64 + -11128;
	// addi r3,r10,-17100
	ctx.r3.s64 = ctx.r10.s64 + -17100;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x821d8d28
	ctx.lr = 0x821FB42C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16288
	ctx.r5.s64 = ctx.r11.s64 + -16288;
	// addi r3,r10,-17124
	ctx.r3.s64 = ctx.r10.s64 + -17124;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x821d8d28
	ctx.lr = 0x821FB444;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16176
	ctx.r5.s64 = ctx.r11.s64 + -16176;
	// addi r3,r10,-17152
	ctx.r3.s64 = ctx.r10.s64 + -17152;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FB45C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16624
	ctx.r5.s64 = ctx.r11.s64 + -16624;
	// addi r3,r10,-17176
	ctx.r3.s64 = ctx.r10.s64 + -17176;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x821d8d28
	ctx.lr = 0x821FB474;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16512
	ctx.r5.s64 = ctx.r11.s64 + -16512;
	// addi r3,r10,-17204
	ctx.r3.s64 = ctx.r10.s64 + -17204;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FB48C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16960
	ctx.r5.s64 = ctx.r11.s64 + -16960;
	// addi r3,r10,-17228
	ctx.r3.s64 = ctx.r10.s64 + -17228;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x821d8d28
	ctx.lr = 0x821FB4A4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16848
	ctx.r5.s64 = ctx.r11.s64 + -16848;
	// addi r3,r10,-17256
	ctx.r3.s64 = ctx.r10.s64 + -17256;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821d8d28
	ctx.lr = 0x821FB4BC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r5,r11,-17248
	ctx.r5.s64 = ctx.r11.s64 + -17248;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17284
	ctx.r3.s64 = ctx.r11.s64 + -17284;
	// bl 0x821d8d28
	ctx.lr = 0x821FB4D4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17360
	ctx.r5.s64 = ctx.r11.s64 + -17360;
	// addi r3,r10,-17304
	ctx.r3.s64 = ctx.r10.s64 + -17304;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x821d8d28
	ctx.lr = 0x821FB4EC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16464
	ctx.r5.s64 = ctx.r11.s64 + -16464;
	// addi r3,r10,-17328
	ctx.r3.s64 = ctx.r10.s64 + -17328;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x821d8d28
	ctx.lr = 0x821FB504;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16344
	ctx.r5.s64 = ctx.r11.s64 + -16344;
	// addi r3,r10,-17356
	ctx.r3.s64 = ctx.r10.s64 + -17356;
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x821d8d28
	ctx.lr = 0x821FB51C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16800
	ctx.r5.s64 = ctx.r11.s64 + -16800;
	// addi r3,r10,-17380
	ctx.r3.s64 = ctx.r10.s64 + -17380;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x821d8d28
	ctx.lr = 0x821FB534;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16680
	ctx.r5.s64 = ctx.r11.s64 + -16680;
	// addi r3,r10,-17408
	ctx.r3.s64 = ctx.r10.s64 + -17408;
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x821d8d28
	ctx.lr = 0x821FB54C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17136
	ctx.r5.s64 = ctx.r11.s64 + -17136;
	// addi r3,r10,-17432
	ctx.r3.s64 = ctx.r10.s64 + -17432;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x821d8d28
	ctx.lr = 0x821FB564;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17016
	ctx.r5.s64 = ctx.r11.s64 + -17016;
	// addi r3,r10,-17460
	ctx.r3.s64 = ctx.r10.s64 + -17460;
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x821d8d28
	ctx.lr = 0x821FB57C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17536
	ctx.r5.s64 = ctx.r11.s64 + -17536;
	// addi r3,r10,-17480
	ctx.r3.s64 = ctx.r10.s64 + -17480;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x821d8d28
	ctx.lr = 0x821FB594;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17416
	ctx.r5.s64 = ctx.r11.s64 + -17416;
	// addi r3,r10,-17504
	ctx.r3.s64 = ctx.r10.s64 + -17504;
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x821d8d28
	ctx.lr = 0x821FB5AC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17840
	ctx.r5.s64 = ctx.r11.s64 + -17840;
	// addi r3,r10,-17524
	ctx.r3.s64 = ctx.r10.s64 + -17524;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB5C4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18112
	ctx.r5.s64 = ctx.r11.s64 + -18112;
	// addi r3,r10,-17544
	ctx.r3.s64 = ctx.r10.s64 + -17544;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB5DC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17704
	ctx.r5.s64 = ctx.r11.s64 + -17704;
	// addi r3,r10,-17576
	ctx.r3.s64 = ctx.r10.s64 + -17576;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FB5F4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-18112
	ctx.r5.s64 = ctx.r11.s64 + -18112;
	// addi r3,r10,-17596
	ctx.r3.s64 = ctx.r10.s64 + -17596;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB60C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17976
	ctx.r5.s64 = ctx.r11.s64 + -17976;
	// addi r3,r10,-17616
	ctx.r3.s64 = ctx.r10.s64 + -17616;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB624;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-12928
	ctx.r5.s64 = ctx.r11.s64 + -12928;
	// addi r3,r10,-17640
	ctx.r3.s64 = ctx.r10.s64 + -17640;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x821d8d28
	ctx.lr = 0x821FB63C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-12608
	ctx.r5.s64 = ctx.r11.s64 + -12608;
	// addi r3,r10,-17668
	ctx.r3.s64 = ctx.r10.s64 + -17668;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB654;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-12224
	ctx.r5.s64 = ctx.r11.s64 + -12224;
	// addi r3,r10,-17700
	ctx.r3.s64 = ctx.r10.s64 + -17700;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB66C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-12792
	ctx.r5.s64 = ctx.r11.s64 + -12792;
	// addi r3,r10,-17720
	ctx.r3.s64 = ctx.r10.s64 + -17720;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FB684;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-12408
	ctx.r5.s64 = ctx.r11.s64 + -12408;
	// addi r3,r10,-17748
	ctx.r3.s64 = ctx.r10.s64 + -17748;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FB69C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19432
	ctx.r5.s64 = ctx.r11.s64 + -19432;
	// addi r3,r10,-17768
	ctx.r3.s64 = ctx.r10.s64 + -17768;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x821d8d28
	ctx.lr = 0x821FB6B4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19288
	ctx.r5.s64 = ctx.r11.s64 + -19288;
	// addi r3,r10,-17792
	ctx.r3.s64 = ctx.r10.s64 + -17792;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821d8d28
	ctx.lr = 0x821FB6CC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19840
	ctx.r5.s64 = ctx.r11.s64 + -19840;
	// addi r3,r10,-17812
	ctx.r3.s64 = ctx.r10.s64 + -17812;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x821d8d28
	ctx.lr = 0x821FB6E4;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19568
	ctx.r5.s64 = ctx.r11.s64 + -19568;
	// addi r3,r10,-17836
	ctx.r3.s64 = ctx.r10.s64 + -17836;
	// li r4,121
	ctx.r4.s64 = 121;
	// bl 0x821d8d28
	ctx.lr = 0x821FB6FC;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19688
	ctx.r5.s64 = ctx.r11.s64 + -19688;
	// addi r3,r10,-17860
	ctx.r3.s64 = ctx.r10.s64 + -17860;
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x821d8d28
	ctx.lr = 0x821FB714;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19824
	ctx.r5.s64 = ctx.r11.s64 + -19824;
	// addi r3,r10,-17884
	ctx.r3.s64 = ctx.r10.s64 + -17884;
	// li r4,115
	ctx.r4.s64 = 115;
	// bl 0x821d8d28
	ctx.lr = 0x821FB72C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-19832
	ctx.r5.s64 = ctx.r11.s64 + -19832;
	// addi r3,r10,-17912
	ctx.r3.s64 = ctx.r10.s64 + -17912;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x821d8d28
	ctx.lr = 0x821FB744;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,125
	ctx.r4.s64 = 125;
	// addi r5,r11,-19120
	ctx.r5.s64 = ctx.r11.s64 + -19120;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17936
	ctx.r3.s64 = ctx.r11.s64 + -17936;
	// bl 0x821d8d28
	ctx.lr = 0x821FB75C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-13064
	ctx.r5.s64 = ctx.r11.s64 + -13064;
	// addi r3,r10,-17964
	ctx.r3.s64 = ctx.r10.s64 + -17964;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x821d8d28
	ctx.lr = 0x821FB774;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10504
	ctx.r5.s64 = ctx.r11.s64 + -10504;
	// addi r3,r10,-17992
	ctx.r3.s64 = ctx.r10.s64 + -17992;
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x821d8d28
	ctx.lr = 0x821FB78C;
	sub_821D8D28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-10320
	ctx.r5.s64 = ctx.r11.s64 + -10320;
	// addi r3,r10,-18020
	ctx.r3.s64 = ctx.r10.s64 + -18020;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x821d8d28
	ctx.lr = 0x821FB7A4;
	sub_821D8D28(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-31584
	ctx.r5.s64 = ctx.r11.s64 + -31584;
	// addi r3,r10,-18044
	ctx.r3.s64 = ctx.r10.s64 + -18044;
	// li r4,69
	ctx.r4.s64 = 69;
	// bl 0x821d8d28
	ctx.lr = 0x821FB7BC;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16344
	ctx.r5.s64 = ctx.r11.s64 + -16344;
	// addi r3,r10,-18064
	ctx.r3.s64 = ctx.r10.s64 + -18064;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x821d8d28
	ctx.lr = 0x821FB7D4;
	sub_821D8D28(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-16320
	ctx.r5.s64 = ctx.r11.s64 + -16320;
	// addi r3,r10,-18084
	ctx.r3.s64 = ctx.r10.s64 + -18084;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x821d8d28
	ctx.lr = 0x821FB7EC;
	sub_821D8D28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82278FE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x82278FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82280f90
	ctx.lr = 0x82279010;
	sub_82280F90(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82279048
	if (!ctx.cr6.eq) goto loc_82279048;
loc_82279018:
	// bl 0x82279410
	ctx.lr = 0x8227901C;
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
	ctx.lr = 0x82279040;
	sub_822792D8(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822790c4
	goto loc_822790C4;
loc_82279048:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82279018
	if (ctx.cr6.eq) goto loc_82279018;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82279064
	if (!ctx.cr6.eq) goto loc_82279064;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82279074
	goto loc_82279074;
loc_82279064:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r4,r10,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r10.u64;
loc_82279074:
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82280d20
	ctx.lr = 0x82279094;
	sub_82280D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822790a8
	if (ctx.cr0.eq) goto loc_822790A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x822790c4
	goto loc_822790C4;
loc_822790A8:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82278e08
	ctx.lr = 0x822790C4;
	sub_82278E08(ctx, base);
loc_822790C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822813A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82281868
	ctx.lr = 0x822813CC;
	sub_82281868(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822813ec
	if (!ctx.cr6.eq) goto loc_822813EC;
	// bl 0x82279410
	ctx.lr = 0x822813D8;
	sub_82279410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82281454
	goto loc_82281454;
loc_822813EC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82239bb8
	ctx.lr = 0x822813FC;
	sub_82239BB8(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82281420
	if (!ctx.cr6.eq) goto loc_82281420;
	// bl 0x82235c10
	ctx.lr = 0x8228140C;
	sub_82235C10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82281420
	if (ctx.cr0.eq) goto loc_82281420;
	// bl 0x82279480
	ctx.lr = 0x82281418;
	sub_82279480(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82281454
	goto loc_82281454;
loc_82281420:
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10336
	ctx.r11.s64 = ctx.r11.s64 + 10336;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(44));
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_82281454:
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

DEFINE_REX_FUNC(sub_82287F98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5276
	ctx.r11.s64 = ctx.r11.s64 + 5276;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5276
	ctx.r11.s64 = ctx.r11.s64 + 5276;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5248
	ctx.r11.s64 = ctx.r11.s64 + 5248;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5248
	ctx.r11.s64 = ctx.r11.s64 + 5248;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5248
	ctx.r11.s64 = ctx.r11.s64 + 5248;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5248
	ctx.r11.s64 = ctx.r11.s64 + 5248;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5232
	ctx.r11.s64 = ctx.r11.s64 + 5232;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5232
	ctx.r11.s64 = ctx.r11.s64 + 5232;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5232
	ctx.r11.s64 = ctx.r11.s64 + 5232;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,6188
	ctx.r10.s64 = ctx.r10.s64 + 6188;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

