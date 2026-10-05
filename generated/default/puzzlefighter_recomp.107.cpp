#include "puzzlefighter_funcs.107.h"

DEFINE_REX_FUNC(sub_82050058) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-21636
	ctx.r11.s64 = ctx.r11.s64 + -21636;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820500f0
	if (!ctx.cr6.eq) goto loc_820500F0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820500c4
	if (!ctx.cr6.eq) goto loc_820500C4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-21657
	ctx.r11.s64 = ctx.r11.s64 + -21657;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x820500e8
	goto loc_820500E8;
loc_820500C4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-21657
	ctx.r11.s64 = ctx.r11.s64 + -21657;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_820500E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820500f4
	goto loc_820500F4;
loc_820500F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820500F4:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820570C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8205c460
	ctx.lr = 0x820570D8;
	sub_8205C460(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r11,8384
	ctx.r7.s64 = ctx.r11.s64 + 8384;
	// li r6,3
	ctx.r6.s64 = 3;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8884
	ctx.r11.s64 = ctx.r11.s64 + 8884;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8380
	ctx.r11.s64 = ctx.r11.s64 + 8380;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x8205710C;
	sub_8205C488(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8205c460
	ctx.lr = 0x82057114;
	sub_8205C460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8205712c
	goto loc_8205712C;
loc_82057120:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8205712C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x82057220
	if (!ctx.cr6.lt) goto loc_82057220;
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
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820571bc
	if (!ctx.cr6.eq) goto loc_820571BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9380
	ctx.r10.s64 = ctx.r10.s64 + 9380;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8880
	ctx.r11.s64 = ctx.r11.s64 + 8880;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8876
	ctx.r11.s64 = ctx.r11.s64 + 8876;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x820571B8;
	sub_8205C488(ctx, base);
	// b 0x8205721c
	goto loc_8205721C;
loc_820571BC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9380
	ctx.r10.s64 = ctx.r10.s64 + 9380;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8880
	ctx.r11.s64 = ctx.r11.s64 + 8880;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8876
	ctx.r11.s64 = ctx.r11.s64 + 8876;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x8205721C;
	sub_8205C488(ctx, base);
loc_8205721C:
	// b 0x82057120
	goto loc_82057120;
loc_82057220:
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
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 168);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9368
	ctx.r10.s64 = ctx.r10.s64 + 9368;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8880
	ctx.r11.s64 = ctx.r11.s64 + 8880;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x82057290;
	sub_8205C488(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820572b4
	if (!ctx.cr6.eq) goto loc_820572B4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x820572bc
	goto loc_820572BC;
loc_820572B4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_820572BC:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,169(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 169);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9368
	ctx.r10.s64 = ctx.r10.s64 + 9368;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8376
	ctx.r11.s64 = ctx.r11.s64 + 8376;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x8205730C;
	sub_8205C488(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82057330
	if (!ctx.cr6.eq) goto loc_82057330;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x82057338
	goto loc_82057338;
loc_82057330:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82057338:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,170(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 170);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9328
	ctx.r10.s64 = ctx.r10.s64 + 9328;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8868
	ctx.r11.s64 = ctx.r11.s64 + 8868;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x82057388;
	sub_8205C488(ctx, base);
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
	// bne cr6,0x820573ac
	if (!ctx.cr6.eq) goto loc_820573AC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x820573b4
	goto loc_820573B4;
loc_820573AC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_820573B4:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,171(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 171);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9328
	ctx.r10.s64 = ctx.r10.s64 + 9328;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8864
	ctx.r11.s64 = ctx.r11.s64 + 8864;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x82057404;
	sub_8205C488(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82057428
	if (!ctx.cr6.eq) goto loc_82057428;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x82057430
	goto loc_82057430;
loc_82057428:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82057430:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,189(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 189);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9320
	ctx.r10.s64 = ctx.r10.s64 + 9320;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8860
	ctx.r11.s64 = ctx.r11.s64 + 8860;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x82057480;
	sub_8205C488(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820574a4
	if (!ctx.cr6.eq) goto loc_820574A4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x820574ac
	goto loc_820574AC;
loc_820574A4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_820574AC:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,190(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 190);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9320
	ctx.r10.s64 = ctx.r10.s64 + 9320;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x820574FC;
	sub_8205C488(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82057520
	if (!ctx.cr6.eq) goto loc_82057520;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82057528
	goto loc_82057528;
loc_82057520:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82057528:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 188);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,9320
	ctx.r10.s64 = ctx.r10.s64 + 9320;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8856
	ctx.r11.s64 = ctx.r11.s64 + 8856;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8205c488
	ctx.lr = 0x82057578;
	sub_8205C488(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8207AEB0) {
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
	// bl 0x820fa928
	ctx.lr = 0x8207AEC0;
	sub_820FA928(ctx, base);
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
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
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
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// bl 0x820718d0
	ctx.lr = 0x8207AFC4;
	sub_820718D0(ctx, base);
	// bl 0x820f7128
	ctx.lr = 0x8207AFC8;
	sub_820F7128(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-22568
	ctx.r11.s64 = ctx.r11.s64 + -22568;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x82071930
	ctx.lr = 0x8207B010;
	sub_82071930(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82082A18) {
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
	// addi r10,r10,-28260
	ctx.r10.s64 = ctx.r10.s64 + -28260;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82082A68;
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

DEFINE_REX_FUNC(sub_82087220) {
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
	// bl 0x82085f90
	ctx.lr = 0x82087230;
	sub_82085F90(ctx, base);
	// bl 0x82216c40
	ctx.lr = 0x82087234;
	sub_82216C40(ctx, base);
	// bl 0x82086e50
	ctx.lr = 0x82087238;
	sub_82086E50(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82087254
	if (!ctx.cr6.eq) goto loc_82087254;
	// b 0x8208743c
	goto loc_8208743C;
loc_82087254:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,129(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 129);
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
	// lbz r11,142(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 142);
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
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lbz r11,142(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 142);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,142(r10)
	REX_STORE_U8(ctx.r10.u32 + 142, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 152);
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
	// lbz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 152);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
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
	// lbz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 152);
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
	// ble cr6,0x82087378
	if (!ctx.cr6.gt) goto loc_82087378;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82087388
	goto loc_82087388;
loc_82087378:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82087388:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820873a4
	if (ctx.cr6.lt) goto loc_820873A4;
	// b 0x820873bc
	goto loc_820873BC;
loc_820873A4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820f6d98
	ctx.lr = 0x820873BC;
	sub_820F6D98(ctx, base);
loc_820873BC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,132(r11)
	REX_STORE_U8(ctx.r11.u32 + 132, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,133(r11)
	REX_STORE_U8(ctx.r11.u32 + 133, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,127
	ctx.r10.s64 = 127;
	// stb r10,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 152);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,152(r10)
	REX_STORE_U8(ctx.r10.u32 + 152, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82087170
	ctx.lr = 0x82087438;
	sub_82087170(ctx, base);
	// b 0x8208764c
	goto loc_8208764C;
loc_8208743C:
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
	// beq cr6,0x82087488
	if (ctx.cr6.eq) goto loc_82087488;
	// bl 0x820ee2b0
	ctx.lr = 0x82087484;
	sub_820EE2B0(ctx, base);
	// b 0x8208764c
	goto loc_8208764C;
loc_82087488:
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
	// beq cr6,0x820874d4
	if (ctx.cr6.eq) goto loc_820874D4;
	// bl 0x820ee2b0
	ctx.lr = 0x820874D0;
	sub_820EE2B0(ctx, base);
	// b 0x8208764c
	goto loc_8208764C;
loc_820874D4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,138(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 138);
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
	// lbz r11,138(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 138);
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
	// stb r11,138(r10)
	REX_STORE_U8(ctx.r10.u32 + 138, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,138(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 138);
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
	// beq cr6,0x82087584
	if (ctx.cr6.eq) goto loc_82087584;
	// bl 0x82086e18
	ctx.lr = 0x82087580;
	sub_82086E18(ctx, base);
	// b 0x8208764c
	goto loc_8208764C;
loc_82087584:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,127
	ctx.r10.s64 = 127;
	// stb r10,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r10.u8);
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
	// blt cr6,0x82087648
	if (ctx.cr6.lt) goto loc_82087648;
	// bl 0x82086e18
	ctx.lr = 0x82087644;
	sub_82086E18(ctx, base);
	// b 0x8208764c
	goto loc_8208764C;
loc_82087648:
	// bl 0x82085db0
	ctx.lr = 0x8208764C;
	sub_82085DB0(ctx, base);
loc_8208764C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A8310) {
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
	// bl 0x8209d100
	ctx.lr = 0x820A8320;
	sub_8209D100(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a833c
	if (ctx.cr6.eq) goto loc_820A833C;
	// bl 0x820a7a98
	ctx.lr = 0x820A8338;
	sub_820A7A98(ctx, base);
	// b 0x820a83e8
	goto loc_820A83E8;
loc_820A833C:
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
	// bne cr6,0x820a83e8
	if (!ctx.cr6.eq) goto loc_820A83E8;
	// bl 0x820a7a98
	ctx.lr = 0x820A83E8;
	sub_820A7A98(ctx, base);
loc_820A83E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AC9D0) {
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
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
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
	// addi r11,r11,12904
	ctx.r11.s64 = ctx.r11.s64 + 12904;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820cd4d0
	ctx.lr = 0x820ACA20;
	sub_820CD4D0(ctx, base);
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
	// lbz r11,414(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 414);
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
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,-99
	ctx.r11.s64 = ctx.r11.s64 + -99;
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820acac4
	if (!ctx.cr6.gt) goto loc_820ACAC4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820acad4
	goto loc_820ACAD4;
loc_820ACAC4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820ACAD4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820acaf0
	if (ctx.cr6.gt) goto loc_820ACAF0;
	// b 0x820acb00
	goto loc_820ACB00;
loc_820ACAF0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,99
	ctx.r10.s64 = 99;
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
loc_820ACB00:
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
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,634(r11)
	REX_STORE_U16(ctx.r11.u32 + 634, ctx.r10.u16);
	// bl 0x820ab0d0
	ctx.lr = 0x820ACB3C;
	sub_820AB0D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820CFA90) {
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
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
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
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
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5104
	ctx.r11.s64 = ctx.r11.s64 + 5104;
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
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
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
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
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
	// bne cr6,0x820cfc08
	if (!ctx.cr6.eq) goto loc_820CFC08;
	// b 0x820d0218
	goto loc_820D0218;
loc_820CFC08:
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5096
	ctx.r11.s64 = ctx.r11.s64 + 5096;
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
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
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
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
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
	// beq cr6,0x820cfd28
	if (ctx.cr6.eq) goto loc_820CFD28;
	// b 0x820d0218
	goto loc_820D0218;
loc_820CFD28:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5100
	ctx.r11.s64 = ctx.r11.s64 + 5100;
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
	// addi r11,r11,15992
	ctx.r11.s64 = ctx.r11.s64 + 15992;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
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
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
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
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
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
	// addi r10,r10,15988
	ctx.r10.s64 = ctx.r10.s64 + 15988;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,919(r11)
	REX_STORE_U8(ctx.r11.u32 + 919, ctx.r10.u8);
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
	// blt cr6,0x820cfe70
	if (ctx.cr6.lt) goto loc_820CFE70;
	// b 0x820d0054
	goto loc_820D0054;
loc_820CFE70:
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
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820ce120
	ctx.lr = 0x820CFEAC;
	sub_820CE120(ctx, base);
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
	// lhz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
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
	// bne cr6,0x820cfef8
	if (!ctx.cr6.eq) goto loc_820CFEF8;
	// b 0x820d002c
	goto loc_820D002C;
loc_820CFEF8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,420(r11)
	REX_STORE_U8(ctx.r11.u32 + 420, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,788(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 788);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,788(r10)
	REX_STORE_U16(ctx.r10.u32 + 788, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,788(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 788);
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
	// lhz r11,788(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 788);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
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
	// lhz r11,788(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 788);
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
	// ble cr6,0x820cffbc
	if (!ctx.cr6.gt) goto loc_820CFFBC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820cffcc
	goto loc_820CFFCC;
loc_820CFFBC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820CFFCC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820cffe8
	if (ctx.cr6.gt) goto loc_820CFFE8;
	// b 0x820d0054
	goto loc_820D0054;
loc_820CFFE8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// sth r10,788(r11)
	REX_STORE_U16(ctx.r11.u32 + 788, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,790(r11)
	REX_STORE_U8(ctx.r11.u32 + 790, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,374(r11)
	REX_STORE_U8(ctx.r11.u32 + 374, ctx.r10.u8);
	// b 0x820d0054
	goto loc_820D0054;
loc_820D002C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,788(r11)
	REX_STORE_U16(ctx.r11.u32 + 788, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,790(r11)
	REX_STORE_U8(ctx.r11.u32 + 790, ctx.r10.u8);
loc_820D0054:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,419(r11)
	REX_STORE_U8(ctx.r11.u32 + 419, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,419(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 419);
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
	// lbz r11,419(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 419);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// lbz r11,419(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 419);
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
	// ble cr6,0x820d00ec
	if (!ctx.cr6.gt) goto loc_820D00EC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820d00fc
	goto loc_820D00FC;
loc_820D00EC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D00FC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d0118
	if (ctx.cr6.eq) goto loc_820D0118;
	// b 0x820d0210
	goto loc_820D0210;
loc_820D0118:
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
	// lbz r11,368(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 368);
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,420(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 420);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
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
	// addi r10,r10,15992
	ctx.r10.s64 = ctx.r10.s64 + 15992;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,368(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 368);
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
	// stb r11,368(r10)
	REX_STORE_U8(ctx.r10.u32 + 368, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,368(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 368);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,368(r10)
	REX_STORE_U8(ctx.r10.u32 + 368, ctx.r11.u8);
loc_820D0210:
	// b 0x820d0240
	goto loc_820D0240;
loc_820D0218:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,419(r11)
	REX_STORE_U8(ctx.r11.u32 + 419, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,583(r11)
	REX_STORE_U8(ctx.r11.u32 + 583, ctx.r10.u8);
loc_820D0240:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FBE00) {
	REX_FUNC_PROLOGUE();
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
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,4920
	ctx.r11.s64 = ctx.r11.s64 + 4920;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// stw r11,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
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
	// addi r11,r11,3008
	ctx.r11.s64 = ctx.r11.s64 + 3008;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,16,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF000FFFF;
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// b 0x820fbe80
	goto loc_820FBE80;
loc_820FBE74:
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
loc_820FBE80:
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x820fbec0
	if (!ctx.cr6.lt) goto loc_820FBEC0;
	// lwz r11,-4(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,-8(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-4(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// b 0x820fbe74
	goto loc_820FBE74;
loc_820FBEC0:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF488) {
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 288);
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
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-20816
	ctx.r10.s64 = ctx.r10.s64 + -20816;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820FF51C;
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

DEFINE_REX_FUNC(sub_821020F0) {
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
	// addi r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 37;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// bl 0x820def00
	ctx.lr = 0x821021E8;
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

DEFINE_REX_FUNC(sub_821077E8) {
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
	// bne cr6,0x82107840
	if (!ctx.cr6.eq) goto loc_82107840;
	// b 0x82107858
	goto loc_82107858;
loc_82107840:
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
	// bl 0x82157ab8
	ctx.lr = 0x82107858;
	sub_82157AB8(ctx, base);
loc_82107858:
	// bl 0x820dd0e0
	ctx.lr = 0x8210785C;
	sub_820DD0E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210A880) {
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
	// bne cr6,0x8210a8d8
	if (!ctx.cr6.eq) goto loc_8210A8D8;
	// b 0x8210a8e0
	goto loc_8210A8E0;
loc_8210A8D8:
	// bl 0x820dfbc0
	ctx.lr = 0x8210A8DC;
	sub_820DFBC0(ctx, base);
	// b 0x8210a8e4
	goto loc_8210A8E4;
loc_8210A8E0:
	// bl 0x820dd0e0
	ctx.lr = 0x8210A8E4;
	sub_820DD0E0(ctx, base);
loc_8210A8E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210D118) {
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
	// blt cr6,0x8210d170
	if (ctx.cr6.lt) goto loc_8210D170;
	// b 0x8210d17c
	goto loc_8210D17C;
loc_8210D170:
	// bl 0x820dd508
	ctx.lr = 0x8210D174;
	sub_820DD508(ctx, base);
	// bl 0x820dfbc0
	ctx.lr = 0x8210D178;
	sub_820DFBC0(ctx, base);
	// b 0x8210d41c
	goto loc_8210D41C;
loc_8210D17C:
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
	// bne cr6,0x8210d1c8
	if (!ctx.cr6.eq) goto loc_8210D1C8;
	// b 0x8210d418
	goto loc_8210D418;
loc_8210D1C8:
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
	// addi r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 + 416;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
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
	// bne cr6,0x8210d24c
	if (!ctx.cr6.eq) goto loc_8210D24C;
	// b 0x8210d270
	goto loc_8210D270;
loc_8210D24C:
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
	// addi r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 + 544;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8210D270:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5024
	ctx.r11.s64 = ctx.r11.s64 + 5024;
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
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
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
	// lbz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 208);
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
	// lbz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 208);
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
	// lbz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 208);
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
	// ble cr6,0x8210d328
	if (!ctx.cr6.gt) goto loc_8210D328;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8210d338
	goto loc_8210D338;
loc_8210D328:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8210D338:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210d354
	if (!ctx.cr6.eq) goto loc_8210D354;
	// b 0x8210d370
	goto loc_8210D370;
loc_8210D354:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8210D370:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820dd400
	ctx.lr = 0x8210D384;
	sub_820DD400(ctx, base);
	// bl 0x820f9e60
	ctx.lr = 0x8210D388;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210d3a4
	if (!ctx.cr6.eq) goto loc_8210D3A4;
	// b 0x8210d418
	goto loc_8210D418;
loc_8210D3A4:
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
	// li r10,4615
	ctx.r10.s64 = 4615;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
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
loc_8210D418:
	// bl 0x820dd0e0
	ctx.lr = 0x8210D41C;
	sub_820DD0E0(ctx, base);
loc_8210D41C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821228E0) {
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
	// li r10,-16384
	ctx.r10.s64 = -16384;
	// sth r10,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
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
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,144
	ctx.r10.s64 = 144;
	// sth r10,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,-64
	ctx.r10.s64 = -64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// bne cr6,0x821229e8
	if (!ctx.cr6.eq) goto loc_821229E8;
	// b 0x82122a14
	goto loc_82122A14;
loc_821229E8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,448
	ctx.r10.s64 = 448;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
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
loc_82122A14:
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
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
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
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// bl 0x82122818
	ctx.lr = 0x82122A50;
	sub_82122818(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212CB00) {
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
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// bl 0x8212c670
	ctx.lr = 0x8212CB34;
	sub_8212C670(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212ED98) {
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
	// blt cr6,0x8212ee54
	if (ctx.cr6.lt) goto loc_8212EE54;
	// b 0x8212ef78
	goto loc_8212EF78;
loc_8212EE54:
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212eed8
	if (ctx.cr6.eq) goto loc_8212EED8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22168
	ctx.r3.s64 = ctx.r11.s64 + 22168;
	// bl 0x821cdd88
	ctx.lr = 0x8212EEB8;
	sub_821CDD88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821cab58
	ctx.lr = 0x8212EEC0;
	sub_821CAB58(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22152
	ctx.r3.s64 = ctx.r11.s64 + 22152;
	// bl 0x821cdd88
	ctx.lr = 0x8212EECC;
	sub_821CDD88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821cab58
	ctx.lr = 0x8212EED4;
	sub_821CAB58(ctx, base);
	// b 0x8212ef00
	goto loc_8212EF00;
loc_8212EED8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22136
	ctx.r3.s64 = ctx.r11.s64 + 22136;
	// bl 0x821cdd88
	ctx.lr = 0x8212EEE4;
	sub_821CDD88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821cab58
	ctx.lr = 0x8212EEEC;
	sub_821CAB58(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22120
	ctx.r3.s64 = ctx.r11.s64 + 22120;
	// bl 0x821cdd88
	ctx.lr = 0x8212EEF8;
	sub_821CDD88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821cab58
	ctx.lr = 0x8212EF00;
	sub_821CAB58(ctx, base);
loc_8212EF00:
	// bl 0x82155c00
	ctx.lr = 0x8212EF04;
	sub_82155C00(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8212e5a0
	ctx.lr = 0x8212EF78;
	sub_8212E5A0(ctx, base);
loc_8212EF78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213CD30) {
	REX_FUNC_PROLOGUE();
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
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
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
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
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
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8213cdd4
	if (ctx.cr6.lt) goto loc_8213CDD4;
	// b 0x8213ce50
	goto loc_8213CE50;
loc_8213CDD4:
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
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
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
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
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
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_8213CE50:
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

DEFINE_REX_FUNC(sub_8214BB40) {
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
	// addi r10,r10,-11832
	ctx.r10.s64 = ctx.r10.s64 + -11832;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BBA0;
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

DEFINE_REX_FUNC(sub_8214F128) {
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
	// addi r10,r10,-11608
	ctx.r10.s64 = ctx.r10.s64 + -11608;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F1AC;
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

DEFINE_REX_FUNC(sub_82153910) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,4357
	ctx.r10.s64 = 4357;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8215394C:
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// addi r10,r10,-11036
	ctx.r10.s64 = ctx.r10.s64 + -11036;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
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
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
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
	// bge cr6,0x82153a90
	if (!ctx.cr6.lt) goto loc_82153A90;
	// b 0x8215394c
	goto loc_8215394C;
loc_82153A90:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215D690) {
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
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-31796
	ctx.r11.s64 = ctx.r11.s64 + -31796;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d6c0
	if (ctx.cr6.eq) goto loc_8215D6C0;
	// b 0x8215d6e0
	goto loc_8215D6E0;
loc_8215D6C0:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-31796
	ctx.r11.s64 = ctx.r11.s64 + -31796;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8215c4b0
	ctx.lr = 0x8215D6E0;
	sub_8215C4B0(ctx, base);
loc_8215D6E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82160938) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// sth r4,30(r1)
	REX_STORE_U16(ctx.r1.u32 + 30, ctx.r4.u16);
	// sth r5,38(r1)
	REX_STORE_U16(ctx.r1.u32 + 38, ctx.r5.u16);
	// lhz r11,30(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 30);
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
loc_8216094C:
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,38(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 38);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82160994
	if (!ctx.cr0.eq) goto loc_82160994;
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// b 0x8216094c
	goto loc_8216094C;
loc_82160994:
	// lhz r11,30(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 30);
	// sth r11,-14(r1)
	REX_STORE_U16(ctx.r1.u32 + -14, ctx.r11.u16);
loc_8216099C:
	// lhz r11,-14(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,38(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 38);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821609e4
	if (!ctx.cr0.eq) goto loc_821609E4;
	// lhz r11,-14(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -14);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-14(r1)
	REX_STORE_U16(ctx.r1.u32 + -14, ctx.r11.u16);
	// b 0x8216099c
	goto loc_8216099C;
loc_821609E4:
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r11,r11,2000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2000));
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,38(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 38);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// sth r11,30(r1)
	REX_STORE_U16(ctx.r1.u32 + 30, ctx.r11.u16);
	// b 0x82160a28
	goto loc_82160A28;
loc_82160A1C:
	// lhz r11,30(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 30);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,30(r1)
	REX_STORE_U16(ctx.r1.u32 + 30, ctx.r11.u16);
loc_82160A28:
	// lhz r11,30(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 30);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r10,-14(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -14);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82160a78
	if (ctx.cr6.gt) goto loc_82160A78;
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160a68
	if (ctx.cr0.eq) goto loc_82160A68;
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160a68
	if (ctx.cr0.eq) goto loc_82160A68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82160a7c
	goto loc_82160A7C;
loc_82160A68:
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// b 0x82160a1c
	goto loc_82160A1C;
loc_82160A78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82160A7C:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82172A80) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stb r11,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82172ab0
	goto loc_82172AB0;
loc_82172AA4:
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_82172AB0:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,43(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 43);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82172ae8
	if (!ctx.cr6.lt) goto loc_82172AE8;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,1164
	ctx.r11.s64 = ctx.r11.s64 + 1164;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// b 0x82172aa4
	goto loc_82172AA4;
loc_82172AE8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,13(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82172b24
	if (ctx.cr6.eq) goto loc_82172B24;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,59(r11)
	REX_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// b 0x82172b44
	goto loc_82172B44;
loc_82172B24:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,59(r11)
	REX_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stb r11,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
loc_82172B44:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82178088) {
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
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,6068
	ctx.r10.s64 = ctx.r10.s64 + 6068;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821780C0;
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

DEFINE_REX_FUNC(sub_82178F48) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// b 0x82178f70
	goto loc_82178F70;
loc_82178F64:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
loc_82178F70:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82179108
	if (!ctx.cr6.lt) goto loc_82179108;
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// b 0x82178f98
	goto loc_82178F98;
loc_82178F8C:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_82178F98:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82179104
	if (!ctx.cr0.gt) goto loc_82179104;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82178fd8
	if (!ctx.cr0.eq) goto loc_82178FD8;
	// b 0x82179104
	goto loc_82179104;
loc_82178FD8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179040
	if (ctx.cr0.eq) goto loc_82179040;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r4,38(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82174bc8
	ctx.lr = 0x82179040;
	sub_82174BC8(ctx, base);
loc_82179040:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179100
	if (ctx.cr0.eq) goto loc_82179100;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821790d4
	if (ctx.cr0.eq) goto loc_821790D4;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82174b90
	ctx.lr = 0x821790D0;
	sub_82174B90(ctx, base);
	// b 0x82179100
	goto loc_82179100;
loc_821790D4:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82174af8
	ctx.lr = 0x82179100;
	sub_82174AF8(ctx, base);
loc_82179100:
	// b 0x82178f8c
	goto loc_82178F8C;
loc_82179104:
	// b 0x82178f64
	goto loc_82178F64;
loc_82179108:
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

DEFINE_REX_FUNC(sub_8218ECD0) {
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
	ctx.lr = 0x8218ECF0;
	sub_821C4A50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218ee04
	if (ctx.cr0.eq) goto loc_8218EE04;
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
	// beq cr6,0x8218ed54
	if (ctx.cr6.eq) goto loc_8218ED54;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x821c1d48
	ctx.lr = 0x8218ED1C;
	sub_821C1D48(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-384
	ctx.r10.s64 = ctx.r10.s64 + -384;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8218ed54
	if (ctx.cr6.eq) goto loc_8218ED54;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-384
	ctx.r10.s64 = ctx.r10.s64 + -384;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8218ED54:
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
	// beq cr6,0x8218eda0
	if (ctx.cr6.eq) goto loc_8218EDA0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-384
	ctx.r10.s64 = ctx.r10.s64 + -384;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82272590
	ctx.lr = 0x8218ED9C;
	sub_82272590(ctx, base);
	// b 0x8218ee04
	goto loc_8218EE04;
loc_8218EDA0:
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
	ctx.lr = 0x8218EDCC;
	sub_82272590(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-384
	ctx.r10.s64 = ctx.r10.s64 + -384;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x821c1d48
	ctx.lr = 0x8218EDEC;
	sub_821C1D48(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-384
	ctx.r10.s64 = ctx.r10.s64 + -384;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r3,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
loc_8218EE04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197070) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// addi r10,r10,-28476
	ctx.r10.s64 = ctx.r10.s64 + -28476;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16456
	ctx.r11.s64 = ctx.r11.s64 + -16456;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82197190
	if (ctx.cr6.eq) goto loc_82197190;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r11,r11,-28476
	ctx.r11.s64 = ctx.r11.s64 + -28476;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82197190
	if (ctx.cr6.lt) goto loc_82197190;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r11,r11,14984
	ctx.r11.s64 = ctx.r11.s64 + 14984;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// addi r10,r10,-28476
	ctx.r10.s64 = ctx.r10.s64 + -28476;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82197190
	if (!ctx.cr6.lt) goto loc_82197190;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16456
	ctx.r11.s64 = ctx.r11.s64 + -16456;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// addi r10,r10,30920
	ctx.r10.s64 = ctx.r10.s64 + 30920;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,-32113
	ctx.r9.s64 = -2104557568;
	// addi r9,r9,-28476
	ctx.r9.s64 = ctx.r9.s64 + -28476;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,984(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 984);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82197190
	if (ctx.cr6.eq) goto loc_82197190;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16456
	ctx.r11.s64 = ctx.r11.s64 + -16456;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// addi r10,r10,30920
	ctx.r10.s64 = ctx.r10.s64 + 30920;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,-32113
	ctx.r9.s64 = -2104557568;
	// addi r9,r9,-28476
	ctx.r9.s64 = ctx.r9.s64 + -28476;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,984(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 984);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82197170
	if (!ctx.cr6.eq) goto loc_82197170;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-24024
	ctx.r11.s64 = ctx.r11.s64 + -24024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// addi r10,r10,-24020
	ctx.r10.s64 = ctx.r10.s64 + -24020;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82197190
	goto loc_82197190;
loc_82197170:
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// addi r10,r10,-24020
	ctx.r10.s64 = ctx.r10.s64 + -24020;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82197190:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A290) {
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
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821c4988
	ctx.lr = 0x8219A2A8;
	sub_821C4988(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821c2970
	ctx.lr = 0x8219A2B4;
	sub_821C2970(ctx, base);
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

DEFINE_REX_FUNC(sub_8219B398) {
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
	ctx.lr = 0x8219B3AC;
	sub_82190108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8219b3c4
	if (ctx.cr0.eq) goto loc_8219B3C4;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8218f440
	ctx.lr = 0x8219B3BC;
	sub_8218F440(ctx, base);
	// b 0x8219b3cc
	goto loc_8219B3CC;
loc_8219B3C4:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8219b2a8
	ctx.lr = 0x8219B3CC;
	sub_8219B2A8(ctx, base);
loc_8219B3CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E430) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8219e4ac
	if (ctx.cr6.eq) goto loc_8219E4AC;
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
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4088
	ctx.r11.s64 = ctx.r11.s64 + 4088;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4088
	ctx.r11.s64 = ctx.r11.s64 + 4088;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,9880
	ctx.r3.s64 = ctx.r11.s64 + 9880;
	// bl 0x8218c2d8
	ctx.lr = 0x8219E4AC;
	sub_8218C2D8(ctx, base);
loc_8219E4AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3140) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821A3148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821a2fc0
	ctx.lr = 0x821A315C;
	sub_821A2FC0(ctx, base);
	// add r11,r30,r6
	ctx.r11.u64 = ctx.r30.u64 + ctx.r6.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821a3170
	if (!ctx.cr6.lt) goto loc_821A3170;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a31cc
	goto loc_821A31CC;
loc_821A3170:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r10,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r29,r10,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x821a319c
	if (!ctx.cr6.lt) goto loc_821A319C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_821A319C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82272590
	ctx.lr = 0x821A31B0;
	sub_82272590(ctx, base);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x821a31c8
	if (!ctx.cr6.gt) goto loc_821A31C8;
	// subf r5,r29,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x82272590
	ctx.lr = 0x821A31C8;
	sub_82272590(ctx, base);
loc_821A31C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821A31CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5578) {
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
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r11,0,0,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE00000;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r10,r11,16,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82272590
	ctx.lr = 0x821A55A4;
	sub_82272590(ctx, base);
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

DEFINE_REX_FUNC(sub_821A6FA0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13928
	ctx.r11.s64 = ctx.r11.s64 + -13928;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x821c9b68
	ctx.lr = 0x821A6FC8;
	sub_821C9B68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-13960
	ctx.r11.s64 = ctx.r11.s64 + -13960;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_821A8890) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwimi r11,r3,2,28,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// subfe r6,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r4,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF0000;
	// rlwimi r6,r11,2,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r8,r4,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r4,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r7,r7,0,16,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,24132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24132);
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822202f8
	sub_822202F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AC6E0) {
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
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mulli r10,r31,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(76));
	// addi r11,r11,-26944
	ctx.r11.s64 = ctx.r11.s64 + -26944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821ab838
	ctx.lr = 0x821AC71C;
	sub_821AB838(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821ac7a8
	if (ctx.cr6.eq) goto loc_821AC7A8;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x821ac788
	if (ctx.cr6.lt) goto loc_821AC788;
	// beq cr6,0x821ac760
	if (ctx.cr6.eq) goto loc_821AC760;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x821ac7a8
	if (!ctx.cr6.lt) goto loc_821AC7A8;
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,256
	ctx.r11.s64 = 256;
loc_821AC744:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x821ac744
	if (!ctx.cr0.eq) goto loc_821AC744;
	// b 0x821ac7a8
	goto loc_821AC7A8;
loc_821AC760:
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,256
	ctx.r11.s64 = 256;
loc_821AC76C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x821ac76c
	if (!ctx.cr0.eq) goto loc_821AC76C;
	// b 0x821ac7a8
	goto loc_821AC7A8;
loc_821AC788:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_821AC790:
	// addis r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -16777216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x821ac790
	if (ctx.cr6.lt) goto loc_821AC790;
loc_821AC7A8:
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

DEFINE_REX_FUNC(sub_821B1988) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b19d8
	if (ctx.cr0.eq) goto loc_821B19D8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bgt 0x821b19d8
	if (ctx.cr0.gt) goto loc_821B19D8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b19d8
	if (!ctx.cr6.eq) goto loc_821B19D8;
	// bl 0x821b28b8
	ctx.lr = 0x821B19D8;
	sub_821B28B8(ctx, base);
loc_821B19D8:
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821b19f0
	if (ctx.cr6.lt) goto loc_821B19F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821B19F0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,4092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x821b96b0
	ctx.lr = 0x821B1A10;
	sub_821B96B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9660
	ctx.lr = 0x821B1A18;
	sub_821B9660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9780
	ctx.lr = 0x821B1A20;
	sub_821B9780(ctx, base);
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

DEFINE_REX_FUNC(sub_821BAF30) {
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
	// lwz r31,24(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x821baf88
	goto loc_821BAF88;
loc_821BAF50:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BAF68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x821baf7c
	if (ctx.cr6.eq) goto loc_821BAF7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BAF7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821baf90
	if (!ctx.cr6.eq) goto loc_821BAF90;
	// lwz r31,48(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
loc_821BAF88:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821baf50
	if (!ctx.cr0.eq) goto loc_821BAF50;
loc_821BAF90:
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

DEFINE_REX_FUNC(sub_821BC7D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821BC7E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821baa68
	ctx.lr = 0x821BC7F0;
	sub_821BAA68(ctx, base);
	// addi r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 + 52;
	// lwz r31,48(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bc858
	if (ctx.cr6.eq) goto loc_821BC858;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821bc858
	if (ctx.cr0.eq) goto loc_821BC858;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,15755
	ctx.r29.s64 = ctx.r11.s64 + 15755;
loc_821BC810:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc824
	if (ctx.cr6.eq) goto loc_821BC824;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x821bc828
	goto loc_821BC828;
loc_821BC824:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_821BC828:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc83c
	if (ctx.cr6.eq) goto loc_821BC83C;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x821bc840
	goto loc_821BC840;
loc_821BC83C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_821BC840:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bc720
	ctx.lr = 0x821BC848;
	sub_821BC720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bafa8
	ctx.lr = 0x821BC850;
	sub_821BAFA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821bc810
	if (!ctx.cr0.eq) goto loc_821BC810;
loc_821BC858:
	// lwz r31,24(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// b 0x821bc884
	goto loc_821BC884;
loc_821BC860:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ba788
	ctx.lr = 0x821BC880;
	sub_821BA788(ctx, base);
	// lwz r31,48(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
loc_821BC884:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821bc860
	if (!ctx.cr0.eq) goto loc_821BC860;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C1238) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x821C1240;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r11,26044
	ctx.r4.s64 = ctx.r11.s64 + 26044;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,24324
	ctx.r3.s64 = ctx.r11.s64 + 24324;
	// bl 0x821c79b8
	ctx.lr = 0x821C1260;
	sub_821C79B8(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-22096
	ctx.r31.s64 = ctx.r11.s64 + -22096;
	// lis r27,1
	ctx.r27.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// ori r27,r27,30704
	ctx.r27.u64 = ctx.r27.u64 | 30704;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r9,r10,30736
	ctx.r9.s64 = ctx.r10.s64 + 30736;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// std r30,30704(r11)
	REX_STORE_U64(ctx.r11.u32 + 30704, ctx.r30.u64);
	// li r8,2
	ctx.r8.s64 = 2;
	// std r30,30712(r11)
	REX_STORE_U64(ctx.r11.u32 + 30712, ctx.r30.u64);
	// addi r10,r10,30704
	ctx.r10.s64 = ctx.r10.s64 + 30704;
	// std r30,30720(r11)
	REX_STORE_U64(ctx.r11.u32 + 30720, ctx.r30.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r30,30728(r11)
	REX_STORE_U64(ctx.r11.u32 + 30728, ctx.r30.u64);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ori r11,r11,30696
	ctx.r11.u64 = ctx.r11.u64 | 30696;
	// lwz r4,908(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 908);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,30700
	ctx.r11.u64 = ctx.r11.u64 | 30700;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32778
	ctx.r11.u64 = ctx.r11.u64 | 32778;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,30708
	ctx.r11.u64 = ctx.r11.u64 | 30708;
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// ori r11,r11,32779
	ctx.r11.u64 = ctx.r11.u64 | 32779;
	// ori r28,r28,30712
	ctx.r28.u64 = ctx.r28.u64 | 30712;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,30716
	ctx.r11.u64 = ctx.r11.u64 | 30716;
	// stwx r29,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// ori r29,r29,30736
	ctx.r29.u64 = ctx.r29.u64 | 30736;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// bl 0x82234d58
	ctx.lr = 0x821C1320;
	sub_82234D58(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x821c1338
	if (ctx.cr6.eq) goto loc_821C1338;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,25980
	ctx.r3.s64 = ctx.r11.s64 + 25980;
	// bl 0x821c79b8
	ctx.lr = 0x821C1334;
	sub_821C79B8(ctx, base);
	// b 0x821c1344
	goto loc_821C1344;
loc_821C1338:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// bl 0x821c79b8
	ctx.lr = 0x821C1344;
	sub_821C79B8(ctx, base);
loc_821C1344:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,30736
	ctx.r11.u64 = ctx.r11.u64 | 30736;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82273868
	ctx.lr = 0x821C1354;
	sub_82273868(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,30740
	ctx.r10.u64 = ctx.r10.u64 | 30740;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x821c93a0
	ctx.lr = 0x821C1370;
	sub_821C93A0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r4,908(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 908);
	// ori r11,r11,30740
	ctx.r11.u64 = ctx.r11.u64 | 30740;
	// ori r10,r10,30696
	ctx.r10.u64 = ctx.r10.u64 | 30696;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r6,r11,30736
	ctx.r6.s64 = ctx.r11.s64 + 30736;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r10,r11,30704
	ctx.r10.s64 = ctx.r11.s64 + 30704;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,30700
	ctx.r11.u64 = ctx.r11.u64 | 30700;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82234d58
	ctx.lr = 0x821C13CC;
	sub_82234D58(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821c13e4
	if (ctx.cr6.eq) goto loc_821C13E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,25876
	ctx.r3.s64 = ctx.r11.s64 + 25876;
	// bl 0x821c79b8
	ctx.lr = 0x821C13E0;
	sub_821C79B8(ctx, base);
	// b 0x821c13f8
	goto loc_821C13F8;
loc_821C13E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,25836
	ctx.r3.s64 = ctx.r11.s64 + 25836;
	// bl 0x821c79b8
	ctx.lr = 0x821C13F0;
	sub_821C79B8(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,1800(r31)
	REX_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
loc_821C13F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CA920) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lwz r10,-26608(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -26608);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,-26608(r11)
	REX_STORE_U32(ctx.r11.u32 + -26608, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CAF60) {
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
	// bl 0x821ca938
	ctx.lr = 0x821CAF78;
	sub_821CA938(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821caf88
	if (ctx.cr0.eq) goto loc_821CAF88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ed7d0
	ctx.lr = 0x821CAF88;
	sub_821ED7D0(ctx, base);
loc_821CAF88:
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

DEFINE_REX_FUNC(sub_821CC178) {
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
	// bl 0x821ca938
	ctx.lr = 0x821CC190;
	sub_821CA938(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821cc1a0
	if (!ctx.cr0.eq) goto loc_821CC1A0;
loc_821CC198:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821cc20c
	goto loc_821CC20C;
loc_821CC1A0:
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821cc1cc
	if (ctx.cr6.eq) goto loc_821CC1CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cdd90
	ctx.lr = 0x821CC1B4;
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
	ctx.lr = 0x821CC1C8;
	sub_821D3BE8(ctx, base);
	// b 0x821cc198
	goto loc_821CC198;
loc_821CC1CC:
	// lwz r9,324(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r11,340(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r10,308(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,328(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r9,344(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// blt cr6,0x821cc1f4
	if (ctx.cr6.lt) goto loc_821CC1F4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_821CC1F4:
	// lwz r10,312(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821cc204
	if (ctx.cr6.lt) goto loc_821CC204;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_821CC204:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821CC20C:
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

DEFINE_REX_FUNC(sub_821D0040) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lfs f0,27780(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27780);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821d0084
	if (!ctx.cr6.eq) goto loc_821D0084;
	// lfs f0,27776(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27776);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x821d00e0
	if (ctx.cr6.eq) goto loc_821D00E0;
loc_821D0084:
	// stfs f31,27776(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 27776, temp.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stfs f30,27780(r10)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 27780, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r31,-32070
	ctx.r31.s64 = -2101739520;
	// lwz r11,-23280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d00b0
	if (ctx.cr6.eq) goto loc_821D00B0;
	// lwz r3,15892(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15892);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x821b0f10
	ctx.lr = 0x821D00B0;
	sub_821B0F10(ctx, base);
loc_821D00B0:
	// lwz r11,15892(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15892);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stfs f30,500(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stfs f31,504(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 504, temp.u32);
	// bl 0x821b0430
	ctx.lr = 0x821D00C4;
	sub_821B0430(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d00d4
	if (ctx.cr0.eq) goto loc_821D00D4;
	// lwz r3,15892(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15892);
	// bl 0x821b0eb0
	ctx.lr = 0x821D00D4;
	sub_821B0EB0(ctx, base);
loc_821D00D4:
	// bl 0x821cfbf8
	ctx.lr = 0x821D00D8;
	sub_821CFBF8(ctx, base);
	// stfs f30,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_821D00E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D8040) {
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
	// bl 0x821f9cb0
	ctx.lr = 0x821D8050;
	sub_821F9CB0(ctx, base);
	// bl 0x821f7248
	ctx.lr = 0x821D8054;
	sub_821F7248(ctx, base);
	// bl 0x821f7b90
	ctx.lr = 0x821D8058;
	sub_821F7B90(ctx, base);
	// bl 0x821f7c28
	ctx.lr = 0x821D805C;
	sub_821F7C28(ctx, base);
	// bl 0x821f5740
	ctx.lr = 0x821D8060;
	sub_821F5740(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D8CD8) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x821d8ca8
	ctx.lr = 0x821D8CEC;
	sub_821D8CA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821d8d14
	if (ctx.cr6.eq) goto loc_821D8D14;
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// mulli r11,r3,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(12));
	// addi r10,r10,-14728
	ctx.r10.s64 = ctx.r10.s64 + -14728;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
loc_821D8D14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DAF18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821DAF20;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
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
	ctx.lr = 0x821DAF64;
	sub_822724F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f0,1828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// addi r10,r10,-21160
	ctx.r10.s64 = ctx.r10.s64 + -21160;
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
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// blt cr6,0x821dafc4
	if (ctx.cr6.lt) goto loc_821DAFC4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821DAFC4:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x821dafd0
	if (!ctx.cr6.lt) goto loc_821DAFD0;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_821DAFD0:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x821dafdc
	if (!ctx.cr6.lt) goto loc_821DAFDC;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_821DAFDC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821dafe8
	if (!ctx.cr6.lt) goto loc_821DAFE8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821DAFE8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bge cr6,0x821db000
	if (!ctx.cr6.lt) goto loc_821DB000;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x821db004
	goto loc_821DB004;
loc_821DB000:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821DB004:
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821db014
	if (!ctx.cr6.gt) goto loc_821DB014;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_821DB014:
	// li r10,1
	ctx.r10.s64 = 1;
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stb r10,24(r31)
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// beq cr6,0x821db038
	if (ctx.cr6.eq) goto loc_821DB038;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// b 0x821db03c
	goto loc_821DB03C;
loc_821DB038:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821DB03C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821db04c
	if (ctx.cr0.eq) goto loc_821DB04C;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// b 0x821db050
	goto loc_821DB050;
loc_821DB04C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_821DB050:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821db060
	if (ctx.cr0.eq) goto loc_821DB060;
	// bl 0x821cdd88
	ctx.lr = 0x821DB05C;
	sub_821CDD88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821DB060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E4AB0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x821e4acc
	if (!ctx.cr6.eq) goto loc_821E4ACC;
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lwz r3,-28208(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28208);
	// blr 
	return;
loc_821E4ACC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// addi r10,r10,14984
	ctx.r10.s64 = ctx.r10.s64 + 14984;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,532(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 532);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// lwz r10,-16456(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -16456);
	// lwz r9,984(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 984);
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// lwz r10,30920(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 30920);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,216(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E8288) {
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
	// bl 0x821e8268
	ctx.lr = 0x821E8298;
	sub_821E8268(ctx, base);
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821e8278
	ctx.lr = 0x821E82A0;
	sub_821E8278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E9A20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821E9A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,312(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r10,308(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 308);
	// mullw. r29,r11,r10
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x821e9a78
	if (!ctx.cr0.gt) goto loc_821E9A78;
loc_821E9A44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,444(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 444);
	// bl 0x821d37d0
	ctx.lr = 0x821E9A50;
	sub_821D37D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e9a6c
	if (ctx.cr0.eq) goto loc_821E9A6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E9A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9A6C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821e9a44
	if (ctx.cr6.lt) goto loc_821E9A44;
loc_821E9A78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d3d28
	ctx.lr = 0x821E9A80;
	sub_821D3D28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EC6F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ECD38) {
	REX_FUNC_PROLOGUE();
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
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-26612(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -26612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ecda4
	if (ctx.cr6.eq) goto loc_821ECDA4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne 0x821ecd74
	if (!ctx.cr0.eq) goto loc_821ECD74;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821ECD74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ecda4
	if (ctx.cr6.eq) goto loc_821ECDA4;
loc_821ECD7C:
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bne 0x821ecd90
	if (!ctx.cr0.eq) goto loc_821ECD90;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ECD90:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ec900
	ctx.lr = 0x821ECD98;
	sub_821EC900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821ecd7c
	if (!ctx.cr6.eq) goto loc_821ECD7C;
loc_821ECDA4:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_821EF960) {
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
	// bl 0x821ef730
	ctx.lr = 0x821EF978;
	sub_821EF730(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821F0F40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,312(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,328(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,316(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,320(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f13
	ctx.f7.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f1
	ctx.cr6.compare(ctx.f7.f64, ctx.f1.f64);
	// ble cr6,0x821f0f74
	if (!ctx.cr6.gt) goto loc_821F0F74;
	// li r11,16
	ctx.r11.s64 = 16;
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
loc_821F0F74:
	// fsubs f0,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x821f0f8c
	if (!ctx.cr6.gt) goto loc_821F0F8C;
	// li r11,16
	ctx.r11.s64 = 16;
	// fmadds f10,f0,f1,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f11.f64)));
loc_821F0F8C:
	// fsubs f0,f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x821f0fa8
	if (!ctx.cr6.gt) goto loc_821F0FA8;
	// li r11,16
	ctx.r11.s64 = 16;
	// fmadds f0,f0,f1,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f9.f64)));
	// b 0x821f0fac
	goto loc_821F0FAC;
loc_821F0FA8:
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
loc_821F0FAC:
	// stfs f12,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f10,132(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F48D8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r10,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F57F0) {
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
	// lis r9,-32064
	ctx.r9.s64 = -2101346304;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r10,7896(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 7896);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f5830
	if (!ctx.cr0.eq) goto loc_821F5830;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-18556
	ctx.r3.s64 = ctx.r11.s64 + -18556;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stw r11,7896(r9)
	REX_STORE_U32(ctx.r9.u32 + 7896, ctx.r11.u32);
	// bl 0x821cdd88
	ctx.lr = 0x821F5828;
	sub_821CDD88(ctx, base);
	// stw r3,7892(r31)
	REX_STORE_U32(ctx.r31.u32 + 7892, ctx.r3.u32);
	// b 0x821f5834
	goto loc_821F5834;
loc_821F5830:
	// lwz r3,7892(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7892);
loc_821F5834:
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

DEFINE_REX_FUNC(sub_821F77B0) {
	REX_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r11,r11,-14728
	ctx.r11.s64 = ctx.r11.s64 + -14728;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lis r10,-32064
	ctx.r10.s64 = -2101346304;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,7936
	ctx.r10.s64 = ctx.r10.s64 + 7936;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x821f75d0
	sub_821F75D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FCAD0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821fc750
	ctx.lr = 0x821FCAEC;
	sub_821FC750(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821fcb78
	if (ctx.cr6.eq) goto loc_821FCB78;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821fcb54
	if (ctx.cr6.eq) goto loc_821FCB54;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821fcb34
	if (ctx.cr6.eq) goto loc_821FCB34;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x821fcbb4
	if (!ctx.cr6.eq) goto loc_821FCBB4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821fc980
	ctx.lr = 0x821FCB14;
	sub_821FC980(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fcbb4
	if (ctx.cr0.eq) goto loc_821FCBB4;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
loc_821FCB28:
	// stfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x821fcbc4
	goto loc_821FCBC4;
loc_821FCB34:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821fc918
	ctx.lr = 0x821FCB3C;
	sub_821FC918(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fcbb4
	if (ctx.cr0.eq) goto loc_821FCBB4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// b 0x821fcb28
	goto loc_821FCB28;
loc_821FCB54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fc7f8
	ctx.lr = 0x821FCB5C;
	sub_821FC7F8(ctx, base);
	// bl 0x8220fdb0
	ctx.lr = 0x821FCB60;
	sub_8220FDB0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fcbb4
	if (ctx.cr0.eq) goto loc_821FCBB4;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x821fcb28
	goto loc_821FCB28;
loc_821FCB78:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821fc7a0
	ctx.lr = 0x821FCB80;
	sub_821FC7A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82200170
	ctx.lr = 0x821FCB98;
	sub_82200170(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fcbb4
	if (ctx.cr0.eq) goto loc_821FCBB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// b 0x821fcb28
	goto loc_821FCB28;
loc_821FCBB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_821FCBC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

DEFINE_REX_FUNC(sub_82205040) {
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
	// bl 0x82203a88
	ctx.lr = 0x82205058;
	sub_82203A88(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822024f0
	ctx.lr = 0x82205068;
	sub_822024F0(ctx, base);
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

DEFINE_REX_FUNC(sub_82206410) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206504
	if (ctx.cr6.eq) goto loc_82206504;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82206504
	if (ctx.cr0.eq) goto loc_82206504;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82206448
	if (!ctx.cr0.eq) goto loc_82206448;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-9372
	ctx.r3.s64 = ctx.r11.s64 + -9372;
	// b 0x8220650c
	goto loc_8220650C;
loc_82206448:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82206460
	if (ctx.cr0.eq) goto loc_82206460;
	// clrlwi. r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82206498
	if (ctx.cr0.eq) goto loc_82206498;
loc_82206460:
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq 0x82206490
	if (ctx.cr0.eq) goto loc_82206490;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220648c
	if (!ctx.cr6.eq) goto loc_8220648C;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82206490
	goto loc_82206490;
loc_8220648C:
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
loc_82206490:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x822064fc
	goto loc_822064FC;
loc_82206498:
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822064c4
	if (ctx.cr6.eq) goto loc_822064C4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_822064B0:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822064b0
	if (!ctx.cr6.eq) goto loc_822064B0;
loc_822064C4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq 0x822064f8
	if (ctx.cr0.eq) goto loc_822064F8;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822064f4
	if (!ctx.cr6.eq) goto loc_822064F4;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x822064f8
	goto loc_822064F8;
loc_822064F4:
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
loc_822064F8:
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_822064FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82206514
	goto loc_82206514;
loc_82206504:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
loc_8220650C:
	// bl 0x821d3be8
	ctx.lr = 0x82206510;
	sub_821D3BE8(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82206514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210250) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,1828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821f14e0
	sub_821F14E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82210888) {
	REX_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82210748
	ctx.lr = 0x822108A8;
	sub_82210748(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822108bc
	if (ctx.cr0.eq) goto loc_822108BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821e8258
	ctx.lr = 0x822108BC;
	sub_821E8258(ctx, base);
loc_822108BC:
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

DEFINE_REX_FUNC(sub_82212210) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e1c
	ctx.lr = 0x82212218;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// li r17,3
	ctx.r17.s64 = 3;
	// addi r11,r11,-26392
	ctx.r11.s64 = ctx.r11.s64 + -26392;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32064
	ctx.r10.s64 = -2101346304;
	// addi r31,r10,16628
	ctx.r31.s64 = ctx.r10.s64 + 16628;
	// beq cr6,0x8221224c
	if (ctx.cr6.eq) goto loc_8221224C;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r17,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r17.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8221224C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r18,1
	ctx.r18.s64 = 1;
	// lis r19,-32064
	ctx.r19.s64 = -2101346304;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r20,-32064
	ctx.r20.s64 = -2101346304;
	// beq cr6,0x822122c8
	if (ctx.cr6.eq) goto loc_822122C8;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221227c
	if (!ctx.cr6.eq) goto loc_8221227C;
	// stw r18,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r18.u32);
loc_8221227C:
	// lwz r3,16656(r20)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + 16656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82212290
	if (!ctx.cr6.eq) goto loc_82212290;
	// bl 0x822756b8
	ctx.lr = 0x8221228C;
	sub_822756B8(ctx, base);
	// stw r3,16656(r20)
	REX_STORE_U32(ctx.r20.u32 + 16656, ctx.r3.u32);
loc_82212290:
	// lwz r11,16660(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 16660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822122ac
	if (!ctx.cr6.eq) goto loc_822122AC;
	// bl 0x822756b8
	ctx.lr = 0x822122A0;
	sub_822756B8(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r3,16656(r20)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + 16656);
	// stw r11,16660(r19)
	REX_STORE_U32(ctx.r19.u32 + 16660, ctx.r11.u32);
loc_822122AC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822122c4
	if (!ctx.cr6.eq) goto loc_822122C4;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// bl 0x82211e80
	ctx.lr = 0x822122C0;
	sub_82211E80(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_822122C4:
	// bl 0x82211a00
	ctx.lr = 0x822122C8;
	sub_82211A00(ctx, base);
loc_822122C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r24,-32064
	ctx.r24.s64 = -2101346304;
	// addi r23,r11,2676
	ctx.r23.s64 = ctx.r11.s64 + 2676;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r26,-32064
	ctx.r26.s64 = -2101346304;
	// addi r22,r11,2656
	ctx.r22.s64 = ctx.r11.s64 + 2656;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r11,-1080
	ctx.r25.s64 = ctx.r11.s64 + -1080;
loc_822122E8:
	// lwz r29,20(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
loc_822122EC:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stb r11,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_822122FC:
	// lwz r7,-4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r30,-8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
loc_82212304:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// addi r9,r25,272
	ctx.r9.s64 = ctx.r25.s64 + 272;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lhzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221235c
	if (ctx.cr6.eq) goto loc_8221235C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r7,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r7.u32);
	// b 0x8221235c
	goto loc_8221235C;
loc_82212338:
	// addi r8,r25,1800
	ctx.r8.s64 = ctx.r25.s64 + 1800;
	// lhax r3,r11,r8
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32));
	// cmpwi cr6,r3,135
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 135, ctx.xer);
	// blt cr6,0x82212358
	if (ctx.cr6.lt) goto loc_82212358;
	// addi r11,r25,1296
	ctx.r11.s64 = ctx.r25.s64 + 1296;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_82212358:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_8221235C:
	// addi r8,r25,1512
	ctx.r8.s64 = ctx.r25.s64 + 1512;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r6,r25,2600
	ctx.r6.s64 = ctx.r25.s64 + 2600;
	// lhax r8,r11,r8
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r6
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32));
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82212338
	if (!ctx.cr6.eq) goto loc_82212338;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r25,1512
	ctx.r11.s64 = ctx.r25.s64 + 1512;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r25,2088
	ctx.r9.s64 = ctx.r25.s64 + 2088;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lhax r11,r8,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r3,r11,r9
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// cmpwi cr6,r3,134
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 134, ctx.xer);
	// bne cr6,0x82212304
	if (!ctx.cr6.eq) goto loc_82212304;
	// stw r30,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_822123B4:
	// subf r11,r27,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r27.u64;
	// stw r27,16616(r26)
	REX_STORE_U32(ctx.r26.u32 + 16616, ctx.r27.u32);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r11,16632(r24)
	REX_STORE_U32(ctx.r24.u32 + 16632, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// lhax r11,r10,r25
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32));
	// stb r21,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// lwz r3,16616(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 16616);
loc_822123DC:
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bgt cr6,0x822126ec
	if (ctx.cr6.gt) goto loc_822126EC;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,2032
	ctx.r12.s64 = ctx.r12.s64 + 2032;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,8940
	ctx.r12.s64 = ctx.r12.s64 + 8940;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822124D0;
	case 1:
		goto loc_82212530;
	case 2:
		goto loc_822122EC;
	case 3:
		goto loc_822122EC;
	case 4:
		goto loc_822122EC;
	case 5:
		goto loc_822122EC;
	case 6:
		goto loc_822122EC;
	case 7:
		goto loc_82212538;
	case 8:
		goto loc_82212544;
	case 9:
		goto loc_822122EC;
	case 10:
		goto loc_822122EC;
	case 11:
		goto loc_822125A8;
	case 12:
		goto loc_822125A8;
	case 13:
		goto loc_822125C0;
	case 14:
		goto loc_822125C8;
	case 15:
		goto loc_822125D0;
	case 16:
		goto loc_822125D8;
	case 17:
		goto loc_822125E0;
	case 18:
		goto loc_822125E8;
	case 19:
		goto loc_822125F0;
	case 20:
		goto loc_822125F8;
	case 21:
		goto loc_82212600;
	case 22:
		goto loc_82212608;
	case 23:
		goto loc_82212610;
	case 24:
		goto loc_82212618;
	case 25:
		goto loc_82212620;
	case 26:
		goto loc_82212628;
	case 27:
		goto loc_82212630;
	case 28:
		goto loc_82212638;
	case 29:
		goto loc_82212640;
	case 30:
		goto loc_82212654;
	case 31:
		goto loc_8221265C;
	case 32:
		goto loc_82212670;
	case 33:
		goto loc_82212670;
	case 34:
		goto loc_82212684;
	case 35:
		goto loc_82212694;
	case 36:
		goto loc_8221269C;
	case 37:
		goto loc_822126A4;
	case 38:
		goto loc_822126AC;
	case 39:
		goto loc_822126B4;
	case 40:
		goto loc_822126BC;
	case 41:
		goto loc_822126C4;
	case 42:
		goto loc_822126CC;
	case 43:
		goto loc_822126D4;
	case 44:
		goto loc_822126DC;
	case 45:
		goto loc_822125F8;
	case 46:
		goto loc_82212600;
	case 47:
		goto loc_82212608;
	case 48:
		goto loc_82212610;
	case 49:
		goto loc_82212618;
	case 50:
		goto loc_82212620;
	case 51:
		goto loc_82212628;
	case 52:
		goto loc_82212630;
	case 53:
		goto loc_82212638;
	case 54:
		goto loc_8221256C;
	case 55:
		goto loc_82212588;
	case 56:
		goto loc_82212410;
	case 57:
		goto loc_822126E4;
	case 58:
		goto loc_822126E4;
	case 59:
		goto loc_822126E4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82212410:
	// lbz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// subf r10,r3,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// stb r9,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8221244c
	if (!ctx.cr6.eq) goto loc_8221244C;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16656(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 16656);
	// stw r18,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r18.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8221244C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822124e4
	if (!ctx.cr6.gt) goto loc_822124E4;
	// bl 0x82211f70
	ctx.lr = 0x82212468;
	sub_82211F70(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82212518
	if (ctx.cr6.lt) goto loc_82212518;
	// bne cr6,0x822124a8
	if (!ctx.cr6.eq) goto loc_822124A8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82211af0
	ctx.lr = 0x82212480;
	sub_82211AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221259c
	if (ctx.cr0.eq) goto loc_8221259C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,16616(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 16616);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,57
	ctx.r11.s64 = ctx.r11.s64 + 57;
	// b 0x822123dc
	goto loc_822123DC;
loc_822124A8:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x822122e8
	if (!ctx.cr6.lt) goto loc_822122E8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82211850
	ctx.lr = 0x822124C8;
	sub_82211850(ctx, base);
	// lwz r27,16616(r26)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 16616);
	// b 0x822123b4
	goto loc_822123B4;
loc_822124D0:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r30,-8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// b 0x822123b4
	goto loc_822123B4;
loc_822124E4:
	// lwz r30,16616(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 16616);
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// bl 0x82211850
	ctx.lr = 0x822124F4;
	sub_82211850(ctx, base);
	// bl 0x82211938
	ctx.lr = 0x822124F8;
	sub_82211938(ctx, base);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82212510
	if (!ctx.cr0.eq) goto loc_82212510;
	// lwz r30,-8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// b 0x822123b4
	goto loc_822123B4;
loc_82212510:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x822122fc
	goto loc_822122FC;
loc_82212518:
	// lwz r30,16616(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 16616);
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// bl 0x82211850
	ctx.lr = 0x82212528;
	sub_82211850(ctx, base);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x822122fc
	goto loc_822122FC;
loc_82212530:
	// stw r17,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r17.u32);
	// b 0x822122ec
	goto loc_822122EC;
loc_82212538:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x822122ec
	goto loc_822122EC;
loc_82212544:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// subf r11,r27,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r27.u64;
	// stw r27,16616(r26)
	REX_STORE_U32(ctx.r26.u32 + 16616, ctx.r27.u32);
	// stw r11,16632(r24)
	REX_STORE_U32(ctx.r24.u32 + 16632, ctx.r11.u32);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// stb r21,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r21.u8);
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// b 0x822122ec
	goto loc_822122EC;
loc_8221256C:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821964d8
	ctx.lr = 0x82212584;
	sub_821964D8(ctx, base);
	// b 0x822122ec
	goto loc_822122EC;
loc_82212588:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,16660(r19)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r19.u32 + 16660);
	// lwz r4,16632(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 16632);
	// bl 0x82276110
	ctx.lr = 0x82212598;
	sub_82276110(ctx, base);
	// b 0x822122e8
	goto loc_822122E8;
loc_8221259C:
	// lwz r3,16656(r20)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + 16656);
	// bl 0x82211f10
	ctx.lr = 0x822125A4;
	sub_82211F10(ctx, base);
	// b 0x822122e8
	goto loc_822122E8;
loc_822125A8:
	// bl 0x82214950
	ctx.lr = 0x822125AC;
	sub_82214950(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stw r3,16600(r11)
	REX_STORE_U32(ctx.r11.u32 + 16600, ctx.r3.u32);
	// li r3,261
	ctx.r3.s64 = 261;
loc_822125B8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82272e6c
	__restgprlr_17(ctx, base);
	return;
loc_822125C0:
	// li r3,262
	ctx.r3.s64 = 262;
	// b 0x822125b8
	goto loc_822125B8;
loc_822125C8:
	// li r3,263
	ctx.r3.s64 = 263;
	// b 0x822125b8
	goto loc_822125B8;
loc_822125D0:
	// li r3,264
	ctx.r3.s64 = 264;
	// b 0x822125b8
	goto loc_822125B8;
loc_822125D8:
	// li r3,265
	ctx.r3.s64 = 265;
	// b 0x822125b8
	goto loc_822125B8;
loc_822125E0:
	// li r3,266
	ctx.r3.s64 = 266;
	// b 0x822125b8
	goto loc_822125B8;
loc_822125E8:
	// li r3,277
	ctx.r3.s64 = 277;
	// b 0x822125b8
	goto loc_822125B8;
loc_822125F0:
	// li r3,278
	ctx.r3.s64 = 278;
	// b 0x822125b8
	goto loc_822125B8;
loc_822125F8:
	// li r3,268
	ctx.r3.s64 = 268;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212600:
	// li r3,269
	ctx.r3.s64 = 269;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212608:
	// li r3,273
	ctx.r3.s64 = 273;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212610:
	// li r3,272
	ctx.r3.s64 = 272;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212618:
	// li r3,271
	ctx.r3.s64 = 271;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212620:
	// li r3,270
	ctx.r3.s64 = 270;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212628:
	// li r3,275
	ctx.r3.s64 = 275;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212630:
	// li r3,276
	ctx.r3.s64 = 276;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212638:
	// li r3,274
	ctx.r3.s64 = 274;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212640:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82212644:
	// lis r10,-32064
	ctx.r10.s64 = -2101346304;
	// stw r11,16600(r10)
	REX_STORE_U32(ctx.r10.u32 + 16600, ctx.r11.u32);
loc_8221264C:
	// li r3,259
	ctx.r3.s64 = 259;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212654:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82212644
	goto loc_82212644;
loc_8221265C:
	// bl 0x82214358
	ctx.lr = 0x82212660;
	sub_82214358(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stw r3,16600(r11)
	REX_STORE_U32(ctx.r11.u32 + 16600, ctx.r3.u32);
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x822125b8
	goto loc_822125B8;
loc_82212670:
	// bl 0x82211af8
	ctx.lr = 0x82212674;
	sub_82211AF8(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r3,260
	ctx.r3.s64 = 260;
	// stfs f1,16600(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 16600, temp.u32);
	// b 0x822125b8
	goto loc_822125B8;
loc_82212684:
	// bl 0x82211b40
	ctx.lr = 0x82212688;
	sub_82211B40(ctx, base);
loc_82212688:
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stw r3,16600(r11)
	REX_STORE_U32(ctx.r11.u32 + 16600, ctx.r3.u32);
	// b 0x8221264c
	goto loc_8221264C;
loc_82212694:
	// bl 0x82211b80
	ctx.lr = 0x82212698;
	sub_82211B80(ctx, base);
	// b 0x82212688
	goto loc_82212688;
loc_8221269C:
	// li r3,267
	ctx.r3.s64 = 267;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126A4:
	// li r3,58
	ctx.r3.s64 = 58;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126AC:
	// li r3,59
	ctx.r3.s64 = 59;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126B4:
	// li r3,40
	ctx.r3.s64 = 40;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126BC:
	// li r3,41
	ctx.r3.s64 = 41;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126C4:
	// li r3,123
	ctx.r3.s64 = 123;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126CC:
	// li r3,125
	ctx.r3.s64 = 125;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126D4:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126DC:
	// li r3,46
	ctx.r3.s64 = 46;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822125b8
	goto loc_822125B8;
loc_822126EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,2604
	ctx.r3.s64 = ctx.r11.s64 + 2604;
	// bl 0x82211a90
	ctx.lr = 0x822126F8;
	sub_82211A90(ctx, base);
}

DEFINE_REX_FUNC(sub_82237898) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822378e8
	if (ctx.cr0.eq) goto loc_822378E8;
	// bl 0x828afebc
	ctx.lr = 0x822378C4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822378e8
	if (ctx.cr6.eq) goto loc_822378E8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5140
	ctx.r6.s64 = 5140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x828aff8c
	ctx.lr = 0x822378E8;
	__imp__KeBugCheckEx(ctx, base);
loc_822378E8:
	// lbz r11,-11(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822378fc
	if (!ctx.cr0.eq) goto loc_822378FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82237928
	goto loc_82237928;
loc_822378FC:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82237918
	if (ctx.cr0.eq) goto loc_82237918;
	// lhz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x82237928
	goto loc_82237928;
loc_82237918:
	// lhz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -10);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82237928:
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

DEFINE_REX_FUNC(sub_8223CC88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x8223CC90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21408
	ctx.r31.s64 = ctx.r11.s64 + -21408;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828afb6c
	ctx.lr = 0x8223CCAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241518
	ctx.lr = 0x8223CCBC;
	sub_82241518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8223ccd0
	if (ctx.cr6.lt) goto loc_8223CCD0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8223CCD0:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828afb5c
	ctx.lr = 0x8223CCD8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223F2E0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,76(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223F920) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r9,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223f998
	if (ctx.cr6.eq) goto loc_8223F998;
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
loc_8223F940:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,68(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// rlwinm r10,r3,18,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1F00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// stw r10,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// beq cr6,0x8223f988
	if (ctx.cr6.eq) goto loc_8223F988;
loc_8223F974:
	// dcbf r11,r7
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// blt cr6,0x8223f974
	if (ctx.cr6.lt) goto loc_8223F974;
loc_8223F988:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// stw r9,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// blt cr6,0x8223f940
	if (ctx.cr6.lt) goto loc_8223F940;
loc_8223F998:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f9f8
	if (ctx.cr6.eq) goto loc_8223F9F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223f9f8
	if (ctx.cr6.eq) goto loc_8223F9F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
loc_8223F9C0:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223f9c0
	if (ctx.cr6.lt) goto loc_8223F9C0;
loc_8223F9F8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223fa54
	if (!ctx.cr6.gt) goto loc_8223FA54;
	// lis r11,8186
	ctx.r11.s64 = 536477696;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r6,r11,34384
	ctx.r6.u64 = ctx.r11.u64 | 34384;
loc_8223FA18:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// rlwinm r7,r11,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// stwbrx r11,0,r7
	REX_MM_STORE_U32(ctx.r7.u32, __builtin_bswap32(ctx.r11.u32));
	// eieio 
	std::atomic_thread_fence(std::memory_order_seq_cst);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223fa18
	if (ctx.cr6.lt) goto loc_8223FA18;
loc_8223FA54:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,16,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249000) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x82249008;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822474c8
	ctx.lr = 0x82249018;
	sub_822474C8(ctx, base);
	// bl 0x828b00fc
	ctx.lr = 0x8224901C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-30684
	ctx.r31.s64 = ctx.r11.s64 + -30684;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249044
	if (ctx.cr6.eq) goto loc_82249044;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82249058
	if (ctx.cr6.eq) goto loc_82249058;
loc_82249044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828afbfc
	ctx.lr = 0x8224904C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_82249058:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,61(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 61);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82249108
	if (ctx.cr6.eq) goto loc_82249108;
	// bl 0x828b00fc
	ctx.lr = 0x82249074;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249094
	if (ctx.cr6.eq) goto loc_82249094;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822490a8
	if (ctx.cr6.eq) goto loc_822490A8;
loc_82249094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828afbfc
	ctx.lr = 0x8224909C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_822490A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,61(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 61);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,61(r28)
	REX_STORE_U8(ctx.r28.u32 + 61, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822491b8
	if (ctx.cr6.eq) goto loc_822491B8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822491b8
	if (!ctx.cr6.eq) goto loc_822491B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x822491b8
	if (!ctx.cr6.eq) goto loc_822491B8;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x822490FC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x82249104;
	__imp__KfLowerIrql(ctx, base);
	// b 0x822491b4
	goto loc_822491B4;
loc_82249108:
	// bl 0x828b00fc
	ctx.lr = 0x8224910C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// beq cr6,0x8224912c
	if (ctx.cr6.eq) goto loc_8224912C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82249140
	if (ctx.cr6.eq) goto loc_82249140;
loc_8224912C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828afbfc
	ctx.lr = 0x82249134;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_82249140:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,61(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 61);
	// andi. r11,r11,190
	ctx.r11.u64 = ctx.r11.u64 & 190;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,61(r28)
	REX_STORE_U8(ctx.r28.u32 + 61, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822491a0
	if (ctx.cr6.eq) goto loc_822491A0;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822491a0
	if (!ctx.cr6.eq) goto loc_822491A0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x822491a0
	if (!ctx.cr6.eq) goto loc_822491A0;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x82249198;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x822491A0;
	__imp__KfLowerIrql(ctx, base);
loc_822491A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822491B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822491B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_822491B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x82249200
	if (ctx.cr6.eq) goto loc_82249200;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82249200
	if (!ctx.cr6.eq) goto loc_82249200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82249200
	if (!ctx.cr6.eq) goto loc_82249200;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x822491F8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x82249200;
	__imp__KfLowerIrql(ctx, base);
loc_82249200:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822474c8
	ctx.lr = 0x82249208;
	sub_822474C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225E908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// subf r31,r11,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lbz r4,13(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// srawi r7,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8225e960
	if (ctx.cr6.lt) goto loc_8225E960;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_8225E960:
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r6,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r6.u64);
	// lfd f12,-64(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,127
	ctx.r6.s64 = ctx.r6.s64 + 127;
	// rlwinm r6,r6,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fdivs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f13,1832(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1832);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// beq cr6,0x8225e9c0
	if (ctx.cr6.eq) goto loc_8225E9C0;
loc_8225E9AC:
	// rlwinm r5,r7,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// dcbt r5,r9
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8225e9ac
	if (ctx.cr6.lt) goto loc_8225E9AC;
loc_8225E9C0:
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// lfs f12,6076(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 6076);
	ctx.f12.f64 = double(temp.f32);
loc_8225E9D0:
	// lhz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// rlwinm r4,r5,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwimi r4,r5,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// std r5,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r5.u64);
	// lfd f13,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne cr6,0x8225e9d0
	if (!ctx.cr6.eq) goto loc_8225E9D0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,4088(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4088);
	ctx.f11.f64 = double(temp.f32);
loc_8225EA10:
	// lhz r7,10(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lfs f9,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwimi r6,r7,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// std r7,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r7.u64);
	// lfd f10,-64(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,20(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fadds f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,5120(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 5120, temp.u32);
	// stfs f10,5124(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 5124, temp.u32);
	// lhz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lfs f9,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// rlwimi r6,r7,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// std r7,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r7.u64);
	// lfd f10,-56(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,16(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fadds f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,4096(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4096, temp.u32);
	// stfs f10,4100(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4100, temp.u32);
	// lhz r7,6(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// rlwimi r6,r7,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// std r7,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r7.u64);
	// lfd f10,-48(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fadds f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,3072(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 3072, temp.u32);
	// stfs f10,3076(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 3076, temp.u32);
	// lhz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// rlwimi r6,r7,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// std r7,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r7.u64);
	// lfd f10,-40(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,2048(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 2048, temp.u32);
	// stfs f10,2052(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 2052, temp.u32);
	// lhz r7,2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// rlwimi r6,r7,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// std r7,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lfd f10,-32(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fadds f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,1024(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 1024, temp.u32);
	// stfs f10,1028(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 1028, temp.u32);
	// lhz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// rlwimi r6,r7,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// std r7,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r7.u64);
	// lfd f10,-24(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x8225ea10
	if (!ctx.cr6.eq) goto loc_8225EA10;
	// lbz r8,13(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r9,r6
	ctx.r9.u64 = uint32_t(ctx.r6.u32 ? ctx.r9.u32 / ctx.r6.u32 : 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8225ebec
	if (!ctx.cr6.lt) goto loc_8225EBEC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8225EBEC:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225ec0c
	if (ctx.cr6.lt) goto loc_8225EC0C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8225EC0C:
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r8,r8,65407
	ctx.r8.u64 = ctx.r8.u64 | 65407;
	// li r7,128
	ctx.r7.s64 = 128;
	// lfs f0,-17696(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17696);
	ctx.f0.f64 = double(temp.f32);
loc_8225EC2C:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,-64(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x8225ec54
	if (ctx.cr6.lt) goto loc_8225EC54;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x8225ec74
	goto loc_8225EC74;
loc_8225EC54:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bgt cr6,0x8225ec64
	if (ctx.cr6.gt) goto loc_8225EC64;
	// sth r7,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// b 0x8225ec74
	goto loc_8225EC74;
loc_8225EC64:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r6,r11,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r6,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
loc_8225EC74:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8225ec2c
	if (!ctx.cr6.eq) goto loc_8225EC2C;
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82270678) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,15164(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15164);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fdivs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,-1716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -1716);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4088(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4088);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	REX_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822720C8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82277a28
	ctx.lr = 0x822720EC;
	sub_82277A28(ctx, base);
	// bl 0x822756b8
	ctx.lr = 0x822720F0;
	sub_822756B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x82274f08
	ctx.lr = 0x82272100;
	sub_82274F08(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82272110
	if (!ctx.cr6.eq) goto loc_82272110;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r11,-28244
	ctx.r31.s64 = ctx.r11.s64 + -28244;
loc_82272110:
	// bl 0x822756b8
	ctx.lr = 0x82272114;
	sub_822756B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x82274f08
	ctx.lr = 0x82272124;
	sub_82274F08(ctx, base);
	// bl 0x822756b8
	ctx.lr = 0x82272128;
	sub_822756B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r11,r11,22148
	ctx.r11.s64 = ctx.r11.s64 + 22148;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82274f08
	ctx.lr = 0x8227213C;
	sub_82274F08(ctx, base);
	// bl 0x82277660
	ctx.lr = 0x82272140;
	sub_82277660(ctx, base);
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

DEFINE_REX_FUNC(__savefpr_25) {
	REX_FUNC_PROLOGUE();
	// stfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_24) {
	REX_FUNC_PROLOGUE();
	// lfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_24) {
	REX_FUNC_PROLOGUE();
	// ld r24,-72(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822745E0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82272d9c
	ctx.lr = 0x822745F8;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f2.f64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// stfd f30,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f30.u64);
	// stfd f28,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f28.u64);
	// lfd f27,-23920(r11)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + -23920);
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// bne cr6,0x82274628
	if (!ctx.cr6.eq) goto loc_82274628;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,15144(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 15144);
	// b 0x82274abc
	goto loc_82274ABC;
loc_82274628:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x8227467c
	if (!ctx.cr6.eq) goto loc_8227467C;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822743e8
	ctx.lr = 0x82274638;
	sub_822743E8(ctx, base);
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// bge cr6,0x8227465c
	if (!ctx.cr6.lt) goto loc_8227465C;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f1,-17768(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -17768);
	// bne cr6,0x82274abc
	if (!ctx.cr6.eq) goto loc_82274ABC;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x8227c668
	ctx.lr = 0x82274658;
	sub_8227C668(ctx, base);
	// b 0x82274abc
	goto loc_82274ABC;
loc_8227465C:
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// ble cr6,0x8227467c
	if (!ctx.cr6.gt) goto loc_8227467C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82274674
	if (!ctx.cr6.eq) goto loc_82274674;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x82274abc
	goto loc_82274ABC;
loc_82274674:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// b 0x82274abc
	goto loc_82274ABC;
loc_8227467C:
	// lhz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 192);
	// lhz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x82274a48
	if (ctx.cr6.eq) goto loc_82274A48;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x82274a48
	if (ctx.cr6.eq) goto loc_82274A48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// lfd f26,15144(r11)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r11.u32 + 15144);
	// fmr f25,f26
	ctx.f25.f64 = ctx.f26.f64;
	// bge cr6,0x822746e0
	if (!ctx.cr6.lt) goto loc_822746E0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822743e8
	ctx.lr = 0x822746B8;
	sub_822743E8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822746d4
	if (ctx.cr6.eq) goto loc_822746D4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822746dc
	if (ctx.cr6.eq) goto loc_822746DC;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// lfd f1,-17760(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -17760);
	// b 0x82274abc
	goto loc_82274ABC;
loc_822746D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f25,2448(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + 2448);
loc_822746DC:
	// fneg f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
loc_822746E0:
	// fabs f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// lfd f0,-19352(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -19352);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82274730
	if (!ctx.cr6.gt) goto loc_82274730;
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// bge cr6,0x82274700
	if (!ctx.cr6.lt) goto loc_82274700;
	// fdiv f28,f26,f28
	ctx.f28.f64 = ctx.f26.f64 / ctx.f28.f64;
loc_82274700:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// ble cr6,0x82274718
	if (!ctx.cr6.gt) goto loc_82274718;
loc_82274708:
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// lfd f0,-17768(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -17768);
loc_82274710:
	// fmul f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * ctx.f25.f64;
	// b 0x82274abc
	goto loc_82274ABC;
loc_82274718:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// bge cr6,0x82274728
	if (!ctx.cr6.lt) goto loc_82274728;
loc_82274720:
	// fmul f1,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64 * ctx.f27.f64;
	// b 0x82274abc
	goto loc_82274ABC;
loc_82274728:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// b 0x82274abc
	goto loc_82274ABC;
loc_82274730:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8227b6c0
	ctx.lr = 0x8227473C;
	sub_8227B6C0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfd f0,2440(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 2440);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x822747ec
	if (ctx.cr6.gt) goto loc_822747EC;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822743e8
	ctx.lr = 0x82274758;
	sub_822743E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822747ec
	if (ctx.cr0.eq) goto loc_822747EC;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822743e8
	ctx.lr = 0x82274768;
	sub_822743E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822747ec
	if (ctx.cr0.eq) goto loc_822747EC;
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// ble cr6,0x822747ec
	if (!ctx.cr6.gt) goto loc_822747EC;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f30
	ctx.f0.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822747b4
	if (ctx.cr6.eq) goto loc_822747B4;
loc_8227479C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822747a8
	if (ctx.cr0.eq) goto loc_822747A8;
	// fmul f31,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f29.f64;
loc_822747A8:
	// fmul f29,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f29.f64 * ctx.f29.f64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227479c
	if (!ctx.cr0.eq) goto loc_8227479C;
loc_822747B4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8227b620
	ctx.lr = 0x822747BC;
	sub_8227B620(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x822747d8
	if (!ctx.cr6.gt) goto loc_822747D8;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// lfd f0,-17768(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -17768);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x82274710
	goto loc_82274710;
loc_822747D8:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x82274a28
	if (!ctx.cr6.lt) goto loc_82274A28;
	// fmul f0,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 * ctx.f25.f64;
	// fmul f1,f0,f27
	ctx.f1.f64 = ctx.f0.f64 * ctx.f27.f64;
	// b 0x82274abc
	goto loc_82274ABC;
loc_822747EC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,2104
	ctx.r31.s64 = ctx.r10.s64 + 2104;
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82274808
	if (ctx.cr6.gt) goto loc_82274808;
	// li r11,9
	ctx.r11.s64 = 9;
loc_82274808:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82274820
	if (ctx.cr6.gt) goto loc_82274820;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82274820:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82274838
	if (ctx.cr6.gt) goto loc_82274838;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82274838:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blt 0x82274850
	if (ctx.cr0.lt) goto loc_82274850;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82274850:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f31,21296(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 21296);
	// bne cr6,0x82274878
	if (!ctx.cr6.eq) goto loc_82274878;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822771e0
	ctx.lr = 0x82274868;
	sub_822771E0(ctx, base);
	// lfd f0,216(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// b 0x82274908
	goto loc_82274908;
loc_82274878:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,256(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 256);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lfd f10,216(r31)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfdx f0,r10,r8
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fsub f12,f29,f0
	ctx.f12.f64 = ctx.f29.f64 - ctx.f0.f64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f0,f0,f29
	ctx.f0.f64 = ctx.f0.f64 + ctx.f29.f64;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfdx f13,r11,r7
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fmul f12,f9,f31
	ctx.f12.f64 = ctx.f9.f64 * ctx.f31.f64;
	// lfd f9,224(r31)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 224);
	// fdiv f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 / ctx.f0.f64;
	// lfd f0,13024(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 13024);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f13,f0,f0
	ctx.f13.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmul f8,f0,f9
	ctx.f8.f64 = ctx.f0.f64 * ctx.f9.f64;
	// lfd f9,248(r31)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 248);
	// fmadd f9,f13,f11,f9
	ctx.f9.f64 = std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f9.f64);
	// lfd f11,240(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 240);
	// fmadd f9,f9,f13,f11
	ctx.f9.f64 = std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64);
	// lfd f11,232(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 232);
	// fmadd f11,f9,f13,f11
	ctx.f11.f64 = std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64);
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmadd f13,f13,f10,f8
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f8.f64);
	// fadd f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 + ctx.f0.f64;
loc_82274908:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmul f10,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64 * ctx.f30.f64;
	// lfd f0,10176(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 10176);
	// fmul f11,f30,f0
	ctx.f11.f64 = ctx.f30.f64 * ctx.f0.f64;
	// fctid f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 * ctx.f31.f64;
	// fsub f11,f30,f13
	ctx.f11.f64 = ctx.f30.f64 - ctx.f13.f64;
	// fmadd f11,f11,f12,f10
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f10.f64);
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fmadd f13,f13,f12,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f10.f64);
	// fsub f11,f11,f10
	ctx.f11.f64 = ctx.f11.f64 - ctx.f10.f64;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctid f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f12,f12,f31
	ctx.f12.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fadd f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 + ctx.f11.f64;
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctid f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fadd f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 + ctx.f11.f64;
	// fsub f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 - ctx.f11.f64;
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfd f12,320(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 320);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82274708
	if (ctx.cr6.gt) goto loc_82274708;
	// lfd f12,328(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 328);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82274720
	if (ctx.cr6.lt) goto loc_82274720;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ble cr6,0x822749b0
	if (!ctx.cr6.gt) goto loc_822749B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsub f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 - ctx.f31.f64;
loc_822749B0:
	// lfd f0,312(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 312);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfd f12,304(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 304);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// fmadd f12,f13,f0,f12
	ctx.f12.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64);
	// lfd f0,296(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 296);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64);
	// lfd f0,288(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64);
	// lfd f0,280(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 280);
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64);
	// lfd f0,272(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 272);
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64);
	// lfd f0,264(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 264);
	// fmadd f0,f12,f13,f0
	ctx.f0.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64);
	// lfdx f12,r11,r10
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fmadd f0,f0,f13,f26
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f26.f64);
	// fmul f31,f0,f12
	ctx.f31.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8227b620
	ctx.lr = 0x82274A24;
	sub_8227B620(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82274A28:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// bgt cr6,0x82274708
	if (ctx.cr6.gt) goto loc_82274708;
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// blt cr6,0x82274720
	if (ctx.cr6.lt) goto loc_82274720;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8227b5f8
	ctx.lr = 0x82274A40;
	sub_8227B5F8(ctx, base);
	// fmul f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f25.f64;
	// b 0x82274abc
	goto loc_82274ABC;
loc_82274A48:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x82274a6c
	if (!ctx.cr6.eq) goto loc_82274A6C;
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82274ab8
	if (!ctx.cr0.eq) goto loc_82274AB8;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82274ab8
	if (!ctx.cr6.eq) goto loc_82274AB8;
loc_82274A6C:
	// rlwinm r11,r9,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82274a90
	if (!ctx.cr6.eq) goto loc_82274A90;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82274ab8
	if (!ctx.cr0.eq) goto loc_82274AB8;
	// lwz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82274ab8
	if (!ctx.cr6.eq) goto loc_82274AB8;
loc_82274A90:
	// cmplwi cr6,r10,32760
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32760, ctx.xer);
	// beq cr6,0x82274ab8
	if (ctx.cr6.eq) goto loc_82274AB8;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// beq cr6,0x82274ab8
	if (ctx.cr6.eq) goto loc_82274AB8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82274458
	ctx.lr = 0x82274AB0;
	sub_82274458(ctx, base);
	// lfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82274abc
	goto loc_82274ABC;
loc_82274AB8:
	// fadd f1,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64 + ctx.f30.f64;
loc_82274ABC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82272de8
	ctx.lr = 0x82274AC8;
	__restfpr_25(ctx, base);
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

DEFINE_REX_FUNC(sub_82289208) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r3,r11,-2200
	ctx.r3.s64 = ctx.r11.s64 + -2200;
	// b 0x82273730
	sub_82273730(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82896E10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,13(r10)
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,15(r10)
	REX_STORE_U8(ctx.r10.u32 + 15, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,17(r11)
	REX_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,19(r11)
	REX_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,242
	ctx.r11.s64 = ctx.r11.s64 + 242;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,242
	ctx.r11.s64 = ctx.r11.s64 + 242;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,242
	ctx.r11.s64 = ctx.r11.s64 + 242;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,22(r10)
	REX_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,242
	ctx.r11.s64 = ctx.r11.s64 + 242;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,28(r10)
	REX_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,29(r10)
	REX_STORE_U8(ctx.r10.u32 + 29, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,30(r10)
	REX_STORE_U8(ctx.r10.u32 + 30, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,31(r10)
	REX_STORE_U8(ctx.r10.u32 + 31, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,34(r11)
	REX_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,37(r10)
	REX_STORE_U8(ctx.r10.u32 + 37, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,38(r10)
	REX_STORE_U8(ctx.r10.u32 + 38, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,39(r10)
	REX_STORE_U8(ctx.r10.u32 + 39, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,41(r11)
	REX_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,42(r11)
	REX_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,43(r11)
	REX_STORE_U8(ctx.r11.u32 + 43, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,44(r10)
	REX_STORE_U8(ctx.r10.u32 + 44, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,46(r10)
	REX_STORE_U8(ctx.r10.u32 + 46, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,47(r10)
	REX_STORE_U8(ctx.r10.u32 + 47, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,48(r11)
	REX_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,49(r11)
	REX_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,50(r11)
	REX_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,51(r11)
	REX_STORE_U8(ctx.r11.u32 + 51, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,266
	ctx.r11.s64 = ctx.r11.s64 + 266;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,52(r10)
	REX_STORE_U8(ctx.r10.u32 + 52, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,266
	ctx.r11.s64 = ctx.r11.s64 + 266;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,53(r10)
	REX_STORE_U8(ctx.r10.u32 + 53, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,266
	ctx.r11.s64 = ctx.r11.s64 + 266;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,54(r10)
	REX_STORE_U8(ctx.r10.u32 + 54, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,266
	ctx.r11.s64 = ctx.r11.s64 + 266;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,55(r10)
	REX_STORE_U8(ctx.r10.u32 + 55, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,57(r11)
	REX_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,58(r11)
	REX_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,59(r11)
	REX_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,60(r10)
	REX_STORE_U8(ctx.r10.u32 + 60, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,61(r10)
	REX_STORE_U8(ctx.r10.u32 + 61, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,62(r10)
	REX_STORE_U8(ctx.r10.u32 + 62, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,63(r10)
	REX_STORE_U8(ctx.r10.u32 + 63, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,65(r11)
	REX_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,66(r11)
	REX_STORE_U8(ctx.r11.u32 + 66, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,67(r11)
	REX_STORE_U8(ctx.r11.u32 + 67, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,278
	ctx.r11.s64 = ctx.r11.s64 + 278;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,68(r10)
	REX_STORE_U8(ctx.r10.u32 + 68, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,278
	ctx.r11.s64 = ctx.r11.s64 + 278;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,69(r10)
	REX_STORE_U8(ctx.r10.u32 + 69, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,278
	ctx.r11.s64 = ctx.r11.s64 + 278;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,70(r10)
	REX_STORE_U8(ctx.r10.u32 + 70, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,278
	ctx.r11.s64 = ctx.r11.s64 + 278;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,71(r10)
	REX_STORE_U8(ctx.r10.u32 + 71, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,73(r11)
	REX_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,75(r11)
	REX_STORE_U8(ctx.r11.u32 + 75, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,81(r11)
	REX_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,82(r11)
	REX_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,83(r11)
	REX_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,290
	ctx.r11.s64 = ctx.r11.s64 + 290;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,84(r10)
	REX_STORE_U8(ctx.r10.u32 + 84, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,290
	ctx.r11.s64 = ctx.r11.s64 + 290;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,85(r10)
	REX_STORE_U8(ctx.r10.u32 + 85, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,290
	ctx.r11.s64 = ctx.r11.s64 + 290;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,86(r10)
	REX_STORE_U8(ctx.r10.u32 + 86, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,290
	ctx.r11.s64 = ctx.r11.s64 + 290;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,87(r10)
	REX_STORE_U8(ctx.r10.u32 + 87, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 + 296;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,92(r10)
	REX_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 + 296;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,93(r10)
	REX_STORE_U8(ctx.r10.u32 + 93, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 + 296;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,94(r10)
	REX_STORE_U8(ctx.r10.u32 + 94, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 + 296;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,95(r10)
	REX_STORE_U8(ctx.r10.u32 + 95, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,96(r11)
	REX_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,97(r11)
	REX_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,98(r11)
	REX_STORE_U8(ctx.r11.u32 + 98, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,99(r11)
	REX_STORE_U8(ctx.r11.u32 + 99, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,302
	ctx.r11.s64 = ctx.r11.s64 + 302;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,100(r10)
	REX_STORE_U8(ctx.r10.u32 + 100, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,302
	ctx.r11.s64 = ctx.r11.s64 + 302;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,101(r10)
	REX_STORE_U8(ctx.r10.u32 + 101, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,302
	ctx.r11.s64 = ctx.r11.s64 + 302;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,102(r10)
	REX_STORE_U8(ctx.r10.u32 + 102, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,302
	ctx.r11.s64 = ctx.r11.s64 + 302;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,103(r10)
	REX_STORE_U8(ctx.r10.u32 + 103, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,106(r11)
	REX_STORE_U8(ctx.r11.u32 + 106, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,308
	ctx.r11.s64 = ctx.r11.s64 + 308;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,108(r10)
	REX_STORE_U8(ctx.r10.u32 + 108, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,308
	ctx.r11.s64 = ctx.r11.s64 + 308;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,109(r10)
	REX_STORE_U8(ctx.r10.u32 + 109, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,308
	ctx.r11.s64 = ctx.r11.s64 + 308;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,110(r10)
	REX_STORE_U8(ctx.r10.u32 + 110, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,308
	ctx.r11.s64 = ctx.r11.s64 + 308;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,111(r10)
	REX_STORE_U8(ctx.r10.u32 + 111, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,113(r11)
	REX_STORE_U8(ctx.r11.u32 + 113, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,114(r11)
	REX_STORE_U8(ctx.r11.u32 + 114, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,115(r11)
	REX_STORE_U8(ctx.r11.u32 + 115, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,314
	ctx.r11.s64 = ctx.r11.s64 + 314;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,116(r10)
	REX_STORE_U8(ctx.r10.u32 + 116, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,314
	ctx.r11.s64 = ctx.r11.s64 + 314;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,117(r10)
	REX_STORE_U8(ctx.r10.u32 + 117, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,314
	ctx.r11.s64 = ctx.r11.s64 + 314;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,118(r10)
	REX_STORE_U8(ctx.r10.u32 + 118, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,314
	ctx.r11.s64 = ctx.r11.s64 + 314;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,119(r10)
	REX_STORE_U8(ctx.r10.u32 + 119, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,120(r11)
	REX_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,121(r11)
	REX_STORE_U8(ctx.r11.u32 + 121, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,122(r11)
	REX_STORE_U8(ctx.r11.u32 + 122, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,123(r11)
	REX_STORE_U8(ctx.r11.u32 + 123, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,124(r10)
	REX_STORE_U8(ctx.r10.u32 + 124, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,125(r10)
	REX_STORE_U8(ctx.r10.u32 + 125, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,126(r10)
	REX_STORE_U8(ctx.r10.u32 + 126, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,127(r10)
	REX_STORE_U8(ctx.r10.u32 + 127, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,129(r11)
	REX_STORE_U8(ctx.r11.u32 + 129, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,130(r11)
	REX_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,131(r11)
	REX_STORE_U8(ctx.r11.u32 + 131, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,326
	ctx.r11.s64 = ctx.r11.s64 + 326;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,132(r10)
	REX_STORE_U8(ctx.r10.u32 + 132, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,326
	ctx.r11.s64 = ctx.r11.s64 + 326;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,133(r10)
	REX_STORE_U8(ctx.r10.u32 + 133, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,326
	ctx.r11.s64 = ctx.r11.s64 + 326;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,134(r10)
	REX_STORE_U8(ctx.r10.u32 + 134, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,326
	ctx.r11.s64 = ctx.r11.s64 + 326;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,135(r10)
	REX_STORE_U8(ctx.r10.u32 + 135, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,136(r11)
	REX_STORE_U8(ctx.r11.u32 + 136, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,137(r11)
	REX_STORE_U8(ctx.r11.u32 + 137, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,139(r11)
	REX_STORE_U8(ctx.r11.u32 + 139, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,140(r10)
	REX_STORE_U8(ctx.r10.u32 + 140, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,141(r10)
	REX_STORE_U8(ctx.r10.u32 + 141, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,142(r10)
	REX_STORE_U8(ctx.r10.u32 + 142, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,143(r10)
	REX_STORE_U8(ctx.r10.u32 + 143, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,144(r11)
	REX_STORE_U8(ctx.r11.u32 + 144, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,145(r11)
	REX_STORE_U8(ctx.r11.u32 + 145, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,146(r11)
	REX_STORE_U8(ctx.r11.u32 + 146, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,338
	ctx.r11.s64 = ctx.r11.s64 + 338;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,148(r10)
	REX_STORE_U8(ctx.r10.u32 + 148, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,338
	ctx.r11.s64 = ctx.r11.s64 + 338;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,149(r10)
	REX_STORE_U8(ctx.r10.u32 + 149, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,338
	ctx.r11.s64 = ctx.r11.s64 + 338;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,150(r10)
	REX_STORE_U8(ctx.r10.u32 + 150, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,338
	ctx.r11.s64 = ctx.r11.s64 + 338;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,151(r10)
	REX_STORE_U8(ctx.r10.u32 + 151, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,152(r11)
	REX_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,153(r11)
	REX_STORE_U8(ctx.r11.u32 + 153, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,154(r11)
	REX_STORE_U8(ctx.r11.u32 + 154, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,155(r11)
	REX_STORE_U8(ctx.r11.u32 + 155, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,156(r10)
	REX_STORE_U8(ctx.r10.u32 + 156, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,157(r10)
	REX_STORE_U8(ctx.r10.u32 + 157, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,158(r10)
	REX_STORE_U8(ctx.r10.u32 + 158, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,159(r10)
	REX_STORE_U8(ctx.r10.u32 + 159, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,160(r11)
	REX_STORE_U8(ctx.r11.u32 + 160, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,161(r11)
	REX_STORE_U8(ctx.r11.u32 + 161, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,162(r11)
	REX_STORE_U8(ctx.r11.u32 + 162, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,163(r11)
	REX_STORE_U8(ctx.r11.u32 + 163, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,350
	ctx.r11.s64 = ctx.r11.s64 + 350;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,164(r10)
	REX_STORE_U8(ctx.r10.u32 + 164, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,350
	ctx.r11.s64 = ctx.r11.s64 + 350;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,165(r10)
	REX_STORE_U8(ctx.r10.u32 + 165, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,350
	ctx.r11.s64 = ctx.r11.s64 + 350;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,166(r10)
	REX_STORE_U8(ctx.r10.u32 + 166, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,350
	ctx.r11.s64 = ctx.r11.s64 + 350;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,167(r10)
	REX_STORE_U8(ctx.r10.u32 + 167, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,168(r11)
	REX_STORE_U8(ctx.r11.u32 + 168, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,169(r11)
	REX_STORE_U8(ctx.r11.u32 + 169, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,170(r11)
	REX_STORE_U8(ctx.r11.u32 + 170, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,171(r11)
	REX_STORE_U8(ctx.r11.u32 + 171, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,356
	ctx.r11.s64 = ctx.r11.s64 + 356;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,172(r10)
	REX_STORE_U8(ctx.r10.u32 + 172, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,356
	ctx.r11.s64 = ctx.r11.s64 + 356;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,173(r10)
	REX_STORE_U8(ctx.r10.u32 + 173, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,356
	ctx.r11.s64 = ctx.r11.s64 + 356;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,174(r10)
	REX_STORE_U8(ctx.r10.u32 + 174, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,356
	ctx.r11.s64 = ctx.r11.s64 + 356;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,175(r10)
	REX_STORE_U8(ctx.r10.u32 + 175, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,176(r11)
	REX_STORE_U8(ctx.r11.u32 + 176, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,177(r11)
	REX_STORE_U8(ctx.r11.u32 + 177, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,178(r11)
	REX_STORE_U8(ctx.r11.u32 + 178, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,179(r11)
	REX_STORE_U8(ctx.r11.u32 + 179, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,362
	ctx.r11.s64 = ctx.r11.s64 + 362;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,180(r10)
	REX_STORE_U8(ctx.r10.u32 + 180, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,362
	ctx.r11.s64 = ctx.r11.s64 + 362;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,181(r10)
	REX_STORE_U8(ctx.r10.u32 + 181, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,362
	ctx.r11.s64 = ctx.r11.s64 + 362;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,182(r10)
	REX_STORE_U8(ctx.r10.u32 + 182, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,362
	ctx.r11.s64 = ctx.r11.s64 + 362;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,183(r10)
	REX_STORE_U8(ctx.r10.u32 + 183, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,184(r11)
	REX_STORE_U8(ctx.r11.u32 + 184, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,185(r11)
	REX_STORE_U8(ctx.r11.u32 + 185, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,186(r11)
	REX_STORE_U8(ctx.r11.u32 + 186, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,187(r11)
	REX_STORE_U8(ctx.r11.u32 + 187, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,188(r10)
	REX_STORE_U8(ctx.r10.u32 + 188, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,189(r10)
	REX_STORE_U8(ctx.r10.u32 + 189, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,190(r10)
	REX_STORE_U8(ctx.r10.u32 + 190, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,191(r10)
	REX_STORE_U8(ctx.r10.u32 + 191, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,192(r11)
	REX_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,193(r11)
	REX_STORE_U8(ctx.r11.u32 + 193, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,194(r11)
	REX_STORE_U8(ctx.r11.u32 + 194, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,195(r11)
	REX_STORE_U8(ctx.r11.u32 + 195, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,374
	ctx.r11.s64 = ctx.r11.s64 + 374;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,196(r10)
	REX_STORE_U8(ctx.r10.u32 + 196, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,374
	ctx.r11.s64 = ctx.r11.s64 + 374;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,197(r10)
	REX_STORE_U8(ctx.r10.u32 + 197, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,374
	ctx.r11.s64 = ctx.r11.s64 + 374;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,198(r10)
	REX_STORE_U8(ctx.r10.u32 + 198, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,374
	ctx.r11.s64 = ctx.r11.s64 + 374;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,199(r10)
	REX_STORE_U8(ctx.r10.u32 + 199, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,200(r11)
	REX_STORE_U8(ctx.r11.u32 + 200, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,201(r11)
	REX_STORE_U8(ctx.r11.u32 + 201, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,202(r11)
	REX_STORE_U8(ctx.r11.u32 + 202, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,203(r11)
	REX_STORE_U8(ctx.r11.u32 + 203, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,204(r10)
	REX_STORE_U8(ctx.r10.u32 + 204, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,205(r10)
	REX_STORE_U8(ctx.r10.u32 + 205, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,206(r10)
	REX_STORE_U8(ctx.r10.u32 + 206, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,207(r10)
	REX_STORE_U8(ctx.r10.u32 + 207, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,208(r11)
	REX_STORE_U8(ctx.r11.u32 + 208, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,209(r11)
	REX_STORE_U8(ctx.r11.u32 + 209, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,210(r11)
	REX_STORE_U8(ctx.r11.u32 + 210, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,211(r11)
	REX_STORE_U8(ctx.r11.u32 + 211, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,386
	ctx.r11.s64 = ctx.r11.s64 + 386;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,212(r10)
	REX_STORE_U8(ctx.r10.u32 + 212, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,386
	ctx.r11.s64 = ctx.r11.s64 + 386;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,213(r10)
	REX_STORE_U8(ctx.r10.u32 + 213, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,386
	ctx.r11.s64 = ctx.r11.s64 + 386;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,214(r10)
	REX_STORE_U8(ctx.r10.u32 + 214, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,386
	ctx.r11.s64 = ctx.r11.s64 + 386;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,215(r10)
	REX_STORE_U8(ctx.r10.u32 + 215, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,216(r11)
	REX_STORE_U8(ctx.r11.u32 + 216, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,217(r11)
	REX_STORE_U8(ctx.r11.u32 + 217, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,218(r11)
	REX_STORE_U8(ctx.r11.u32 + 218, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,219(r11)
	REX_STORE_U8(ctx.r11.u32 + 219, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,392
	ctx.r11.s64 = ctx.r11.s64 + 392;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,220(r10)
	REX_STORE_U8(ctx.r10.u32 + 220, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,392
	ctx.r11.s64 = ctx.r11.s64 + 392;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,221(r10)
	REX_STORE_U8(ctx.r10.u32 + 221, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,392
	ctx.r11.s64 = ctx.r11.s64 + 392;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,222(r10)
	REX_STORE_U8(ctx.r10.u32 + 222, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,392
	ctx.r11.s64 = ctx.r11.s64 + 392;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,223(r10)
	REX_STORE_U8(ctx.r10.u32 + 223, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,224(r11)
	REX_STORE_U8(ctx.r11.u32 + 224, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,225(r11)
	REX_STORE_U8(ctx.r11.u32 + 225, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,226(r11)
	REX_STORE_U8(ctx.r11.u32 + 226, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,227(r11)
	REX_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,398
	ctx.r11.s64 = ctx.r11.s64 + 398;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,228(r10)
	REX_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,398
	ctx.r11.s64 = ctx.r11.s64 + 398;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,229(r10)
	REX_STORE_U8(ctx.r10.u32 + 229, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,398
	ctx.r11.s64 = ctx.r11.s64 + 398;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,230(r10)
	REX_STORE_U8(ctx.r10.u32 + 230, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// addi r11,r11,398
	ctx.r11.s64 = ctx.r11.s64 + 398;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,231(r10)
	REX_STORE_U8(ctx.r10.u32 + 231, ctx.r11.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5460
	ctx.r11.s64 = ctx.r11.s64 + 5460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,232(r10)
	REX_STORE_U8(ctx.r10.u32 + 232, ctx.r11.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5460
	ctx.r11.s64 = ctx.r11.s64 + 5460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,233(r10)
	REX_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5460
	ctx.r11.s64 = ctx.r11.s64 + 5460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,234(r10)
	REX_STORE_U8(ctx.r10.u32 + 234, ctx.r11.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5460
	ctx.r11.s64 = ctx.r11.s64 + 5460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// stb r11,235(r10)
	REX_STORE_U8(ctx.r10.u32 + 235, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,236(r11)
	REX_STORE_U8(ctx.r11.u32 + 236, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,237(r11)
	REX_STORE_U8(ctx.r11.u32 + 237, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,238(r11)
	REX_STORE_U8(ctx.r11.u32 + 238, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,239(r11)
	REX_STORE_U8(ctx.r11.u32 + 239, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,240(r11)
	REX_STORE_U8(ctx.r11.u32 + 240, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,241(r11)
	REX_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,242(r11)
	REX_STORE_U8(ctx.r11.u32 + 242, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,243(r11)
	REX_STORE_U8(ctx.r11.u32 + 243, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,244(r11)
	REX_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,245(r11)
	REX_STORE_U8(ctx.r11.u32 + 245, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,246(r11)
	REX_STORE_U8(ctx.r11.u32 + 246, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,247(r11)
	REX_STORE_U8(ctx.r11.u32 + 247, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,248(r11)
	REX_STORE_U8(ctx.r11.u32 + 248, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,249(r11)
	REX_STORE_U8(ctx.r11.u32 + 249, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,250(r11)
	REX_STORE_U8(ctx.r11.u32 + 250, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,251(r11)
	REX_STORE_U8(ctx.r11.u32 + 251, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,252(r11)
	REX_STORE_U8(ctx.r11.u32 + 252, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,253(r11)
	REX_STORE_U8(ctx.r11.u32 + 253, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,254(r11)
	REX_STORE_U8(ctx.r11.u32 + 254, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,255(r11)
	REX_STORE_U8(ctx.r11.u32 + 255, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,256(r11)
	REX_STORE_U8(ctx.r11.u32 + 256, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,257(r11)
	REX_STORE_U8(ctx.r11.u32 + 257, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,258(r11)
	REX_STORE_U8(ctx.r11.u32 + 258, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,259(r11)
	REX_STORE_U8(ctx.r11.u32 + 259, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,260(r11)
	REX_STORE_U8(ctx.r11.u32 + 260, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,261(r11)
	REX_STORE_U8(ctx.r11.u32 + 261, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,262(r11)
	REX_STORE_U8(ctx.r11.u32 + 262, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,263(r11)
	REX_STORE_U8(ctx.r11.u32 + 263, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,264(r11)
	REX_STORE_U8(ctx.r11.u32 + 264, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,265(r11)
	REX_STORE_U8(ctx.r11.u32 + 265, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,266(r11)
	REX_STORE_U8(ctx.r11.u32 + 266, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,267(r11)
	REX_STORE_U8(ctx.r11.u32 + 267, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,268(r11)
	REX_STORE_U8(ctx.r11.u32 + 268, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,269(r11)
	REX_STORE_U8(ctx.r11.u32 + 269, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,270(r11)
	REX_STORE_U8(ctx.r11.u32 + 270, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,271(r11)
	REX_STORE_U8(ctx.r11.u32 + 271, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,272(r11)
	REX_STORE_U8(ctx.r11.u32 + 272, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,273(r11)
	REX_STORE_U8(ctx.r11.u32 + 273, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,274(r11)
	REX_STORE_U8(ctx.r11.u32 + 274, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,275(r11)
	REX_STORE_U8(ctx.r11.u32 + 275, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,276(r11)
	REX_STORE_U8(ctx.r11.u32 + 276, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,277(r11)
	REX_STORE_U8(ctx.r11.u32 + 277, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,278(r11)
	REX_STORE_U8(ctx.r11.u32 + 278, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,279(r11)
	REX_STORE_U8(ctx.r11.u32 + 279, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,280(r11)
	REX_STORE_U8(ctx.r11.u32 + 280, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,281(r11)
	REX_STORE_U8(ctx.r11.u32 + 281, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,282(r11)
	REX_STORE_U8(ctx.r11.u32 + 282, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,283(r11)
	REX_STORE_U8(ctx.r11.u32 + 283, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,284(r11)
	REX_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,285(r11)
	REX_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,286(r11)
	REX_STORE_U8(ctx.r11.u32 + 286, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,287(r11)
	REX_STORE_U8(ctx.r11.u32 + 287, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,288(r11)
	REX_STORE_U8(ctx.r11.u32 + 288, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,289(r11)
	REX_STORE_U8(ctx.r11.u32 + 289, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,290(r11)
	REX_STORE_U8(ctx.r11.u32 + 290, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,291(r11)
	REX_STORE_U8(ctx.r11.u32 + 291, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,292(r11)
	REX_STORE_U8(ctx.r11.u32 + 292, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,293(r11)
	REX_STORE_U8(ctx.r11.u32 + 293, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,294(r11)
	REX_STORE_U8(ctx.r11.u32 + 294, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,295(r11)
	REX_STORE_U8(ctx.r11.u32 + 295, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,296(r11)
	REX_STORE_U8(ctx.r11.u32 + 296, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,297(r11)
	REX_STORE_U8(ctx.r11.u32 + 297, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,298(r11)
	REX_STORE_U8(ctx.r11.u32 + 298, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,299(r11)
	REX_STORE_U8(ctx.r11.u32 + 299, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,300(r11)
	REX_STORE_U8(ctx.r11.u32 + 300, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,301(r11)
	REX_STORE_U8(ctx.r11.u32 + 301, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,302(r11)
	REX_STORE_U8(ctx.r11.u32 + 302, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,303(r11)
	REX_STORE_U8(ctx.r11.u32 + 303, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,304(r11)
	REX_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,305(r11)
	REX_STORE_U8(ctx.r11.u32 + 305, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,306(r11)
	REX_STORE_U8(ctx.r11.u32 + 306, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,307(r11)
	REX_STORE_U8(ctx.r11.u32 + 307, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,308(r11)
	REX_STORE_U8(ctx.r11.u32 + 308, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,309(r11)
	REX_STORE_U8(ctx.r11.u32 + 309, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,310(r11)
	REX_STORE_U8(ctx.r11.u32 + 310, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,311(r11)
	REX_STORE_U8(ctx.r11.u32 + 311, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,312(r11)
	REX_STORE_U8(ctx.r11.u32 + 312, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,313(r11)
	REX_STORE_U8(ctx.r11.u32 + 313, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,314(r11)
	REX_STORE_U8(ctx.r11.u32 + 314, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,315(r11)
	REX_STORE_U8(ctx.r11.u32 + 315, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,316(r11)
	REX_STORE_U8(ctx.r11.u32 + 316, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,317(r11)
	REX_STORE_U8(ctx.r11.u32 + 317, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,318(r11)
	REX_STORE_U8(ctx.r11.u32 + 318, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,319(r11)
	REX_STORE_U8(ctx.r11.u32 + 319, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,320(r11)
	REX_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,321(r11)
	REX_STORE_U8(ctx.r11.u32 + 321, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,322(r11)
	REX_STORE_U8(ctx.r11.u32 + 322, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,323(r11)
	REX_STORE_U8(ctx.r11.u32 + 323, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,324(r11)
	REX_STORE_U8(ctx.r11.u32 + 324, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,325(r11)
	REX_STORE_U8(ctx.r11.u32 + 325, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,326(r11)
	REX_STORE_U8(ctx.r11.u32 + 326, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,327(r11)
	REX_STORE_U8(ctx.r11.u32 + 327, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,328(r11)
	REX_STORE_U8(ctx.r11.u32 + 328, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,329(r11)
	REX_STORE_U8(ctx.r11.u32 + 329, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,330(r11)
	REX_STORE_U8(ctx.r11.u32 + 330, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,331(r11)
	REX_STORE_U8(ctx.r11.u32 + 331, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,332(r11)
	REX_STORE_U8(ctx.r11.u32 + 332, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,333(r11)
	REX_STORE_U8(ctx.r11.u32 + 333, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,334(r11)
	REX_STORE_U8(ctx.r11.u32 + 334, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,335(r11)
	REX_STORE_U8(ctx.r11.u32 + 335, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,336(r11)
	REX_STORE_U8(ctx.r11.u32 + 336, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,337(r11)
	REX_STORE_U8(ctx.r11.u32 + 337, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,338(r11)
	REX_STORE_U8(ctx.r11.u32 + 338, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,339(r11)
	REX_STORE_U8(ctx.r11.u32 + 339, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,340(r11)
	REX_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,341(r11)
	REX_STORE_U8(ctx.r11.u32 + 341, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,342(r11)
	REX_STORE_U8(ctx.r11.u32 + 342, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,343(r11)
	REX_STORE_U8(ctx.r11.u32 + 343, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,344(r11)
	REX_STORE_U8(ctx.r11.u32 + 344, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,345(r11)
	REX_STORE_U8(ctx.r11.u32 + 345, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,346(r11)
	REX_STORE_U8(ctx.r11.u32 + 346, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,347(r11)
	REX_STORE_U8(ctx.r11.u32 + 347, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,348(r11)
	REX_STORE_U8(ctx.r11.u32 + 348, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,349(r11)
	REX_STORE_U8(ctx.r11.u32 + 349, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,350(r11)
	REX_STORE_U8(ctx.r11.u32 + 350, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,351(r11)
	REX_STORE_U8(ctx.r11.u32 + 351, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,352(r11)
	REX_STORE_U8(ctx.r11.u32 + 352, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,353(r11)
	REX_STORE_U8(ctx.r11.u32 + 353, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,354(r11)
	REX_STORE_U8(ctx.r11.u32 + 354, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,355(r11)
	REX_STORE_U8(ctx.r11.u32 + 355, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,356(r11)
	REX_STORE_U8(ctx.r11.u32 + 356, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,357(r11)
	REX_STORE_U8(ctx.r11.u32 + 357, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,358(r11)
	REX_STORE_U8(ctx.r11.u32 + 358, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,359(r11)
	REX_STORE_U8(ctx.r11.u32 + 359, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,360(r11)
	REX_STORE_U8(ctx.r11.u32 + 360, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,361(r11)
	REX_STORE_U8(ctx.r11.u32 + 361, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,362(r11)
	REX_STORE_U8(ctx.r11.u32 + 362, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,363(r11)
	REX_STORE_U8(ctx.r11.u32 + 363, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,364(r11)
	REX_STORE_U8(ctx.r11.u32 + 364, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,365(r11)
	REX_STORE_U8(ctx.r11.u32 + 365, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,366(r11)
	REX_STORE_U8(ctx.r11.u32 + 366, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,367(r11)
	REX_STORE_U8(ctx.r11.u32 + 367, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,368(r11)
	REX_STORE_U8(ctx.r11.u32 + 368, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,369(r11)
	REX_STORE_U8(ctx.r11.u32 + 369, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,370(r11)
	REX_STORE_U8(ctx.r11.u32 + 370, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,371(r11)
	REX_STORE_U8(ctx.r11.u32 + 371, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,372(r11)
	REX_STORE_U8(ctx.r11.u32 + 372, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,373(r11)
	REX_STORE_U8(ctx.r11.u32 + 373, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,374(r11)
	REX_STORE_U8(ctx.r11.u32 + 374, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,375(r11)
	REX_STORE_U8(ctx.r11.u32 + 375, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,376(r11)
	REX_STORE_U8(ctx.r11.u32 + 376, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,377(r11)
	REX_STORE_U8(ctx.r11.u32 + 377, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,378(r11)
	REX_STORE_U8(ctx.r11.u32 + 378, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,379(r11)
	REX_STORE_U8(ctx.r11.u32 + 379, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,380(r11)
	REX_STORE_U8(ctx.r11.u32 + 380, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,381(r11)
	REX_STORE_U8(ctx.r11.u32 + 381, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,382(r11)
	REX_STORE_U8(ctx.r11.u32 + 382, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,383(r11)
	REX_STORE_U8(ctx.r11.u32 + 383, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,385(r11)
	REX_STORE_U8(ctx.r11.u32 + 385, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,386(r11)
	REX_STORE_U8(ctx.r11.u32 + 386, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,387(r11)
	REX_STORE_U8(ctx.r11.u32 + 387, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,388(r11)
	REX_STORE_U8(ctx.r11.u32 + 388, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,389(r11)
	REX_STORE_U8(ctx.r11.u32 + 389, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,390(r11)
	REX_STORE_U8(ctx.r11.u32 + 390, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,391(r11)
	REX_STORE_U8(ctx.r11.u32 + 391, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,392(r11)
	REX_STORE_U8(ctx.r11.u32 + 392, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,393(r11)
	REX_STORE_U8(ctx.r11.u32 + 393, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,394(r11)
	REX_STORE_U8(ctx.r11.u32 + 394, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,395(r11)
	REX_STORE_U8(ctx.r11.u32 + 395, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,396(r11)
	REX_STORE_U8(ctx.r11.u32 + 396, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,397(r11)
	REX_STORE_U8(ctx.r11.u32 + 397, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,398(r11)
	REX_STORE_U8(ctx.r11.u32 + 398, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,399(r11)
	REX_STORE_U8(ctx.r11.u32 + 399, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,400(r11)
	REX_STORE_U8(ctx.r11.u32 + 400, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,401(r11)
	REX_STORE_U8(ctx.r11.u32 + 401, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,402(r11)
	REX_STORE_U8(ctx.r11.u32 + 402, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,403(r11)
	REX_STORE_U8(ctx.r11.u32 + 403, ctx.r10.u8);
	// blr 
	return;
}

