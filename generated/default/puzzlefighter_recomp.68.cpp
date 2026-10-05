#include "puzzlefighter_funcs.68.h"

DEFINE_REX_FUNC(sub_82045128) {
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
	// bl 0x82044870
	ctx.lr = 0x82045138;
	sub_82044870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82045150
	goto loc_82045150;
loc_82045144:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82045150:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82045194
	if (!ctx.cr6.lt) goto loc_82045194;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
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
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x82045144
	goto loc_82045144;
loc_82045194:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// stw r11,144(r10)
	REX_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// stw r11,148(r10)
	REX_STORE_U32(ctx.r10.u32 + 148, ctx.r11.u32);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// addi r11,r11,8192
	ctx.r11.s64 = ctx.r11.s64 + 8192;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// stw r11,152(r10)
	REX_STORE_U32(ctx.r10.u32 + 152, ctx.r11.u32);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// addi r11,r11,12288
	ctx.r11.s64 = ctx.r11.s64 + 12288;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// stw r11,156(r10)
	REX_STORE_U32(ctx.r10.u32 + 156, ctx.r11.u32);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14368
	ctx.r10.s64 = ctx.r10.s64 + -14368;
	// stw r11,160(r10)
	REX_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-15710
	ctx.r11.s64 = ctx.r11.s64 + -15710;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18169
	ctx.r11.s64 = ctx.r11.s64 + -18169;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18169
	ctx.r11.s64 = ctx.r11.s64 + -18169;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r10,r10,-18146
	ctx.r10.s64 = ctx.r10.s64 + -18146;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18146
	ctx.r11.s64 = ctx.r11.s64 + -18146;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r10,r10,-18145
	ctx.r10.s64 = ctx.r10.s64 + -18145;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-31816
	ctx.r11.s64 = ctx.r11.s64 + -31816;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,18028
	ctx.r11.s64 = ctx.r11.s64 + 18028;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,18028
	ctx.r11.s64 = ctx.r11.s64 + 18028;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8205D8A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19530
	ctx.r11.s64 = ctx.r11.s64 + -19530;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8205D998) {
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
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,140
	ctx.r10.s64 = 140;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// bl 0x82154fa8
	ctx.lr = 0x8205D9B8;
	sub_82154FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8205E650) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-5472
	ctx.r11.s64 = ctx.r11.s64 + -5472;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-5472
	ctx.r11.s64 = ctx.r11.s64 + -5472;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-5468
	ctx.r10.s64 = ctx.r10.s64 + -5468;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-5468
	ctx.r11.s64 = ctx.r11.s64 + -5468;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-5464
	ctx.r10.s64 = ctx.r10.s64 + -5464;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-5464
	ctx.r11.s64 = ctx.r11.s64 + -5464;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-5460
	ctx.r10.s64 = ctx.r10.s64 + -5460;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820619B0) {
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
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821a6170
	ctx.lr = 0x820619CC;
	sub_821A6170(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820619f8
	if (!ctx.cr0.eq) goto loc_820619F8;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-17500
	ctx.r11.s64 = ctx.r11.s64 + -17500;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8217e180
	ctx.lr = 0x820619F4;
	sub_8217E180(ctx, base);
	// b 0x82061a08
	goto loc_82061A08;
loc_820619F8:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82193448
	ctx.lr = 0x82061A08;
	sub_82193448(ctx, base);
loc_82061A08:
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16833
	ctx.r11.s64 = ctx.r11.s64 + -16833;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19248
	ctx.r11.s64 = ctx.r11.s64 + -19248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19248
	ctx.r11.s64 = ctx.r11.s64 + -19248;
	// lbz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82061a40
	if (!ctx.cr6.eq) goto loc_82061A40;
	// b 0x82061ae8
	goto loc_82061AE8;
loc_82061A40:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27461
	ctx.r11.s64 = ctx.r11.s64 + -27461;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82060110
	ctx.lr = 0x82061A50;
	sub_82060110(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82061ac8
	if (!ctx.cr6.eq) goto loc_82061AC8;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27461
	ctx.r11.s64 = ctx.r11.s64 + -27461;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82060c78
	ctx.lr = 0x82061A68;
	sub_82060C78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82061aa4
	if (ctx.cr0.eq) goto loc_82061AA4;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-27461
	ctx.r11.s64 = ctx.r11.s64 + -27461;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82061730
	ctx.lr = 0x82061A80;
	sub_82061730(ctx, base);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19248
	ctx.r11.s64 = ctx.r11.s64 + -19248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16833
	ctx.r11.s64 = ctx.r11.s64 + -16833;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82061ac4
	goto loc_82061AC4;
loc_82061AA4:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19248
	ctx.r11.s64 = ctx.r11.s64 + -19248;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16833
	ctx.r11.s64 = ctx.r11.s64 + -16833;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82061AC4:
	// b 0x82061ae8
	goto loc_82061AE8;
loc_82061AC8:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19248
	ctx.r11.s64 = ctx.r11.s64 + -19248;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16833
	ctx.r11.s64 = ctx.r11.s64 + -16833;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82061AE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8206F048) {
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
	// stb r3,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r3.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8205ce50
	ctx.lr = 0x8206F068;
	sub_8205CE50(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8206f0e8
	if (ctx.cr6.eq) goto loc_8206F0E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,96(r11)
	REX_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,119(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 119);
	// stb r10,97(r11)
	REX_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4092
	ctx.r10.s64 = ctx.r10.s64 + 4092;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4092
	ctx.r10.s64 = ctx.r10.s64 + 4092;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4092
	ctx.r10.s64 = ctx.r10.s64 + 4092;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_8206F0E8:
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

DEFINE_REX_FUNC(sub_82071900) {
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
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x82040ad0
	ctx.lr = 0x82071920;
	sub_82040AD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82072E08) {
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
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82072e48
	if (!ctx.cr6.lt) goto loc_82072E48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82072E48:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// lis r10,-32078
	ctx.r10.s64 = -2102263808;
	// addi r10,r10,9624
	ctx.r10.s64 = ctx.r10.s64 + 9624;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x82071900
	ctx.lr = 0x82072E60;
	sub_82071900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82076340) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,344(r11)
	REX_STORE_U8(ctx.r11.u32 + 344, ctx.r10.u8);
	// bl 0x82075988
	ctx.lr = 0x82076364;
	sub_82075988(ctx, base);
	// bl 0x82075a80
	ctx.lr = 0x82076368;
	sub_82075A80(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 344);
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
	// lbz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 344);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
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
	// lbz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 344);
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
	// ble cr6,0x820763ec
	if (!ctx.cr6.gt) goto loc_820763EC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820763fc
	goto loc_820763FC;
loc_820763EC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820763FC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82076418
	if (ctx.cr6.eq) goto loc_82076418;
	// b 0x8207642c
	goto loc_8207642C;
loc_82076418:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,345(r11)
	REX_STORE_U8(ctx.r11.u32 + 345, ctx.r10.u8);
loc_8207642C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820797D8) {
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
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r11,r11,9644
	ctx.r11.s64 = ctx.r11.s64 + 9644;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21332
	ctx.r11.s64 = ctx.r11.s64 + 21332;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r11,r11,9644
	ctx.r11.s64 = ctx.r11.s64 + 9644;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
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
	// addi r10,r10,-29720
	ctx.r10.s64 = ctx.r10.s64 + -29720;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82079850;
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

DEFINE_REX_FUNC(sub_8207C878) {
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
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
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
	// sth r11,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// bl 0x82075040
	ctx.lr = 0x8207C8B4;
	sub_82075040(ctx, base);
	// bl 0x820fa928
	ctx.lr = 0x8207C8B8;
	sub_820FA928(ctx, base);
	// bl 0x820f7128
	ctx.lr = 0x8207C8BC;
	sub_820F7128(ctx, base);
	// bl 0x8207c3a0
	ctx.lr = 0x8207C8C0;
	sub_8207C3A0(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8207C8D0:
	// bl 0x820f9e60
	ctx.lr = 0x8207C8D4;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8207c8f0
	if (!ctx.cr6.eq) goto loc_8207C8F0;
	// b 0x8207c958
	goto loc_8207C958;
loc_8207C8F0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r10,r10,17408
	ctx.r10.u64 = ctx.r10.u64 | 17408;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15980
	ctx.r10.s64 = ctx.r10.s64 + 15980;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
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
	// bge cr6,0x8207c958
	if (!ctx.cr6.lt) goto loc_8207C958;
	// b 0x8207c8d0
	goto loc_8207C8D0;
loc_8207C958:
	// bl 0x820750e0
	ctx.lr = 0x8207C95C;
	sub_820750E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820818F8) {
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
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// ori r4,r11,27
	ctx.r4.u64 = ctx.r11.u64 | 27;
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
	// addi r3,r11,6716
	ctx.r3.s64 = ctx.r11.s64 + 6716;
	// bl 0x82080488
	ctx.lr = 0x82081928;
	sub_82080488(ctx, base);
	// lis r11,514
	ctx.r11.s64 = 33685504;
	// ori r4,r11,27
	ctx.r4.u64 = ctx.r11.u64 | 27;
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
	// addi r3,r11,6724
	ctx.r3.s64 = ctx.r11.s64 + 6724;
	// bl 0x82080488
	ctx.lr = 0x8208194C;
	sub_82080488(ctx, base);
	// lis r11,610
	ctx.r11.s64 = 39976960;
	// ori r4,r11,27
	ctx.r4.u64 = ctx.r11.u64 | 27;
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
	// addi r3,r11,6732
	ctx.r3.s64 = ctx.r11.s64 + 6732;
	// bl 0x82080488
	ctx.lr = 0x82081970;
	sub_82080488(ctx, base);
	// lis r11,516
	ctx.r11.s64 = 33816576;
	// ori r4,r11,27
	ctx.r4.u64 = ctx.r11.u64 | 27;
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
	// addi r3,r11,6764
	ctx.r3.s64 = ctx.r11.s64 + 6764;
	// bl 0x82080488
	ctx.lr = 0x82081994;
	sub_82080488(ctx, base);
	// lis r11,610
	ctx.r11.s64 = 39976960;
	// ori r4,r11,27
	ctx.r4.u64 = ctx.r11.u64 | 27;
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
	// addi r3,r11,6772
	ctx.r3.s64 = ctx.r11.s64 + 6772;
	// bl 0x82080488
	ctx.lr = 0x820819B8;
	sub_82080488(ctx, base);
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// ori r4,r11,59
	ctx.r4.u64 = ctx.r11.u64 | 59;
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
	// addi r3,r11,6780
	ctx.r3.s64 = ctx.r11.s64 + 6780;
	// bl 0x82080488
	ctx.lr = 0x820819DC;
	sub_82080488(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8208BE10) {
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
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25245
	ctx.r11.s64 = ctx.r11.s64 + -25245;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8208be34
	if (!ctx.cr6.eq) goto loc_8208BE34;
	// bl 0x8215acc0
	ctx.lr = 0x8208BE34;
	sub_8215ACC0(ctx, base);
loc_8208BE34:
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
	// lhz r11,318(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 318);
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
	// bne cr6,0x8208be80
	if (!ctx.cr6.eq) goto loc_8208BE80;
	// b 0x8208be88
	goto loc_8208BE88;
loc_8208BE80:
	// bl 0x8209aa60
	ctx.lr = 0x8208BE84;
	sub_8209AA60(ctx, base);
	// b 0x8208c020
	goto loc_8208C020;
loc_8208BE88:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
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
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
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
	// stb r10,271(r11)
	REX_STORE_U8(ctx.r11.u32 + 271, ctx.r10.u8);
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
	// stb r10,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, ctx.r10.u8);
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
	// lhz r11,258(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 258);
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
	// beq cr6,0x8208bf64
	if (ctx.cr6.eq) goto loc_8208BF64;
	// b 0x8208c020
	goto loc_8208C020;
loc_8208BF64:
	// bl 0x820f9e60
	ctx.lr = 0x8208BF68;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8208bf84
	if (!ctx.cr6.eq) goto loc_8208BF84;
	// b 0x8208c020
	goto loc_8208C020;
loc_8208BF84:
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
	// li r10,776
	ctx.r10.s64 = 776;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,289(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 289);
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
	// addi r11,r11,47
	ctx.r11.s64 = ctx.r11.s64 + 47;
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
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
loc_8208C020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82098C60) {
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
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82098cd8
	if (!ctx.cr6.eq) goto loc_82098CD8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// lbz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15504
	ctx.r10.s64 = ctx.r10.s64 + 15504;
	// lbz r10,65(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 65);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// or. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82098cd8
	if (ctx.cr0.eq) goto loc_82098CD8;
	// bl 0x82097228
	ctx.lr = 0x82098CCC;
	sub_82097228(ctx, base);
	// bl 0x82097260
	ctx.lr = 0x82098CD0;
	sub_82097260(ctx, base);
	// b 0x82098dac
	goto loc_82098DAC;
loc_82098CD8:
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
	// lbz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 172);
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
	// beq cr6,0x82098d24
	if (ctx.cr6.eq) goto loc_82098D24;
	// bl 0x82098b70
	ctx.lr = 0x82098D20;
	sub_82098B70(ctx, base);
	// b 0x82098dd8
	goto loc_82098DD8;
loc_82098D24:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 168);
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
	// bne cr6,0x82098d64
	if (!ctx.cr6.eq) goto loc_82098D64;
	// b 0x82098d68
	goto loc_82098D68;
loc_82098D64:
	// bl 0x82097228
	ctx.lr = 0x82098D68;
	sub_82097228(ctx, base);
loc_82098D68:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 168);
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
	// bne cr6,0x82098da8
	if (!ctx.cr6.eq) goto loc_82098DA8;
	// b 0x82098dac
	goto loc_82098DAC;
loc_82098DA8:
	// bl 0x82097260
	ctx.lr = 0x82098DAC;
	sub_82097260(ctx, base);
loc_82098DAC:
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
loc_82098DD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A7DF0) {
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
	// addi r10,r10,-25848
	ctx.r10.s64 = ctx.r10.s64 + -25848;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820A7E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8209c510
	ctx.lr = 0x820A7E44;
	sub_8209C510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AA728) {
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
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
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
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
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
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65472
	ctx.r10.u64 = ctx.r10.u64 | 65472;
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
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
	// ble cr6,0x820aa80c
	if (!ctx.cr6.gt) goto loc_820AA80C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820aa81c
	goto loc_820AA81C;
loc_820AA80C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820AA81C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820aa838
	if (!ctx.cr6.gt) goto loc_820AA838;
	// b 0x820aa840
	goto loc_820AA840;
loc_820AA838:
	// bl 0x82096848
	ctx.lr = 0x820AA83C;
	sub_82096848(ctx, base);
	// b 0x820aa844
	goto loc_820AA844;
loc_820AA840:
	// bl 0x820f7ba0
	ctx.lr = 0x820AA844;
	sub_820F7BA0(ctx, base);
loc_820AA844:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820BEEC8) {
	REX_FUNC_PROLOGUE();
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
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820BEF10:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
loc_820BEF38:
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
	// beq cr6,0x820bef84
	if (ctx.cr6.eq) goto loc_820BEF84;
	// b 0x820befac
	goto loc_820BEFAC;
loc_820BEF84:
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
loc_820BEFAC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
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
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
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
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820bf030
	if (!ctx.cr6.gt) goto loc_820BF030;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820bf040
	goto loc_820BF040;
loc_820BF030:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820BF040:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bf05c
	if (ctx.cr6.eq) goto loc_820BF05C;
	// b 0x820bf070
	goto loc_820BF070;
loc_820BF05C:
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
loc_820BF070:
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
	// bge cr6,0x820bf0c0
	if (!ctx.cr6.lt) goto loc_820BF0C0;
	// b 0x820bef38
	goto loc_820BEF38;
loc_820BF0C0:
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
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x820bf110
	if (!ctx.cr6.lt) goto loc_820BF110;
	// b 0x820bef10
	goto loc_820BEF10;
loc_820BF110:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DBEE8) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19900
	ctx.r11.s64 = ctx.r11.s64 + 19900;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19888
	ctx.r11.s64 = ctx.r11.s64 + 19888;
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
	// bne cr6,0x820dbf54
	if (!ctx.cr6.eq) goto loc_820DBF54;
	// b 0x820dbf70
	goto loc_820DBF70;
loc_820DBF54:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19904
	ctx.r11.s64 = ctx.r11.s64 + 19904;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,19904
	ctx.r10.s64 = ctx.r10.s64 + 19904;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_820DBF70:
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
	// addi r11,r11,19968
	ctx.r11.s64 = ctx.r11.s64 + 19968;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_820DBF94:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
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
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820dc024
	if (!ctx.cr6.eq) goto loc_820DC024;
	// b 0x820dc240
	goto loc_820DC240;
loc_820DC024:
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
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-24764
	ctx.r10.s64 = ctx.r10.s64 + -24764;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,19960
	ctx.r11.s64 = ctx.r11.s64 + 19960;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,5
	ctx.r10.s64 = 5;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
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
	// rlwinm r11,r11,2,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DC164:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
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
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
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
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-24780
	ctx.r10.s64 = ctx.r10.s64 + -24780;
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
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
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
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// bl 0x820d9648
	ctx.lr = 0x820DC208;
	sub_820D9648(ctx, base);
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
	// bge cr6,0x820dc23c
	if (!ctx.cr6.lt) goto loc_820DC23C;
	// b 0x820dc164
	goto loc_820DC164;
loc_820DC23C:
	// bl 0x820db848
	ctx.lr = 0x820DC240;
	sub_820DB848(ctx, base);
loc_820DC240:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
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
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
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
	// bge cr6,0x820dc2ac
	if (!ctx.cr6.lt) goto loc_820DC2AC;
	// b 0x820dbf94
	goto loc_820DBF94;
loc_820DC2AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EEC00) {
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
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15696
	ctx.r11.s64 = ctx.r11.s64 + 15696;
	// lbz r11,130(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 130);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820eec50
	if (!ctx.cr6.eq) goto loc_820EEC50;
	// b 0x820eece0
	goto loc_820EECE0;
loc_820EEC50:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19708
	ctx.r11.s64 = ctx.r11.s64 + -19708;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820eec84
	if (!ctx.cr6.eq) goto loc_820EEC84;
	// b 0x820eece0
	goto loc_820EECE0;
loc_820EEC84:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 172);
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
	// bne cr6,0x820eecc4
	if (!ctx.cr6.eq) goto loc_820EECC4;
	// b 0x820eed50
	goto loc_820EED50;
loc_820EECC4:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1186(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1186);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_820EECE0:
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
	// bne cr6,0x820eed28
	if (!ctx.cr6.eq) goto loc_820EED28;
	// b 0x820eed50
	goto loc_820EED50;
loc_820EED28:
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
	// addi r11,r11,14356
	ctx.r11.s64 = ctx.r11.s64 + 14356;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ee818
	ctx.lr = 0x820EED50;
	sub_820EE818(ctx, base);
loc_820EED50:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15696
	ctx.r11.s64 = ctx.r11.s64 + 15696;
	// lbz r11,262(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 262);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820eed84
	if (!ctx.cr6.eq) goto loc_820EED84;
	// b 0x820eee14
	goto loc_820EEE14;
loc_820EED84:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19708
	ctx.r11.s64 = ctx.r11.s64 + -19708;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820eedb8
	if (!ctx.cr6.eq) goto loc_820EEDB8;
	// b 0x820eee14
	goto loc_820EEE14;
loc_820EEDB8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 172);
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
	// bne cr6,0x820eedf8
	if (!ctx.cr6.eq) goto loc_820EEDF8;
	// b 0x820eee84
	goto loc_820EEE84;
loc_820EEDF8:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,2210(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2210);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_820EEE14:
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
	// bne cr6,0x820eee5c
	if (!ctx.cr6.eq) goto loc_820EEE5C;
	// b 0x820eee84
	goto loc_820EEE84;
loc_820EEE5C:
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
	// addi r11,r11,14484
	ctx.r11.s64 = ctx.r11.s64 + 14484;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ee818
	ctx.lr = 0x820EEE84;
	sub_820EE818(ctx, base);
loc_820EEE84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FC898) {
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
	// lhz r11,296(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 296);
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
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,4976
	ctx.r11.s64 = ctx.r11.s64 + 4976;
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
	// bl 0x820fc268
	ctx.lr = 0x820FC95C;
	sub_820FC268(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82100020) {
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
	// blt cr6,0x82100078
	if (ctx.cr6.lt) goto loc_82100078;
	// b 0x82100080
	goto loc_82100080;
loc_82100078:
	// bl 0x820dfbc0
	ctx.lr = 0x8210007C;
	sub_820DFBC0(ctx, base);
	// b 0x821001a0
	goto loc_821001A0;
loc_82100080:
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
	// lbz r11,27(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
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
	// bne cr6,0x821000cc
	if (!ctx.cr6.eq) goto loc_821000CC;
	// b 0x8210019c
	goto loc_8210019C;
loc_821000CC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// li r4,321
	ctx.r4.s64 = 321;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21836
	ctx.r3.s64 = ctx.r11.s64 + 21836;
	// bl 0x821717d8
	ctx.lr = 0x821000F0;
	sub_821717D8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
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
	// addi r10,r10,-20248
	ctx.r10.s64 = ctx.r10.s64 + -20248;
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 188);
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
	// bne cr6,0x82100188
	if (!ctx.cr6.eq) goto loc_82100188;
	// b 0x82100198
	goto loc_82100198;
loc_82100188:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,269
	ctx.r10.s64 = 269;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_82100198:
	// bl 0x82156a20
	ctx.lr = 0x8210019C;
	sub_82156A20(ctx, base);
loc_8210019C:
	// bl 0x820dd0e0
	ctx.lr = 0x821001A0;
	sub_820DD0E0(ctx, base);
loc_821001A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82107A28) {
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
	// blt cr6,0x82107a80
	if (ctx.cr6.lt) goto loc_82107A80;
	// b 0x82107a88
	goto loc_82107A88;
loc_82107A80:
	// bl 0x820dfbc0
	ctx.lr = 0x82107A84;
	sub_820DFBC0(ctx, base);
	// b 0x82107ba8
	goto loc_82107BA8;
loc_82107A88:
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
	// lbz r11,27(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
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
	// bne cr6,0x82107ad4
	if (!ctx.cr6.eq) goto loc_82107AD4;
	// b 0x82107ba4
	goto loc_82107BA4;
loc_82107AD4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// li r4,342
	ctx.r4.s64 = 342;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21896
	ctx.r3.s64 = ctx.r11.s64 + 21896;
	// bl 0x821717d8
	ctx.lr = 0x82107AF8;
	sub_821717D8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
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
	// addi r10,r10,-19324
	ctx.r10.s64 = ctx.r10.s64 + -19324;
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 188);
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
	// bne cr6,0x82107b90
	if (!ctx.cr6.eq) goto loc_82107B90;
	// b 0x82107ba0
	goto loc_82107BA0;
loc_82107B90:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,288
	ctx.r10.s64 = 288;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_82107BA0:
	// bl 0x82156a20
	ctx.lr = 0x82107BA4;
	sub_82156A20(ctx, base);
loc_82107BA4:
	// bl 0x820dd0e0
	ctx.lr = 0x82107BA8;
	sub_820DD0E0(ctx, base);
loc_82107BA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82110D38) {
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
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-18404
	ctx.r10.s64 = ctx.r10.s64 + -18404;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82110D98;
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

DEFINE_REX_FUNC(sub_82114270) {
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
	// lbz r11,269(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 269);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
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
	// ble cr6,0x82114320
	if (!ctx.cr6.gt) goto loc_82114320;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82114330
	goto loc_82114330;
loc_82114320:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82114330:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211434c
	if (!ctx.cr6.eq) goto loc_8211434C;
	// b 0x8211436c
	goto loc_8211436C;
loc_8211434C:
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
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// bl 0x82114130
	ctx.lr = 0x8211436C;
	sub_82114130(ctx, base);
loc_8211436C:
	// bl 0x82113ef0
	ctx.lr = 0x82114370;
	sub_82113EF0(ctx, base);
	// bl 0x820f7ea0
	ctx.lr = 0x82114374;
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

DEFINE_REX_FUNC(sub_8211BB78) {
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// bl 0x8211b7f8
	ctx.lr = 0x8211BBA4;
	sub_8211B7F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211E438) {
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
	// lhz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
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
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// addi r10,r10,-16820
	ctx.r10.s64 = ctx.r10.s64 + -16820;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211E4BC;
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

DEFINE_REX_FUNC(sub_82122190) {
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
	// lbz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
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
	// beq cr6,0x821221e8
	if (ctx.cr6.eq) goto loc_821221E8;
	// bl 0x82122100
	ctx.lr = 0x821221E4;
	sub_82122100(ctx, base);
	// b 0x8212240c
	goto loc_8212240C;
loc_821221E8:
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 80);
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
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
	// ble cr6,0x821222a8
	if (!ctx.cr6.gt) goto loc_821222A8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821222b8
	goto loc_821222B8;
loc_821222A8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821222B8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821222d4
	if (!ctx.cr6.eq) goto loc_821222D4;
	// b 0x82122300
	goto loc_82122300;
loc_821222D4:
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
	// stb r10,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// bl 0x82121aa0
	ctx.lr = 0x821222F4;
	sub_82121AA0(ctx, base);
	// bl 0x821218e0
	ctx.lr = 0x821222F8;
	sub_821218E0(ctx, base);
	// b 0x82122408
	goto loc_82122408;
loc_82122300:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,82(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 82);
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
	// lbz r11,159(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 159);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,81(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 81);
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
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
	// ble cr6,0x821223d8
	if (!ctx.cr6.gt) goto loc_821223D8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821223e8
	goto loc_821223E8;
loc_821223D8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821223E8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82122404
	if (!ctx.cr6.eq) goto loc_82122404;
	// b 0x82122408
	goto loc_82122408;
loc_82122404:
	// bl 0x821218e0
	ctx.lr = 0x82122408;
	sub_821218E0(ctx, base);
loc_82122408:
	// bl 0x820f7ea0
	ctx.lr = 0x8212240C;
	sub_820F7EA0(ctx, base);
loc_8212240C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134C88) {
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
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// stb r11,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
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
	// lbz r11,13(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// stb r11,13(r10)
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
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
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
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
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
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
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// sth r11,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
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
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
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
	// bne cr6,0x82134e48
	if (!ctx.cr6.eq) goto loc_82134E48;
	// b 0x82134f18
	goto loc_82134F18;
loc_82134E48:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,3
	ctx.r10.s64 = 3;
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
	// ble cr6,0x82134edc
	if (!ctx.cr6.gt) goto loc_82134EDC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82134eec
	goto loc_82134EEC;
loc_82134EDC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82134EEC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134f08
	if (ctx.cr6.eq) goto loc_82134F08;
	// b 0x82134f18
	goto loc_82134F18;
loc_82134F08:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82134F18:
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
	// addi r10,r10,-14884
	ctx.r10.s64 = ctx.r10.s64 + -14884;
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
	// lbz r11,13(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
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
	// stb r11,13(r10)
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
	// bl 0x821349a0
	ctx.lr = 0x82134F80;
	sub_821349A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214BC20) {
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
	// addi r10,r10,-11816
	ctx.r10.s64 = ctx.r10.s64 + -11816;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BC80;
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

DEFINE_REX_FUNC(sub_8214F3B0) {
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
	// beq cr6,0x8214f408
	if (ctx.cr6.eq) goto loc_8214F408;
	// bl 0x8214dcc8
	ctx.lr = 0x8214F404;
	sub_8214DCC8(ctx, base);
	// b 0x8214f6cc
	goto loc_8214F6CC;
loc_8214F408:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
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
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
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
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
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
	// ble cr6,0x8214f48c
	if (!ctx.cr6.gt) goto loc_8214F48C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8214f49c
	goto loc_8214F49C;
loc_8214F48C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8214F49C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214f4b8
	if (!ctx.cr6.gt) goto loc_8214F4B8;
	// bl 0x8214dcc8
	ctx.lr = 0x8214F4B4;
	sub_8214DCC8(ctx, base);
	// b 0x8214f6cc
	goto loc_8214F6CC;
loc_8214F4B8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
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
	// bne cr6,0x8214f54c
	if (!ctx.cr6.eq) goto loc_8214F54C;
	// b 0x8214f67c
	goto loc_8214F67C;
loc_8214F54C:
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
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
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
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// sth r11,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
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
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// stb r11,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
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
	// ble cr6,0x8214f648
	if (!ctx.cr6.gt) goto loc_8214F648;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8214f658
	goto loc_8214F658;
loc_8214F648:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8214F658:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214f674
	if (ctx.cr6.eq) goto loc_8214F674;
	// b 0x8214f694
	goto loc_8214F694;
loc_8214F674:
	// bl 0x820f7ba0
	ctx.lr = 0x8214F678;
	sub_820F7BA0(ctx, base);
	// b 0x8214f6cc
	goto loc_8214F6CC;
loc_8214F67C:
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
	// b 0x8214f6cc
	goto loc_8214F6CC;
loc_8214F694:
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
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5220
	ctx.r11.s64 = ctx.r11.s64 + 5220;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820f7d10
	ctx.lr = 0x8214F6CC;
	sub_820F7D10(ctx, base);
loc_8214F6CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C008) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r3,167(r1)
	REX_STORE_U8(ctx.r1.u32 + 167, ctx.r3.u8);
	// stw r4,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lbz r11,167(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 167);
	// mulli r11,r11,12000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12000));
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-13432
	ctx.r10.s64 = ctx.r10.s64 + -13432;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// b 0x8216c07c
	goto loc_8216C07C;
loc_8216C070:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
loc_8216C07C:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x8216c430
	if (!ctx.cr6.lt) goto loc_8216C430;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
	// b 0x8216c0a4
	goto loc_8216C0A4;
loc_8216C098:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
loc_8216C0A4:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8216c42c
	if (!ctx.cr6.lt) goto loc_8216C42C;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c428
	if (ctx.cr0.eq) goto loc_8216C428;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8216c428
	if (ctx.cr6.eq) goto loc_8216C428;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x8216c298
	if (ctx.cr6.gt) goto loc_8216C298;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216c298
	if (!ctx.cr6.eq) goto loc_8216C298;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c298
	if (ctx.cr0.eq) goto loc_8216C298;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216c298
	if (!ctx.cr6.eq) goto loc_8216C298;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c298
	if (ctx.cr0.eq) goto loc_8216C298;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c1ec
	if (!ctx.cr0.eq) goto loc_8216C1EC;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8216C1EC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c220
	if (!ctx.cr0.eq) goto loc_8216C220;
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
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8216C220:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c254
	if (!ctx.cr0.eq) goto loc_8216C254;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8216C254:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c298
	if (ctx.cr0.eq) goto loc_8216C298;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,99(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
loc_8216C298:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8216c428
	if (ctx.cr6.gt) goto loc_8216C428;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216c428
	if (!ctx.cr6.eq) goto loc_8216C428;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c428
	if (ctx.cr0.eq) goto loc_8216C428;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216c428
	if (!ctx.cr6.eq) goto loc_8216C428;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c428
	if (ctx.cr0.eq) goto loc_8216C428;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c37c
	if (!ctx.cr0.eq) goto loc_8216C37C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8216C37C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c3b0
	if (!ctx.cr0.eq) goto loc_8216C3B0;
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
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8216C3B0:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c3e4
	if (!ctx.cr0.eq) goto loc_8216C3E4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8216C3E4:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c428
	if (ctx.cr0.eq) goto loc_8216C428;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,99(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
loc_8216C428:
	// b 0x8216c098
	goto loc_8216C098;
loc_8216C42C:
	// b 0x8216c070
	goto loc_8216C070;
loc_8216C430:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,23(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c448
	if (!ctx.cr0.eq) goto loc_8216C448;
	// b 0x8216c884
	goto loc_8216C884;
loc_8216C448:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// b 0x8216c460
	goto loc_8216C460;
loc_8216C454:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
loc_8216C460:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x8216c884
	if (!ctx.cr6.lt) goto loc_8216C884;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
	// b 0x8216c488
	goto loc_8216C488;
loc_8216C47C:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
loc_8216C488:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8216c880
	if (!ctx.cr6.lt) goto loc_8216C880;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c87c
	if (ctx.cr0.eq) goto loc_8216C87C;
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8216c5bc
	if (!ctx.cr6.gt) goto loc_8216C5BC;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
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
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c5bc
	if (ctx.cr0.eq) goto loc_8216C5BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216c5bc
	if (!ctx.cr6.eq) goto loc_8216C5BC;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c598
	if (!ctx.cr0.eq) goto loc_8216C598;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c598
	if (ctx.cr0.eq) goto loc_8216C598;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,99(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
loc_8216C598:
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821612e0
	ctx.lr = 0x8216C5BC;
	sub_821612E0(ctx, base);
loc_8216C5BC:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bge cr6,0x8216c6a8
	if (!ctx.cr6.lt) goto loc_8216C6A8;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
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
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c6a8
	if (ctx.cr0.eq) goto loc_8216C6A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216c6a8
	if (!ctx.cr6.eq) goto loc_8216C6A8;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c684
	if (!ctx.cr0.eq) goto loc_8216C684;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c684
	if (ctx.cr0.eq) goto loc_8216C684;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,99(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
loc_8216C684:
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821612e0
	ctx.lr = 0x8216C6A8;
	sub_821612E0(ctx, base);
loc_8216C6A8:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8216c790
	if (!ctx.cr0.gt) goto loc_8216C790;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
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
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c790
	if (ctx.cr0.eq) goto loc_8216C790;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216c790
	if (!ctx.cr6.eq) goto loc_8216C790;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c76c
	if (!ctx.cr0.eq) goto loc_8216C76C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c76c
	if (ctx.cr0.eq) goto loc_8216C76C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,99(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
loc_8216C76C:
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821612e0
	ctx.lr = 0x8216C790;
	sub_821612E0(ctx, base);
loc_8216C790:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8216c87c
	if (!ctx.cr6.lt) goto loc_8216C87C;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
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
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c87c
	if (ctx.cr0.eq) goto loc_8216C87C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216c87c
	if (!ctx.cr6.eq) goto loc_8216C87C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c858
	if (!ctx.cr0.eq) goto loc_8216C858;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c858
	if (ctx.cr0.eq) goto loc_8216C858;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,99(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
loc_8216C858:
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821612e0
	ctx.lr = 0x8216C87C;
	sub_821612E0(ctx, base);
loc_8216C87C:
	// b 0x8216c47c
	goto loc_8216C47C;
loc_8216C880:
	// b 0x8216c454
	goto loc_8216C454;
loc_8216C884:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,27(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c89c
	if (!ctx.cr0.eq) goto loc_8216C89C;
	// b 0x8216c9bc
	goto loc_8216C9BC;
loc_8216C89C:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// b 0x8216c8b4
	goto loc_8216C8B4;
loc_8216C8A8:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
loc_8216C8B4:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x8216c9bc
	if (!ctx.cr6.lt) goto loc_8216C9BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
	// b 0x8216c8dc
	goto loc_8216C8DC;
loc_8216C8D0:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
loc_8216C8DC:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8216c9b8
	if (!ctx.cr6.lt) goto loc_8216C9B8;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c9b4
	if (ctx.cr0.eq) goto loc_8216C9B4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8216c9b4
	if (ctx.cr6.eq) goto loc_8216C9B4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,99(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216c9b4
	if (ctx.cr0.eq) goto loc_8216C9B4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c9b4
	if (!ctx.cr0.eq) goto loc_8216C9B4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c9b4
	if (!ctx.cr0.eq) goto loc_8216C9B4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c9b4
	if (!ctx.cr0.eq) goto loc_8216C9B4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216c9b4
	if (!ctx.cr0.eq) goto loc_8216C9B4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8216C9B4:
	// b 0x8216c8d0
	goto loc_8216C8D0;
loc_8216C9B8:
	// b 0x8216c8a8
	goto loc_8216C8A8;
loc_8216C9BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// b 0x8216c9e4
	goto loc_8216C9E4;
loc_8216C9D8:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
loc_8216C9E4:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8216cb88
	if (ctx.cr6.lt) goto loc_8216CB88;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
	// b 0x8216ca0c
	goto loc_8216CA0C;
loc_8216CA00:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
loc_8216CA0C:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8216cb84
	if (!ctx.cr6.lt) goto loc_8216CB84;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216cb80
	if (ctx.cr0.eq) goto loc_8216CB80;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,4101
	ctx.r10.s64 = 4101;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// addi r11,r11,70
	ctx.r11.s64 = ctx.r11.s64 + 70;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r11,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,23(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216cac0
	if (!ctx.cr0.eq) goto loc_8216CAC0;
	// lhz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 116);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// addi r11,r11,70
	ctx.r11.s64 = ctx.r11.s64 + 70;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r11,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// lhz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// b 0x8216cad0
	goto loc_8216CAD0;
loc_8216CAC0:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// sth r11,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
loc_8216CAD0:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,25
	ctx.r10.s64 = 25;
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8216caf8
	if (!ctx.cr6.eq) goto loc_8216CAF8;
	// lbz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
loc_8216CAF8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// beq 0x8216cb2c
	if (ctx.cr0.eq) goto loc_8216CB2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
loc_8216CB2C:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216cb50
	if (ctx.cr0.eq) goto loc_8216CB50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// sth r11,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
loc_8216CB50:
	// lbz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82161700
	ctx.lr = 0x8216CB70;
	sub_82161700(ctx, base);
	// lbz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 120);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
loc_8216CB80:
	// b 0x8216ca00
	goto loc_8216CA00;
loc_8216CB84:
	// b 0x8216c9d8
	goto loc_8216C9D8;
loc_8216CB88:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// b 0x8216cba0
	goto loc_8216CBA0;
loc_8216CB94:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
loc_8216CBA0:
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8216ccbc
	if (!ctx.cr6.lt) goto loc_8216CCBC;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
	// b 0x8216cbc8
	goto loc_8216CBC8;
loc_8216CBBC:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
loc_8216CBC8:
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x8216ccb8
	if (!ctx.cr6.lt) goto loc_8216CCB8;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216cc9c
	if (ctx.cr0.eq) goto loc_8216CC9C;
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lbz r3,167(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 167);
	// bl 0x82170658
	ctx.lr = 0x8216CC24;
	sub_82170658(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 120);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r11,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,25
	ctx.r10.s64 = 25;
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216cc90
	if (ctx.cr0.eq) goto loc_8216CC90;
	// lhz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 116);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// addi r11,r11,70
	ctx.r11.s64 = ctx.r11.s64 + 70;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r11,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// lhz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// b 0x8216cc9c
	goto loc_8216CC9C;
loc_8216CC90:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
loc_8216CC9C:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// b 0x8216cbbc
	goto loc_8216CBBC;
loc_8216CCB8:
	// b 0x8216cb94
	goto loc_8216CB94;
loc_8216CCBC:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216ce00
	if (ctx.cr0.eq) goto loc_8216CE00;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8216cce8
	if (ctx.cr6.lt) goto loc_8216CCE8;
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r3,167(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 167);
	// bl 0x82168ac8
	ctx.lr = 0x8216CCE8;
	sub_82168AC8(ctx, base);
loc_8216CCE8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-13760
	ctx.r11.s64 = ctx.r11.s64 + -13760;
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216cd10
	if (ctx.cr0.eq) goto loc_8216CD10;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8216cd38
	if (!ctx.cr6.eq) goto loc_8216CD38;
loc_8216CD10:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
	// lwz r3,172(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x82162cf0
	ctx.lr = 0x8216CD38;
	sub_82162CF0(ctx, base);
loc_8216CD38:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,55(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 55);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,55(r10)
	REX_STORE_U8(ctx.r10.u32 + 55, ctx.r11.u8);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,55(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 55);
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// ble cr6,0x8216cd70
	if (!ctx.cr6.gt) goto loc_8216CD70;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r10,72
	ctx.r10.s64 = 72;
	// stb r10,55(r11)
	REX_STORE_U8(ctx.r11.u32 + 55, ctx.r10.u8);
loc_8216CD70:
	// lbz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216cd90
	if (ctx.cr0.eq) goto loc_8216CD90;
	// lbz r6,98(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r3,167(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 167);
	// bl 0x82168ac8
	ctx.lr = 0x8216CD90;
	sub_82168AC8(ctx, base);
loc_8216CD90:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,65(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lbz r11,167(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 167);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215c0b8
	ctx.lr = 0x8216CDA8;
	sub_8215C0B8(ctx, base);
	// lbz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 108);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216ce00
	if (ctx.cr0.eq) goto loc_8216CE00;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,65(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8216cdd8
	if (!ctx.cr6.lt) goto loc_8216CDD8;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,65(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stb r11,65(r10)
	REX_STORE_U8(ctx.r10.u32 + 65, ctx.r11.u8);
loc_8216CDD8:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,65(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8216ce00
	if (ctx.cr6.lt) goto loc_8216CE00;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r11,65(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lbz r11,167(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 167);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215c158
	ctx.lr = 0x8216CE00;
	sub_8215C158(ctx, base);
loc_8216CE00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D3E90) {
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
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x821e1cb8
	ctx.lr = 0x821D3EC0;
	sub_821E1CB8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x821d14d8
	ctx.lr = 0x821D3EC8;
	sub_821D14D8(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x821d3e08
	ctx.lr = 0x821D3ED0;
	sub_821D3E08(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x821d7e30
	ctx.lr = 0x821D3ED8;
	sub_821D7E30(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,4092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,1828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r30,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_821DB180) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821DB188;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
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
	ctx.lr = 0x821DB1C4;
	sub_822724F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r10,r10,-21096
	ctx.r10.s64 = ctx.r10.s64 + -21096;
	// lfs f0,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
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
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// beq cr6,0x821db218
	if (ctx.cr6.eq) goto loc_821DB218;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x821db21c
	goto loc_821DB21C;
loc_821DB218:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821DB21C:
	// stfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x821db230
	if (!ctx.cr6.lt) goto loc_821DB230;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x821db234
	goto loc_821DB234;
loc_821DB230:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_821DB234:
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821db24c
	if (!ctx.cr6.gt) goto loc_821DB24C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
loc_821DB24C:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821db260
	if (ctx.cr6.eq) goto loc_821DB260;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// b 0x821db264
	goto loc_821DB264;
loc_821DB260:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821DB264:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821db274
	if (ctx.cr0.eq) goto loc_821DB274;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// b 0x821db278
	goto loc_821DB278;
loc_821DB274:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_821DB278:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821db288
	if (ctx.cr0.eq) goto loc_821DB288;
	// bl 0x821cdd88
	ctx.lr = 0x821DB284;
	sub_821CDD88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821DB288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E2740) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e2798
	if (ctx.cr6.eq) goto loc_821E2798;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r31
	ctx.r11.u64 = uint32_t(ctx.r31.u32 ? ctx.r11.u32 / ctx.r31.u32 : 0);
	// cmplwi cr6,r11,300
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 300, ctx.xer);
	// bge cr6,0x821e2798
	if (!ctx.cr6.lt) goto loc_821E2798;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28300
	ctx.r11.s64 = ctx.r11.s64 + -28300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821dda90
	ctx.lr = 0x821E278C;
	sub_821DDA90(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-28312
	ctx.r11.s64 = ctx.r11.s64 + -28312;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821E2798:
	// mulli r3,r31,300
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(300));
	// bl 0x821ca1f0
	ctx.lr = 0x821E27A0;
	sub_821CA1F0(ctx, base);
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

DEFINE_REX_FUNC(sub_821E6510) {
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
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,-27688(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -27688);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821e6568
	if (!ctx.cr0.eq) goto loc_821E6568;
loc_821E6538:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E653C:
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
loc_821E6554:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822783e0
	ctx.lr = 0x821E655C;
	sub_822783E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e657c
	if (ctx.cr0.eq) goto loc_821E657C;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
loc_821E6568:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e6554
	if (!ctx.cr6.eq) goto loc_821E6554;
	// b 0x821e6538
	goto loc_821E6538;
loc_821E657C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821e653c
	goto loc_821E653C;
}

DEFINE_REX_FUNC(sub_821EA290) {
	REX_FUNC_PROLOGUE();
	// lwz r3,436(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EA7C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821EA7C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ea840
	if (!ctx.cr6.gt) goto loc_821EA840;
loc_821EA7E4:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ea830
	if (!ctx.cr6.gt) goto loc_821EA830;
loc_821EA7F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e9b28
	ctx.lr = 0x821EA804;
	sub_821E9B28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ea818
	if (ctx.cr0.eq) goto loc_821EA818;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ea82c
	if (!ctx.cr0.eq) goto loc_821EA82C;
loc_821EA818:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ea7f4
	if (ctx.cr6.lt) goto loc_821EA7F4;
	// b 0x821ea830
	goto loc_821EA830;
loc_821EA82C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_821EA830:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ea7e4
	if (ctx.cr6.lt) goto loc_821EA7E4;
loc_821EA840:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821ED908) {
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
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821ed828
	ctx.lr = 0x821ED930;
	sub_821ED828(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821ed94c
	if (ctx.cr6.eq) goto loc_821ED94C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,-10200
	ctx.r4.s64 = ctx.r11.s64 + -10200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed330
	ctx.lr = 0x821ED94C;
	sub_821ED330(ctx, base);
loc_821ED94C:
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

DEFINE_REX_FUNC(sub_821EF818) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// lfs f0,336(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f30,340(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// beq 0x821ef940
	if (ctx.cr0.eq) goto loc_821EF940;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x821f1380
	ctx.lr = 0x821EF864;
	sub_821F1380(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821ef878
	if (ctx.cr6.lt) goto loc_821EF878;
	// stw r4,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r4.u32);
loc_821EF878:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// subfic r10,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r11,r10,87
	ctx.r11.s64 = ctx.r10.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stfs f30,136(r11)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stfs f31,136(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ef8cc
	if (ctx.cr0.eq) goto loc_821EF8CC;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x821f10c0
	ctx.lr = 0x821EF8C8;
	sub_821F10C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821EF8CC:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8220c1d8
	ctx.lr = 0x821EF8E0;
	sub_8220C1D8(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stfs f31,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq 0x821ef918
	if (ctx.cr0.eq) goto loc_821EF918;
	// stfs f30,172(r11)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// b 0x821ef91c
	goto loc_821EF91C;
loc_821EF918:
	// stfs f31,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
loc_821EF91C:
	// addi r10,r31,348
	ctx.r10.s64 = ctx.r31.s64 + 348;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821EF924:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,124(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 124);
	// ori r8,r8,40
	ctx.r8.u64 = ctx.r8.u64 | 40;
	// stw r8,124(r9)
	REX_STORE_U32(ctx.r9.u32 + 124, ctx.r8.u32);
	// bne 0x821ef924
	if (!ctx.cr0.eq) goto loc_821EF924;
loc_821EF940:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FC028) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r11,7996(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7996);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FD228) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821fd27c
	if (ctx.cr6.eq) goto loc_821FD27C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FD25C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fd27c
	if (ctx.cr0.eq) goto loc_821FD27C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FD278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_821FD27C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200548) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82200580
	if (ctx.cr6.eq) goto loc_82200580;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82200580
	if (ctx.cr6.eq) goto loc_82200580;
	// bl 0x821bc688
	ctx.lr = 0x82200570;
	sub_821BC688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82200580
	if (ctx.cr0.eq) goto loc_82200580;
	// bl 0x8220e378
	ctx.lr = 0x8220057C;
	sub_8220E378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82200580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_822028E0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x822022e0
	ctx.lr = 0x82202924;
	sub_822022E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_82204440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x82204448;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r29,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r29.u64);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204478
	if (ctx.cr6.eq) goto loc_82204478;
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220447c
	if (ctx.cr6.eq) goto loc_8220447C;
loc_82204478:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_8220447C:
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82204498
	if (ctx.cr6.eq) goto loc_82204498;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82203f20
	ctx.lr = 0x82204494;
	sub_82203F20(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82204498:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r29,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82206FC8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82207014
	if (ctx.cr6.eq) goto loc_82207014;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82207014
	if (ctx.cr6.eq) goto loc_82207014;
	// lwz r4,300(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82207014
	if (ctx.cr0.eq) goto loc_82207014;
	// bl 0x821f15d0
	ctx.lr = 0x82207000;
	sub_821F15D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r11,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_82207014:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_8220CE40) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8220ce5c
	if (ctx.cr6.lt) goto loc_8220CE5C;
	// beq cr6,0x8220ce54
	if (ctx.cr6.eq) goto loc_8220CE54;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8220CE54:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8220CE5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220D520) {
	REX_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8220d554
	if (!ctx.cr0.gt) goto loc_8220D554;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_8220D538:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8220d55c
	if (ctx.cr6.eq) goto loc_8220D55C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8220d538
	if (ctx.cr6.lt) goto loc_8220D538;
loc_8220D554:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8220D55C:
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220E860) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F3F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x8220F470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-26424
	ctx.r30.s64 = ctx.r11.s64 + -26424;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8220F488:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822783e0
	ctx.lr = 0x8220F494;
	sub_822783E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8220f4bc
	if (ctx.cr0.eq) goto loc_8220F4BC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8220f488
	if (ctx.cr6.lt) goto loc_8220F488;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8220F4B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
loc_8220F4BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8220f4b4
	goto loc_8220F4B4;
}

DEFINE_REX_FUNC(sub_82210EC0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82210EC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82210ec4
	if (!ctx.cr6.eq) goto loc_82210EC4;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211C88) {
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
	// beq cr6,0x82211cd8
	if (ctx.cr6.eq) goto loc_82211CD8;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r10,16644(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16644);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82211cbc
	if (!ctx.cr6.eq) goto loc_82211CBC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16644(r11)
	REX_STORE_U32(ctx.r11.u32 + 16644, ctx.r10.u32);
loc_82211CBC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82211cd0
	if (ctx.cr6.eq) goto loc_82211CD0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82211ae8
	ctx.lr = 0x82211CD0;
	sub_82211AE8(ctx, base);
loc_82211CD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211ae8
	ctx.lr = 0x82211CD8;
	sub_82211AE8(ctx, base);
loc_82211CD8:
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

DEFINE_REX_FUNC(sub_82214810) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82214FF0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,3712
	ctx.r6.s64 = ctx.r11.s64 + 3712;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,250
	ctx.r5.s64 = 250;
	// addi r4,r11,3312
	ctx.r4.s64 = ctx.r11.s64 + 3312;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82200990
	ctx.lr = 0x82215020;
	sub_82200990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82215044
	if (ctx.cr0.eq) goto loc_82215044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,3248
	ctx.r11.s64 = ctx.r11.s64 + 3248;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82215044:
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

DEFINE_REX_FUNC(sub_82218310) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vor v0,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// addi r11,r11,6352
	ctx.r11.s64 = ctx.r11.s64 + 6352;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltw v11,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// addi r11,r11,6336
	ctx.r11.s64 = ctx.r11.s64 + 6336;
	// vspltw v7,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// vspltw v3,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vcmpgtfp v7,v7,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltw v9,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vcmpgtfp v2,v13,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v8,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// addi r11,r11,6320
	ctx.r11.s64 = ctx.r11.s64 + 6320;
	// vspltw v4,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vcmpgtfp v3,v3,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v9,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v8,v0,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v4,v0,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v12,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw v6,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vspltw v5,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vspltw v10,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vrfiz v9,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v9.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz v8,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v8.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz v13,v4
	simde_mm_store_ps(ctx.v13.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v4.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz v12,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v12.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vmaddfp v9,v9,v11,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v8,v8,v11,v5
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v10,v13,v11,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vsel v13,v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v13,v13,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vsel v1,v13,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vrlimi128 v1,v0,1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82224338) {
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
	// lwz r31,10908(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 10908);
	// stw r31,10928(r3)
	REX_STORE_U32(ctx.r3.u32 + 10928, ctx.r31.u32);
	// bl 0x82224238
	ctx.lr = 0x82224354;
	sub_82224238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_82226370) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x82226378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mulli r11,r7,416
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(416));
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822263d8
	if (!ctx.cr6.eq) goto loc_822263D8;
	// addi r29,r31,12520
	ctx.r29.s64 = ctx.r31.s64 + 12520;
	// ld r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 48);
	// ld r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r28.u32 + 56);
	// ld r6,12528(r31)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r31.u32 + 12528);
	// ld r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 32);
	// ld r8,40(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 40);
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// ld r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82226494
	if (ctx.cr6.eq) goto loc_82226494;
loc_822263D8:
	// lwz r9,64(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82226408
	if (ctx.cr0.eq) goto loc_82226408;
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10908);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82226408
	if (!ctx.cr6.lt) goto loc_82226408;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822264a8
	goto loc_822264A8;
loc_82226408:
	// addi r11,r7,112
	ctx.r11.s64 = ctx.r7.s64 + 112;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// addi r29,r31,12520
	ctx.r29.s64 = ctx.r31.s64 + 12520;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82225878
	ctx.lr = 0x82226438;
	sub_82225878(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222647c
	if (!ctx.cr6.eq) goto loc_8222647C;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r10,r11,16704
	ctx.r10.s64 = ctx.r11.s64 + 16704;
loc_8222644C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82226450:
	// mfmsr r9
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = reinterpret_cast<std::atomic<uint32_t>*>(REX_RAW_ADDR(ea))->compare_exchange_strong(ctx.reserved.u32, __builtin_bswap32(ctx.r11.u32), std::memory_order_acq_rel, std::memory_order_acquire);
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82226450
	if (!ctx.cr0.eq) goto loc_82226450;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8222644c
	if (ctx.cr6.lt) goto loc_8222644C;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_8222647C:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,48(r28)
	REX_STORE_U64(ctx.r28.u32 + 48, ctx.r11.u64);
	// ld r11,12528(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 12528);
	// std r11,56(r28)
	REX_STORE_U64(ctx.r28.u32 + 56, ctx.r11.u64);
loc_82226494:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,12528(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 12528);
	// std r11,11824(r31)
	REX_STORE_U64(ctx.r31.u32 + 11824, ctx.r11.u64);
	// std r10,11832(r31)
	REX_STORE_U64(ctx.r31.u32 + 11832, ctx.r10.u64);
loc_822264A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82231778) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822317c0
	if (ctx.cr6.eq) goto loc_822317C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822317B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x822317C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822317C0:
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

DEFINE_REX_FUNC(sub_82233AE8) {
	REX_FUNC_PROLOGUE();
	// b 0x82233348
	sub_82233348(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82233AF8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e38
	ctx.lr = 0x82233B00;
	__savegprlr_24(ctx, base);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82233be8
	if (!ctx.cr6.lt) goto loc_82233BE8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r7,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82233B1C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82233bd4
	if (!ctx.cr6.lt) goto loc_82233BD4;
	// subf r10,r4,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r4.u64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r27,r7,-4
	ctx.r27.s64 = ctx.r7.s64 + -4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82233B40:
	// lwzx r9,r27,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r28,r9,30,2,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFC0;
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r29,r6,30,2,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFC0;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r6,r6,8
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFFFF;
	// clrlwi r9,r9,8
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r9,r9,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r28,r28,0,18,9
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r29,r29,0,18,9
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r28,r5,30,2,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r6,r5,8
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFFFF;
	// rlwinm r28,r28,0,18,9
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r29,r31,30,2,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r6,r31,8
	ctx.r6.u64 = ctx.r31.u32 & 0xFFFFFF;
	// rlwinm r29,r29,0,18,9
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addis r6,r5,128
	ctx.r6.s64 = ctx.r5.s64 + 8388608;
	// addis r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 131072;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwimi r6,r9,30,24,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF00);
	// rlwimi r6,r9,30,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82233b40
	if (!ctx.cr0.eq) goto loc_82233B40;
loc_82233BD4:
	// add r4,r25,r4
	ctx.r4.u64 = ctx.r25.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82233b1c
	if (ctx.cr6.lt) goto loc_82233B1C;
loc_82233BE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82272e88
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223AFE0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,1960(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1960);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b010
	if (ctx.cr6.eq) goto loc_8223B010;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223B010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B010:
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r11,r11,516
	ctx.r11.s64 = ctx.r11.s64 + 516;
	// addi r30,r10,528
	ctx.r30.s64 = ctx.r10.s64 + 528;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8223b060
	if (!ctx.cr6.lt) goto loc_8223B060;
loc_8223B030:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223b0a8
	if (!ctx.cr6.eq) goto loc_8223B0A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223b04c
	if (ctx.cr0.eq) goto loc_8223B04C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223B04C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B04C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8223b030
	if (ctx.cr6.lt) goto loc_8223B030;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223b0a8
	if (!ctx.cr6.eq) goto loc_8223B0A8;
loc_8223B060:
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r30,r10,512
	ctx.r30.s64 = ctx.r10.s64 + 512;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8223b0a4
	if (!ctx.cr6.lt) goto loc_8223B0A4;
loc_8223B07C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223b098
	if (ctx.cr0.eq) goto loc_8223B098;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8223b098
	if (ctx.cr6.eq) goto loc_8223B098;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223B098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B098:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8223b07c
	if (ctx.cr6.lt) goto loc_8223B07C;
loc_8223B0A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223B0A8:
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

DEFINE_REX_FUNC(sub_8223FB38) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x8223fb60
	if (ctx.cr6.gt) goto loc_8223FB60;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8223fb94
	if (!ctx.cr6.lt) goto loc_8223FB94;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8223fb74
	goto loc_8223FB74;
loc_8223FB60:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8223fb94
	if (!ctx.cr6.lt) goto loc_8223FB94;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_8223FB74:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223fb94
	if (ctx.cr6.eq) goto loc_8223FB94;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223fb98
	if (!ctx.cr6.eq) goto loc_8223FB98;
loc_8223FB94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223FB98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223fbac
	if (!ctx.cr6.eq) goto loc_8223FBAC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
loc_8223FBAC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82244CA8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82244fa0
	sub_82244FA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82244E78) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r3,-52
	ctx.r31.s64 = ctx.r3.s64 + -52;
	// addi r10,r11,-28112
	ctx.r10.s64 = ctx.r11.s64 + -28112;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r9,r11,-28432
	ctx.r9.s64 = ctx.r11.s64 + -28432;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lwz r8,-52(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,-52(r8)
	REX_STORE_U32(ctx.r8.u32 + -52, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82244ed4
	if (ctx.cr6.eq) goto loc_82244ED4;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-30568
	ctx.r3.s64 = ctx.r11.s64 + -30568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822410d0
	ctx.lr = 0x82244ED4;
	sub_822410D0(ctx, base);
loc_82244ED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_822469C0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,-27744
	ctx.r11.s64 = ctx.r11.s64 + -27744;
	// addi r10,r10,-27840
	ctx.r10.s64 = ctx.r10.s64 + -27840;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8224bb80
	ctx.lr = 0x822469F4;
	sub_8224BB80(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-28428
	ctx.r11.s64 = ctx.r11.s64 + -28428;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82247E00) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-30568
	ctx.r3.s64 = ctx.r11.s64 + -30568;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x822410c0
	ctx.lr = 0x82247E28;
	sub_822410C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247e90
	if (ctx.cr6.eq) goto loc_82247E90;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r10,-28428
	ctx.r9.s64 = ctx.r10.s64 + -28428;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r10,-27524
	ctx.r8.s64 = ctx.r10.s64 + -27524;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r7,r10,-27564
	ctx.r7.s64 = ctx.r10.s64 + -27564;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_82247E90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
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

DEFINE_REX_FUNC(sub_8224CD40) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224cd78
	if (ctx.cr6.eq) goto loc_8224CD78;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82272590
	ctx.lr = 0x8224CD78;
	sub_82272590(ctx, base);
loc_8224CD78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8224cd8c
	if (ctx.cr6.eq) goto loc_8224CD8C;
	// lbz r11,157(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 157);
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8224CD8C:
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

DEFINE_REX_FUNC(sub_82253988) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e40
	ctx.lr = 0x82253990;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f11,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// dcbt r0,r10
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vspltisw v28,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// vor v3,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r11,r11,-17456
	ctx.r11.s64 = ctx.r11.s64 + -17456;
	// vor v5,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// vor v2,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r9,4
	ctx.r9.s64 = 4;
	// vor v4,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-17440
	ctx.r11.s64 = ctx.r11.s64 + -17440;
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f0,-17480(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -17480);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fctidz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6028);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v25,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// stfd f12,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.f12.u64);
	// vspltw v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// stfd f10,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.f10.u64);
	// li r29,1024
	ctx.r29.s64 = 1024;
	// lvlx v11,r28,r9
	temp.u32 = ctx.r28.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// lvlx v9,r27,r9
	temp.u32 = ctx.r27.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmaddfp v13,v10,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vmaddfp v12,v10,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// vadduwm v10,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vsldoi v8,v0,v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 12));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,-17680
	ctx.r11.s64 = ctx.r11.s64 + -17680;
	// addi r9,r9,-17712
	ctx.r9.s64 = ctx.r9.s64 + -17712;
	// vadduwm v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vsldoi v8,v8,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vsldoi v8,v8,v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 12));
	// vadduwm v11,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vadduwm v10,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vadduwm v26,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vadduwm v24,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vadduwm v27,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r30,1040
	ctx.r30.s64 = 1040;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82253AF0:
	// li r9,8
	ctx.r9.s64 = 8;
loc_82253AF4:
	// rldicl r11,r3,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// addi r27,r11,6
	ctx.r27.s64 = ctx.r11.s64 + 6;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v3,v3,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// lvlx v11,0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v5,v5,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 14));
	// lvlx v8,0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v4,v4,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi v2,v2,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 14));
	// bne cr6,0x82253af4
	if (!ctx.cr6.eq) goto loc_82253AF4;
	// vsrw v11,v26,v28
	ctx.v11.u32[0] = ctx.v26.u32[0] >> (ctx.v28.u8[0] & 0x1F);
	ctx.v11.u32[1] = ctx.v26.u32[1] >> (ctx.v28.u8[4] & 0x1F);
	ctx.v11.u32[2] = ctx.v26.u32[2] >> (ctx.v28.u8[8] & 0x1F);
	ctx.v11.u32[3] = ctx.v26.u32[3] >> (ctx.v28.u8[12] & 0x1F);
	// vperm v9,v5,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v1,v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsrw v10,v27,v28
	ctx.v10.u32[0] = ctx.v27.u32[0] >> (ctx.v28.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v27.u32[1] >> (ctx.v28.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v27.u32[2] >> (ctx.v28.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v27.u32[3] >> (ctx.v28.u8[12] & 0x1F);
	// vperm v8,v5,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// rldicl r11,r3,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// vperm v31,v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// vcfux v30,v11,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v30.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vcfsx v11,v9,31
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcfsx v1,v1,31
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vcfux v29,v10,31
	simde_mm_store_ps(ctx.v29.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcfsx v10,v8,31
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// xor r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// vcfsx v31,v31,31
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v31.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vmulfp128 v9,v30,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v30,v11,v12
	simde_mm_store_ps(ctx.v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp v11,v1,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vperm v1,v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmulfp128 v8,v29,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v29,v10,v13
	simde_mm_store_ps(ctx.v29.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v31,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vperm v31,v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcfsx v1,v1,31
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vmaddfp v11,v11,v9,v30
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vperm v30,v2,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmaddfp v10,v10,v8,v29
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// stvx128 v11,r5,r29
	ea = (ctx.r5.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v11,v3,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v10,r5,r30
	ea = (ctx.r5.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v10,v31,31
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v31.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcfsx v11,v11,31
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcfsx v31,v30,31
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v30.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vmulfp128 v29,v10,v13
	simde_mm_store_ps(ctx.v29.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v30,v11,v12
	simde_mm_store_ps(ctx.v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp v11,v31,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vsubfp v10,v1,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v11,v11,v9,v30
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v10,v10,v8,v29
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// stvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x82253bfc
	if (ctx.cr6.eq) goto loc_82253BFC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r10
loc_82253BFC:
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// vaddfp v13,v13,v25
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v25.f32)));
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vaddfp v12,v12,v25
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v25.f32)));
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// vadduwm v27,v27,v24
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v27.u32), simde_mm_load_si128((simde__m128i*)ctx.v24.u32)));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// vadduwm v26,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v24.u32)));
	// bgt cr6,0x82253af0
	if (ctx.cr6.gt) goto loc_82253AF0;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,13(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x82253c4c
	if (ctx.cr6.lt) goto loc_82253C4C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82253C4C:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82253c6c
	if (!ctx.cr6.lt) goto loc_82253C6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82253C6C:
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82272ec0
	ctx.lr = 0x82253C74;
	sub_82272EC0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f0,-17488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -17488);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82272e90
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82271D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e40
	ctx.lr = 0x82271D60;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// addi r30,r8,2056
	ctx.r30.s64 = ctx.r8.s64 + 2056;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// addi r29,r8,2316
	ctx.r29.s64 = ctx.r8.s64 + 2316;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f0,252(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// lfs f0,252(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 256, temp.u32);
	// ble cr6,0x82271e88
	if (!ctx.cr6.gt) goto loc_82271E88;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r28,-32253
	ctx.r28.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f10,23220(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 23220);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,1708(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 1708);
	ctx.f6.f64 = double(temp.f32);
	// subf r26,r8,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lfs f7,1712(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1712);
	ctx.f7.f64 = double(temp.f32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f8,1716(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1716);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,1720(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1720);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,-23940(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23940);
	ctx.f5.f64 = double(temp.f32);
loc_82271DC4:
	// fcmpu cr6,f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// ble cr6,0x82271dd8
	if (!ctx.cr6.gt) goto loc_82271DD8;
	// fnmsubs f0,f13,f9,f8
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f8.f64)));
	// fmadds f0,f0,f13,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f7.f64)));
	// b 0x82271ddc
	goto loc_82271DDC;
loc_82271DD8:
	// fmuls f0,f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
loc_82271DDC:
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f12,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// lwz r5,-80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r5,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r5.u64);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f31,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// lfs f3,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfd f12,-72(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fmadds f11,f31,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f12,f3,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f12.f64)));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f12,f11,f4,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f12.f64)));
	// stfsx f12,r26,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r26.u32 + ctx.r8.u32, temp.u32);
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmadds f12,f3,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f31,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f11.f64)));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmadds f0,f0,f4,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f12.f64)));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82271dc4
	if (!ctx.cr0.eq) goto loc_82271DC4;
loc_82271E88:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82271eb4
	if (!ctx.cr6.lt) goto loc_82271EB4;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82271E9C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82271e9c
	if (!ctx.cr0.eq) goto loc_82271E9C;
loc_82271EB4:
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82272e90
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_122) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_82277394) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r11,r12
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r12.u64);
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_822773AC:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x822773ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822773AC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82277AE4) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82275880
	ctx.lr = 0x82277B04;
	sub_82275880(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822785B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822785e8
	if (ctx.cr6.eq) goto loc_822785E8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82280bd0
	ctx.lr = 0x822785DC;
	sub_82280BD0(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x822785f8
	goto loc_822785F8;
loc_822785E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82280c78
	ctx.lr = 0x822785F0;
	sub_82280C78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822785F8:
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

DEFINE_REX_FUNC(sub_8227C5CC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227C6A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x8227C6A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82281868
	ctx.lr = 0x8227C6B4;
	sub_82281868(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r29,r11,10336
	ctx.r29.s64 = ctx.r11.s64 + 10336;
	// beq cr6,0x8227c72c
	if (ctx.cr6.eq) goto loc_8227C72C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8227c6dc
	if (!ctx.cr6.eq) goto loc_8227C6DC;
	// lbz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 92);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8227c6f0
	if (!ctx.cr0.eq) goto loc_8227C6F0;
loc_8227C6DC:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x8227c70c
	if (!ctx.cr6.eq) goto loc_8227C70C;
	// lbz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 48);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227c70c
	if (ctx.cr0.eq) goto loc_8227C70C;
loc_8227C6F0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82281868
	ctx.lr = 0x8227C6F8;
	sub_82281868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82281868
	ctx.lr = 0x8227C704;
	sub_82281868(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8227c72c
	if (ctx.cr6.eq) goto loc_8227C72C;
loc_8227C70C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281868
	ctx.lr = 0x8227C714;
	sub_82281868(ctx, base);
	// bl 0x822353d0
	ctx.lr = 0x8227C718;
	sub_822353D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8227c72c
	if (!ctx.cr0.eq) goto loc_8227C72C;
	// bl 0x82235c10
	ctx.lr = 0x8227C724;
	sub_82235C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8227c730
	goto loc_8227C730;
loc_8227C72C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8227C730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822817d0
	ctx.lr = 0x8227C738;
	sub_822817D0(ctx, base);
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(44));
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x8227c770
	if (ctx.cr6.eq) goto loc_8227C770;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82279480
	ctx.lr = 0x8227C768;
	sub_82279480(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8227c774
	goto loc_8227C774;
loc_8227C770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227C774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82284EC8) {
	REX_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82284ED4:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x82284ed4
	if (ctx.cr6.lt) goto loc_82284ED4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r8,1024(r3)
	REX_STORE_U32(ctx.r3.u32 + 1024, ctx.r8.u32);
	// stw r8,1028(r3)
	REX_STORE_U32(ctx.r3.u32 + 1028, ctx.r8.u32);
	// stw r8,1032(r3)
	REX_STORE_U32(ctx.r3.u32 + 1032, ctx.r8.u32);
	// sth r11,998(r3)
	REX_STORE_U16(ctx.r3.u32 + 998, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82285E78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822885B0) {
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
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,-29188
	ctx.r3.s64 = ctx.r11.s64 + -29188;
	// bl 0x8219f7c0
	ctx.lr = 0x822885C8;
	sub_8219F7C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82288A70) {
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
	// li r5,8188
	ctx.r5.s64 = 8188;
	// addi r11,r11,12904
	ctx.r11.s64 = ctx.r11.s64 + 12904;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x822724f0
	ctx.lr = 0x82288A94;
	sub_822724F0(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r3,r11,-2560
	ctx.r3.s64 = ctx.r11.s64 + -2560;
	// bl 0x82273730
	ctx.lr = 0x82288AA0;
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

DEFINE_REX_FUNC(sub_8289DA70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,534
	ctx.r11.s64 = ctx.r11.s64 + 534;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,534
	ctx.r11.s64 = ctx.r11.s64 + 534;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,13(r10)
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,534
	ctx.r11.s64 = ctx.r11.s64 + 534;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,534
	ctx.r11.s64 = ctx.r11.s64 + 534;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,15(r10)
	REX_STORE_U8(ctx.r10.u32 + 15, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1082
	ctx.r11.s64 = ctx.r11.s64 + 1082;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,16(r10)
	REX_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1082
	ctx.r11.s64 = ctx.r11.s64 + 1082;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,17(r10)
	REX_STORE_U8(ctx.r10.u32 + 17, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1082
	ctx.r11.s64 = ctx.r11.s64 + 1082;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,18(r10)
	REX_STORE_U8(ctx.r10.u32 + 18, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1082
	ctx.r11.s64 = ctx.r11.s64 + 1082;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,19(r10)
	REX_STORE_U8(ctx.r10.u32 + 19, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1082
	ctx.r11.s64 = ctx.r11.s64 + 1082;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1082
	ctx.r11.s64 = ctx.r11.s64 + 1082;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1082
	ctx.r11.s64 = ctx.r11.s64 + 1082;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,22(r10)
	REX_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1082
	ctx.r11.s64 = ctx.r11.s64 + 1082;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,546
	ctx.r11.s64 = ctx.r11.s64 + 546;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,28(r10)
	REX_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,546
	ctx.r11.s64 = ctx.r11.s64 + 546;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,29(r10)
	REX_STORE_U8(ctx.r10.u32 + 29, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,546
	ctx.r11.s64 = ctx.r11.s64 + 546;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,30(r10)
	REX_STORE_U8(ctx.r10.u32 + 30, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,546
	ctx.r11.s64 = ctx.r11.s64 + 546;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,31(r10)
	REX_STORE_U8(ctx.r10.u32 + 31, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1094
	ctx.r11.s64 = ctx.r11.s64 + 1094;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1094
	ctx.r11.s64 = ctx.r11.s64 + 1094;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,33(r10)
	REX_STORE_U8(ctx.r10.u32 + 33, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1094
	ctx.r11.s64 = ctx.r11.s64 + 1094;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,34(r10)
	REX_STORE_U8(ctx.r10.u32 + 34, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1094
	ctx.r11.s64 = ctx.r11.s64 + 1094;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1094
	ctx.r11.s64 = ctx.r11.s64 + 1094;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1094
	ctx.r11.s64 = ctx.r11.s64 + 1094;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,37(r10)
	REX_STORE_U8(ctx.r10.u32 + 37, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1094
	ctx.r11.s64 = ctx.r11.s64 + 1094;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,38(r10)
	REX_STORE_U8(ctx.r10.u32 + 38, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1094
	ctx.r11.s64 = ctx.r11.s64 + 1094;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,39(r10)
	REX_STORE_U8(ctx.r10.u32 + 39, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,41(r11)
	REX_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,42(r11)
	REX_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,43(r11)
	REX_STORE_U8(ctx.r11.u32 + 43, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,558
	ctx.r11.s64 = ctx.r11.s64 + 558;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,44(r10)
	REX_STORE_U8(ctx.r10.u32 + 44, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,558
	ctx.r11.s64 = ctx.r11.s64 + 558;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,558
	ctx.r11.s64 = ctx.r11.s64 + 558;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,46(r10)
	REX_STORE_U8(ctx.r10.u32 + 46, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,558
	ctx.r11.s64 = ctx.r11.s64 + 558;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,47(r10)
	REX_STORE_U8(ctx.r10.u32 + 47, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1106
	ctx.r11.s64 = ctx.r11.s64 + 1106;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,48(r10)
	REX_STORE_U8(ctx.r10.u32 + 48, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1106
	ctx.r11.s64 = ctx.r11.s64 + 1106;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,49(r10)
	REX_STORE_U8(ctx.r10.u32 + 49, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1106
	ctx.r11.s64 = ctx.r11.s64 + 1106;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,50(r10)
	REX_STORE_U8(ctx.r10.u32 + 50, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1106
	ctx.r11.s64 = ctx.r11.s64 + 1106;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,51(r10)
	REX_STORE_U8(ctx.r10.u32 + 51, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1106
	ctx.r11.s64 = ctx.r11.s64 + 1106;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,52(r10)
	REX_STORE_U8(ctx.r10.u32 + 52, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1106
	ctx.r11.s64 = ctx.r11.s64 + 1106;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,53(r10)
	REX_STORE_U8(ctx.r10.u32 + 53, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1106
	ctx.r11.s64 = ctx.r11.s64 + 1106;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,54(r10)
	REX_STORE_U8(ctx.r10.u32 + 54, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1106
	ctx.r11.s64 = ctx.r11.s64 + 1106;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,55(r10)
	REX_STORE_U8(ctx.r10.u32 + 55, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,57(r11)
	REX_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,58(r11)
	REX_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,59(r11)
	REX_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,570
	ctx.r11.s64 = ctx.r11.s64 + 570;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,60(r10)
	REX_STORE_U8(ctx.r10.u32 + 60, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,570
	ctx.r11.s64 = ctx.r11.s64 + 570;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,61(r10)
	REX_STORE_U8(ctx.r10.u32 + 61, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,570
	ctx.r11.s64 = ctx.r11.s64 + 570;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,62(r10)
	REX_STORE_U8(ctx.r10.u32 + 62, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,570
	ctx.r11.s64 = ctx.r11.s64 + 570;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,63(r10)
	REX_STORE_U8(ctx.r10.u32 + 63, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1118
	ctx.r11.s64 = ctx.r11.s64 + 1118;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,64(r10)
	REX_STORE_U8(ctx.r10.u32 + 64, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1118
	ctx.r11.s64 = ctx.r11.s64 + 1118;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,65(r10)
	REX_STORE_U8(ctx.r10.u32 + 65, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1118
	ctx.r11.s64 = ctx.r11.s64 + 1118;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,66(r10)
	REX_STORE_U8(ctx.r10.u32 + 66, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1118
	ctx.r11.s64 = ctx.r11.s64 + 1118;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,67(r10)
	REX_STORE_U8(ctx.r10.u32 + 67, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1118
	ctx.r11.s64 = ctx.r11.s64 + 1118;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,68(r10)
	REX_STORE_U8(ctx.r10.u32 + 68, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1118
	ctx.r11.s64 = ctx.r11.s64 + 1118;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,69(r10)
	REX_STORE_U8(ctx.r10.u32 + 69, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1118
	ctx.r11.s64 = ctx.r11.s64 + 1118;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,70(r10)
	REX_STORE_U8(ctx.r10.u32 + 70, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1118
	ctx.r11.s64 = ctx.r11.s64 + 1118;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,71(r10)
	REX_STORE_U8(ctx.r10.u32 + 71, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,73(r11)
	REX_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,75(r11)
	REX_STORE_U8(ctx.r11.u32 + 75, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,582
	ctx.r11.s64 = ctx.r11.s64 + 582;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,582
	ctx.r11.s64 = ctx.r11.s64 + 582;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,582
	ctx.r11.s64 = ctx.r11.s64 + 582;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,582
	ctx.r11.s64 = ctx.r11.s64 + 582;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1130
	ctx.r11.s64 = ctx.r11.s64 + 1130;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,80(r10)
	REX_STORE_U8(ctx.r10.u32 + 80, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1130
	ctx.r11.s64 = ctx.r11.s64 + 1130;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,81(r10)
	REX_STORE_U8(ctx.r10.u32 + 81, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1130
	ctx.r11.s64 = ctx.r11.s64 + 1130;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,82(r10)
	REX_STORE_U8(ctx.r10.u32 + 82, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1130
	ctx.r11.s64 = ctx.r11.s64 + 1130;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,83(r10)
	REX_STORE_U8(ctx.r10.u32 + 83, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1130
	ctx.r11.s64 = ctx.r11.s64 + 1130;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,84(r10)
	REX_STORE_U8(ctx.r10.u32 + 84, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1130
	ctx.r11.s64 = ctx.r11.s64 + 1130;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,85(r10)
	REX_STORE_U8(ctx.r10.u32 + 85, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1130
	ctx.r11.s64 = ctx.r11.s64 + 1130;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,86(r10)
	REX_STORE_U8(ctx.r10.u32 + 86, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1130
	ctx.r11.s64 = ctx.r11.s64 + 1130;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,87(r10)
	REX_STORE_U8(ctx.r10.u32 + 87, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,594
	ctx.r11.s64 = ctx.r11.s64 + 594;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,92(r10)
	REX_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,594
	ctx.r11.s64 = ctx.r11.s64 + 594;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,93(r10)
	REX_STORE_U8(ctx.r10.u32 + 93, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,594
	ctx.r11.s64 = ctx.r11.s64 + 594;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,94(r10)
	REX_STORE_U8(ctx.r10.u32 + 94, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,594
	ctx.r11.s64 = ctx.r11.s64 + 594;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,95(r10)
	REX_STORE_U8(ctx.r10.u32 + 95, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1142
	ctx.r11.s64 = ctx.r11.s64 + 1142;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,96(r10)
	REX_STORE_U8(ctx.r10.u32 + 96, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1142
	ctx.r11.s64 = ctx.r11.s64 + 1142;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,97(r10)
	REX_STORE_U8(ctx.r10.u32 + 97, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1142
	ctx.r11.s64 = ctx.r11.s64 + 1142;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,98(r10)
	REX_STORE_U8(ctx.r10.u32 + 98, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1142
	ctx.r11.s64 = ctx.r11.s64 + 1142;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,99(r10)
	REX_STORE_U8(ctx.r10.u32 + 99, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1142
	ctx.r11.s64 = ctx.r11.s64 + 1142;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,100(r10)
	REX_STORE_U8(ctx.r10.u32 + 100, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1142
	ctx.r11.s64 = ctx.r11.s64 + 1142;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,101(r10)
	REX_STORE_U8(ctx.r10.u32 + 101, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1142
	ctx.r11.s64 = ctx.r11.s64 + 1142;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,102(r10)
	REX_STORE_U8(ctx.r10.u32 + 102, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1142
	ctx.r11.s64 = ctx.r11.s64 + 1142;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,103(r10)
	REX_STORE_U8(ctx.r10.u32 + 103, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,104(r10)
	REX_STORE_U8(ctx.r10.u32 + 104, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,105(r10)
	REX_STORE_U8(ctx.r10.u32 + 105, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,106(r10)
	REX_STORE_U8(ctx.r10.u32 + 106, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,107(r10)
	REX_STORE_U8(ctx.r10.u32 + 107, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,108(r11)
	REX_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,110(r11)
	REX_STORE_U8(ctx.r11.u32 + 110, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,111(r11)
	REX_STORE_U8(ctx.r11.u32 + 111, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,112(r10)
	REX_STORE_U8(ctx.r10.u32 + 112, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,113(r10)
	REX_STORE_U8(ctx.r10.u32 + 113, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,114(r10)
	REX_STORE_U8(ctx.r10.u32 + 114, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,115(r10)
	REX_STORE_U8(ctx.r10.u32 + 115, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,116(r10)
	REX_STORE_U8(ctx.r10.u32 + 116, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,117(r10)
	REX_STORE_U8(ctx.r10.u32 + 117, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,118(r10)
	REX_STORE_U8(ctx.r10.u32 + 118, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,119(r10)
	REX_STORE_U8(ctx.r10.u32 + 119, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,120(r10)
	REX_STORE_U8(ctx.r10.u32 + 120, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,121(r10)
	REX_STORE_U8(ctx.r10.u32 + 121, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,122(r10)
	REX_STORE_U8(ctx.r10.u32 + 122, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,123(r10)
	REX_STORE_U8(ctx.r10.u32 + 123, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,124(r11)
	REX_STORE_U8(ctx.r11.u32 + 124, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,125(r11)
	REX_STORE_U8(ctx.r11.u32 + 125, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,126(r11)
	REX_STORE_U8(ctx.r11.u32 + 126, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,127(r11)
	REX_STORE_U8(ctx.r11.u32 + 127, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,128(r10)
	REX_STORE_U8(ctx.r10.u32 + 128, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,129(r10)
	REX_STORE_U8(ctx.r10.u32 + 129, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,130(r10)
	REX_STORE_U8(ctx.r10.u32 + 130, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,131(r10)
	REX_STORE_U8(ctx.r10.u32 + 131, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,132(r10)
	REX_STORE_U8(ctx.r10.u32 + 132, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,133(r10)
	REX_STORE_U8(ctx.r10.u32 + 133, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,134(r10)
	REX_STORE_U8(ctx.r10.u32 + 134, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,135(r10)
	REX_STORE_U8(ctx.r10.u32 + 135, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,136(r10)
	REX_STORE_U8(ctx.r10.u32 + 136, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,137(r10)
	REX_STORE_U8(ctx.r10.u32 + 137, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,138(r10)
	REX_STORE_U8(ctx.r10.u32 + 138, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,139(r10)
	REX_STORE_U8(ctx.r10.u32 + 139, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,140(r11)
	REX_STORE_U8(ctx.r11.u32 + 140, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,141(r11)
	REX_STORE_U8(ctx.r11.u32 + 141, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,142(r11)
	REX_STORE_U8(ctx.r11.u32 + 142, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,143(r11)
	REX_STORE_U8(ctx.r11.u32 + 143, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,638
	ctx.r11.s64 = ctx.r11.s64 + 638;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,144(r10)
	REX_STORE_U8(ctx.r10.u32 + 144, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,638
	ctx.r11.s64 = ctx.r11.s64 + 638;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,145(r10)
	REX_STORE_U8(ctx.r10.u32 + 145, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,638
	ctx.r11.s64 = ctx.r11.s64 + 638;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,146(r10)
	REX_STORE_U8(ctx.r10.u32 + 146, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,638
	ctx.r11.s64 = ctx.r11.s64 + 638;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,147(r10)
	REX_STORE_U8(ctx.r10.u32 + 147, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1186
	ctx.r11.s64 = ctx.r11.s64 + 1186;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,148(r10)
	REX_STORE_U8(ctx.r10.u32 + 148, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1186
	ctx.r11.s64 = ctx.r11.s64 + 1186;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,149(r10)
	REX_STORE_U8(ctx.r10.u32 + 149, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1186
	ctx.r11.s64 = ctx.r11.s64 + 1186;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,150(r10)
	REX_STORE_U8(ctx.r10.u32 + 150, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1186
	ctx.r11.s64 = ctx.r11.s64 + 1186;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,151(r10)
	REX_STORE_U8(ctx.r10.u32 + 151, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1186
	ctx.r11.s64 = ctx.r11.s64 + 1186;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,152(r10)
	REX_STORE_U8(ctx.r10.u32 + 152, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1186
	ctx.r11.s64 = ctx.r11.s64 + 1186;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,153(r10)
	REX_STORE_U8(ctx.r10.u32 + 153, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1186
	ctx.r11.s64 = ctx.r11.s64 + 1186;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,154(r10)
	REX_STORE_U8(ctx.r10.u32 + 154, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1186
	ctx.r11.s64 = ctx.r11.s64 + 1186;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,155(r10)
	REX_STORE_U8(ctx.r10.u32 + 155, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,156(r11)
	REX_STORE_U8(ctx.r11.u32 + 156, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,157(r11)
	REX_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,158(r11)
	REX_STORE_U8(ctx.r11.u32 + 158, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,159(r11)
	REX_STORE_U8(ctx.r11.u32 + 159, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,654
	ctx.r11.s64 = ctx.r11.s64 + 654;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,160(r10)
	REX_STORE_U8(ctx.r10.u32 + 160, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,654
	ctx.r11.s64 = ctx.r11.s64 + 654;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,161(r10)
	REX_STORE_U8(ctx.r10.u32 + 161, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,654
	ctx.r11.s64 = ctx.r11.s64 + 654;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,162(r10)
	REX_STORE_U8(ctx.r10.u32 + 162, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,654
	ctx.r11.s64 = ctx.r11.s64 + 654;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,163(r10)
	REX_STORE_U8(ctx.r10.u32 + 163, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1202
	ctx.r11.s64 = ctx.r11.s64 + 1202;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,164(r10)
	REX_STORE_U8(ctx.r10.u32 + 164, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1202
	ctx.r11.s64 = ctx.r11.s64 + 1202;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,165(r10)
	REX_STORE_U8(ctx.r10.u32 + 165, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1202
	ctx.r11.s64 = ctx.r11.s64 + 1202;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,166(r10)
	REX_STORE_U8(ctx.r10.u32 + 166, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1202
	ctx.r11.s64 = ctx.r11.s64 + 1202;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,167(r10)
	REX_STORE_U8(ctx.r10.u32 + 167, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1202
	ctx.r11.s64 = ctx.r11.s64 + 1202;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,168(r10)
	REX_STORE_U8(ctx.r10.u32 + 168, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1202
	ctx.r11.s64 = ctx.r11.s64 + 1202;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,169(r10)
	REX_STORE_U8(ctx.r10.u32 + 169, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1202
	ctx.r11.s64 = ctx.r11.s64 + 1202;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,170(r10)
	REX_STORE_U8(ctx.r10.u32 + 170, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1202
	ctx.r11.s64 = ctx.r11.s64 + 1202;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,171(r10)
	REX_STORE_U8(ctx.r10.u32 + 171, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,172(r11)
	REX_STORE_U8(ctx.r11.u32 + 172, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,173(r11)
	REX_STORE_U8(ctx.r11.u32 + 173, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,174(r11)
	REX_STORE_U8(ctx.r11.u32 + 174, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,175(r11)
	REX_STORE_U8(ctx.r11.u32 + 175, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,670
	ctx.r11.s64 = ctx.r11.s64 + 670;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,176(r10)
	REX_STORE_U8(ctx.r10.u32 + 176, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,670
	ctx.r11.s64 = ctx.r11.s64 + 670;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,177(r10)
	REX_STORE_U8(ctx.r10.u32 + 177, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,670
	ctx.r11.s64 = ctx.r11.s64 + 670;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,178(r10)
	REX_STORE_U8(ctx.r10.u32 + 178, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,670
	ctx.r11.s64 = ctx.r11.s64 + 670;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,179(r10)
	REX_STORE_U8(ctx.r10.u32 + 179, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,180(r10)
	REX_STORE_U8(ctx.r10.u32 + 180, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,181(r10)
	REX_STORE_U8(ctx.r10.u32 + 181, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,182(r10)
	REX_STORE_U8(ctx.r10.u32 + 182, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,183(r10)
	REX_STORE_U8(ctx.r10.u32 + 183, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,184(r10)
	REX_STORE_U8(ctx.r10.u32 + 184, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,185(r10)
	REX_STORE_U8(ctx.r10.u32 + 185, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,186(r10)
	REX_STORE_U8(ctx.r10.u32 + 186, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,187(r10)
	REX_STORE_U8(ctx.r10.u32 + 187, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,190(r11)
	REX_STORE_U8(ctx.r11.u32 + 190, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,191(r11)
	REX_STORE_U8(ctx.r11.u32 + 191, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,686
	ctx.r11.s64 = ctx.r11.s64 + 686;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,192(r10)
	REX_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,686
	ctx.r11.s64 = ctx.r11.s64 + 686;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,193(r10)
	REX_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,686
	ctx.r11.s64 = ctx.r11.s64 + 686;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,194(r10)
	REX_STORE_U8(ctx.r10.u32 + 194, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,686
	ctx.r11.s64 = ctx.r11.s64 + 686;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,195(r10)
	REX_STORE_U8(ctx.r10.u32 + 195, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1234
	ctx.r11.s64 = ctx.r11.s64 + 1234;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,196(r10)
	REX_STORE_U8(ctx.r10.u32 + 196, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1234
	ctx.r11.s64 = ctx.r11.s64 + 1234;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,197(r10)
	REX_STORE_U8(ctx.r10.u32 + 197, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1234
	ctx.r11.s64 = ctx.r11.s64 + 1234;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,198(r10)
	REX_STORE_U8(ctx.r10.u32 + 198, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1234
	ctx.r11.s64 = ctx.r11.s64 + 1234;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,199(r10)
	REX_STORE_U8(ctx.r10.u32 + 199, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1234
	ctx.r11.s64 = ctx.r11.s64 + 1234;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,200(r10)
	REX_STORE_U8(ctx.r10.u32 + 200, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1234
	ctx.r11.s64 = ctx.r11.s64 + 1234;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,201(r10)
	REX_STORE_U8(ctx.r10.u32 + 201, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1234
	ctx.r11.s64 = ctx.r11.s64 + 1234;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,202(r10)
	REX_STORE_U8(ctx.r10.u32 + 202, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1234
	ctx.r11.s64 = ctx.r11.s64 + 1234;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,203(r10)
	REX_STORE_U8(ctx.r10.u32 + 203, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,204(r11)
	REX_STORE_U8(ctx.r11.u32 + 204, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,205(r11)
	REX_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,206(r11)
	REX_STORE_U8(ctx.r11.u32 + 206, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,207(r11)
	REX_STORE_U8(ctx.r11.u32 + 207, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,702
	ctx.r11.s64 = ctx.r11.s64 + 702;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,208(r10)
	REX_STORE_U8(ctx.r10.u32 + 208, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,702
	ctx.r11.s64 = ctx.r11.s64 + 702;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,209(r10)
	REX_STORE_U8(ctx.r10.u32 + 209, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,702
	ctx.r11.s64 = ctx.r11.s64 + 702;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,210(r10)
	REX_STORE_U8(ctx.r10.u32 + 210, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,702
	ctx.r11.s64 = ctx.r11.s64 + 702;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,211(r10)
	REX_STORE_U8(ctx.r10.u32 + 211, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,212(r10)
	REX_STORE_U8(ctx.r10.u32 + 212, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,213(r10)
	REX_STORE_U8(ctx.r10.u32 + 213, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,214(r10)
	REX_STORE_U8(ctx.r10.u32 + 214, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,215(r10)
	REX_STORE_U8(ctx.r10.u32 + 215, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,216(r10)
	REX_STORE_U8(ctx.r10.u32 + 216, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,217(r10)
	REX_STORE_U8(ctx.r10.u32 + 217, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,218(r10)
	REX_STORE_U8(ctx.r10.u32 + 218, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,219(r10)
	REX_STORE_U8(ctx.r10.u32 + 219, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,220(r10)
	REX_STORE_U8(ctx.r10.u32 + 220, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,221(r10)
	REX_STORE_U8(ctx.r10.u32 + 221, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,222(r10)
	REX_STORE_U8(ctx.r10.u32 + 222, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,223(r10)
	REX_STORE_U8(ctx.r10.u32 + 223, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,224(r11)
	REX_STORE_U8(ctx.r11.u32 + 224, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,225(r11)
	REX_STORE_U8(ctx.r11.u32 + 225, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,226(r11)
	REX_STORE_U8(ctx.r11.u32 + 226, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,227(r11)
	REX_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,228(r10)
	REX_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,229(r10)
	REX_STORE_U8(ctx.r10.u32 + 229, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,230(r10)
	REX_STORE_U8(ctx.r10.u32 + 230, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,231(r10)
	REX_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,232(r10)
	REX_STORE_U8(ctx.r10.u32 + 232, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,233(r10)
	REX_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,234(r10)
	REX_STORE_U8(ctx.r10.u32 + 234, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,235(r10)
	REX_STORE_U8(ctx.r10.u32 + 235, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,236(r10)
	REX_STORE_U8(ctx.r10.u32 + 236, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,237(r10)
	REX_STORE_U8(ctx.r10.u32 + 237, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,238(r10)
	REX_STORE_U8(ctx.r10.u32 + 238, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,239(r10)
	REX_STORE_U8(ctx.r10.u32 + 239, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,240(r11)
	REX_STORE_U8(ctx.r11.u32 + 240, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,241(r11)
	REX_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,242(r11)
	REX_STORE_U8(ctx.r11.u32 + 242, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,243(r11)
	REX_STORE_U8(ctx.r11.u32 + 243, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,244(r10)
	REX_STORE_U8(ctx.r10.u32 + 244, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,245(r10)
	REX_STORE_U8(ctx.r10.u32 + 245, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,246(r10)
	REX_STORE_U8(ctx.r10.u32 + 246, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,247(r10)
	REX_STORE_U8(ctx.r10.u32 + 247, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,248(r10)
	REX_STORE_U8(ctx.r10.u32 + 248, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,249(r10)
	REX_STORE_U8(ctx.r10.u32 + 249, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,250(r10)
	REX_STORE_U8(ctx.r10.u32 + 250, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,251(r10)
	REX_STORE_U8(ctx.r10.u32 + 251, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,252(r10)
	REX_STORE_U8(ctx.r10.u32 + 252, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,253(r10)
	REX_STORE_U8(ctx.r10.u32 + 253, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,254(r10)
	REX_STORE_U8(ctx.r10.u32 + 254, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,255(r10)
	REX_STORE_U8(ctx.r10.u32 + 255, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,256(r11)
	REX_STORE_U8(ctx.r11.u32 + 256, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,257(r11)
	REX_STORE_U8(ctx.r11.u32 + 257, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,258(r11)
	REX_STORE_U8(ctx.r11.u32 + 258, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,259(r11)
	REX_STORE_U8(ctx.r11.u32 + 259, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,260(r10)
	REX_STORE_U8(ctx.r10.u32 + 260, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,261(r10)
	REX_STORE_U8(ctx.r10.u32 + 261, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,262(r10)
	REX_STORE_U8(ctx.r10.u32 + 262, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,263(r10)
	REX_STORE_U8(ctx.r10.u32 + 263, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,264(r10)
	REX_STORE_U8(ctx.r10.u32 + 264, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,265(r10)
	REX_STORE_U8(ctx.r10.u32 + 265, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,266(r10)
	REX_STORE_U8(ctx.r10.u32 + 266, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,267(r10)
	REX_STORE_U8(ctx.r10.u32 + 267, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,268(r10)
	REX_STORE_U8(ctx.r10.u32 + 268, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,269(r10)
	REX_STORE_U8(ctx.r10.u32 + 269, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,270(r10)
	REX_STORE_U8(ctx.r10.u32 + 270, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,271(r10)
	REX_STORE_U8(ctx.r10.u32 + 271, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,272(r11)
	REX_STORE_U8(ctx.r11.u32 + 272, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,273(r11)
	REX_STORE_U8(ctx.r11.u32 + 273, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,274(r11)
	REX_STORE_U8(ctx.r11.u32 + 274, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,275(r11)
	REX_STORE_U8(ctx.r11.u32 + 275, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,276(r10)
	REX_STORE_U8(ctx.r10.u32 + 276, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,277(r10)
	REX_STORE_U8(ctx.r10.u32 + 277, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,278(r10)
	REX_STORE_U8(ctx.r10.u32 + 278, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,279(r10)
	REX_STORE_U8(ctx.r10.u32 + 279, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,280(r10)
	REX_STORE_U8(ctx.r10.u32 + 280, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,281(r10)
	REX_STORE_U8(ctx.r10.u32 + 281, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,282(r10)
	REX_STORE_U8(ctx.r10.u32 + 282, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,283(r10)
	REX_STORE_U8(ctx.r10.u32 + 283, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,284(r10)
	REX_STORE_U8(ctx.r10.u32 + 284, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,285(r10)
	REX_STORE_U8(ctx.r10.u32 + 285, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,286(r10)
	REX_STORE_U8(ctx.r10.u32 + 286, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,287(r10)
	REX_STORE_U8(ctx.r10.u32 + 287, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,288(r11)
	REX_STORE_U8(ctx.r11.u32 + 288, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,289(r11)
	REX_STORE_U8(ctx.r11.u32 + 289, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,290(r11)
	REX_STORE_U8(ctx.r11.u32 + 290, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,291(r11)
	REX_STORE_U8(ctx.r11.u32 + 291, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,292(r10)
	REX_STORE_U8(ctx.r10.u32 + 292, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,293(r10)
	REX_STORE_U8(ctx.r10.u32 + 293, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,294(r10)
	REX_STORE_U8(ctx.r10.u32 + 294, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,295(r10)
	REX_STORE_U8(ctx.r10.u32 + 295, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,296(r10)
	REX_STORE_U8(ctx.r10.u32 + 296, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,297(r10)
	REX_STORE_U8(ctx.r10.u32 + 297, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,298(r10)
	REX_STORE_U8(ctx.r10.u32 + 298, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,299(r10)
	REX_STORE_U8(ctx.r10.u32 + 299, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,300(r10)
	REX_STORE_U8(ctx.r10.u32 + 300, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,301(r10)
	REX_STORE_U8(ctx.r10.u32 + 301, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,302(r10)
	REX_STORE_U8(ctx.r10.u32 + 302, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,303(r10)
	REX_STORE_U8(ctx.r10.u32 + 303, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,304(r11)
	REX_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,305(r11)
	REX_STORE_U8(ctx.r11.u32 + 305, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,306(r11)
	REX_STORE_U8(ctx.r11.u32 + 306, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,307(r11)
	REX_STORE_U8(ctx.r11.u32 + 307, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,308(r10)
	REX_STORE_U8(ctx.r10.u32 + 308, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,309(r10)
	REX_STORE_U8(ctx.r10.u32 + 309, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,310(r10)
	REX_STORE_U8(ctx.r10.u32 + 310, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,311(r10)
	REX_STORE_U8(ctx.r10.u32 + 311, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,312(r10)
	REX_STORE_U8(ctx.r10.u32 + 312, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,313(r10)
	REX_STORE_U8(ctx.r10.u32 + 313, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,314(r10)
	REX_STORE_U8(ctx.r10.u32 + 314, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,315(r10)
	REX_STORE_U8(ctx.r10.u32 + 315, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,316(r10)
	REX_STORE_U8(ctx.r10.u32 + 316, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,317(r10)
	REX_STORE_U8(ctx.r10.u32 + 317, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,318(r10)
	REX_STORE_U8(ctx.r10.u32 + 318, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,319(r10)
	REX_STORE_U8(ctx.r10.u32 + 319, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,320(r11)
	REX_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,321(r11)
	REX_STORE_U8(ctx.r11.u32 + 321, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,322(r11)
	REX_STORE_U8(ctx.r11.u32 + 322, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,323(r11)
	REX_STORE_U8(ctx.r11.u32 + 323, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,324(r10)
	REX_STORE_U8(ctx.r10.u32 + 324, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,325(r10)
	REX_STORE_U8(ctx.r10.u32 + 325, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,326(r10)
	REX_STORE_U8(ctx.r10.u32 + 326, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,327(r10)
	REX_STORE_U8(ctx.r10.u32 + 327, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,328(r10)
	REX_STORE_U8(ctx.r10.u32 + 328, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,329(r10)
	REX_STORE_U8(ctx.r10.u32 + 329, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,330(r10)
	REX_STORE_U8(ctx.r10.u32 + 330, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,331(r10)
	REX_STORE_U8(ctx.r10.u32 + 331, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,332(r10)
	REX_STORE_U8(ctx.r10.u32 + 332, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,333(r10)
	REX_STORE_U8(ctx.r10.u32 + 333, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,334(r10)
	REX_STORE_U8(ctx.r10.u32 + 334, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,335(r10)
	REX_STORE_U8(ctx.r10.u32 + 335, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,336(r11)
	REX_STORE_U8(ctx.r11.u32 + 336, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,337(r11)
	REX_STORE_U8(ctx.r11.u32 + 337, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,338(r11)
	REX_STORE_U8(ctx.r11.u32 + 338, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,339(r11)
	REX_STORE_U8(ctx.r11.u32 + 339, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,340(r10)
	REX_STORE_U8(ctx.r10.u32 + 340, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,341(r10)
	REX_STORE_U8(ctx.r10.u32 + 341, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,342(r10)
	REX_STORE_U8(ctx.r10.u32 + 342, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,343(r10)
	REX_STORE_U8(ctx.r10.u32 + 343, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,344(r10)
	REX_STORE_U8(ctx.r10.u32 + 344, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,345(r10)
	REX_STORE_U8(ctx.r10.u32 + 345, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,346(r10)
	REX_STORE_U8(ctx.r10.u32 + 346, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,347(r10)
	REX_STORE_U8(ctx.r10.u32 + 347, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,348(r10)
	REX_STORE_U8(ctx.r10.u32 + 348, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,349(r10)
	REX_STORE_U8(ctx.r10.u32 + 349, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,350(r10)
	REX_STORE_U8(ctx.r10.u32 + 350, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,351(r10)
	REX_STORE_U8(ctx.r10.u32 + 351, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,352(r11)
	REX_STORE_U8(ctx.r11.u32 + 352, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,353(r11)
	REX_STORE_U8(ctx.r11.u32 + 353, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,354(r11)
	REX_STORE_U8(ctx.r11.u32 + 354, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,355(r11)
	REX_STORE_U8(ctx.r11.u32 + 355, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,356(r10)
	REX_STORE_U8(ctx.r10.u32 + 356, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,357(r10)
	REX_STORE_U8(ctx.r10.u32 + 357, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,358(r10)
	REX_STORE_U8(ctx.r10.u32 + 358, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,359(r10)
	REX_STORE_U8(ctx.r10.u32 + 359, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,360(r10)
	REX_STORE_U8(ctx.r10.u32 + 360, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,361(r10)
	REX_STORE_U8(ctx.r10.u32 + 361, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,362(r10)
	REX_STORE_U8(ctx.r10.u32 + 362, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,363(r10)
	REX_STORE_U8(ctx.r10.u32 + 363, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,364(r10)
	REX_STORE_U8(ctx.r10.u32 + 364, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,365(r10)
	REX_STORE_U8(ctx.r10.u32 + 365, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,366(r10)
	REX_STORE_U8(ctx.r10.u32 + 366, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,367(r10)
	REX_STORE_U8(ctx.r10.u32 + 367, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,368(r10)
	REX_STORE_U8(ctx.r10.u32 + 368, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,369(r10)
	REX_STORE_U8(ctx.r10.u32 + 369, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,370(r10)
	REX_STORE_U8(ctx.r10.u32 + 370, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,371(r10)
	REX_STORE_U8(ctx.r10.u32 + 371, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,372(r11)
	REX_STORE_U8(ctx.r11.u32 + 372, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,373(r11)
	REX_STORE_U8(ctx.r11.u32 + 373, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,374(r11)
	REX_STORE_U8(ctx.r11.u32 + 374, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,375(r11)
	REX_STORE_U8(ctx.r11.u32 + 375, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,376(r10)
	REX_STORE_U8(ctx.r10.u32 + 376, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,377(r10)
	REX_STORE_U8(ctx.r10.u32 + 377, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,378(r10)
	REX_STORE_U8(ctx.r10.u32 + 378, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,379(r10)
	REX_STORE_U8(ctx.r10.u32 + 379, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,380(r10)
	REX_STORE_U8(ctx.r10.u32 + 380, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,381(r10)
	REX_STORE_U8(ctx.r10.u32 + 381, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,382(r10)
	REX_STORE_U8(ctx.r10.u32 + 382, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,383(r10)
	REX_STORE_U8(ctx.r10.u32 + 383, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,384(r10)
	REX_STORE_U8(ctx.r10.u32 + 384, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,385(r10)
	REX_STORE_U8(ctx.r10.u32 + 385, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,386(r10)
	REX_STORE_U8(ctx.r10.u32 + 386, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,387(r10)
	REX_STORE_U8(ctx.r10.u32 + 387, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,388(r11)
	REX_STORE_U8(ctx.r11.u32 + 388, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,389(r11)
	REX_STORE_U8(ctx.r11.u32 + 389, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,390(r11)
	REX_STORE_U8(ctx.r11.u32 + 390, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,391(r11)
	REX_STORE_U8(ctx.r11.u32 + 391, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,392(r10)
	REX_STORE_U8(ctx.r10.u32 + 392, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,393(r10)
	REX_STORE_U8(ctx.r10.u32 + 393, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,394(r10)
	REX_STORE_U8(ctx.r10.u32 + 394, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,395(r10)
	REX_STORE_U8(ctx.r10.u32 + 395, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,396(r10)
	REX_STORE_U8(ctx.r10.u32 + 396, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,397(r10)
	REX_STORE_U8(ctx.r10.u32 + 397, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,398(r10)
	REX_STORE_U8(ctx.r10.u32 + 398, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,399(r10)
	REX_STORE_U8(ctx.r10.u32 + 399, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,400(r10)
	REX_STORE_U8(ctx.r10.u32 + 400, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,401(r10)
	REX_STORE_U8(ctx.r10.u32 + 401, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,402(r10)
	REX_STORE_U8(ctx.r10.u32 + 402, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,762
	ctx.r11.s64 = ctx.r11.s64 + 762;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,403(r10)
	REX_STORE_U8(ctx.r10.u32 + 403, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,404(r11)
	REX_STORE_U8(ctx.r11.u32 + 404, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,405(r11)
	REX_STORE_U8(ctx.r11.u32 + 405, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,406(r11)
	REX_STORE_U8(ctx.r11.u32 + 406, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,407(r11)
	REX_STORE_U8(ctx.r11.u32 + 407, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,408(r10)
	REX_STORE_U8(ctx.r10.u32 + 408, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,409(r10)
	REX_STORE_U8(ctx.r10.u32 + 409, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,410(r10)
	REX_STORE_U8(ctx.r10.u32 + 410, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,411(r10)
	REX_STORE_U8(ctx.r10.u32 + 411, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,412(r10)
	REX_STORE_U8(ctx.r10.u32 + 412, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,413(r10)
	REX_STORE_U8(ctx.r10.u32 + 413, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,414(r10)
	REX_STORE_U8(ctx.r10.u32 + 414, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,415(r10)
	REX_STORE_U8(ctx.r10.u32 + 415, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,416(r10)
	REX_STORE_U8(ctx.r10.u32 + 416, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,417(r10)
	REX_STORE_U8(ctx.r10.u32 + 417, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,418(r10)
	REX_STORE_U8(ctx.r10.u32 + 418, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,806
	ctx.r11.s64 = ctx.r11.s64 + 806;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,419(r10)
	REX_STORE_U8(ctx.r10.u32 + 419, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,420(r11)
	REX_STORE_U8(ctx.r11.u32 + 420, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,421(r11)
	REX_STORE_U8(ctx.r11.u32 + 421, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,422(r11)
	REX_STORE_U8(ctx.r11.u32 + 422, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,423(r11)
	REX_STORE_U8(ctx.r11.u32 + 423, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,424(r10)
	REX_STORE_U8(ctx.r10.u32 + 424, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,425(r10)
	REX_STORE_U8(ctx.r10.u32 + 425, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,426(r10)
	REX_STORE_U8(ctx.r10.u32 + 426, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,427(r10)
	REX_STORE_U8(ctx.r10.u32 + 427, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,428(r10)
	REX_STORE_U8(ctx.r10.u32 + 428, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,429(r10)
	REX_STORE_U8(ctx.r10.u32 + 429, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,430(r10)
	REX_STORE_U8(ctx.r10.u32 + 430, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,431(r10)
	REX_STORE_U8(ctx.r10.u32 + 431, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,432(r10)
	REX_STORE_U8(ctx.r10.u32 + 432, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,433(r10)
	REX_STORE_U8(ctx.r10.u32 + 433, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,434(r10)
	REX_STORE_U8(ctx.r10.u32 + 434, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,850
	ctx.r11.s64 = ctx.r11.s64 + 850;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,435(r10)
	REX_STORE_U8(ctx.r10.u32 + 435, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,436(r11)
	REX_STORE_U8(ctx.r11.u32 + 436, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,437(r11)
	REX_STORE_U8(ctx.r11.u32 + 437, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,438(r11)
	REX_STORE_U8(ctx.r11.u32 + 438, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,439(r11)
	REX_STORE_U8(ctx.r11.u32 + 439, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,440(r10)
	REX_STORE_U8(ctx.r10.u32 + 440, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,441(r10)
	REX_STORE_U8(ctx.r10.u32 + 441, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,442(r10)
	REX_STORE_U8(ctx.r10.u32 + 442, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,443(r10)
	REX_STORE_U8(ctx.r10.u32 + 443, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,444(r10)
	REX_STORE_U8(ctx.r10.u32 + 444, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,445(r10)
	REX_STORE_U8(ctx.r10.u32 + 445, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,446(r10)
	REX_STORE_U8(ctx.r10.u32 + 446, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,447(r10)
	REX_STORE_U8(ctx.r10.u32 + 447, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,448(r10)
	REX_STORE_U8(ctx.r10.u32 + 448, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,449(r10)
	REX_STORE_U8(ctx.r10.u32 + 449, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,450(r10)
	REX_STORE_U8(ctx.r10.u32 + 450, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,451(r10)
	REX_STORE_U8(ctx.r10.u32 + 451, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,452(r11)
	REX_STORE_U8(ctx.r11.u32 + 452, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,453(r11)
	REX_STORE_U8(ctx.r11.u32 + 453, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,454(r11)
	REX_STORE_U8(ctx.r11.u32 + 454, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,455(r11)
	REX_STORE_U8(ctx.r11.u32 + 455, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,456(r10)
	REX_STORE_U8(ctx.r10.u32 + 456, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,457(r10)
	REX_STORE_U8(ctx.r10.u32 + 457, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,458(r10)
	REX_STORE_U8(ctx.r10.u32 + 458, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,459(r10)
	REX_STORE_U8(ctx.r10.u32 + 459, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,460(r10)
	REX_STORE_U8(ctx.r10.u32 + 460, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,461(r10)
	REX_STORE_U8(ctx.r10.u32 + 461, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,462(r10)
	REX_STORE_U8(ctx.r10.u32 + 462, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,463(r10)
	REX_STORE_U8(ctx.r10.u32 + 463, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,464(r10)
	REX_STORE_U8(ctx.r10.u32 + 464, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,465(r10)
	REX_STORE_U8(ctx.r10.u32 + 465, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,466(r10)
	REX_STORE_U8(ctx.r10.u32 + 466, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,938
	ctx.r11.s64 = ctx.r11.s64 + 938;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,467(r10)
	REX_STORE_U8(ctx.r10.u32 + 467, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,469(r11)
	REX_STORE_U8(ctx.r11.u32 + 469, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,470(r11)
	REX_STORE_U8(ctx.r11.u32 + 470, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,471(r11)
	REX_STORE_U8(ctx.r11.u32 + 471, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,472(r10)
	REX_STORE_U8(ctx.r10.u32 + 472, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,473(r10)
	REX_STORE_U8(ctx.r10.u32 + 473, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,474(r10)
	REX_STORE_U8(ctx.r10.u32 + 474, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,475(r10)
	REX_STORE_U8(ctx.r10.u32 + 475, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,476(r10)
	REX_STORE_U8(ctx.r10.u32 + 476, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,477(r10)
	REX_STORE_U8(ctx.r10.u32 + 477, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,478(r10)
	REX_STORE_U8(ctx.r10.u32 + 478, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,479(r10)
	REX_STORE_U8(ctx.r10.u32 + 479, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,480(r10)
	REX_STORE_U8(ctx.r10.u32 + 480, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,481(r10)
	REX_STORE_U8(ctx.r10.u32 + 481, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,482(r10)
	REX_STORE_U8(ctx.r10.u32 + 482, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,483(r10)
	REX_STORE_U8(ctx.r10.u32 + 483, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,484(r11)
	REX_STORE_U8(ctx.r11.u32 + 484, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,485(r11)
	REX_STORE_U8(ctx.r11.u32 + 485, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,486(r11)
	REX_STORE_U8(ctx.r11.u32 + 486, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,487(r11)
	REX_STORE_U8(ctx.r11.u32 + 487, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,488(r10)
	REX_STORE_U8(ctx.r10.u32 + 488, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,489(r10)
	REX_STORE_U8(ctx.r10.u32 + 489, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,490(r10)
	REX_STORE_U8(ctx.r10.u32 + 490, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,491(r10)
	REX_STORE_U8(ctx.r10.u32 + 491, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,492(r10)
	REX_STORE_U8(ctx.r10.u32 + 492, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,493(r10)
	REX_STORE_U8(ctx.r10.u32 + 493, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,494(r10)
	REX_STORE_U8(ctx.r10.u32 + 494, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,495(r10)
	REX_STORE_U8(ctx.r10.u32 + 495, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,496(r10)
	REX_STORE_U8(ctx.r10.u32 + 496, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,497(r10)
	REX_STORE_U8(ctx.r10.u32 + 497, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,498(r10)
	REX_STORE_U8(ctx.r10.u32 + 498, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,499(r10)
	REX_STORE_U8(ctx.r10.u32 + 499, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,500(r11)
	REX_STORE_U8(ctx.r11.u32 + 500, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,501(r11)
	REX_STORE_U8(ctx.r11.u32 + 501, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,502(r11)
	REX_STORE_U8(ctx.r11.u32 + 502, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,503(r11)
	REX_STORE_U8(ctx.r11.u32 + 503, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,504(r10)
	REX_STORE_U8(ctx.r10.u32 + 504, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,505(r10)
	REX_STORE_U8(ctx.r10.u32 + 505, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,506(r10)
	REX_STORE_U8(ctx.r10.u32 + 506, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,507(r10)
	REX_STORE_U8(ctx.r10.u32 + 507, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,508(r10)
	REX_STORE_U8(ctx.r10.u32 + 508, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,509(r10)
	REX_STORE_U8(ctx.r10.u32 + 509, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,510(r10)
	REX_STORE_U8(ctx.r10.u32 + 510, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,511(r10)
	REX_STORE_U8(ctx.r10.u32 + 511, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,512(r10)
	REX_STORE_U8(ctx.r10.u32 + 512, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,513(r10)
	REX_STORE_U8(ctx.r10.u32 + 513, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,514(r10)
	REX_STORE_U8(ctx.r10.u32 + 514, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,515(r10)
	REX_STORE_U8(ctx.r10.u32 + 515, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,516(r10)
	REX_STORE_U8(ctx.r10.u32 + 516, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,517(r10)
	REX_STORE_U8(ctx.r10.u32 + 517, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,518(r10)
	REX_STORE_U8(ctx.r10.u32 + 518, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,1832
	ctx.r10.s64 = ctx.r10.s64 + 1832;
	// stb r11,519(r10)
	REX_STORE_U8(ctx.r10.u32 + 519, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,520(r11)
	REX_STORE_U8(ctx.r11.u32 + 520, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,521(r11)
	REX_STORE_U8(ctx.r11.u32 + 521, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,522(r11)
	REX_STORE_U8(ctx.r11.u32 + 522, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,523(r11)
	REX_STORE_U8(ctx.r11.u32 + 523, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,524(r11)
	REX_STORE_U8(ctx.r11.u32 + 524, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,525(r11)
	REX_STORE_U8(ctx.r11.u32 + 525, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,526(r11)
	REX_STORE_U8(ctx.r11.u32 + 526, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,527(r11)
	REX_STORE_U8(ctx.r11.u32 + 527, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,528(r11)
	REX_STORE_U8(ctx.r11.u32 + 528, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-10
	ctx.r10.s64 = -10;
	// stb r10,529(r11)
	REX_STORE_U8(ctx.r11.u32 + 529, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,530(r11)
	REX_STORE_U8(ctx.r11.u32 + 530, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r10,531(r11)
	REX_STORE_U8(ctx.r11.u32 + 531, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,532(r11)
	REX_STORE_U8(ctx.r11.u32 + 532, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,533(r11)
	REX_STORE_U8(ctx.r11.u32 + 533, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,534(r11)
	REX_STORE_U8(ctx.r11.u32 + 534, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,535(r11)
	REX_STORE_U8(ctx.r11.u32 + 535, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,536(r11)
	REX_STORE_U8(ctx.r11.u32 + 536, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,537(r11)
	REX_STORE_U8(ctx.r11.u32 + 537, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,538(r11)
	REX_STORE_U8(ctx.r11.u32 + 538, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,539(r11)
	REX_STORE_U8(ctx.r11.u32 + 539, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,540(r11)
	REX_STORE_U8(ctx.r11.u32 + 540, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-10
	ctx.r10.s64 = -10;
	// stb r10,541(r11)
	REX_STORE_U8(ctx.r11.u32 + 541, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,542(r11)
	REX_STORE_U8(ctx.r11.u32 + 542, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r10,543(r11)
	REX_STORE_U8(ctx.r11.u32 + 543, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,544(r11)
	REX_STORE_U8(ctx.r11.u32 + 544, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,545(r11)
	REX_STORE_U8(ctx.r11.u32 + 545, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,546(r11)
	REX_STORE_U8(ctx.r11.u32 + 546, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,547(r11)
	REX_STORE_U8(ctx.r11.u32 + 547, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,548(r11)
	REX_STORE_U8(ctx.r11.u32 + 548, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,549(r11)
	REX_STORE_U8(ctx.r11.u32 + 549, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,550(r11)
	REX_STORE_U8(ctx.r11.u32 + 550, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,551(r11)
	REX_STORE_U8(ctx.r11.u32 + 551, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,552(r11)
	REX_STORE_U8(ctx.r11.u32 + 552, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-2
	ctx.r10.s64 = -2;
	// stb r10,553(r11)
	REX_STORE_U8(ctx.r11.u32 + 553, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,554(r11)
	REX_STORE_U8(ctx.r11.u32 + 554, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r10,555(r11)
	REX_STORE_U8(ctx.r11.u32 + 555, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,557(r11)
	REX_STORE_U8(ctx.r11.u32 + 557, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,558(r11)
	REX_STORE_U8(ctx.r11.u32 + 558, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,559(r11)
	REX_STORE_U8(ctx.r11.u32 + 559, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,560(r11)
	REX_STORE_U8(ctx.r11.u32 + 560, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,561(r11)
	REX_STORE_U8(ctx.r11.u32 + 561, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,562(r11)
	REX_STORE_U8(ctx.r11.u32 + 562, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,563(r11)
	REX_STORE_U8(ctx.r11.u32 + 563, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,564(r11)
	REX_STORE_U8(ctx.r11.u32 + 564, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,565(r11)
	REX_STORE_U8(ctx.r11.u32 + 565, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,566(r11)
	REX_STORE_U8(ctx.r11.u32 + 566, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r10,567(r11)
	REX_STORE_U8(ctx.r11.u32 + 567, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,568(r11)
	REX_STORE_U8(ctx.r11.u32 + 568, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,570(r11)
	REX_STORE_U8(ctx.r11.u32 + 570, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,571(r11)
	REX_STORE_U8(ctx.r11.u32 + 571, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,572(r11)
	REX_STORE_U8(ctx.r11.u32 + 572, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,573(r11)
	REX_STORE_U8(ctx.r11.u32 + 573, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,574(r11)
	REX_STORE_U8(ctx.r11.u32 + 574, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,575(r11)
	REX_STORE_U8(ctx.r11.u32 + 575, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,576(r11)
	REX_STORE_U8(ctx.r11.u32 + 576, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r10,577(r11)
	REX_STORE_U8(ctx.r11.u32 + 577, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,578(r11)
	REX_STORE_U8(ctx.r11.u32 + 578, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r10,579(r11)
	REX_STORE_U8(ctx.r11.u32 + 579, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,580(r11)
	REX_STORE_U8(ctx.r11.u32 + 580, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,581(r11)
	REX_STORE_U8(ctx.r11.u32 + 581, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,582(r11)
	REX_STORE_U8(ctx.r11.u32 + 582, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,583(r11)
	REX_STORE_U8(ctx.r11.u32 + 583, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,585(r11)
	REX_STORE_U8(ctx.r11.u32 + 585, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,586(r11)
	REX_STORE_U8(ctx.r11.u32 + 586, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,587(r11)
	REX_STORE_U8(ctx.r11.u32 + 587, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,588(r11)
	REX_STORE_U8(ctx.r11.u32 + 588, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,18
	ctx.r10.s64 = 18;
	// stb r10,589(r11)
	REX_STORE_U8(ctx.r11.u32 + 589, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,590(r11)
	REX_STORE_U8(ctx.r11.u32 + 590, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r10,591(r11)
	REX_STORE_U8(ctx.r11.u32 + 591, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,592(r11)
	REX_STORE_U8(ctx.r11.u32 + 592, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,593(r11)
	REX_STORE_U8(ctx.r11.u32 + 593, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,594(r11)
	REX_STORE_U8(ctx.r11.u32 + 594, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,595(r11)
	REX_STORE_U8(ctx.r11.u32 + 595, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,596(r11)
	REX_STORE_U8(ctx.r11.u32 + 596, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,597(r11)
	REX_STORE_U8(ctx.r11.u32 + 597, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,598(r11)
	REX_STORE_U8(ctx.r11.u32 + 598, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,599(r11)
	REX_STORE_U8(ctx.r11.u32 + 599, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,600(r11)
	REX_STORE_U8(ctx.r11.u32 + 600, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r10,601(r11)
	REX_STORE_U8(ctx.r11.u32 + 601, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,602(r11)
	REX_STORE_U8(ctx.r11.u32 + 602, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,603(r11)
	REX_STORE_U8(ctx.r11.u32 + 603, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,604(r11)
	REX_STORE_U8(ctx.r11.u32 + 604, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,605(r11)
	REX_STORE_U8(ctx.r11.u32 + 605, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,606(r11)
	REX_STORE_U8(ctx.r11.u32 + 606, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,607(r11)
	REX_STORE_U8(ctx.r11.u32 + 607, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,608(r11)
	REX_STORE_U8(ctx.r11.u32 + 608, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,609(r11)
	REX_STORE_U8(ctx.r11.u32 + 609, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,610(r11)
	REX_STORE_U8(ctx.r11.u32 + 610, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,611(r11)
	REX_STORE_U8(ctx.r11.u32 + 611, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,612(r11)
	REX_STORE_U8(ctx.r11.u32 + 612, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-4
	ctx.r10.s64 = -4;
	// stb r10,613(r11)
	REX_STORE_U8(ctx.r11.u32 + 613, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,614(r11)
	REX_STORE_U8(ctx.r11.u32 + 614, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,615(r11)
	REX_STORE_U8(ctx.r11.u32 + 615, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,616(r11)
	REX_STORE_U8(ctx.r11.u32 + 616, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-3
	ctx.r10.s64 = -3;
	// stb r10,617(r11)
	REX_STORE_U8(ctx.r11.u32 + 617, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,618(r11)
	REX_STORE_U8(ctx.r11.u32 + 618, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,619(r11)
	REX_STORE_U8(ctx.r11.u32 + 619, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,620(r11)
	REX_STORE_U8(ctx.r11.u32 + 620, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,621(r11)
	REX_STORE_U8(ctx.r11.u32 + 621, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,622(r11)
	REX_STORE_U8(ctx.r11.u32 + 622, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,623(r11)
	REX_STORE_U8(ctx.r11.u32 + 623, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,624(r11)
	REX_STORE_U8(ctx.r11.u32 + 624, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,625(r11)
	REX_STORE_U8(ctx.r11.u32 + 625, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,626(r11)
	REX_STORE_U8(ctx.r11.u32 + 626, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,627(r11)
	REX_STORE_U8(ctx.r11.u32 + 627, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,628(r11)
	REX_STORE_U8(ctx.r11.u32 + 628, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-4
	ctx.r10.s64 = -4;
	// stb r10,629(r11)
	REX_STORE_U8(ctx.r11.u32 + 629, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,630(r11)
	REX_STORE_U8(ctx.r11.u32 + 630, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,631(r11)
	REX_STORE_U8(ctx.r11.u32 + 631, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,632(r11)
	REX_STORE_U8(ctx.r11.u32 + 632, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-3
	ctx.r10.s64 = -3;
	// stb r10,633(r11)
	REX_STORE_U8(ctx.r11.u32 + 633, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,634(r11)
	REX_STORE_U8(ctx.r11.u32 + 634, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,635(r11)
	REX_STORE_U8(ctx.r11.u32 + 635, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,636(r11)
	REX_STORE_U8(ctx.r11.u32 + 636, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,637(r11)
	REX_STORE_U8(ctx.r11.u32 + 637, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,638(r11)
	REX_STORE_U8(ctx.r11.u32 + 638, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,639(r11)
	REX_STORE_U8(ctx.r11.u32 + 639, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,640(r11)
	REX_STORE_U8(ctx.r11.u32 + 640, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,641(r11)
	REX_STORE_U8(ctx.r11.u32 + 641, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,642(r11)
	REX_STORE_U8(ctx.r11.u32 + 642, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,643(r11)
	REX_STORE_U8(ctx.r11.u32 + 643, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,644(r11)
	REX_STORE_U8(ctx.r11.u32 + 644, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,645(r11)
	REX_STORE_U8(ctx.r11.u32 + 645, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,646(r11)
	REX_STORE_U8(ctx.r11.u32 + 646, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r10,647(r11)
	REX_STORE_U8(ctx.r11.u32 + 647, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,648(r11)
	REX_STORE_U8(ctx.r11.u32 + 648, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,649(r11)
	REX_STORE_U8(ctx.r11.u32 + 649, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,650(r11)
	REX_STORE_U8(ctx.r11.u32 + 650, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r10,651(r11)
	REX_STORE_U8(ctx.r11.u32 + 651, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,652(r11)
	REX_STORE_U8(ctx.r11.u32 + 652, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,653(r11)
	REX_STORE_U8(ctx.r11.u32 + 653, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,654(r11)
	REX_STORE_U8(ctx.r11.u32 + 654, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,655(r11)
	REX_STORE_U8(ctx.r11.u32 + 655, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,656(r11)
	REX_STORE_U8(ctx.r11.u32 + 656, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,657(r11)
	REX_STORE_U8(ctx.r11.u32 + 657, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,658(r11)
	REX_STORE_U8(ctx.r11.u32 + 658, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,659(r11)
	REX_STORE_U8(ctx.r11.u32 + 659, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,660(r11)
	REX_STORE_U8(ctx.r11.u32 + 660, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,661(r11)
	REX_STORE_U8(ctx.r11.u32 + 661, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,662(r11)
	REX_STORE_U8(ctx.r11.u32 + 662, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,663(r11)
	REX_STORE_U8(ctx.r11.u32 + 663, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,664(r11)
	REX_STORE_U8(ctx.r11.u32 + 664, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,665(r11)
	REX_STORE_U8(ctx.r11.u32 + 665, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,666(r11)
	REX_STORE_U8(ctx.r11.u32 + 666, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,667(r11)
	REX_STORE_U8(ctx.r11.u32 + 667, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,668(r11)
	REX_STORE_U8(ctx.r11.u32 + 668, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,669(r11)
	REX_STORE_U8(ctx.r11.u32 + 669, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,670(r11)
	REX_STORE_U8(ctx.r11.u32 + 670, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,671(r11)
	REX_STORE_U8(ctx.r11.u32 + 671, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,672(r11)
	REX_STORE_U8(ctx.r11.u32 + 672, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,673(r11)
	REX_STORE_U8(ctx.r11.u32 + 673, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,674(r11)
	REX_STORE_U8(ctx.r11.u32 + 674, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,675(r11)
	REX_STORE_U8(ctx.r11.u32 + 675, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,676(r11)
	REX_STORE_U8(ctx.r11.u32 + 676, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r10,677(r11)
	REX_STORE_U8(ctx.r11.u32 + 677, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,678(r11)
	REX_STORE_U8(ctx.r11.u32 + 678, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r10,679(r11)
	REX_STORE_U8(ctx.r11.u32 + 679, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,680(r11)
	REX_STORE_U8(ctx.r11.u32 + 680, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,681(r11)
	REX_STORE_U8(ctx.r11.u32 + 681, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,682(r11)
	REX_STORE_U8(ctx.r11.u32 + 682, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r10,683(r11)
	REX_STORE_U8(ctx.r11.u32 + 683, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,684(r11)
	REX_STORE_U8(ctx.r11.u32 + 684, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,685(r11)
	REX_STORE_U8(ctx.r11.u32 + 685, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,686(r11)
	REX_STORE_U8(ctx.r11.u32 + 686, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,687(r11)
	REX_STORE_U8(ctx.r11.u32 + 687, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,688(r11)
	REX_STORE_U8(ctx.r11.u32 + 688, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,689(r11)
	REX_STORE_U8(ctx.r11.u32 + 689, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,690(r11)
	REX_STORE_U8(ctx.r11.u32 + 690, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,691(r11)
	REX_STORE_U8(ctx.r11.u32 + 691, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,692(r11)
	REX_STORE_U8(ctx.r11.u32 + 692, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,693(r11)
	REX_STORE_U8(ctx.r11.u32 + 693, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,694(r11)
	REX_STORE_U8(ctx.r11.u32 + 694, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,695(r11)
	REX_STORE_U8(ctx.r11.u32 + 695, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,696(r11)
	REX_STORE_U8(ctx.r11.u32 + 696, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,697(r11)
	REX_STORE_U8(ctx.r11.u32 + 697, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,698(r11)
	REX_STORE_U8(ctx.r11.u32 + 698, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,699(r11)
	REX_STORE_U8(ctx.r11.u32 + 699, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,700(r11)
	REX_STORE_U8(ctx.r11.u32 + 700, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,701(r11)
	REX_STORE_U8(ctx.r11.u32 + 701, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,702(r11)
	REX_STORE_U8(ctx.r11.u32 + 702, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,703(r11)
	REX_STORE_U8(ctx.r11.u32 + 703, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,704(r11)
	REX_STORE_U8(ctx.r11.u32 + 704, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,705(r11)
	REX_STORE_U8(ctx.r11.u32 + 705, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,706(r11)
	REX_STORE_U8(ctx.r11.u32 + 706, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,707(r11)
	REX_STORE_U8(ctx.r11.u32 + 707, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,708(r11)
	REX_STORE_U8(ctx.r11.u32 + 708, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r10,709(r11)
	REX_STORE_U8(ctx.r11.u32 + 709, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,710(r11)
	REX_STORE_U8(ctx.r11.u32 + 710, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,23
	ctx.r10.s64 = 23;
	// stb r10,711(r11)
	REX_STORE_U8(ctx.r11.u32 + 711, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,712(r11)
	REX_STORE_U8(ctx.r11.u32 + 712, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,23
	ctx.r10.s64 = 23;
	// stb r10,713(r11)
	REX_STORE_U8(ctx.r11.u32 + 713, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,714(r11)
	REX_STORE_U8(ctx.r11.u32 + 714, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,23
	ctx.r10.s64 = 23;
	// stb r10,715(r11)
	REX_STORE_U8(ctx.r11.u32 + 715, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,716(r11)
	REX_STORE_U8(ctx.r11.u32 + 716, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,717(r11)
	REX_STORE_U8(ctx.r11.u32 + 717, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,718(r11)
	REX_STORE_U8(ctx.r11.u32 + 718, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,719(r11)
	REX_STORE_U8(ctx.r11.u32 + 719, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,720(r11)
	REX_STORE_U8(ctx.r11.u32 + 720, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,721(r11)
	REX_STORE_U8(ctx.r11.u32 + 721, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,722(r11)
	REX_STORE_U8(ctx.r11.u32 + 722, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,723(r11)
	REX_STORE_U8(ctx.r11.u32 + 723, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,724(r11)
	REX_STORE_U8(ctx.r11.u32 + 724, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,725(r11)
	REX_STORE_U8(ctx.r11.u32 + 725, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,726(r11)
	REX_STORE_U8(ctx.r11.u32 + 726, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,727(r11)
	REX_STORE_U8(ctx.r11.u32 + 727, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,728(r11)
	REX_STORE_U8(ctx.r11.u32 + 728, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-14
	ctx.r10.s64 = -14;
	// stb r10,729(r11)
	REX_STORE_U8(ctx.r11.u32 + 729, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,730(r11)
	REX_STORE_U8(ctx.r11.u32 + 730, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,731(r11)
	REX_STORE_U8(ctx.r11.u32 + 731, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,732(r11)
	REX_STORE_U8(ctx.r11.u32 + 732, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-7
	ctx.r10.s64 = -7;
	// stb r10,733(r11)
	REX_STORE_U8(ctx.r11.u32 + 733, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,734(r11)
	REX_STORE_U8(ctx.r11.u32 + 734, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,735(r11)
	REX_STORE_U8(ctx.r11.u32 + 735, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,736(r11)
	REX_STORE_U8(ctx.r11.u32 + 736, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-19
	ctx.r10.s64 = -19;
	// stb r10,737(r11)
	REX_STORE_U8(ctx.r11.u32 + 737, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,738(r11)
	REX_STORE_U8(ctx.r11.u32 + 738, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,739(r11)
	REX_STORE_U8(ctx.r11.u32 + 739, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,740(r11)
	REX_STORE_U8(ctx.r11.u32 + 740, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-13
	ctx.r10.s64 = -13;
	// stb r10,741(r11)
	REX_STORE_U8(ctx.r11.u32 + 741, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,742(r11)
	REX_STORE_U8(ctx.r11.u32 + 742, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,743(r11)
	REX_STORE_U8(ctx.r11.u32 + 743, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,744(r11)
	REX_STORE_U8(ctx.r11.u32 + 744, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-6
	ctx.r10.s64 = -6;
	// stb r10,745(r11)
	REX_STORE_U8(ctx.r11.u32 + 745, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,746(r11)
	REX_STORE_U8(ctx.r11.u32 + 746, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,747(r11)
	REX_STORE_U8(ctx.r11.u32 + 747, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,748(r11)
	REX_STORE_U8(ctx.r11.u32 + 748, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-18
	ctx.r10.s64 = -18;
	// stb r10,749(r11)
	REX_STORE_U8(ctx.r11.u32 + 749, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,750(r11)
	REX_STORE_U8(ctx.r11.u32 + 750, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,751(r11)
	REX_STORE_U8(ctx.r11.u32 + 751, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,752(r11)
	REX_STORE_U8(ctx.r11.u32 + 752, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-12
	ctx.r10.s64 = -12;
	// stb r10,753(r11)
	REX_STORE_U8(ctx.r11.u32 + 753, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,754(r11)
	REX_STORE_U8(ctx.r11.u32 + 754, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,755(r11)
	REX_STORE_U8(ctx.r11.u32 + 755, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,756(r11)
	REX_STORE_U8(ctx.r11.u32 + 756, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-5
	ctx.r10.s64 = -5;
	// stb r10,757(r11)
	REX_STORE_U8(ctx.r11.u32 + 757, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,758(r11)
	REX_STORE_U8(ctx.r11.u32 + 758, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,759(r11)
	REX_STORE_U8(ctx.r11.u32 + 759, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,760(r11)
	REX_STORE_U8(ctx.r11.u32 + 760, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,761(r11)
	REX_STORE_U8(ctx.r11.u32 + 761, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,762(r11)
	REX_STORE_U8(ctx.r11.u32 + 762, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,763(r11)
	REX_STORE_U8(ctx.r11.u32 + 763, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,764(r11)
	REX_STORE_U8(ctx.r11.u32 + 764, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,765(r11)
	REX_STORE_U8(ctx.r11.u32 + 765, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,766(r11)
	REX_STORE_U8(ctx.r11.u32 + 766, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,767(r11)
	REX_STORE_U8(ctx.r11.u32 + 767, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,768(r11)
	REX_STORE_U8(ctx.r11.u32 + 768, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,769(r11)
	REX_STORE_U8(ctx.r11.u32 + 769, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,770(r11)
	REX_STORE_U8(ctx.r11.u32 + 770, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,771(r11)
	REX_STORE_U8(ctx.r11.u32 + 771, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,772(r11)
	REX_STORE_U8(ctx.r11.u32 + 772, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,773(r11)
	REX_STORE_U8(ctx.r11.u32 + 773, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,774(r11)
	REX_STORE_U8(ctx.r11.u32 + 774, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,775(r11)
	REX_STORE_U8(ctx.r11.u32 + 775, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,776(r11)
	REX_STORE_U8(ctx.r11.u32 + 776, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-7
	ctx.r10.s64 = -7;
	// stb r10,777(r11)
	REX_STORE_U8(ctx.r11.u32 + 777, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,778(r11)
	REX_STORE_U8(ctx.r11.u32 + 778, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,779(r11)
	REX_STORE_U8(ctx.r11.u32 + 779, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,780(r11)
	REX_STORE_U8(ctx.r11.u32 + 780, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,29
	ctx.r10.s64 = 29;
	// stb r10,781(r11)
	REX_STORE_U8(ctx.r11.u32 + 781, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,782(r11)
	REX_STORE_U8(ctx.r11.u32 + 782, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,783(r11)
	REX_STORE_U8(ctx.r11.u32 + 783, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,784(r11)
	REX_STORE_U8(ctx.r11.u32 + 784, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,785(r11)
	REX_STORE_U8(ctx.r11.u32 + 785, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,786(r11)
	REX_STORE_U8(ctx.r11.u32 + 786, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,787(r11)
	REX_STORE_U8(ctx.r11.u32 + 787, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,788(r11)
	REX_STORE_U8(ctx.r11.u32 + 788, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-6
	ctx.r10.s64 = -6;
	// stb r10,789(r11)
	REX_STORE_U8(ctx.r11.u32 + 789, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,790(r11)
	REX_STORE_U8(ctx.r11.u32 + 790, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,791(r11)
	REX_STORE_U8(ctx.r11.u32 + 791, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,792(r11)
	REX_STORE_U8(ctx.r11.u32 + 792, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,30
	ctx.r10.s64 = 30;
	// stb r10,793(r11)
	REX_STORE_U8(ctx.r11.u32 + 793, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,794(r11)
	REX_STORE_U8(ctx.r11.u32 + 794, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,795(r11)
	REX_STORE_U8(ctx.r11.u32 + 795, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,796(r11)
	REX_STORE_U8(ctx.r11.u32 + 796, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,34
	ctx.r10.s64 = 34;
	// stb r10,797(r11)
	REX_STORE_U8(ctx.r11.u32 + 797, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,798(r11)
	REX_STORE_U8(ctx.r11.u32 + 798, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,799(r11)
	REX_STORE_U8(ctx.r11.u32 + 799, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,800(r11)
	REX_STORE_U8(ctx.r11.u32 + 800, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,801(r11)
	REX_STORE_U8(ctx.r11.u32 + 801, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,802(r11)
	REX_STORE_U8(ctx.r11.u32 + 802, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,803(r11)
	REX_STORE_U8(ctx.r11.u32 + 803, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,804(r11)
	REX_STORE_U8(ctx.r11.u32 + 804, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,805(r11)
	REX_STORE_U8(ctx.r11.u32 + 805, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,806(r11)
	REX_STORE_U8(ctx.r11.u32 + 806, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,807(r11)
	REX_STORE_U8(ctx.r11.u32 + 807, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,808(r11)
	REX_STORE_U8(ctx.r11.u32 + 808, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,809(r11)
	REX_STORE_U8(ctx.r11.u32 + 809, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,810(r11)
	REX_STORE_U8(ctx.r11.u32 + 810, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,811(r11)
	REX_STORE_U8(ctx.r11.u32 + 811, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,812(r11)
	REX_STORE_U8(ctx.r11.u32 + 812, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,813(r11)
	REX_STORE_U8(ctx.r11.u32 + 813, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,814(r11)
	REX_STORE_U8(ctx.r11.u32 + 814, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,815(r11)
	REX_STORE_U8(ctx.r11.u32 + 815, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,816(r11)
	REX_STORE_U8(ctx.r11.u32 + 816, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,35
	ctx.r10.s64 = 35;
	// stb r10,817(r11)
	REX_STORE_U8(ctx.r11.u32 + 817, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,818(r11)
	REX_STORE_U8(ctx.r11.u32 + 818, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,819(r11)
	REX_STORE_U8(ctx.r11.u32 + 819, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,820(r11)
	REX_STORE_U8(ctx.r11.u32 + 820, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-7
	ctx.r10.s64 = -7;
	// stb r10,821(r11)
	REX_STORE_U8(ctx.r11.u32 + 821, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,822(r11)
	REX_STORE_U8(ctx.r11.u32 + 822, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,823(r11)
	REX_STORE_U8(ctx.r11.u32 + 823, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,824(r11)
	REX_STORE_U8(ctx.r11.u32 + 824, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,31
	ctx.r10.s64 = 31;
	// stb r10,825(r11)
	REX_STORE_U8(ctx.r11.u32 + 825, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,826(r11)
	REX_STORE_U8(ctx.r11.u32 + 826, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,827(r11)
	REX_STORE_U8(ctx.r11.u32 + 827, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,828(r11)
	REX_STORE_U8(ctx.r11.u32 + 828, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,36
	ctx.r10.s64 = 36;
	// stb r10,829(r11)
	REX_STORE_U8(ctx.r11.u32 + 829, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,830(r11)
	REX_STORE_U8(ctx.r11.u32 + 830, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,831(r11)
	REX_STORE_U8(ctx.r11.u32 + 831, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,832(r11)
	REX_STORE_U8(ctx.r11.u32 + 832, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-6
	ctx.r10.s64 = -6;
	// stb r10,833(r11)
	REX_STORE_U8(ctx.r11.u32 + 833, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,834(r11)
	REX_STORE_U8(ctx.r11.u32 + 834, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,835(r11)
	REX_STORE_U8(ctx.r11.u32 + 835, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,836(r11)
	REX_STORE_U8(ctx.r11.u32 + 836, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,50
	ctx.r10.s64 = 50;
	// stb r10,837(r11)
	REX_STORE_U8(ctx.r11.u32 + 837, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,838(r11)
	REX_STORE_U8(ctx.r11.u32 + 838, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,839(r11)
	REX_STORE_U8(ctx.r11.u32 + 839, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,840(r11)
	REX_STORE_U8(ctx.r11.u32 + 840, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,52
	ctx.r10.s64 = 52;
	// stb r10,841(r11)
	REX_STORE_U8(ctx.r11.u32 + 841, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,842(r11)
	REX_STORE_U8(ctx.r11.u32 + 842, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,843(r11)
	REX_STORE_U8(ctx.r11.u32 + 843, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,844(r11)
	REX_STORE_U8(ctx.r11.u32 + 844, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,845(r11)
	REX_STORE_U8(ctx.r11.u32 + 845, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,846(r11)
	REX_STORE_U8(ctx.r11.u32 + 846, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,847(r11)
	REX_STORE_U8(ctx.r11.u32 + 847, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,848(r11)
	REX_STORE_U8(ctx.r11.u32 + 848, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,849(r11)
	REX_STORE_U8(ctx.r11.u32 + 849, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,850(r11)
	REX_STORE_U8(ctx.r11.u32 + 850, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,851(r11)
	REX_STORE_U8(ctx.r11.u32 + 851, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,852(r11)
	REX_STORE_U8(ctx.r11.u32 + 852, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,853(r11)
	REX_STORE_U8(ctx.r11.u32 + 853, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,854(r11)
	REX_STORE_U8(ctx.r11.u32 + 854, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,855(r11)
	REX_STORE_U8(ctx.r11.u32 + 855, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,856(r11)
	REX_STORE_U8(ctx.r11.u32 + 856, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,857(r11)
	REX_STORE_U8(ctx.r11.u32 + 857, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,858(r11)
	REX_STORE_U8(ctx.r11.u32 + 858, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,859(r11)
	REX_STORE_U8(ctx.r11.u32 + 859, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,860(r11)
	REX_STORE_U8(ctx.r11.u32 + 860, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,46
	ctx.r10.s64 = 46;
	// stb r10,861(r11)
	REX_STORE_U8(ctx.r11.u32 + 861, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,862(r11)
	REX_STORE_U8(ctx.r11.u32 + 862, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,863(r11)
	REX_STORE_U8(ctx.r11.u32 + 863, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,864(r11)
	REX_STORE_U8(ctx.r11.u32 + 864, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-7
	ctx.r10.s64 = -7;
	// stb r10,865(r11)
	REX_STORE_U8(ctx.r11.u32 + 865, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,866(r11)
	REX_STORE_U8(ctx.r11.u32 + 866, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,867(r11)
	REX_STORE_U8(ctx.r11.u32 + 867, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,868(r11)
	REX_STORE_U8(ctx.r11.u32 + 868, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,51
	ctx.r10.s64 = 51;
	// stb r10,869(r11)
	REX_STORE_U8(ctx.r11.u32 + 869, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,870(r11)
	REX_STORE_U8(ctx.r11.u32 + 870, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,871(r11)
	REX_STORE_U8(ctx.r11.u32 + 871, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,872(r11)
	REX_STORE_U8(ctx.r11.u32 + 872, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,53
	ctx.r10.s64 = 53;
	// stb r10,873(r11)
	REX_STORE_U8(ctx.r11.u32 + 873, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,874(r11)
	REX_STORE_U8(ctx.r11.u32 + 874, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,875(r11)
	REX_STORE_U8(ctx.r11.u32 + 875, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,876(r11)
	REX_STORE_U8(ctx.r11.u32 + 876, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-6
	ctx.r10.s64 = -6;
	// stb r10,877(r11)
	REX_STORE_U8(ctx.r11.u32 + 877, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,878(r11)
	REX_STORE_U8(ctx.r11.u32 + 878, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,879(r11)
	REX_STORE_U8(ctx.r11.u32 + 879, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,880(r11)
	REX_STORE_U8(ctx.r11.u32 + 880, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,41
	ctx.r10.s64 = 41;
	// stb r10,881(r11)
	REX_STORE_U8(ctx.r11.u32 + 881, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,882(r11)
	REX_STORE_U8(ctx.r11.u32 + 882, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,883(r11)
	REX_STORE_U8(ctx.r11.u32 + 883, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,884(r11)
	REX_STORE_U8(ctx.r11.u32 + 884, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,54
	ctx.r10.s64 = 54;
	// stb r10,885(r11)
	REX_STORE_U8(ctx.r11.u32 + 885, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,886(r11)
	REX_STORE_U8(ctx.r11.u32 + 886, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,887(r11)
	REX_STORE_U8(ctx.r11.u32 + 887, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,888(r11)
	REX_STORE_U8(ctx.r11.u32 + 888, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,889(r11)
	REX_STORE_U8(ctx.r11.u32 + 889, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,890(r11)
	REX_STORE_U8(ctx.r11.u32 + 890, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,891(r11)
	REX_STORE_U8(ctx.r11.u32 + 891, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,892(r11)
	REX_STORE_U8(ctx.r11.u32 + 892, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,893(r11)
	REX_STORE_U8(ctx.r11.u32 + 893, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,894(r11)
	REX_STORE_U8(ctx.r11.u32 + 894, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,895(r11)
	REX_STORE_U8(ctx.r11.u32 + 895, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,896(r11)
	REX_STORE_U8(ctx.r11.u32 + 896, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,897(r11)
	REX_STORE_U8(ctx.r11.u32 + 897, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,898(r11)
	REX_STORE_U8(ctx.r11.u32 + 898, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,899(r11)
	REX_STORE_U8(ctx.r11.u32 + 899, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,900(r11)
	REX_STORE_U8(ctx.r11.u32 + 900, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,901(r11)
	REX_STORE_U8(ctx.r11.u32 + 901, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,902(r11)
	REX_STORE_U8(ctx.r11.u32 + 902, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,903(r11)
	REX_STORE_U8(ctx.r11.u32 + 903, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,904(r11)
	REX_STORE_U8(ctx.r11.u32 + 904, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,43
	ctx.r10.s64 = 43;
	// stb r10,905(r11)
	REX_STORE_U8(ctx.r11.u32 + 905, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,906(r11)
	REX_STORE_U8(ctx.r11.u32 + 906, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,907(r11)
	REX_STORE_U8(ctx.r11.u32 + 907, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,908(r11)
	REX_STORE_U8(ctx.r11.u32 + 908, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-7
	ctx.r10.s64 = -7;
	// stb r10,909(r11)
	REX_STORE_U8(ctx.r11.u32 + 909, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,910(r11)
	REX_STORE_U8(ctx.r11.u32 + 910, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,911(r11)
	REX_STORE_U8(ctx.r11.u32 + 911, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,912(r11)
	REX_STORE_U8(ctx.r11.u32 + 912, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,38
	ctx.r10.s64 = 38;
	// stb r10,913(r11)
	REX_STORE_U8(ctx.r11.u32 + 913, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,914(r11)
	REX_STORE_U8(ctx.r11.u32 + 914, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,915(r11)
	REX_STORE_U8(ctx.r11.u32 + 915, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,916(r11)
	REX_STORE_U8(ctx.r11.u32 + 916, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,44
	ctx.r10.s64 = 44;
	// stb r10,917(r11)
	REX_STORE_U8(ctx.r11.u32 + 917, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,918(r11)
	REX_STORE_U8(ctx.r11.u32 + 918, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,919(r11)
	REX_STORE_U8(ctx.r11.u32 + 919, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,920(r11)
	REX_STORE_U8(ctx.r11.u32 + 920, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-6
	ctx.r10.s64 = -6;
	// stb r10,921(r11)
	REX_STORE_U8(ctx.r11.u32 + 921, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,922(r11)
	REX_STORE_U8(ctx.r11.u32 + 922, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,923(r11)
	REX_STORE_U8(ctx.r11.u32 + 923, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,924(r11)
	REX_STORE_U8(ctx.r11.u32 + 924, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,39
	ctx.r10.s64 = 39;
	// stb r10,925(r11)
	REX_STORE_U8(ctx.r11.u32 + 925, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,926(r11)
	REX_STORE_U8(ctx.r11.u32 + 926, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,927(r11)
	REX_STORE_U8(ctx.r11.u32 + 927, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,928(r11)
	REX_STORE_U8(ctx.r11.u32 + 928, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,45
	ctx.r10.s64 = 45;
	// stb r10,929(r11)
	REX_STORE_U8(ctx.r11.u32 + 929, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,930(r11)
	REX_STORE_U8(ctx.r11.u32 + 930, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,931(r11)
	REX_STORE_U8(ctx.r11.u32 + 931, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,932(r11)
	REX_STORE_U8(ctx.r11.u32 + 932, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,933(r11)
	REX_STORE_U8(ctx.r11.u32 + 933, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,934(r11)
	REX_STORE_U8(ctx.r11.u32 + 934, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,935(r11)
	REX_STORE_U8(ctx.r11.u32 + 935, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,936(r11)
	REX_STORE_U8(ctx.r11.u32 + 936, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,937(r11)
	REX_STORE_U8(ctx.r11.u32 + 937, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,938(r11)
	REX_STORE_U8(ctx.r11.u32 + 938, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,939(r11)
	REX_STORE_U8(ctx.r11.u32 + 939, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,940(r11)
	REX_STORE_U8(ctx.r11.u32 + 940, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,941(r11)
	REX_STORE_U8(ctx.r11.u32 + 941, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,942(r11)
	REX_STORE_U8(ctx.r11.u32 + 942, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,943(r11)
	REX_STORE_U8(ctx.r11.u32 + 943, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,944(r11)
	REX_STORE_U8(ctx.r11.u32 + 944, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,945(r11)
	REX_STORE_U8(ctx.r11.u32 + 945, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,946(r11)
	REX_STORE_U8(ctx.r11.u32 + 946, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,947(r11)
	REX_STORE_U8(ctx.r11.u32 + 947, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,948(r11)
	REX_STORE_U8(ctx.r11.u32 + 948, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,46
	ctx.r10.s64 = 46;
	// stb r10,949(r11)
	REX_STORE_U8(ctx.r11.u32 + 949, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,950(r11)
	REX_STORE_U8(ctx.r11.u32 + 950, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,951(r11)
	REX_STORE_U8(ctx.r11.u32 + 951, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,952(r11)
	REX_STORE_U8(ctx.r11.u32 + 952, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-7
	ctx.r10.s64 = -7;
	// stb r10,953(r11)
	REX_STORE_U8(ctx.r11.u32 + 953, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,954(r11)
	REX_STORE_U8(ctx.r11.u32 + 954, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,955(r11)
	REX_STORE_U8(ctx.r11.u32 + 955, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,956(r11)
	REX_STORE_U8(ctx.r11.u32 + 956, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,40
	ctx.r10.s64 = 40;
	// stb r10,957(r11)
	REX_STORE_U8(ctx.r11.u32 + 957, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,958(r11)
	REX_STORE_U8(ctx.r11.u32 + 958, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,959(r11)
	REX_STORE_U8(ctx.r11.u32 + 959, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,960(r11)
	REX_STORE_U8(ctx.r11.u32 + 960, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,47
	ctx.r10.s64 = 47;
	// stb r10,961(r11)
	REX_STORE_U8(ctx.r11.u32 + 961, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,962(r11)
	REX_STORE_U8(ctx.r11.u32 + 962, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,963(r11)
	REX_STORE_U8(ctx.r11.u32 + 963, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,964(r11)
	REX_STORE_U8(ctx.r11.u32 + 964, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-6
	ctx.r10.s64 = -6;
	// stb r10,965(r11)
	REX_STORE_U8(ctx.r11.u32 + 965, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,966(r11)
	REX_STORE_U8(ctx.r11.u32 + 966, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,967(r11)
	REX_STORE_U8(ctx.r11.u32 + 967, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,968(r11)
	REX_STORE_U8(ctx.r11.u32 + 968, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,41
	ctx.r10.s64 = 41;
	// stb r10,969(r11)
	REX_STORE_U8(ctx.r11.u32 + 969, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,970(r11)
	REX_STORE_U8(ctx.r11.u32 + 970, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,971(r11)
	REX_STORE_U8(ctx.r11.u32 + 971, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,972(r11)
	REX_STORE_U8(ctx.r11.u32 + 972, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,973(r11)
	REX_STORE_U8(ctx.r11.u32 + 973, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,974(r11)
	REX_STORE_U8(ctx.r11.u32 + 974, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,975(r11)
	REX_STORE_U8(ctx.r11.u32 + 975, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,976(r11)
	REX_STORE_U8(ctx.r11.u32 + 976, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,977(r11)
	REX_STORE_U8(ctx.r11.u32 + 977, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,978(r11)
	REX_STORE_U8(ctx.r11.u32 + 978, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,979(r11)
	REX_STORE_U8(ctx.r11.u32 + 979, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,980(r11)
	REX_STORE_U8(ctx.r11.u32 + 980, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,981(r11)
	REX_STORE_U8(ctx.r11.u32 + 981, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,982(r11)
	REX_STORE_U8(ctx.r11.u32 + 982, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,983(r11)
	REX_STORE_U8(ctx.r11.u32 + 983, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,984(r11)
	REX_STORE_U8(ctx.r11.u32 + 984, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,985(r11)
	REX_STORE_U8(ctx.r11.u32 + 985, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,986(r11)
	REX_STORE_U8(ctx.r11.u32 + 986, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,987(r11)
	REX_STORE_U8(ctx.r11.u32 + 987, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,988(r11)
	REX_STORE_U8(ctx.r11.u32 + 988, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,989(r11)
	REX_STORE_U8(ctx.r11.u32 + 989, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,990(r11)
	REX_STORE_U8(ctx.r11.u32 + 990, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,991(r11)
	REX_STORE_U8(ctx.r11.u32 + 991, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,992(r11)
	REX_STORE_U8(ctx.r11.u32 + 992, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,35
	ctx.r10.s64 = 35;
	// stb r10,993(r11)
	REX_STORE_U8(ctx.r11.u32 + 993, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,994(r11)
	REX_STORE_U8(ctx.r11.u32 + 994, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,995(r11)
	REX_STORE_U8(ctx.r11.u32 + 995, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,996(r11)
	REX_STORE_U8(ctx.r11.u32 + 996, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-7
	ctx.r10.s64 = -7;
	// stb r10,997(r11)
	REX_STORE_U8(ctx.r11.u32 + 997, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,998(r11)
	REX_STORE_U8(ctx.r11.u32 + 998, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,999(r11)
	REX_STORE_U8(ctx.r11.u32 + 999, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1000(r11)
	REX_STORE_U8(ctx.r11.u32 + 1000, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,42
	ctx.r10.s64 = 42;
	// stb r10,1001(r11)
	REX_STORE_U8(ctx.r11.u32 + 1001, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1002(r11)
	REX_STORE_U8(ctx.r11.u32 + 1002, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1003(r11)
	REX_STORE_U8(ctx.r11.u32 + 1003, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1004(r11)
	REX_STORE_U8(ctx.r11.u32 + 1004, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,1005(r11)
	REX_STORE_U8(ctx.r11.u32 + 1005, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1006(r11)
	REX_STORE_U8(ctx.r11.u32 + 1006, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1007(r11)
	REX_STORE_U8(ctx.r11.u32 + 1007, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1008(r11)
	REX_STORE_U8(ctx.r11.u32 + 1008, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-6
	ctx.r10.s64 = -6;
	// stb r10,1009(r11)
	REX_STORE_U8(ctx.r11.u32 + 1009, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1010(r11)
	REX_STORE_U8(ctx.r11.u32 + 1010, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1011(r11)
	REX_STORE_U8(ctx.r11.u32 + 1011, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1012(r11)
	REX_STORE_U8(ctx.r11.u32 + 1012, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,55
	ctx.r10.s64 = 55;
	// stb r10,1013(r11)
	REX_STORE_U8(ctx.r11.u32 + 1013, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1014(r11)
	REX_STORE_U8(ctx.r11.u32 + 1014, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1015(r11)
	REX_STORE_U8(ctx.r11.u32 + 1015, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1016(r11)
	REX_STORE_U8(ctx.r11.u32 + 1016, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,57
	ctx.r10.s64 = 57;
	// stb r10,1017(r11)
	REX_STORE_U8(ctx.r11.u32 + 1017, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1018(r11)
	REX_STORE_U8(ctx.r11.u32 + 1018, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1019(r11)
	REX_STORE_U8(ctx.r11.u32 + 1019, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1020(r11)
	REX_STORE_U8(ctx.r11.u32 + 1020, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,1021(r11)
	REX_STORE_U8(ctx.r11.u32 + 1021, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1022(r11)
	REX_STORE_U8(ctx.r11.u32 + 1022, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1023(r11)
	REX_STORE_U8(ctx.r11.u32 + 1023, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1024(r11)
	REX_STORE_U8(ctx.r11.u32 + 1024, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1025(r11)
	REX_STORE_U8(ctx.r11.u32 + 1025, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1026(r11)
	REX_STORE_U8(ctx.r11.u32 + 1026, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1027(r11)
	REX_STORE_U8(ctx.r11.u32 + 1027, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1028(r11)
	REX_STORE_U8(ctx.r11.u32 + 1028, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,1029(r11)
	REX_STORE_U8(ctx.r11.u32 + 1029, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1030(r11)
	REX_STORE_U8(ctx.r11.u32 + 1030, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,1031(r11)
	REX_STORE_U8(ctx.r11.u32 + 1031, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1032(r11)
	REX_STORE_U8(ctx.r11.u32 + 1032, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1033(r11)
	REX_STORE_U8(ctx.r11.u32 + 1033, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1034(r11)
	REX_STORE_U8(ctx.r11.u32 + 1034, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1035(r11)
	REX_STORE_U8(ctx.r11.u32 + 1035, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1036(r11)
	REX_STORE_U8(ctx.r11.u32 + 1036, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,1037(r11)
	REX_STORE_U8(ctx.r11.u32 + 1037, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1038(r11)
	REX_STORE_U8(ctx.r11.u32 + 1038, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1039(r11)
	REX_STORE_U8(ctx.r11.u32 + 1039, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1040(r11)
	REX_STORE_U8(ctx.r11.u32 + 1040, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-7
	ctx.r10.s64 = -7;
	// stb r10,1041(r11)
	REX_STORE_U8(ctx.r11.u32 + 1041, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1042(r11)
	REX_STORE_U8(ctx.r11.u32 + 1042, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1043(r11)
	REX_STORE_U8(ctx.r11.u32 + 1043, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1044(r11)
	REX_STORE_U8(ctx.r11.u32 + 1044, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,56
	ctx.r10.s64 = 56;
	// stb r10,1045(r11)
	REX_STORE_U8(ctx.r11.u32 + 1045, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1046(r11)
	REX_STORE_U8(ctx.r11.u32 + 1046, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1047(r11)
	REX_STORE_U8(ctx.r11.u32 + 1047, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1048(r11)
	REX_STORE_U8(ctx.r11.u32 + 1048, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,58
	ctx.r10.s64 = 58;
	// stb r10,1049(r11)
	REX_STORE_U8(ctx.r11.u32 + 1049, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1050(r11)
	REX_STORE_U8(ctx.r11.u32 + 1050, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1051(r11)
	REX_STORE_U8(ctx.r11.u32 + 1051, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1052(r11)
	REX_STORE_U8(ctx.r11.u32 + 1052, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-6
	ctx.r10.s64 = -6;
	// stb r10,1053(r11)
	REX_STORE_U8(ctx.r11.u32 + 1053, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1054(r11)
	REX_STORE_U8(ctx.r11.u32 + 1054, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1055(r11)
	REX_STORE_U8(ctx.r11.u32 + 1055, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1056(r11)
	REX_STORE_U8(ctx.r11.u32 + 1056, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,30
	ctx.r10.s64 = 30;
	// stb r10,1057(r11)
	REX_STORE_U8(ctx.r11.u32 + 1057, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1058(r11)
	REX_STORE_U8(ctx.r11.u32 + 1058, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1059(r11)
	REX_STORE_U8(ctx.r11.u32 + 1059, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1060(r11)
	REX_STORE_U8(ctx.r11.u32 + 1060, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,59
	ctx.r10.s64 = 59;
	// stb r10,1061(r11)
	REX_STORE_U8(ctx.r11.u32 + 1061, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1062(r11)
	REX_STORE_U8(ctx.r11.u32 + 1062, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1063(r11)
	REX_STORE_U8(ctx.r11.u32 + 1063, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1064(r11)
	REX_STORE_U8(ctx.r11.u32 + 1064, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r10,1065(r11)
	REX_STORE_U8(ctx.r11.u32 + 1065, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1066(r11)
	REX_STORE_U8(ctx.r11.u32 + 1066, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1067(r11)
	REX_STORE_U8(ctx.r11.u32 + 1067, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1068(r11)
	REX_STORE_U8(ctx.r11.u32 + 1068, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1069(r11)
	REX_STORE_U8(ctx.r11.u32 + 1069, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1070(r11)
	REX_STORE_U8(ctx.r11.u32 + 1070, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1071(r11)
	REX_STORE_U8(ctx.r11.u32 + 1071, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1072(r11)
	REX_STORE_U8(ctx.r11.u32 + 1072, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1073(r11)
	REX_STORE_U8(ctx.r11.u32 + 1073, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1074(r11)
	REX_STORE_U8(ctx.r11.u32 + 1074, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1075(r11)
	REX_STORE_U8(ctx.r11.u32 + 1075, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1076(r11)
	REX_STORE_U8(ctx.r11.u32 + 1076, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-10
	ctx.r10.s64 = -10;
	// stb r10,1077(r11)
	REX_STORE_U8(ctx.r11.u32 + 1077, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1078(r11)
	REX_STORE_U8(ctx.r11.u32 + 1078, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1079(r11)
	REX_STORE_U8(ctx.r11.u32 + 1079, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1080(r11)
	REX_STORE_U8(ctx.r11.u32 + 1080, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1081(r11)
	REX_STORE_U8(ctx.r11.u32 + 1081, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1082(r11)
	REX_STORE_U8(ctx.r11.u32 + 1082, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1083(r11)
	REX_STORE_U8(ctx.r11.u32 + 1083, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1084(r11)
	REX_STORE_U8(ctx.r11.u32 + 1084, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1085(r11)
	REX_STORE_U8(ctx.r11.u32 + 1085, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1086(r11)
	REX_STORE_U8(ctx.r11.u32 + 1086, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1087(r11)
	REX_STORE_U8(ctx.r11.u32 + 1087, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1088(r11)
	REX_STORE_U8(ctx.r11.u32 + 1088, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-10
	ctx.r10.s64 = -10;
	// stb r10,1089(r11)
	REX_STORE_U8(ctx.r11.u32 + 1089, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1090(r11)
	REX_STORE_U8(ctx.r11.u32 + 1090, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1091(r11)
	REX_STORE_U8(ctx.r11.u32 + 1091, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1092(r11)
	REX_STORE_U8(ctx.r11.u32 + 1092, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1093(r11)
	REX_STORE_U8(ctx.r11.u32 + 1093, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1094(r11)
	REX_STORE_U8(ctx.r11.u32 + 1094, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1095(r11)
	REX_STORE_U8(ctx.r11.u32 + 1095, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1096(r11)
	REX_STORE_U8(ctx.r11.u32 + 1096, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1097(r11)
	REX_STORE_U8(ctx.r11.u32 + 1097, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1098(r11)
	REX_STORE_U8(ctx.r11.u32 + 1098, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1099(r11)
	REX_STORE_U8(ctx.r11.u32 + 1099, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1100(r11)
	REX_STORE_U8(ctx.r11.u32 + 1100, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-2
	ctx.r10.s64 = -2;
	// stb r10,1101(r11)
	REX_STORE_U8(ctx.r11.u32 + 1101, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1102(r11)
	REX_STORE_U8(ctx.r11.u32 + 1102, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1103(r11)
	REX_STORE_U8(ctx.r11.u32 + 1103, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1104(r11)
	REX_STORE_U8(ctx.r11.u32 + 1104, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1105(r11)
	REX_STORE_U8(ctx.r11.u32 + 1105, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1106(r11)
	REX_STORE_U8(ctx.r11.u32 + 1106, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1107(r11)
	REX_STORE_U8(ctx.r11.u32 + 1107, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1108(r11)
	REX_STORE_U8(ctx.r11.u32 + 1108, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1109(r11)
	REX_STORE_U8(ctx.r11.u32 + 1109, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1110(r11)
	REX_STORE_U8(ctx.r11.u32 + 1110, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1111(r11)
	REX_STORE_U8(ctx.r11.u32 + 1111, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1112(r11)
	REX_STORE_U8(ctx.r11.u32 + 1112, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1113(r11)
	REX_STORE_U8(ctx.r11.u32 + 1113, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1114(r11)
	REX_STORE_U8(ctx.r11.u32 + 1114, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1115(r11)
	REX_STORE_U8(ctx.r11.u32 + 1115, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1116(r11)
	REX_STORE_U8(ctx.r11.u32 + 1116, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1117(r11)
	REX_STORE_U8(ctx.r11.u32 + 1117, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1118(r11)
	REX_STORE_U8(ctx.r11.u32 + 1118, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1119(r11)
	REX_STORE_U8(ctx.r11.u32 + 1119, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1120(r11)
	REX_STORE_U8(ctx.r11.u32 + 1120, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1121(r11)
	REX_STORE_U8(ctx.r11.u32 + 1121, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1122(r11)
	REX_STORE_U8(ctx.r11.u32 + 1122, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1123(r11)
	REX_STORE_U8(ctx.r11.u32 + 1123, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1124(r11)
	REX_STORE_U8(ctx.r11.u32 + 1124, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r10,1125(r11)
	REX_STORE_U8(ctx.r11.u32 + 1125, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1126(r11)
	REX_STORE_U8(ctx.r11.u32 + 1126, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1127(r11)
	REX_STORE_U8(ctx.r11.u32 + 1127, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1128(r11)
	REX_STORE_U8(ctx.r11.u32 + 1128, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1129(r11)
	REX_STORE_U8(ctx.r11.u32 + 1129, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1130(r11)
	REX_STORE_U8(ctx.r11.u32 + 1130, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1131(r11)
	REX_STORE_U8(ctx.r11.u32 + 1131, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1132(r11)
	REX_STORE_U8(ctx.r11.u32 + 1132, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1133(r11)
	REX_STORE_U8(ctx.r11.u32 + 1133, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1134(r11)
	REX_STORE_U8(ctx.r11.u32 + 1134, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1135(r11)
	REX_STORE_U8(ctx.r11.u32 + 1135, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1136(r11)
	REX_STORE_U8(ctx.r11.u32 + 1136, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,18
	ctx.r10.s64 = 18;
	// stb r10,1137(r11)
	REX_STORE_U8(ctx.r11.u32 + 1137, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1138(r11)
	REX_STORE_U8(ctx.r11.u32 + 1138, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1139(r11)
	REX_STORE_U8(ctx.r11.u32 + 1139, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1140(r11)
	REX_STORE_U8(ctx.r11.u32 + 1140, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1141(r11)
	REX_STORE_U8(ctx.r11.u32 + 1141, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1142(r11)
	REX_STORE_U8(ctx.r11.u32 + 1142, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1143(r11)
	REX_STORE_U8(ctx.r11.u32 + 1143, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1144(r11)
	REX_STORE_U8(ctx.r11.u32 + 1144, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1145(r11)
	REX_STORE_U8(ctx.r11.u32 + 1145, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1146(r11)
	REX_STORE_U8(ctx.r11.u32 + 1146, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1147(r11)
	REX_STORE_U8(ctx.r11.u32 + 1147, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1148(r11)
	REX_STORE_U8(ctx.r11.u32 + 1148, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r10,1149(r11)
	REX_STORE_U8(ctx.r11.u32 + 1149, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1150(r11)
	REX_STORE_U8(ctx.r11.u32 + 1150, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1151(r11)
	REX_STORE_U8(ctx.r11.u32 + 1151, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1152(r11)
	REX_STORE_U8(ctx.r11.u32 + 1152, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1153(r11)
	REX_STORE_U8(ctx.r11.u32 + 1153, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1154(r11)
	REX_STORE_U8(ctx.r11.u32 + 1154, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1155(r11)
	REX_STORE_U8(ctx.r11.u32 + 1155, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1156(r11)
	REX_STORE_U8(ctx.r11.u32 + 1156, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1157(r11)
	REX_STORE_U8(ctx.r11.u32 + 1157, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1158(r11)
	REX_STORE_U8(ctx.r11.u32 + 1158, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1159(r11)
	REX_STORE_U8(ctx.r11.u32 + 1159, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1160(r11)
	REX_STORE_U8(ctx.r11.u32 + 1160, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-4
	ctx.r10.s64 = -4;
	// stb r10,1161(r11)
	REX_STORE_U8(ctx.r11.u32 + 1161, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1162(r11)
	REX_STORE_U8(ctx.r11.u32 + 1162, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1163(r11)
	REX_STORE_U8(ctx.r11.u32 + 1163, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1164(r11)
	REX_STORE_U8(ctx.r11.u32 + 1164, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-3
	ctx.r10.s64 = -3;
	// stb r10,1165(r11)
	REX_STORE_U8(ctx.r11.u32 + 1165, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1166(r11)
	REX_STORE_U8(ctx.r11.u32 + 1166, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1167(r11)
	REX_STORE_U8(ctx.r11.u32 + 1167, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1168(r11)
	REX_STORE_U8(ctx.r11.u32 + 1168, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1169(r11)
	REX_STORE_U8(ctx.r11.u32 + 1169, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1170(r11)
	REX_STORE_U8(ctx.r11.u32 + 1170, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1171(r11)
	REX_STORE_U8(ctx.r11.u32 + 1171, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1172(r11)
	REX_STORE_U8(ctx.r11.u32 + 1172, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1173(r11)
	REX_STORE_U8(ctx.r11.u32 + 1173, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1174(r11)
	REX_STORE_U8(ctx.r11.u32 + 1174, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1175(r11)
	REX_STORE_U8(ctx.r11.u32 + 1175, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1176(r11)
	REX_STORE_U8(ctx.r11.u32 + 1176, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-4
	ctx.r10.s64 = -4;
	// stb r10,1177(r11)
	REX_STORE_U8(ctx.r11.u32 + 1177, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1178(r11)
	REX_STORE_U8(ctx.r11.u32 + 1178, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1179(r11)
	REX_STORE_U8(ctx.r11.u32 + 1179, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1180(r11)
	REX_STORE_U8(ctx.r11.u32 + 1180, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-3
	ctx.r10.s64 = -3;
	// stb r10,1181(r11)
	REX_STORE_U8(ctx.r11.u32 + 1181, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1182(r11)
	REX_STORE_U8(ctx.r11.u32 + 1182, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1183(r11)
	REX_STORE_U8(ctx.r11.u32 + 1183, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1184(r11)
	REX_STORE_U8(ctx.r11.u32 + 1184, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1185(r11)
	REX_STORE_U8(ctx.r11.u32 + 1185, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1186(r11)
	REX_STORE_U8(ctx.r11.u32 + 1186, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1187(r11)
	REX_STORE_U8(ctx.r11.u32 + 1187, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1188(r11)
	REX_STORE_U8(ctx.r11.u32 + 1188, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1189(r11)
	REX_STORE_U8(ctx.r11.u32 + 1189, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1190(r11)
	REX_STORE_U8(ctx.r11.u32 + 1190, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1191(r11)
	REX_STORE_U8(ctx.r11.u32 + 1191, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1192(r11)
	REX_STORE_U8(ctx.r11.u32 + 1192, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,1193(r11)
	REX_STORE_U8(ctx.r11.u32 + 1193, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1194(r11)
	REX_STORE_U8(ctx.r11.u32 + 1194, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1195(r11)
	REX_STORE_U8(ctx.r11.u32 + 1195, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1196(r11)
	REX_STORE_U8(ctx.r11.u32 + 1196, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1197(r11)
	REX_STORE_U8(ctx.r11.u32 + 1197, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1198(r11)
	REX_STORE_U8(ctx.r11.u32 + 1198, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1199(r11)
	REX_STORE_U8(ctx.r11.u32 + 1199, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1200(r11)
	REX_STORE_U8(ctx.r11.u32 + 1200, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1201(r11)
	REX_STORE_U8(ctx.r11.u32 + 1201, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1202(r11)
	REX_STORE_U8(ctx.r11.u32 + 1202, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1203(r11)
	REX_STORE_U8(ctx.r11.u32 + 1203, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1204(r11)
	REX_STORE_U8(ctx.r11.u32 + 1204, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1205(r11)
	REX_STORE_U8(ctx.r11.u32 + 1205, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1206(r11)
	REX_STORE_U8(ctx.r11.u32 + 1206, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1207(r11)
	REX_STORE_U8(ctx.r11.u32 + 1207, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1208(r11)
	REX_STORE_U8(ctx.r11.u32 + 1208, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1209(r11)
	REX_STORE_U8(ctx.r11.u32 + 1209, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1210(r11)
	REX_STORE_U8(ctx.r11.u32 + 1210, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1211(r11)
	REX_STORE_U8(ctx.r11.u32 + 1211, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1212(r11)
	REX_STORE_U8(ctx.r11.u32 + 1212, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1213(r11)
	REX_STORE_U8(ctx.r11.u32 + 1213, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1214(r11)
	REX_STORE_U8(ctx.r11.u32 + 1214, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1215(r11)
	REX_STORE_U8(ctx.r11.u32 + 1215, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1216(r11)
	REX_STORE_U8(ctx.r11.u32 + 1216, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1217(r11)
	REX_STORE_U8(ctx.r11.u32 + 1217, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1218(r11)
	REX_STORE_U8(ctx.r11.u32 + 1218, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1219(r11)
	REX_STORE_U8(ctx.r11.u32 + 1219, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1220(r11)
	REX_STORE_U8(ctx.r11.u32 + 1220, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1221(r11)
	REX_STORE_U8(ctx.r11.u32 + 1221, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1222(r11)
	REX_STORE_U8(ctx.r11.u32 + 1222, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1223(r11)
	REX_STORE_U8(ctx.r11.u32 + 1223, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1224(r11)
	REX_STORE_U8(ctx.r11.u32 + 1224, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r10,1225(r11)
	REX_STORE_U8(ctx.r11.u32 + 1225, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1226(r11)
	REX_STORE_U8(ctx.r11.u32 + 1226, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1227(r11)
	REX_STORE_U8(ctx.r11.u32 + 1227, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1228(r11)
	REX_STORE_U8(ctx.r11.u32 + 1228, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1229(r11)
	REX_STORE_U8(ctx.r11.u32 + 1229, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1230(r11)
	REX_STORE_U8(ctx.r11.u32 + 1230, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1231(r11)
	REX_STORE_U8(ctx.r11.u32 + 1231, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1232(r11)
	REX_STORE_U8(ctx.r11.u32 + 1232, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1233(r11)
	REX_STORE_U8(ctx.r11.u32 + 1233, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1234(r11)
	REX_STORE_U8(ctx.r11.u32 + 1234, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1235(r11)
	REX_STORE_U8(ctx.r11.u32 + 1235, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1236(r11)
	REX_STORE_U8(ctx.r11.u32 + 1236, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1237(r11)
	REX_STORE_U8(ctx.r11.u32 + 1237, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1238(r11)
	REX_STORE_U8(ctx.r11.u32 + 1238, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1239(r11)
	REX_STORE_U8(ctx.r11.u32 + 1239, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1240(r11)
	REX_STORE_U8(ctx.r11.u32 + 1240, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r10,1241(r11)
	REX_STORE_U8(ctx.r11.u32 + 1241, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1242(r11)
	REX_STORE_U8(ctx.r11.u32 + 1242, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1243(r11)
	REX_STORE_U8(ctx.r11.u32 + 1243, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1244(r11)
	REX_STORE_U8(ctx.r11.u32 + 1244, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1245(r11)
	REX_STORE_U8(ctx.r11.u32 + 1245, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1246(r11)
	REX_STORE_U8(ctx.r11.u32 + 1246, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1247(r11)
	REX_STORE_U8(ctx.r11.u32 + 1247, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1248(r11)
	REX_STORE_U8(ctx.r11.u32 + 1248, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1249(r11)
	REX_STORE_U8(ctx.r11.u32 + 1249, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1250(r11)
	REX_STORE_U8(ctx.r11.u32 + 1250, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,1251(r11)
	REX_STORE_U8(ctx.r11.u32 + 1251, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1252(r11)
	REX_STORE_U8(ctx.r11.u32 + 1252, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1253(r11)
	REX_STORE_U8(ctx.r11.u32 + 1253, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1254(r11)
	REX_STORE_U8(ctx.r11.u32 + 1254, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1255(r11)
	REX_STORE_U8(ctx.r11.u32 + 1255, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1256(r11)
	REX_STORE_U8(ctx.r11.u32 + 1256, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r10,1257(r11)
	REX_STORE_U8(ctx.r11.u32 + 1257, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1258(r11)
	REX_STORE_U8(ctx.r11.u32 + 1258, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1259(r11)
	REX_STORE_U8(ctx.r11.u32 + 1259, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1260(r11)
	REX_STORE_U8(ctx.r11.u32 + 1260, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,23
	ctx.r10.s64 = 23;
	// stb r10,1261(r11)
	REX_STORE_U8(ctx.r11.u32 + 1261, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1262(r11)
	REX_STORE_U8(ctx.r11.u32 + 1262, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,1263(r11)
	REX_STORE_U8(ctx.r11.u32 + 1263, ctx.r10.u8);
	// blr 
	return;
}

