#include "puzzlefighter_funcs.93.h"

DEFINE_REX_FUNC(sub_8204D6D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// stw r6,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r10,204(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bne cr6,0x8204d72c
	if (!ctx.cr6.eq) goto loc_8204D72C;
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_8204D72C:
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,204(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8204D760:
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8204da60
	if (!ctx.cr6.lt) goto loc_8204DA60;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-27576
	ctx.r11.s64 = ctx.r11.s64 + -27576;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27512
	ctx.r10.s64 = ctx.r10.s64 + -27512;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x8204d7e8
	goto loc_8204D7E8;
loc_8204D7DC:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8204D7E8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8204d850
	if (!ctx.cr6.lt) goto loc_8204D850;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27512
	ctx.r10.s64 = ctx.r10.s64 + -27512;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8204d84c
	if (!ctx.cr6.lt) goto loc_8204D84C;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27512
	ctx.r10.s64 = ctx.r10.s64 + -27512;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8204D84C:
	// b 0x8204d7dc
	goto loc_8204D7DC;
loc_8204D850:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8204d890
	goto loc_8204D890;
loc_8204D878:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8204D890:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8204da40
	if (!ctx.cr6.lt) goto loc_8204DA40;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27504
	ctx.r10.s64 = ctx.r10.s64 + -27504;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8204d8ec
	if (!ctx.cr6.eq) goto loc_8204D8EC;
	// b 0x8204d878
	goto loc_8204D878;
loc_8204D8EC:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27232
	ctx.r10.s64 = ctx.r10.s64 + -27232;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8204d918
	if (!ctx.cr6.eq) goto loc_8204D918;
	// b 0x8204d878
	goto loc_8204D878;
loc_8204D918:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8204d944
	if (ctx.cr6.eq) goto loc_8204D944;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8204d9b0
	goto loc_8204D9B0;
loc_8204D944:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,5540
	ctx.r11.s64 = ctx.r11.s64 + 5540;
	// lfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,5540
	ctx.r11.s64 = ctx.r11.s64 + 5540;
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82180c20
	ctx.lr = 0x8204D9A0;
	sub_82180C20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8204d9b0
	if (ctx.cr0.eq) goto loc_8204D9B0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8204D9B0:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sth r11,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lhbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap16(REX_LOAD_U16(ctx.r11.u32));
	// sth r11,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
	// lhz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8204da04
	if (ctx.cr6.eq) goto loc_8204DA04;
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r11,r11,9604
	ctx.r11.s64 = ctx.r11.s64 + 9604;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8204da3c
	if (ctx.cr0.eq) goto loc_8204DA3C;
loc_8204DA04:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8204da28
	if (!ctx.cr0.eq) goto loc_8204DA28;
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8204ba10
	ctx.lr = 0x8204DA24;
	sub_8204BA10(ctx, base);
	// b 0x8204da3c
	goto loc_8204DA3C;
loc_8204DA28:
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8204c228
	ctx.lr = 0x8204DA3C;
	sub_8204C228(ctx, base);
loc_8204DA3C:
	// b 0x8204d878
	goto loc_8204D878;
loc_8204DA40:
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x8204d760
	goto loc_8204D760;
loc_8204DA60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82072498) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// sth r4,30(r1)
	REX_STORE_U16(ctx.r1.u32 + 30, ctx.r4.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x820724c4
	goto loc_820724C4;
loc_820724B8:
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_820724C4:
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82072524
	if (!ctx.cr6.lt) goto loc_82072524;
	// lhz r11,30(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 30);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r9,r9,-30200
	ctx.r9.s64 = ctx.r9.s64 + -30200;
	// lhzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82072520
	if (ctx.cr0.eq) goto loc_82072520;
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_82072520:
	// b 0x820724b8
	goto loc_820724B8;
loc_82072524:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82076710) {
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
	// bl 0x82075780
	ctx.lr = 0x82076734;
	sub_82075780(ctx, base);
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
	// ble cr6,0x820767b8
	if (!ctx.cr6.gt) goto loc_820767B8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820767c8
	goto loc_820767C8;
loc_820767B8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820767C8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820767e4
	if (ctx.cr6.eq) goto loc_820767E4;
	// b 0x820767f8
	goto loc_820767F8;
loc_820767E4:
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
loc_820767F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820799D8) {
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
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
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
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
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
	// bl 0x820fd2c0
	ctx.lr = 0x82079A28;
	sub_820FD2C0(ctx, base);
	// bl 0x82155898
	ctx.lr = 0x82079A2C;
	sub_82155898(ctx, base);
	// bl 0x820fa928
	ctx.lr = 0x82079A30;
	sub_820FA928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8207B700) {
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
	// bl 0x820fd410
	ctx.lr = 0x8207B710;
	sub_820FD410(ctx, base);
	// bl 0x820f7128
	ctx.lr = 0x8207B714;
	sub_820F7128(ctx, base);
	// bl 0x820fa958
	ctx.lr = 0x8207B718;
	sub_820FA958(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,536(r11)
	REX_STORE_U16(ctx.r11.u32 + 536, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,50(r11)
	REX_STORE_U16(ctx.r11.u32 + 50, ctx.r10.u16);
	// bl 0x8215e5b8
	ctx.lr = 0x8207B758;
	sub_8215E5B8(ctx, base);
	// bl 0x8215e678
	ctx.lr = 0x8207B75C;
	sub_8215E678(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-3616
	ctx.r3.s64 = ctx.r11.s64 + -3616;
	// bl 0x82040be0
	ctx.lr = 0x8207B768;
	sub_82040BE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8207E4D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// sth r10,1040(r11)
	REX_STORE_U16(ctx.r11.u32 + 1040, ctx.r10.u16);
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
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// sth r10,1044(r11)
	REX_STORE_U16(ctx.r11.u32 + 1044, ctx.r10.u16);
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
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,1602(r11)
	REX_STORE_U16(ctx.r11.u32 + 1602, ctx.r10.u16);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,1044(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1044);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-2352
	ctx.r10.s64 = ctx.r10.s64 + -2352;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-2356
	ctx.r11.s64 = ctx.r11.s64 + -2356;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82082750) {
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
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208277c
	if (!ctx.cr6.eq) goto loc_8208277C;
	// bl 0x82081ce8
	ctx.lr = 0x82082778;
	sub_82081CE8(ctx, base);
	// b 0x82082780
	goto loc_82082780;
loc_8208277C:
	// bl 0x82082540
	ctx.lr = 0x82082780;
	sub_82082540(ctx, base);
loc_82082780:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82083F78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16288
	ctx.r11.s64 = ctx.r11.s64 + 16288;
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
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,24706
	ctx.r10.u64 = ctx.r10.u64 | 24706;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-16254
	ctx.r10.s64 = -1065222144;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,12418
	ctx.r10.u64 = ctx.r10.u64 | 12418;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-28542
	ctx.r10.s64 = -1870528512;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,24705
	ctx.r10.s64 = 1619066880;
	// ori r10,r10,8321
	ctx.r10.u64 = ctx.r10.u64 | 8321;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-16255
	ctx.r10.s64 = -1065287680;
	// ori r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,12417
	ctx.r10.s64 = 813760512;
	// ori r10,r10,20609
	ctx.r10.u64 = ctx.r10.u64 | 20609;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-28543
	ctx.r10.s64 = -1870594048;
	// ori r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,17312
	ctx.r11.s64 = ctx.r11.s64 + 17312;
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
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,6402
	ctx.r10.u64 = ctx.r10.u64 | 6402;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,6408
	ctx.r10.s64 = 419954688;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,6401
	ctx.r10.u64 = ctx.r10.u64 | 6401;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,6404
	ctx.r10.s64 = 419692544;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,6146
	ctx.r10.s64 = 402784256;
	// ori r10,r10,6144
	ctx.r10.u64 = ctx.r10.u64 | 6144;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,6152
	ctx.r10.s64 = 403177472;
	// ori r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,6145
	ctx.r10.s64 = 402718720;
	// ori r10,r10,6144
	ctx.r10.u64 = ctx.r10.u64 | 6144;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,6148
	ctx.r10.s64 = 402915328;
	// ori r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820C7250) {
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
	// stb r10,484(r11)
	REX_STORE_U8(ctx.r11.u32 + 484, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,882(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 882);
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
	// lbz r11,813(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 813);
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
	// lbz r11,928(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 928);
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
	// lbz r10,929(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 929);
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
	// ble cr6,0x820c734c
	if (!ctx.cr6.gt) goto loc_820C734C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c735c
	goto loc_820C735C;
loc_820C734C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C735C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820c7378
	if (ctx.cr6.lt) goto loc_820C7378;
	// b 0x820c7394
	goto loc_820C7394;
loc_820C7378:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,929(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 929);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_820C7394:
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
	// lbz r10,930(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 930);
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
	// ble cr6,0x820c741c
	if (!ctx.cr6.gt) goto loc_820C741C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c742c
	goto loc_820C742C;
loc_820C741C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C742C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820c7448
	if (ctx.cr6.lt) goto loc_820C7448;
	// b 0x820c7464
	goto loc_820C7464;
loc_820C7448:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,930(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 930);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_820C7464:
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
	// lbz r10,931(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 931);
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
	// ble cr6,0x820c74ec
	if (!ctx.cr6.gt) goto loc_820C74EC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c74fc
	goto loc_820C74FC;
loc_820C74EC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C74FC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820c7518
	if (ctx.cr6.lt) goto loc_820C7518;
	// b 0x820c7534
	goto loc_820C7534;
loc_820C7518:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,931(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 931);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_820C7534:
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
	// lbz r10,815(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 815);
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
	// ble cr6,0x820c75bc
	if (!ctx.cr6.gt) goto loc_820C75BC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c75cc
	goto loc_820C75CC;
loc_820C75BC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C75CC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820c75e8
	if (ctx.cr6.gt) goto loc_820C75E8;
	// b 0x820c7634
	goto loc_820C7634;
loc_820C75E8:
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
	// stb r10,815(r11)
	REX_STORE_U8(ctx.r11.u32 + 815, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,815(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 815);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x820c7634
	if (!ctx.cr6.gt) goto loc_820C7634;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,99
	ctx.r10.s64 = 99;
	// stb r10,815(r11)
	REX_STORE_U8(ctx.r11.u32 + 815, ctx.r10.u8);
loc_820C7634:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,813(r11)
	REX_STORE_U8(ctx.r11.u32 + 813, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,928(r11)
	REX_STORE_U32(ctx.r11.u32 + 928, ctx.r10.u32);
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
loc_820C76B4:
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
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C76EC:
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
	// bne cr6,0x820c7738
	if (!ctx.cr6.eq) goto loc_820C7738;
	// b 0x820c7b50
	goto loc_820C7B50;
loc_820C7738:
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
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820c77bc
	if (!ctx.cr6.gt) goto loc_820C77BC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c77cc
	goto loc_820C77CC;
loc_820C77BC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C77CC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c77e8
	if (!ctx.cr6.eq) goto loc_820C77E8;
	// b 0x820c7aac
	goto loc_820C7AAC;
loc_820C77E8:
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
	// beq cr6,0x820c7830
	if (ctx.cr6.eq) goto loc_820C7830;
	// b 0x820c7b60
	goto loc_820C7B60;
loc_820C7830:
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
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
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
	// ble cr6,0x820c78e8
	if (!ctx.cr6.gt) goto loc_820C78E8;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c78f8
	goto loc_820C78F8;
loc_820C78E8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C78F8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c7914
	if (!ctx.cr6.eq) goto loc_820C7914;
	// b 0x820c79a0
	goto loc_820C79A0;
loc_820C7914:
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
	// bne cr6,0x820c799c
	if (!ctx.cr6.eq) goto loc_820C799C;
	// b 0x820c79a0
	goto loc_820C79A0;
loc_820C799C:
	// bl 0x820b1a98
	ctx.lr = 0x820C79A0;
	sub_820B1A98(ctx, base);
loc_820C79A0:
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
	// bne cr6,0x820c79f4
	if (!ctx.cr6.eq) goto loc_820C79F4;
	// b 0x820c7a30
	goto loc_820C7A30;
loc_820C79F4:
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c7b60
	goto loc_820C7B60;
loc_820C7A30:
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
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
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
	// lhz r11,1024(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1024);
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
	// sth r10,1040(r11)
	REX_STORE_U16(ctx.r11.u32 + 1040, ctx.r10.u16);
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
loc_820C7AAC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,372(r11)
	REX_STORE_U8(ctx.r11.u32 + 372, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,369(r11)
	REX_STORE_U8(ctx.r11.u32 + 369, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,375(r11)
	REX_STORE_U8(ctx.r11.u32 + 375, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,376(r11)
	REX_STORE_U8(ctx.r11.u32 + 376, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,396(r11)
	REX_STORE_U8(ctx.r11.u32 + 396, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,881(r11)
	REX_STORE_U8(ctx.r11.u32 + 881, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,892(r11)
	REX_STORE_U8(ctx.r11.u32 + 892, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15988
	ctx.r11.s64 = ctx.r11.s64 + 15988;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c7bb0
	goto loc_820C7BB0;
loc_820C7B50:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C7B60:
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
	// bge cr6,0x820c7bb0
	if (!ctx.cr6.lt) goto loc_820C7BB0;
	// b 0x820c76ec
	goto loc_820C76EC;
loc_820C7BB0:
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
	// bge cr6,0x820c7c00
	if (!ctx.cr6.lt) goto loc_820C7C00;
	// b 0x820c76b4
	goto loc_820C76B4;
loc_820C7C00:
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
	// beq cr6,0x820c7c48
	if (ctx.cr6.eq) goto loc_820C7C48;
	// b 0x820c7cc4
	goto loc_820C7CC4;
loc_820C7C48:
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
	// lbz r11,881(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 881);
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
	// bne cr6,0x820c7c94
	if (!ctx.cr6.eq) goto loc_820C7C94;
	// b 0x820c7cb0
	goto loc_820C7CB0;
loc_820C7C94:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,881(r11)
	REX_STORE_U8(ctx.r11.u32 + 881, ctx.r10.u8);
	// b 0x820c7cc4
	goto loc_820C7CC4;
loc_820C7CB0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,881(r11)
	REX_STORE_U8(ctx.r11.u32 + 881, ctx.r10.u8);
loc_820C7CC4:
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
	// beq cr6,0x820c7d0c
	if (ctx.cr6.eq) goto loc_820C7D0C;
	// b 0x820c7eb8
	goto loc_820C7EB8;
loc_820C7D0C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,382(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 382);
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
	// stb r11,382(r10)
	REX_STORE_U8(ctx.r10.u32 + 382, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,881(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 881);
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
	// lbz r11,881(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 881);
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
	// lbz r11,881(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 881);
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
	// ble cr6,0x820c7dbc
	if (!ctx.cr6.gt) goto loc_820C7DBC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820c7dcc
	goto loc_820C7DCC;
loc_820C7DBC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C7DCC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c7de8
	if (ctx.cr6.eq) goto loc_820C7DE8;
	// b 0x820c7e00
	goto loc_820C7E00;
loc_820C7DE8:
	// bl 0x821561d0
	ctx.lr = 0x820C7DEC;
	sub_821561D0(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,881(r11)
	REX_STORE_U8(ctx.r11.u32 + 881, ctx.r10.u8);
loc_820C7E00:
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
	// lbz r11,376(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 376);
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
	// bne cr6,0x820c7e4c
	if (!ctx.cr6.eq) goto loc_820C7E4C;
	// b 0x820c7eb8
	goto loc_820C7EB8;
loc_820C7E4C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,376(r11)
	REX_STORE_U8(ctx.r11.u32 + 376, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,372(r11)
	REX_STORE_U8(ctx.r11.u32 + 372, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,369(r11)
	REX_STORE_U8(ctx.r11.u32 + 369, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,382(r11)
	REX_STORE_U8(ctx.r11.u32 + 382, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,629(r11)
	REX_STORE_U8(ctx.r11.u32 + 629, ctx.r10.u8);
	// b 0x820c7f30
	goto loc_820C7F30;
loc_820C7EB8:
	// bl 0x820b13f0
	ctx.lr = 0x820C7EBC;
	sub_820B13F0(ctx, base);
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
	// lbz r11,629(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 629);
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
	// bne cr6,0x820c7f08
	if (!ctx.cr6.eq) goto loc_820C7F08;
	// b 0x820c7f30
	goto loc_820C7F30;
loc_820C7F08:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,629(r11)
	REX_STORE_U8(ctx.r11.u32 + 629, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,614(r11)
	REX_STORE_U8(ctx.r11.u32 + 614, ctx.r10.u8);
loc_820C7F30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82113450) {
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
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// bl 0x821131d0
	ctx.lr = 0x8211347C;
	sub_821131D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82114A90) {
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
	// lbz r11,260(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 260);
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
	// bne cr6,0x82114ae8
	if (!ctx.cr6.eq) goto loc_82114AE8;
	// b 0x82114b18
	goto loc_82114B18;
loc_82114AE8:
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
	// b 0x82114c84
	goto loc_82114C84;
loc_82114B18:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,278(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 278);
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
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 140);
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
	// lbz r10,7(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
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
	// ble cr6,0x82114bf0
	if (!ctx.cr6.gt) goto loc_82114BF0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82114c00
	goto loc_82114C00;
loc_82114BF0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82114C00:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82114c1c
	if (!ctx.cr6.eq) goto loc_82114C1C;
	// b 0x82114c58
	goto loc_82114C58;
loc_82114C1C:
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
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// bl 0x82156068
	ctx.lr = 0x82114C54;
	sub_82156068(ctx, base);
	// bl 0x82155c30
	ctx.lr = 0x82114C58;
	sub_82155C30(ctx, base);
loc_82114C58:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// bl 0x82129428
	ctx.lr = 0x82114C80;
	sub_82129428(ctx, base);
	// bl 0x820f7ea0
	ctx.lr = 0x82114C84;
	sub_820F7EA0(ctx, base);
loc_82114C84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82123808) {
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
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
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
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,24(r10)
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
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
	// beq cr6,0x821238c4
	if (ctx.cr6.eq) goto loc_821238C4;
	// b 0x82123968
	goto loc_82123968;
loc_821238C4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
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
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
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
	// blt cr6,0x82123948
	if (ctx.cr6.lt) goto loc_82123948;
	// bl 0x821235c0
	ctx.lr = 0x82123944;
	sub_821235C0(ctx, base);
	// b 0x82123968
	goto loc_82123968;
loc_82123948:
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
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x821235c0
	ctx.lr = 0x82123968;
	sub_821235C0(ctx, base);
loc_82123968:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212D2F8) {
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
	// lhz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 144);
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
	// bne cr6,0x8212d350
	if (!ctx.cr6.eq) goto loc_8212D350;
	// b 0x8212d394
	goto loc_8212D394;
loc_8212D350:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
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
	// addi r10,r10,-15624
	ctx.r10.s64 = ctx.r10.s64 + -15624;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212D394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212D394:
	// bl 0x820f7ba0
	ctx.lr = 0x8212D398;
	sub_820F7BA0(ctx, base);
	// bl 0x820f7ea0
	ctx.lr = 0x8212D39C;
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

DEFINE_REX_FUNC(sub_82133038) {
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
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
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
	// addi r10,r10,-15000
	ctx.r10.s64 = ctx.r10.s64 + -15000;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x820f7ba0
	ctx.lr = 0x8213309C;
	sub_820F7BA0(ctx, base);
	// bl 0x820f7ea0
	ctx.lr = 0x821330A0;
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

DEFINE_REX_FUNC(sub_82136AA0) {
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
	// blt cr6,0x82136af8
	if (ctx.cr6.lt) goto loc_82136AF8;
	// b 0x82136b50
	goto loc_82136B50;
loc_82136AF8:
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
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
	ctx.lr = 0x82136B50;
	sub_820F7D10(ctx, base);
loc_82136B50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213ABD8) {
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
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// bl 0x8213a888
	ctx.lr = 0x8213ACB0;
	sub_8213A888(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821423F0) {
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
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-8192
	ctx.r10.s64 = -8192;
	// sth r10,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
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
	// sth r10,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// sth r10,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5452
	ctx.r11.s64 = ctx.r11.s64 + 5452;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820f5f08
	ctx.lr = 0x821424D0;
	sub_820F5F08(ctx, base);
	// bl 0x821422b8
	ctx.lr = 0x821424D4;
	sub_821422B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214A890) {
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
	// addi r10,r10,-11872
	ctx.r10.s64 = ctx.r10.s64 + -11872;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A914;
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

DEFINE_REX_FUNC(sub_8214FC78) {
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
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
	// lbz r11,129(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 129);
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
	// bne cr6,0x8214fd50
	if (!ctx.cr6.eq) goto loc_8214FD50;
	// b 0x8214fd64
	goto loc_8214FD64;
loc_8214FD50:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-253
	ctx.r10.s64 = -253;
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
loc_8214FD64:
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
	// bl 0x8214f838
	ctx.lr = 0x8214FD7C;
	sub_8214F838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82155DB0) {
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
	// li r4,93
	ctx.r4.s64 = 93;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155a00
	ctx.lr = 0x82155DD0;
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

DEFINE_REX_FUNC(sub_82156810) {
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
	// addi r10,r10,16008
	ctx.r10.s64 = ctx.r10.s64 + 16008;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x82155620
	ctx.lr = 0x8215686C;
	sub_82155620(ctx, base);
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
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155a00
	ctx.lr = 0x821568A0;
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

DEFINE_REX_FUNC(sub_8215C2B0) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215c2ec
	if (!ctx.cr6.eq) goto loc_8215C2EC;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8215c308
	goto loc_8215C308;
loc_8215C2EC:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8215C308:
	// bl 0x820ae5d8
	ctx.lr = 0x8215C30C;
	sub_820AE5D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215F130) {
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
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215f16c
	if (ctx.cr0.eq) goto loc_8215F16C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-13760
	ctx.r11.s64 = ctx.r11.s64 + -13760;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,17152
	ctx.r3.s64 = ctx.r11.s64 + 17152;
	// bl 0x8215bb18
	ctx.lr = 0x8215F16C;
	sub_8215BB18(ctx, base);
loc_8215F16C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// lbz r11,187(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 187);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215f1a4
	if (ctx.cr0.eq) goto loc_8215F1A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-13760
	ctx.r11.s64 = ctx.r11.s64 + -13760;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,17152
	ctx.r11.s64 = ctx.r11.s64 + 17152;
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x8215bb18
	ctx.lr = 0x8215F1A4;
	sub_8215BB18(ctx, base);
loc_8215F1A4:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18293
	ctx.r11.s64 = ctx.r11.s64 + -18293;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215F1CC;
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

DEFINE_REX_FUNC(sub_82169498) {
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
	// stb r3,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r3.u8);
	// stb r4,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// stb r5,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r5.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8205ce50
	ctx.lr = 0x821694C0;
	sub_8205CE50(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169510
	if (ctx.cr6.eq) goto loc_82169510;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r10,r10,15736
	ctx.r10.s64 = ctx.r10.s64 + 15736;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,119(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 119);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,127(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 127);
	// stb r10,96(r11)
	REX_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,135(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 135);
	// stb r10,97(r11)
	REX_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
loc_82169510:
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

DEFINE_REX_FUNC(sub_82171528) {
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
	// bl 0x82171220
	ctx.lr = 0x82171538;
	sub_82171220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82171B38) {
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
	// bl 0x82171af8
	ctx.lr = 0x82171B48;
	sub_82171AF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82171F80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82172004
	if (!ctx.cr0.eq) goto loc_82172004;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
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
loc_82172004:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821748C0) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,10800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10800, ctx.xer);
	// ble cr6,0x821748e8
	if (!ctx.cr6.gt) goto loc_821748E8;
	// b 0x82174988
	goto loc_82174988;
loc_821748E8:
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821748fc
	if (!ctx.cr6.eq) goto loc_821748FC;
	// b 0x82174988
	goto loc_82174988;
loc_821748FC:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,-8(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lhz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82174954
	if (!ctx.cr6.gt) goto loc_82174954;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-8(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lhz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,24(r10)
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// b 0x82174988
	goto loc_82174988;
loc_82174954:
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,-8(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,24(r10)
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
loc_82174988:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821791D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1828
	ctx.r11.s64 = ctx.r11.s64 + 1828;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,2340(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2340);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82179210
	if (!ctx.cr6.gt) goto loc_82179210;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,2340(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2340);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// b 0x82179218
	goto loc_82179218;
loc_82179210:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
loc_82179218:
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82179230
	if (!ctx.cr6.eq) goto loc_82179230;
	// b 0x821792a8
	goto loc_821792A8;
loc_82179230:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r10,21(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82179260
	if (!ctx.cr6.eq) goto loc_82179260;
	// lfs f0,-24(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,22928
	ctx.r11.s64 = ctx.r11.s64 + 22928;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
loc_82179260:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,2349(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2349);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-28(r1)
	REX_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lwz r11,-28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x82179290
	if (!ctx.cr6.gt) goto loc_82179290;
	// li r11,99
	ctx.r11.s64 = 99;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82179298
	goto loc_82179298;
loc_82179290:
	// lwz r11,-28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_82179298:
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stb r11,2349(r10)
	REX_STORE_U8(ctx.r10.u32 + 2349, ctx.r11.u8);
loc_821792A8:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217E330) {
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217E6C8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217F610) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,2260(r1)
	REX_STORE_U32(ctx.r1.u32 + 2260, ctx.r3.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r11,2196(r1)
	REX_STORE_U32(ctx.r1.u32 + 2196, ctx.r11.u32);
	// lwz r11,2196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2196);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,25144
	ctx.r10.s64 = ctx.r10.s64 + 25144;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82272590
	ctx.lr = 0x8217F644;
	sub_82272590(ctx, base);
	// lwz r11,2260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r10,2200(r1)
	REX_STORE_U32(ctx.r1.u32 + 2200, ctx.r10.u32);
	// stw r11,2204(r1)
	REX_STORE_U32(ctx.r1.u32 + 2204, ctx.r11.u32);
loc_8217F654:
	// lwz r11,2200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2200);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,2200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2200(r1)
	REX_STORE_U32(ctx.r1.u32 + 2200, ctx.r11.u32);
	// bne cr6,0x8217f654
	if (!ctx.cr6.eq) goto loc_8217F654;
	// lwz r11,2200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2200);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2200(r1)
	REX_STORE_U32(ctx.r1.u32 + 2200, ctx.r11.u32);
loc_8217F67C:
	// lwz r11,2204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2204);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,2208(r1)
	REX_STORE_U8(ctx.r1.u32 + 2208, ctx.r11.u8);
	// lbz r11,2208(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 2208);
	// lwz r10,2200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2200);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,2208(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 2208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,2200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2200(r1)
	REX_STORE_U32(ctx.r1.u32 + 2200, ctx.r11.u32);
	// lwz r11,2204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2204(r1)
	REX_STORE_U32(ctx.r1.u32 + 2204, ctx.r11.u32);
	// bne cr6,0x8217f67c
	if (!ctx.cr6.eq) goto loc_8217F67C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r10,2212(r1)
	REX_STORE_U32(ctx.r1.u32 + 2212, ctx.r10.u32);
	// stw r11,2216(r1)
	REX_STORE_U32(ctx.r1.u32 + 2216, ctx.r11.u32);
loc_8217F6CC:
	// lwz r11,2212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2212);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,2212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2212);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2212(r1)
	REX_STORE_U32(ctx.r1.u32 + 2212, ctx.r11.u32);
	// bne cr6,0x8217f6cc
	if (!ctx.cr6.eq) goto loc_8217F6CC;
	// lwz r11,2212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2212(r1)
	REX_STORE_U32(ctx.r1.u32 + 2212, ctx.r11.u32);
loc_8217F6F4:
	// lwz r11,2216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2216);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,2220(r1)
	REX_STORE_U8(ctx.r1.u32 + 2220, ctx.r11.u8);
	// lbz r11,2220(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 2220);
	// lwz r10,2212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2212);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,2220(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 2220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,2212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2212);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2212(r1)
	REX_STORE_U32(ctx.r1.u32 + 2212, ctx.r11.u32);
	// lwz r11,2216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2216);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2216(r1)
	REX_STORE_U32(ctx.r1.u32 + 2216, ctx.r11.u32);
	// bne cr6,0x8217f6f4
	if (!ctx.cr6.eq) goto loc_8217F6F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// bl 0x821af7c8
	ctx.lr = 0x8217F740;
	sub_821AF7C8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f77c
	if (ctx.cr6.eq) goto loc_8217F77C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,2192(r1)
	REX_STORE_U32(ctx.r1.u32 + 2192, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8217f874
	goto loc_8217F874;
loc_8217F77C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,25096
	ctx.r5.s64 = ctx.r11.s64 + 25096;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a0410
	ctx.lr = 0x8217F790;
	sub_821A0410(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8217f7b4
	if (!ctx.cr0.eq) goto loc_8217F7B4;
	// lwz r5,2260(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,25104
	ctx.r4.s64 = ctx.r11.s64 + 25104;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x8219f938
	ctx.lr = 0x8217F7AC;
	sub_8219F938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217f874
	goto loc_8217F874;
loc_8217F7B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82203800
	ctx.lr = 0x8217F7BC;
	sub_82203800(ctx, base);
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a0620
	ctx.lr = 0x8217F7D8;
	sub_821A0620(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a06e8
	ctx.lr = 0x8217F7E0;
	sub_821A06E8(ctx, base);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821afd40
	ctx.lr = 0x8217F7F8;
	sub_821AFD40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8217f808
	if (!ctx.cr0.eq) goto loc_8217F808;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217f874
	goto loc_8217F874;
loc_8217F808:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821afe48
	ctx.lr = 0x8217F810;
	sub_821AFE48(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8217f83c
	if (ctx.cr6.eq) goto loc_8217F83C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821afe48
	ctx.lr = 0x8217F820;
	sub_821AFE48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8217f830
	if (ctx.cr0.eq) goto loc_8217F830;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217f874
	goto loc_8217F874;
loc_8217F830:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821afe70
	ctx.lr = 0x8217F838;
	sub_821AFE70(ctx, base);
	// b 0x8217f808
	goto loc_8217F808;
loc_8217F83C:
	// lwz r5,2260(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821afec0
	ctx.lr = 0x8217F84C;
	sub_821AFEC0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f870
	if (ctx.cr6.eq) goto loc_8217F870;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-24020
	ctx.r11.s64 = ctx.r11.s64 + -24020;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821af948
	ctx.lr = 0x8217F870;
	sub_821AF948(ctx, base);
loc_8217F870:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8217F874:
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821986D8) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82198724
	if (ctx.cr6.eq) goto loc_82198724;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82198714
	if (!ctx.cr6.eq) goto loc_82198714;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82198774
	goto loc_82198774;
loc_82198714:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82198724:
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x822357e8
	ctx.lr = 0x8219872C;
	sub_822357E8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82198750
	if (!ctx.cr6.eq) goto loc_82198750;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82235370
	ctx.lr = 0x82198748;
	sub_82235370(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82198774
	goto loc_82198774;
loc_82198750:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mulli r11,r11,3140
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3140));
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// addi r10,r10,2672
	ctx.r10.s64 = ctx.r10.s64 + 2672;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218d710
	ctx.lr = 0x82198768;
	sub_8218D710(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8219e970
	ctx.lr = 0x82198770;
	sub_8219E970(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82198774:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82199B38) {
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
	// addi r11,r11,11360
	ctx.r11.s64 = ctx.r11.s64 + 11360;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82199b6c
	if (!ctx.cr6.eq) goto loc_82199B6C;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11360
	ctx.r11.s64 = ctx.r11.s64 + 11360;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82199b88
	goto loc_82199B88;
loc_82199B6C:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11360
	ctx.r11.s64 = ctx.r11.s64 + 11360;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,11360
	ctx.r10.s64 = ctx.r10.s64 + 11360;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82199B88:
	// bl 0x82199808
	ctx.lr = 0x82199B8C;
	sub_82199808(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219AEC8) {
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
	// bl 0x8219ad80
	ctx.lr = 0x8219AEE0;
	sub_8219AD80(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82198648
	ctx.lr = 0x8219AEEC;
	sub_82198648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219DE78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,7084
	ctx.r11.s64 = ctx.r11.s64 + 7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8219deb0
	if (ctx.cr6.eq) goto loc_8219DEB0;
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
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8219deb4
	goto loc_8219DEB4;
loc_8219DEB0:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8219DEB4:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219F078) {
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
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r11,r11,-14876
	ctx.r11.s64 = ctx.r11.s64 + -14876;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x821d3be0
	ctx.lr = 0x8219F09C;
	sub_821D3BE0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f150
	if (ctx.cr6.eq) goto loc_8219F150;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821dfbe8
	ctx.lr = 0x8219F0B4;
	sub_821DFBE8(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f150
	if (ctx.cr6.eq) goto loc_8219F150;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x8219f0e8
	goto loc_8219F0E8;
loc_8219F0DC:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8219F0E8:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8219f134
	if (!ctx.cr6.lt) goto loc_8219F134;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r11,r11,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 + 1000;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219f130
	if (!ctx.cr6.eq) goto loc_8219F130;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r11,r11,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 + 1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8219f16c
	goto loc_8219F16C;
loc_8219F130:
	// b 0x8219f0dc
	goto loc_8219F0DC;
loc_8219F134:
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,10200
	ctx.r11.s64 = ctx.r11.s64 + 10200;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,10200
	ctx.r3.s64 = ctx.r11.s64 + 10200;
	// b 0x8219f16c
	goto loc_8219F16C;
loc_8219F150:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-19320
	ctx.r4.s64 = ctx.r11.s64 + -19320;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,10200
	ctx.r3.s64 = ctx.r11.s64 + 10200;
	// bl 0x8219f938
	ctx.lr = 0x8219F164;
	sub_8219F938(ctx, base);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,10200
	ctx.r3.s64 = ctx.r11.s64 + 10200;
loc_8219F16C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A5178) {
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
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822724f0
	ctx.lr = 0x821A5198;
	sub_822724F0(ctx, base);
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

DEFINE_REX_FUNC(sub_821A6720) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x7;
	// rlwinm r10,r4,3,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a6850
	if (ctx.cr6.lt) goto loc_821A6850;
	// beq cr6,0x821a6804
	if (ctx.cr6.eq) goto loc_821A6804;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821a6798
	if (ctx.cr6.eq) goto loc_821A6798;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f13,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821a6770
	if (ctx.cr6.gt) goto loc_821A6770;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821A6770:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821a6790
	if (ctx.cr6.lt) goto loc_821A6790;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1828(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821a67f0
	if (!ctx.cr6.gt) goto loc_821A67F0;
loc_821A6790:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821a67f0
	goto loc_821A67F0;
loc_821A6798:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,1828(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f12.f64 = double(temp.f32);
	// beq 0x821a67b8
	if (ctx.cr0.eq) goto loc_821A67B8;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x821a67bc
	goto loc_821A67BC;
loc_821A67B8:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_821A67BC:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
loc_821A67C0:
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lfs f13,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821a67d4
	if (!ctx.cr6.gt) goto loc_821A67D4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821A67D4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821a67e4
	if (!ctx.cr6.lt) goto loc_821A67E4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x821a67f0
	goto loc_821A67F0;
loc_821A67E4:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x821a67f0
	if (!ctx.cr6.gt) goto loc_821A67F0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_821A67F0:
	// stfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// oris r3,r11,16384
	ctx.r3.u64 = ctx.r11.u64 | 1073741824;
	// blr 
	return;
loc_821A6804:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821a6840
	if (ctx.cr6.eq) goto loc_821A6840;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,1828(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f12.f64 = double(temp.f32);
	// beq 0x821a6834
	if (ctx.cr0.eq) goto loc_821A6834;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x821a6838
	goto loc_821A6838;
loc_821A6834:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_821A6838:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x821a67c0
	goto loc_821A67C0;
loc_821A6840:
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// oris r3,r11,8192
	ctx.r3.u64 = ctx.r11.u64 | 536870912;
	// blr 
	return;
loc_821A6850:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AFE48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B0D58) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,4092(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4092);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f30,1828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821b0170
	ctx.lr = 0x821B0E34;
	sub_821B0170(ctx, base);
	// lfs f11,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f10,f13,f31,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f10.f64)));
	// fneg f12,f9
	ctx.f12.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fneg f13,f10
	ctx.f13.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f30,104(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C00A0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,24556
	ctx.r4.s64 = ctx.r11.s64 + 24556;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,24324
	ctx.r3.s64 = ctx.r11.s64 + 24324;
	// bl 0x821c79b8
	ctx.lr = 0x821C00CC;
	sub_821C79B8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821bf710
	ctx.lr = 0x821C00D4;
	sub_821BF710(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c0120
	if (ctx.cr0.eq) goto loc_821C0120;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r31,r11,-22096
	ctx.r31.s64 = ctx.r11.s64 + -22096;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 908);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x821c93a0
	ctx.lr = 0x821C00F8;
	sub_821C93A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,2864(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2864);
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82234898
	ctx.lr = 0x821C0110;
	sub_82234898(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x821c0120
	if (!ctx.cr6.eq) goto loc_821C0120;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1800(r31)
	REX_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
loc_821C0120:
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

DEFINE_REX_FUNC(sub_821C2970) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,-22096
	ctx.r11.s64 = ctx.r11.s64 + -22096;
	// lwz r3,908(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 908);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821c2990
	if (!ctx.cr6.lt) goto loc_821C2990;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821C2990:
	// ld r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// b 0x821c8dd0
	sub_821C8DD0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C3AF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x821C3AF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,27972
	ctx.r4.s64 = ctx.r11.s64 + 27972;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,24324
	ctx.r3.s64 = ctx.r11.s64 + 24324;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821c79b8
	ctx.lr = 0x821C3B1C;
	sub_821C79B8(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821c3ce8
	if (ctx.cr6.lt) goto loc_821C3CE8;
	// beq cr6,0x821c3bc8
	if (ctx.cr6.eq) goto loc_821C3BC8;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x821c3bb4
	if (ctx.cr6.lt) goto loc_821C3BB4;
	// bne cr6,0x821c3cf8
	if (!ctx.cr6.eq) goto loc_821C3CF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,27840
	ctx.r3.s64 = ctx.r11.s64 + 27840;
	// bl 0x821c79b8
	ctx.lr = 0x821C3B44;
	sub_821C79B8(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-22096
	ctx.r11.s64 = ctx.r11.s64 + -22096;
	// lwz r10,3464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821c3cf8
	if (ctx.cr6.eq) goto loc_821C3CF8;
	// lwz r10,3064(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3064);
	// addi r9,r11,3080
	ctx.r9.s64 = ctx.r11.s64 + 3080;
	// mulli r10,r10,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(96));
	// add. r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c3cf8
	if (ctx.cr0.eq) goto loc_821C3CF8;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// mulli r9,r31,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(36));
	// addi r11,r11,30825
	ctx.r11.s64 = ctx.r11.s64 + 30825;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
loc_821C3B84:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821c3ba4
	if (!ctx.cr0.eq) goto loc_821C3BA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821c3b84
	if (!ctx.cr6.eq) goto loc_821C3B84;
loc_821C3BA4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821c3cf8
	if (!ctx.cr0.eq) goto loc_821C3CF8;
	// bl 0x821c38a8
	ctx.lr = 0x821C3BB0;
	sub_821C38A8(ctx, base);
	// b 0x821c3cf8
	goto loc_821C3CF8;
loc_821C3BB4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,27804
	ctx.r3.s64 = ctx.r11.s64 + 27804;
	// bl 0x821c79b8
	ctx.lr = 0x821C3BC4;
	sub_821C79B8(ctx, base);
	// b 0x821c3cf8
	goto loc_821C3CF8;
loc_821C3BC8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x821c1b60
	ctx.lr = 0x821C3BD0;
	sub_821C1B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c3cf8
	if (!ctx.cr0.eq) goto loc_821C3CF8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821bf710
	ctx.lr = 0x821C3BE0;
	sub_821BF710(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3cf8
	if (ctx.cr0.eq) goto loc_821C3CF8;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r27,-32074
	ctx.r27.s64 = -2102001664;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,-22096
	ctx.r30.s64 = ctx.r11.s64 + -22096;
	// bne cr6,0x821c3c70
	if (!ctx.cr6.eq) goto loc_821C3C70;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,27924
	ctx.r3.s64 = ctx.r11.s64 + 27924;
	// bl 0x821c79b8
	ctx.lr = 0x821C3C14;
	sub_821C79B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,908(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stb r11,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x821c8640
	ctx.lr = 0x821C3C2C;
	sub_821C8640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82272590
	ctx.lr = 0x821C3C3C;
	sub_82272590(ctx, base);
	// lwz r11,16872(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16872);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82272590
	ctx.lr = 0x821C3C50;
	sub_82272590(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a3658
	ctx.lr = 0x821C3C5C;
	sub_821A3658(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,112
	ctx.r5.s64 = 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4098
	ctx.lr = 0x821C3C6C;
	sub_821A4098(ctx, base);
	// b 0x821c3c7c
	goto loc_821C3C7C;
loc_821C3C70:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,27756
	ctx.r3.s64 = ctx.r11.s64 + 27756;
	// bl 0x821c79b8
	ctx.lr = 0x821C3C7C;
	sub_821C79B8(ctx, base);
loc_821C3C7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r28,16872(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 16872);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// bl 0x821a3658
	ctx.lr = 0x821C3C90;
	sub_821A3658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821a4b18
	ctx.lr = 0x821C3CA0;
	sub_821A4B18(ctx, base);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// mulli r11,r31,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(36));
	// addi r10,r10,30825
	ctx.r10.s64 = ctx.r10.s64 + 30825;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82272590
	ctx.lr = 0x821C3CBC;
	sub_82272590(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r31,1280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1280));
	// lfs f0,4092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r10,r10,4000
	ctx.r10.s64 = ctx.r10.s64 + 4000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,1276(r11)
	REX_STORE_U32(ctx.r11.u32 + 1276, ctx.r29.u32);
	// stw r29,640(r11)
	REX_STORE_U32(ctx.r11.u32 + 640, ctx.r29.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x821c3cf8
	goto loc_821C3CF8;
loc_821C3CE8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,27876
	ctx.r3.s64 = ctx.r11.s64 + 27876;
	// bl 0x821c79b8
	ctx.lr = 0x821C3CF8;
	sub_821C79B8(ctx, base);
loc_821C3CF8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CDFA0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CEA10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f8,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,256(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// lfs f7,284(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,288(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f6,248(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,280(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,264(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1828(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,232(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,268(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,272(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f13,23220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23220);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f13,f13,f10,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// lfs f0,-31528(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31528);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,436(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D5DF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e3c
	ctx.lr = 0x821D5DF8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82272d8c
	ctx.lr = 0x821D5E00;
	__savefpr_21(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f24.f64 = double(temp.f32);
	// fmr f23,f24
	ctx.f23.f64 = ctx.f24.f64;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f13,368(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// ble cr6,0x821d5e4c
	if (!ctx.cr6.gt) goto loc_821D5E4C;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x821d5e4c
	if (!ctx.cr6.lt) goto loc_821D5E4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821D5E4C:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r9,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d5e88
	if (ctx.cr0.eq) goto loc_821D5E88;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x821d5e70
	if (!ctx.cr0.eq) goto loc_821D5E70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D5E70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5e88
	if (!ctx.cr6.eq) goto loc_821D5E88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821cfab8
	ctx.lr = 0x821D5E84;
	sub_821CFAB8(ctx, base);
	// b 0x821d6764
	goto loc_821D6764;
loc_821D5E88:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// bne cr6,0x821d5ebc
	if (!ctx.cr6.eq) goto loc_821D5EBC;
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d5eb0
	if (!ctx.cr0.eq) goto loc_821D5EB0;
	// lwz r11,404(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 404);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5ebc
	if (ctx.cr0.eq) goto loc_821D5EBC;
loc_821D5EB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821cea98
	ctx.lr = 0x821D5EBC;
	sub_821CEA98(ctx, base);
loc_821D5EBC:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bne 0x821d5ed4
	if (!ctx.cr0.eq) goto loc_821D5ED4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5ED4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d6750
	if (ctx.cr6.eq) goto loc_821D6750;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lis r27,-32113
	ctx.r27.s64 = -2104557568;
	// lfs f21,25100(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 25100);
	ctx.f21.f64 = double(temp.f32);
	// addi r26,r11,18968
	ctx.r26.s64 = ctx.r11.s64 + 18968;
	// lfs f22,-29580(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -29580);
	ctx.f22.f64 = double(temp.f32);
	// lfs f25,1828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f25.f64 = double(temp.f32);
loc_821D5F00:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// ble cr6,0x821d5f84
	if (!ctx.cr6.gt) goto loc_821D5F84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d6750
	if (ctx.cr6.eq) goto loc_821D6750;
loc_821D5F18:
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x821d5f84
	if (!ctx.cr6.lt) goto loc_821D5F84;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// bne 0x821d5f38
	if (!ctx.cr0.eq) goto loc_821D5F38;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821D5F38:
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821d5f4c
	if (ctx.cr0.eq) goto loc_821D5F4C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821cf338
	ctx.lr = 0x821D5F4C;
	sub_821CF338(ctx, base);
loc_821D5F4C:
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821d5f60
	if (ctx.cr0.eq) goto loc_821D5F60;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821f2ac0
	ctx.lr = 0x821D5F60;
	sub_821F2AC0(ctx, base);
loc_821D5F60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x821f25b8
	ctx.lr = 0x821D5F6C;
	sub_821F25B8(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// bne cr6,0x821d5f18
	if (!ctx.cr6.eq) goto loc_821D5F18;
loc_821D5F84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d6750
	if (ctx.cr6.eq) goto loc_821D6750;
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d5ff8
	if (ctx.cr0.eq) goto loc_821D5FF8;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,404(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 404);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5ff0
	if (ctx.cr0.eq) goto loc_821D5FF0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f10,16(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f9,20(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f11,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x821d5ff4
	goto loc_821D5FF4;
loc_821D5FF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_821D5FF4:
	// bl 0x821d5998
	ctx.lr = 0x821D5FF8;
	sub_821D5998(ctx, base);
loc_821D5FF8:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d610c
	if (ctx.cr6.eq) goto loc_821D610C;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,404(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 404);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d60b8
	if (ctx.cr0.eq) goto loc_821D60B8;
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,16(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// lfs f6,16(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,32(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fsubs f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f8,40(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f11,60(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x821d60f4
	goto loc_821D60F4;
loc_821D60B8:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,60(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_821D60F4:
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// lfs f1,452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821f3740
	ctx.lr = 0x821D610C;
	sub_821F3740(ctx, base);
loc_821D610C:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d6208
	if (!ctx.cr0.eq) goto loc_821D6208;
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f1,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f25,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d6208
	if (!ctx.cr6.lt) goto loc_821D6208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x821ce6c8
	ctx.lr = 0x821D6154;
	sub_821CE6C8(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d61c4
	if (ctx.cr0.eq) goto loc_821D61C4;
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f9,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmuls f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmuls f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// b 0x821d6204
	goto loc_821D6204;
loc_821D61C4:
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_821D6204:
	// stfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_821D6208:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d6284
	if (!ctx.cr0.eq) goto loc_821D6284;
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f1,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f25,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d6284
	if (!ctx.cr6.lt) goto loc_821D6284;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821ce6c8
	ctx.lr = 0x821D6250;
	sub_821CE6C8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_821D6284:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d62d0
	if (!ctx.cr0.eq) goto loc_821D62D0;
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f1,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,312(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f25,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d62d0
	if (!ctx.cr6.lt) goto loc_821D62D0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// bl 0x821ce770
	ctx.lr = 0x821D62C8;
	sub_821CE770(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 168, temp.u32);
loc_821D62D0:
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lfs f10,0(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,8(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,12(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f13,12(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lfs f0,80(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,92(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f13,164(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,168(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f13.f64)));
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f9,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f13,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d6450
	if (!ctx.cr6.eq) goto loc_821D6450;
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// lfs f13,116(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,120(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,124(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_821D6450:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stfs f25,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stfs f24,192(r1)
	temp.f32 = float(ctx.f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821d55d0
	ctx.lr = 0x821D646C;
	sub_821D55D0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,380(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// beq cr6,0x821d65dc
	if (ctx.cr6.eq) goto loc_821D65DC;
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// fmuls f1,f0,f21
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// bl 0x82272fb8
	ctx.lr = 0x821D64A8;
	sub_82272FB8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f13,380(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bge cr6,0x821d64c4
	if (!ctx.cr6.lt) goto loc_821D64C4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_821D64C4:
	// lwz r10,404(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 404);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821d64e0
	if (ctx.cr0.eq) goto loc_821D64E0;
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// b 0x821d6500
	goto loc_821D6500;
loc_821D64E0:
	// lfs f10,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f9,20(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f8,24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
loc_821D6500:
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d6518
	if (ctx.cr0.eq) goto loc_821D6518;
	// lfs f9,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,52(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,56(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// b 0x821d6524
	goto loc_821D6524;
loc_821D6518:
	// lfs f9,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
loc_821D6524:
	// fmuls f6,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f4,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f1,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f12,f11,f12,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f6.f64)));
	// fmsubs f11,f8,f13,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f7.f64)));
	// lfs f8,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f10,f10,f9,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f5.f64)));
	// lfs f7,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f25,f0
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f28,f12,f9
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f3,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f30,f10,f7
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f11,f11,f7,f28
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, -ctx.f28.f64)));
	// fmsubs f10,f10,f9,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f3.f64)));
	// fmsubs f12,f12,f8,f30
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, -ctx.f30.f64)));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,-28456(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + -28456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,12(r29)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_821D65DC:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f27,164(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f27,f24
	ctx.cr6.compare(ctx.f27.f64, ctx.f24.f64);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// ble cr6,0x821d66bc
	if (!ctx.cr6.gt) goto loc_821D66BC;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f30,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f29,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f28,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,60(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f26.f64 = double(temp.f32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x821d5558
	ctx.lr = 0x821D6664;
	sub_821D5558(ctx, base);
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// lfs f10,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f27,f31
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f28.f64, ctx.f28.f64, ctx.f0.f64)));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f30.f64, ctx.f30.f64, ctx.f0.f64)));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x821d6694
	if (ctx.cr6.lt) goto loc_821D6694;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_821D6694:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f26,12(r29)
	temp.f32 = float(ctx.f26.f64);
	REX_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fsubs f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_821D66BC:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// ble cr6,0x821d66d8
	if (!ctx.cr6.gt) goto loc_821D66D8;
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 156, temp.u32);
loc_821D66D8:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,404(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 404);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d670c
	if (!ctx.cr0.eq) goto loc_821D670C;
	// lfs f11,16(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
loc_821D670C:
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f23,f0
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// ble cr6,0x821d6724
	if (!ctx.cr6.gt) goto loc_821D6724;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
loc_821D6724:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// fmr f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f0.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bne 0x821d673c
	if (!ctx.cr0.eq) goto loc_821D673C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D673C:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// bne cr6,0x821d5f00
	if (!ctx.cr6.eq) goto loc_821D5F00;
loc_821D6750:
	// fsqrts f13,f23
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f23.f64)));
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 28, temp.u32);
loc_821D6764:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82272dd8
	ctx.lr = 0x821D6770;
	__restfpr_21(ctx, base);
	// b 0x82272e8c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82232860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x82232868;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r29,260(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,268(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r31,3
	ctx.r31.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82232660
	ctx.lr = 0x822328C8;
	sub_82232660(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82234940) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x82234948;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x828af94c
	ctx.lr = 0x82234964;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822349dc
	if (!ctx.cr0.eq) goto loc_822349DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x828af93c
	ctx.lr = 0x822349A4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822349b4
	if (!ctx.cr0.lt) goto loc_822349B4;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x822349d4
	goto loc_822349D4;
loc_822349B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822349d0
	if (!ctx.cr6.eq) goto loc_822349D0;
	// bl 0x8223aaf0
	ctx.lr = 0x822349C0;
	sub_8223AAF0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// b 0x822349d4
	goto loc_822349D4;
loc_822349D0:
	// li r31,997
	ctx.r31.s64 = 997;
loc_822349D4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828afe6c
	ctx.lr = 0x822349DC;
	__imp__ObDereferenceObject(ctx, base);
loc_822349DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82239A50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 | 23;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223A720) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828b000c
	ctx.lr = 0x8223A748;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223a7a8
	if (ctx.cr0.lt) goto loc_8223A7A8;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x828afffc
	ctx.lr = 0x8223A770;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223a7a8
	if (ctx.cr0.lt) goto loc_8223A7A8;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x828afffc
	ctx.lr = 0x8223A798;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223a7a8
	if (ctx.cr0.lt) goto loc_8223A7A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8223a7b0
	goto loc_8223A7B0;
loc_8223A7A8:
	// bl 0x8223aab8
	ctx.lr = 0x8223A7AC;
	sub_8223AAB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223A7B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223D500) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-28408
	ctx.r11.s64 = ctx.r11.s64 + -28408;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8223d54c
	if (ctx.cr6.eq) goto loc_8223D54C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8223D54C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-28428
	ctx.r11.s64 = ctx.r11.s64 + -28428;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8223d578
	if (ctx.cr6.eq) goto loc_8223D578;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-30568
	ctx.r3.s64 = ctx.r11.s64 + -30568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822410d0
	ctx.lr = 0x8223D578;
	sub_822410D0(ctx, base);
loc_8223D578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_822400F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x822400F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240154
	if (ctx.cr6.eq) goto loc_82240154;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223ff28
	ctx.lr = 0x82240134;
	sub_8223FF28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240154
	if (ctx.cr6.eq) goto loc_82240154;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
loc_82240154:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82243458) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e10
	ctx.lr = 0x82243460;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82272d70
	ctx.lr = 0x82243468;
	__savefpr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17888(r1)
	ea = -17888 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// stw r30,17908(r1)
	REX_STORE_U32(ctx.r1.u32 + 17908, ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822434ac
	if (ctx.cr6.eq) goto loc_822434AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822434a4
	if (ctx.cr6.eq) goto loc_822434A4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x822434b4
	goto loc_822434B4;
loc_822434A4:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x822434b0
	goto loc_822434B0;
loc_822434AC:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_822434B0:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_822434B4:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r10,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// dcbt r0,r11
	// dcbt r0,r29
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// dcbt r10,r29
	// addi r5,r1,7664
	ctx.r5.s64 = ctx.r1.s64 + 7664;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// bl 0x82241df8
	ctx.lr = 0x82243500;
	sub_82241DF8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,9840
	ctx.r5.s64 = ctx.r1.s64 + 9840;
	// addi r4,r1,7664
	ctx.r4.s64 = ctx.r1.s64 + 7664;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x822424a8
	ctx.lr = 0x82243518;
	sub_822424A8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,5600
	ctx.r6.s64 = ctx.r1.s64 + 5600;
	// addi r5,r1,1440
	ctx.r5.s64 = ctx.r1.s64 + 1440;
	// addi r4,r1,9840
	ctx.r4.s64 = ctx.r1.s64 + 9840;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// bl 0x822425d8
	ctx.lr = 0x82243534;
	sub_822425D8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// addi r3,r3,2332
	ctx.r3.s64 = ctx.r3.s64 + 2332;
	// bl 0x822426a8
	ctx.lr = 0x82243544;
	sub_822426A8(ctx, base);
	// addi r11,r1,16559
	ctx.r11.s64 = ctx.r1.s64 + 16559;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// rlwinm r31,r11,0,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,12016
	ctx.r6.s64 = ctx.r1.s64 + 12016;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// addi r3,r3,2868
	ctx.r3.s64 = ctx.r3.s64 + 2868;
	// bl 0x82242940
	ctx.lr = 0x82243568;
	sub_82242940(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,11104
	ctx.r3.s64 = ctx.r3.s64 + 11104;
	// bl 0x82242a10
	ctx.lr = 0x82243578;
	sub_82242A10(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,12152
	ctx.r3.s64 = ctx.r3.s64 + 12152;
	// bl 0x82242cf0
	ctx.lr = 0x8224358C;
	sub_82242CF0(ctx, base);
	// addi r11,r1,14223
	ctx.r11.s64 = ctx.r1.s64 + 14223;
	// addi r10,r1,15391
	ctx.r10.s64 = ctx.r1.s64 + 15391;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r3,14224
	ctx.r3.s64 = ctx.r3.s64 + 14224;
	// stw r5,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// stw r6,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// bl 0x82242e58
	ctx.lr = 0x822435B8;
	sub_82242E58(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r5,r1,7664
	ctx.r5.s64 = ctx.r1.s64 + 7664;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x82241df8
	ctx.lr = 0x822435CC;
	sub_82241DF8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,9840
	ctx.r5.s64 = ctx.r1.s64 + 9840;
	// addi r4,r1,7664
	ctx.r4.s64 = ctx.r1.s64 + 7664;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// bl 0x822424a8
	ctx.lr = 0x822435E4;
	sub_822424A8(ctx, base);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// addi r5,r1,2480
	ctx.r5.s64 = ctx.r1.s64 + 2480;
	// addi r4,r1,9840
	ctx.r4.s64 = ctx.r1.s64 + 9840;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r3,r3,18360
	ctx.r3.s64 = ctx.r3.s64 + 18360;
	// bl 0x822425d8
	ctx.lr = 0x82243600;
	sub_822425D8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,2480
	ctx.r4.s64 = ctx.r1.s64 + 2480;
	// addi r3,r3,20452
	ctx.r3.s64 = ctx.r3.s64 + 20452;
	// bl 0x822426a8
	ctx.lr = 0x82243610;
	sub_822426A8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,13056
	ctx.r6.s64 = ctx.r1.s64 + 13056;
	// addi r5,r1,4560
	ctx.r5.s64 = ctx.r1.s64 + 4560;
	// addi r4,r1,2480
	ctx.r4.s64 = ctx.r1.s64 + 2480;
	// addi r3,r3,20988
	ctx.r3.s64 = ctx.r3.s64 + 20988;
	// bl 0x82242940
	ctx.lr = 0x8224362C;
	sub_82242940(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,4560
	ctx.r4.s64 = ctx.r1.s64 + 4560;
	// addi r3,r3,29224
	ctx.r3.s64 = ctx.r3.s64 + 29224;
	// bl 0x82242a10
	ctx.lr = 0x8224363C;
	sub_82242A10(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r5,r1,3520
	ctx.r5.s64 = ctx.r1.s64 + 3520;
	// addi r4,r1,4560
	ctx.r4.s64 = ctx.r1.s64 + 4560;
	// addi r3,r3,30272
	ctx.r3.s64 = ctx.r3.s64 + 30272;
	// bl 0x82242cf0
	ctx.lr = 0x82243650;
	sub_82242CF0(ctx, base);
	// addi r11,r1,7791
	ctx.r11.s64 = ctx.r1.s64 + 7791;
	// addi r10,r1,9967
	ctx.r10.s64 = ctx.r1.s64 + 9967;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,3520
	ctx.r4.s64 = ctx.r1.s64 + 3520;
	// addi r3,r3,32344
	ctx.r3.s64 = ctx.r3.s64 + 32344;
	// stw r5,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// stw r6,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// stw r5,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// bl 0x82242e58
	ctx.lr = 0x82243680;
	sub_82242E58(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,18352
	ctx.r11.u64 = ctx.r11.u64 | 18352;
	// ori r10,r10,236
	ctx.r10.u64 = ctx.r10.u64 | 236;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r9,r9,18356
	ctx.r9.u64 = ctx.r9.u64 | 18356;
	// lfsx f13,r30,r11
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,4560
	ctx.r11.s64 = ctx.r1.s64 + 4560;
	// lfsx f12,r30,r10
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,1440
	ctx.r10.s64 = ctx.r1.s64 + 1440;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// ori r8,r8,232
	ctx.r8.u64 = ctx.r8.u64 | 232;
	// lfsx f11,r30,r9
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r7,r1,2480
	ctx.r7.s64 = ctx.r1.s64 + 2480;
	// addi r5,r1,5604
	ctx.r5.s64 = ctx.r1.s64 + 5604;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// subf r11,r31,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lfsx f10,r30,r8
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,2484
	ctx.r8.s64 = ctx.r1.s64 + 2484;
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r31.u64;
	// addi r6,r1,5600
	ctx.r6.s64 = ctx.r1.s64 + 5600;
	// addi r22,r31,4
	ctx.r22.s64 = ctx.r31.s64 + 4;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// subf r11,r31,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r31.u64;
	// addi r4,r1,4564
	ctx.r4.s64 = ctx.r1.s64 + 4564;
	// stw r7,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// subf r7,r31,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r31.u64;
	// addi r3,r1,1444
	ctx.r3.s64 = ctx.r1.s64 + 1444;
	// addi r30,r1,404
	ctx.r30.s64 = ctx.r1.s64 + 404;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// subf r11,r31,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r31.u64;
	// addi r29,r1,2488
	ctx.r29.s64 = ctx.r1.s64 + 2488;
	// addi r28,r1,5608
	ctx.r28.s64 = ctx.r1.s64 + 5608;
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r27,r1,4568
	ctx.r27.s64 = ctx.r1.s64 + 4568;
	// addi r26,r1,1448
	ctx.r26.s64 = ctx.r1.s64 + 1448;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// addi r25,r1,408
	ctx.r25.s64 = ctx.r1.s64 + 408;
	// addi r24,r1,2492
	ctx.r24.s64 = ctx.r1.s64 + 2492;
	// addi r23,r1,5612
	ctx.r23.s64 = ctx.r1.s64 + 5612;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// subf r11,r31,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r31.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r11,r31,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r31.u64;
	// addi r10,r1,1452
	ctx.r10.s64 = ctx.r1.s64 + 1452;
	// addi r9,r1,6664
	ctx.r9.s64 = ctx.r1.s64 + 6664;
	// addi r8,r1,3544
	ctx.r8.s64 = ctx.r1.s64 + 3544;
	// addi r7,r1,2500
	ctx.r7.s64 = ctx.r1.s64 + 2500;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// subf r11,r31,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r1,412
	ctx.r10.s64 = ctx.r1.s64 + 412;
	// addi r6,r1,5620
	ctx.r6.s64 = ctx.r1.s64 + 5620;
	// addi r5,r1,4580
	ctx.r5.s64 = ctx.r1.s64 + 4580;
	// addi r4,r1,1460
	ctx.r4.s64 = ctx.r1.s64 + 1460;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// subf r11,r31,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r31.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r1,2496
	ctx.r10.s64 = ctx.r1.s64 + 2496;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// addi r30,r1,2504
	ctx.r30.s64 = ctx.r1.s64 + 2504;
	// addi r29,r1,5624
	ctx.r29.s64 = ctx.r1.s64 + 5624;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// subf r11,r31,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r31.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r10,r1,5616
	ctx.r10.s64 = ctx.r1.s64 + 5616;
	// addi r28,r1,4584
	ctx.r28.s64 = ctx.r1.s64 + 4584;
	// addi r22,r1,3524
	ctx.r22.s64 = ctx.r1.s64 + 3524;
	// addi r21,r1,6648
	ctx.r21.s64 = ctx.r1.s64 + 6648;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// subf r11,r31,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r31.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r10,r1,4576
	ctx.r10.s64 = ctx.r1.s64 + 4576;
	// addi r27,r1,1464
	ctx.r27.s64 = ctx.r1.s64 + 1464;
	// addi r20,r1,3528
	ctx.r20.s64 = ctx.r1.s64 + 3528;
	// addi r19,r1,6652
	ctx.r19.s64 = ctx.r1.s64 + 6652;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// subf r11,r31,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r31.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r10,r1,1456
	ctx.r10.s64 = ctx.r1.s64 + 1456;
	// addi r26,r1,424
	ctx.r26.s64 = ctx.r1.s64 + 424;
	// addi r18,r1,3532
	ctx.r18.s64 = ctx.r1.s64 + 3532;
	// addi r17,r1,6656
	ctx.r17.s64 = ctx.r1.s64 + 6656;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r25,r1,6640
	ctx.r25.s64 = ctx.r1.s64 + 6640;
	// addi r16,r1,3536
	ctx.r16.s64 = ctx.r1.s64 + 3536;
	// addi r15,r1,6660
	ctx.r15.s64 = ctx.r1.s64 + 6660;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// subf r11,r31,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r31.u64;
	// addi r24,r1,3520
	ctx.r24.s64 = ctx.r1.s64 + 3520;
	// addi r14,r1,3540
	ctx.r14.s64 = ctx.r1.s64 + 3540;
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r6,r31,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r31.u64;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// subf r11,r31,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r31.u64;
	// addi r23,r1,6644
	ctx.r23.s64 = ctx.r1.s64 + 6644;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r11,r1,4572
	ctx.r11.s64 = ctx.r1.s64 + 4572;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// subf r8,r31,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r31.u64;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r31.u64;
	// subf r11,r31,r15
	ctx.r11.u64 = ctx.r15.u64 - ctx.r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r4,r31,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r31.u64;
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r31.u64;
	// subf r30,r31,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// subf r11,r31,r14
	ctx.r11.u64 = ctx.r14.u64 - ctx.r31.u64;
	// subf r29,r31,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r28,r31,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r31.u64;
	// subf r27,r31,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subf r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// subf r25,r31,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r31.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r24,r31,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r31.u64;
	// subf r23,r31,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r31.u64;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// subf r22,r31,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r31.u64;
	// subf r21,r31,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r31.u64;
	// subf r20,r31,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r31.u64;
	// subf r19,r31,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r18,r31,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r31.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r17,r31,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r31.u64;
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_822438F8:
	// addi r31,r1,4560
	ctx.r31.s64 = ctx.r1.s64 + 4560;
	// lwz r15,120(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r14,200(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lfs f9,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfsx f4,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f4.f64 = double(temp.f32);
	// lwz r31,100(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lfsx f8,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r15,108(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfsx f2,r11,r14
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	ctx.f2.f64 = double(temp.f32);
	// lwz r14,144(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfsx f3,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r31,r1,2480
	ctx.r31.s64 = ctx.r1.s64 + 2480;
	// lfsx f6,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r15,r1,1440
	ctx.r15.s64 = ctx.r1.s64 + 1440;
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfsx f1,r11,r14
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lwz r14,156(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// fmadds f2,f2,f13,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f1.f64)));
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f30,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f30.f64 = double(temp.f32);
	// lwz r31,192(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lfsx f29,r10,r15
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r15.u32);
	ctx.f29.f64 = double(temp.f32);
	// addi r15,r1,400
	ctx.r15.s64 = ctx.r1.s64 + 400;
	// fmadds f9,f30,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f30.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f4,f29,f10,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f29.f64, ctx.f10.f64, ctx.f4.f64)));
	// lfsx f31,r11,r14
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r14,184(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// fmadds f8,f31,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f31.f64, ctx.f10.f64, ctx.f8.f64)));
	// lfsx f28,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f28.f64 = double(temp.f32);
	// lwz r31,164(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// fmadds f7,f28,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f28.f64, ctx.f13.f64, ctx.f7.f64)));
	// lfsx f31,r11,r14
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r14,180(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lfsx f27,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f27.f64 = double(temp.f32);
	// lwz r31,196(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// fmadds f6,f27,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f27.f64, ctx.f10.f64, ctx.f6.f64)));
	// lfsx f27,r10,r15
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r15.u32);
	ctx.f27.f64 = double(temp.f32);
	// lwz r15,148(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// fmadds f2,f12,f1,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f2.f64)));
	// fadds f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f27.f64));
	// lfsx f29,r11,r14
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	ctx.f29.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// lfsx f26,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f26.f64 = double(temp.f32);
	// lwz r31,172(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// fmadds f5,f26,f13,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f26.f64, ctx.f13.f64, ctx.f5.f64)));
	// lwz r14,168(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// fadds f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f29.f64));
	// lfsx f30,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r1,5600
	ctx.r31.s64 = ctx.r1.s64 + 5600;
	// fmadds f3,f30,f10,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f30.f64, ctx.f10.f64, ctx.f3.f64)));
	// lfsx f30,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	ctx.f30.f64 = double(temp.f32);
	// lwz r15,152(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lfsx f27,r11,r14
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	ctx.f27.f64 = double(temp.f32);
	// fadds f6,f6,f30
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// lfsx f28,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f28.f64 = double(temp.f32);
	// addi r31,r1,6640
	ctx.r31.s64 = ctx.r1.s64 + 6640;
	// fadds f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// lfsx f26,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	ctx.f26.f64 = double(temp.f32);
	// lwz r15,160(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// fadds f5,f5,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f26.f64));
	// lfsx f28,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	ctx.f28.f64 = double(temp.f32);
	// addi r15,r1,3520
	ctx.r15.s64 = ctx.r1.s64 + 3520;
	// fadds f3,f3,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsx f9,r10,r31
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsx f9,r10,r15
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, temp.u32);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfsx f9,r11,r25
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f9,r11,r24
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, temp.u32);
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f9,r11,r23
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// lwz r31,176(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f9,r11,r22
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r22.u32, temp.u32);
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f9,r11,r21
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, temp.u32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f9,r11,r20
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f5,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfsx f4,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfsx f30,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f6,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r31,124(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfsx f29,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f3,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfsx f28,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfsx f2,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r31,132(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fmadds f9,f27,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f27.f64, ctx.f13.f64, ctx.f9.f64)));
	// lfsx f26,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f8,f1,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f8.f64)));
	// lfsx f25,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfsx f23,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f5,f29,f13,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f29.f64, ctx.f13.f64, ctx.f5.f64)));
	// lfsx f29,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfsx f31,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// fmadds f7,f31,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f31.f64, ctx.f13.f64, ctx.f7.f64)));
	// lfsx f31,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f6,f30,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f30.f64, ctx.f10.f64, ctx.f6.f64)));
	// lfsx f30,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f4,f28,f10,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f28.f64, ctx.f10.f64, ctx.f4.f64)));
	// lfsx f28,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f3,f26,f13,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f26.f64, ctx.f13.f64, ctx.f3.f64)));
	// lfsx f24,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f24.f64 = double(temp.f32);
	// lwz r31,116(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fadds f9,f9,f24
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f24.f64));
	// fmadds f2,f25,f10,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f25.f64, ctx.f10.f64, ctx.f2.f64)));
	// fadds f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// lfsx f27,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f27.f64 = double(temp.f32);
	// lwz r31,104(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f27.f64));
	// fadds f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fadds f4,f4,f29
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f29.f64));
	// fadds f3,f3,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// lfsx f1,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r31,88(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsx f9,r11,r19
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r19.u32, temp.u32);
	// fadds f2,f2,f23
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f23.f64));
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f9,r11,r18
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r18.u32, temp.u32);
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f9,r11,r17
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r17.u32, temp.u32);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f9,r11,r16
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r16.u32, temp.u32);
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f9,r11,r31
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsx f9,r11,r31
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f9,r11,r31
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfsx f9,r11,r31
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// blt cr6,0x822438f8
	if (ctx.cr6.lt) goto loc_822438F8;
	// lwz r11,17908(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 17908);
	// lwz r31,17908(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 17908);
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,-29064
	ctx.r10.s64 = ctx.r10.s64 + -29064;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,-26992
	ctx.r10.s64 = ctx.r10.s64 + -26992;
	// addi r11,r11,-24920
	ctx.r11.s64 = ctx.r11.s64 + -24920;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,38556
	ctx.r11.u64 = ctx.r11.u64 | 38556;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,40624
	ctx.r11.u64 = ctx.r11.u64 | 40624;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,40656
	ctx.r11.u64 = ctx.r11.u64 | 40656;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,40676
	ctx.r11.u64 = ctx.r11.u64 | 40676;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-29052
	ctx.r11.s64 = ctx.r11.s64 + -29052;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lwz r17,96(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r17,16
	ctx.r30.s64 = ctx.r17.s64 + 16;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-24828
	ctx.r11.s64 = ctx.r11.s64 + -24828;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-8412
	ctx.r11.s64 = ctx.r11.s64 + -8412;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-24816
	ctx.r11.s64 = ctx.r11.s64 + -24816;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-8384
	ctx.r11.s64 = ctx.r11.s64 + -8384;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-6312
	ctx.r11.s64 = ctx.r11.s64 + -6312;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-4244
	ctx.r11.s64 = ctx.r11.s64 + -4244;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-4212
	ctx.r11.s64 = ctx.r11.s64 + -4212;
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-4192
	ctx.r11.s64 = ctx.r11.s64 + -4192;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-4160
	ctx.r11.s64 = ctx.r11.s64 + -4160;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,12256
	ctx.r11.s64 = ctx.r11.s64 + 12256;
	// stw r11,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-4148
	ctx.r11.s64 = ctx.r11.s64 + -4148;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,12284
	ctx.r11.s64 = ctx.r11.s64 + 12284;
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,20504
	ctx.r11.s64 = ctx.r11.s64 + 20504;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// addi r10,r10,-8396
	ctx.r10.s64 = ctx.r10.s64 + -8396;
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// stw r11,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,28720
	ctx.r11.s64 = ctx.r11.s64 + 28720;
	// stw r10,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// addis r24,r31,3
	ctx.r24.s64 = ctx.r31.s64 + 196608;
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addis r23,r31,4
	ctx.r23.s64 = ctx.r31.s64 + 262144;
	// addi r9,r9,-6324
	ctx.r9.s64 = ctx.r9.s64 + -6324;
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-28600
	ctx.r11.s64 = ctx.r11.s64 + -28600;
	// addi r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 + 168;
	// addi r3,r3,12272
	ctx.r3.s64 = ctx.r3.s64 + 12272;
	// stw r9,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// addi r24,r24,28708
	ctx.r24.s64 = ctx.r24.s64 + 28708;
	// addi r23,r23,-28612
	ctx.r23.s64 = ctx.r23.s64 + -28612;
	// stw r11,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r8,r8,-24836
	ctx.r8.s64 = ctx.r8.s64 + -24836;
	// stw r10,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// addi r11,r11,-24484
	ctx.r11.s64 = ctx.r11.s64 + -24484;
	// stw r3,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addis r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 196608;
	// stw r24,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r24.u32);
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// stw r23,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// addis r22,r31,3
	ctx.r22.s64 = ctx.r31.s64 + 196608;
	// addis r21,r31,3
	ctx.r21.s64 = ctx.r31.s64 + 196608;
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-8072
	ctx.r11.s64 = ctx.r11.s64 + -8072;
	// addis r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 262144;
	// addis r20,r31,3
	ctx.r20.s64 = ctx.r31.s64 + 196608;
	// addi r7,r7,-24896
	ctx.r7.s64 = ctx.r7.s64 + -24896;
	// addi r6,r6,-4228
	ctx.r6.s64 = ctx.r6.s64 + -4228;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r22,r22,-24864
	ctx.r22.s64 = ctx.r22.s64 + -24864;
	// addi r11,r11,-24472
	ctx.r11.s64 = ctx.r11.s64 + -24472;
	// addi r21,r21,-4196
	ctx.r21.s64 = ctx.r21.s64 + -4196;
	// addi r5,r5,-4168
	ctx.r5.s64 = ctx.r5.s64 + -4168;
	// addi r27,r9,16
	ctx.r27.s64 = ctx.r9.s64 + 16;
	// addi r4,r4,-24492
	ctx.r4.s64 = ctx.r4.s64 + -24492;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r20,r20,20488
	ctx.r20.s64 = ctx.r20.s64 + 20488;
	// addi r11,r11,-8036
	ctx.r11.s64 = ctx.r11.s64 + -8036;
	// stw r11,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r11,r11,8400
	ctx.r11.s64 = ctx.r11.s64 + 8400;
	// stw r11,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r11,r11,16616
	ctx.r11.s64 = ctx.r11.s64 + 16616;
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r11,r11,20732
	ctx.r11.s64 = ctx.r11.s64 + 20732;
	// stw r11,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// addi r11,r11,-28392
	ctx.r11.s64 = ctx.r11.s64 + -28392;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r11,r11,20744
	ctx.r11.s64 = ctx.r11.s64 + 20744;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-8420
	ctx.r11.s64 = ctx.r11.s64 + -8420;
	// stw r11,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-4252
	ctx.r11.s64 = ctx.r11.s64 + -4252;
	// stw r11,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// addi r11,r8,24
	ctx.r11.s64 = ctx.r8.s64 + 24;
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
	// lwz r19,204(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,20724
	ctx.r3.s64 = ctx.r3.s64 + 20724;
	// addi r10,r10,-8076
	ctx.r10.s64 = ctx.r10.s64 + -8076;
	// addis r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 262144;
	// li r16,256
	ctx.r16.s64 = 256;
	// addi r9,r9,16604
	ctx.r9.s64 = ctx.r9.s64 + 16604;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// stw r10,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-28396
	ctx.r3.s64 = ctx.r3.s64 + -28396;
	// addi r10,r10,-8048
	ctx.r10.s64 = ctx.r10.s64 + -8048;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r9,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// addi r26,r20,20
	ctx.r26.s64 = ctx.r20.s64 + 20;
	// addi r9,r4,24
	ctx.r9.s64 = ctx.r4.s64 + 24;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r3,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// addi r10,r10,8388
	ctx.r10.s64 = ctx.r10.s64 + 8388;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r3,188(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// subf r18,r19,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r19.u64;
	// stw r10,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addi r10,r10,12248
	ctx.r10.s64 = ctx.r10.s64 + 12248;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// lwz r18,208(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// subf r18,r19,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r19.u64;
	// stw r10,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
	// stw r18,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// lwz r18,216(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// subf r18,r19,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r19.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// lwz r18,212(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// subf r19,r19,r18
	ctx.r19.u64 = ctx.r18.u64 - ctx.r19.u64;
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
	// lfs f8,1832(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 1832);
	ctx.f8.f64 = double(temp.f32);
	// lwz r18,100(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f9,6028(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 6028);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x82243ef0
	goto loc_82243EF0;
loc_82243EE4:
	// lfs f8,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// lwz r16,108(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f9,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
loc_82243EF0:
	// clrlwi r19,r18,27
	ctx.r19.u64 = ctx.r18.u32 & 0x1F;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x82243f0c
	if (!ctx.cr6.eq) goto loc_82243F0C;
	// lwz r19,140(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// dcbt r16,r19
	// lwz r19,136(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// dcbt r16,r19
loc_82243F0C:
	// lwz r19,128(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f15,8(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r17.u32 + 8);
	ctx.f15.f64 = double(temp.f32);
	// lwz r16,132(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r18,0(r17)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// addi r17,r1,6640
	ctx.r17.s64 = ctx.r1.s64 + 6640;
	// lwz r15,124(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f13,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r19,0(r30)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,0(r16)
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r16,r1,3520
	ctx.r16.s64 = ctx.r1.s64 + 3520;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// lfs f11,0(r15)
	temp.u32 = REX_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r15,176(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r14,r19,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,160(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f12,0(r15)
	temp.u32 = REX_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r15,168(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f5,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lwz r19,120(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f7,0(r15)
	temp.u32 = REX_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r15,r1,12016
	ctx.r15.s64 = ctx.r1.s64 + 12016;
	// lfsx f10,r19,r17
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r17.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f7,f9
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fadds f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsx f11,r19,r16
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	ctx.f11.f64 = double(temp.f32);
	// lwz r19,152(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r16,r1,13056
	ctx.r16.s64 = ctx.r1.s64 + 13056;
	// lfs f11,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r19,148(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// fmuls f30,f11,f9
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fadds f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// lfs f4,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lwz r19,180(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// lfs f7,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lwz r19,184(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lfs f29,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lwz r19,172(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lfs f28,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lwz r19,196(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lfs f27,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lwz r19,164(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f26,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// lwz r19,192(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f3,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r19,156(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lfs f25,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// lwz r19,144(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f24,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// lwz r19,200(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lfs f23,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// lwz r19,260(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lfs f22,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// lwz r19,228(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f21,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f21.f64 = double(temp.f32);
	// lwz r19,352(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// lfs f2,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r19,236(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lfs f20,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f20.f64 = double(temp.f32);
	// lwz r19,336(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lfs f19,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f19.f64 = double(temp.f32);
	// lwz r19,244(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lfs f18,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f18.f64 = double(temp.f32);
	// lwz r19,368(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// lfs f17,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f17.f64 = double(temp.f32);
	// lwz r19,252(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f11,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r19,344(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lfs f10,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r19,220(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stfs f10,372(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// lfs f0,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r19,320(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f0,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lwz r19,268(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lfs f16,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f16.f64 = double(temp.f32);
	// lwz r17,96(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r19,324(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f14,4(r17)
	temp.u32 = REX_LOAD_U32(ctx.r17.u32 + 4);
	ctx.f14.f64 = double(temp.f32);
	// lfs f0,0(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r19,112(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lfsx f1,r19,r16
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r16,104(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfsx f10,r19,r15
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r15.u32);
	ctx.f10.f64 = double(temp.f32);
	// lwz r19,0(r30)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// subf r19,r18,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r18.u64;
	// lwz r18,92(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r19,r19,23
	ctx.r19.u64 = ctx.r19.u32 & 0x1FF;
	// lfsx f8,r16,r3
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// lfsx f0,r18,r3
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r18,84(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r18,r3
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r3.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f9,r19,r30
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f15,f9,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f15.f64, ctx.f9.f64, ctx.f8.f64)));
	// fadds f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfsx f8,r14,r30
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r14.u32 + ctx.r30.u32, temp.u32);
	// lwz r19,0(r30)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,23
	ctx.r19.u64 = ctx.r19.u32 & 0x1FF;
	// stw r19,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r19.u32);
	// fmadds f9,f14,f8,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f14.f64, ctx.f8.f64, ctx.f9.f64)));
	// lwz r19,88(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f9,12(r17)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r17.u32 + 12, temp.u32);
	// lwz r16,0(r29)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// fadds f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// extsw r18,r16
	ctx.r18.s64 = ctx.r16.s32;
	// lwz r15,0(r19)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f29,8(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f15,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f15.f64 = double(temp.f32);
	// subf r16,r15,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r15.u64;
	// addi r15,r18,2
	ctx.r15.s64 = ctx.r18.s64 + 2;
	// clrlwi r18,r16,23
	ctx.r18.u64 = ctx.r16.u32 & 0x1FF;
	// rlwinm r16,r15,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r18,r29
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r29.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f29,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f29.f64, ctx.f7.f64)));
	// stfsx f7,r16,r29
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r16.u32 + ctx.r29.u32, temp.u32);
	// lwz r18,0(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// clrlwi r18,r18,23
	ctx.r18.u64 = ctx.r18.u32 & 0x1FF;
	// stw r18,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r18.u32);
	// fmadds f8,f15,f7,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f15.f64, ctx.f7.f64, ctx.f8.f64)));
	// stfs f8,12(r19)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r19.u32 + 12, temp.u32);
	// lwz r19,276(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r18,r19,12
	ctx.r18.s64 = ctx.r19.s64 + 12;
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f8,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r16,r16,31
	ctx.r16.u64 = ctx.r16.u32 & 0x1;
	// lfs f7,4(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f29,r16,r19
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f29.f64 = double(temp.f32);
	// stfs f7,8(r18)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// fmadds f8,f29,f8,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f29.f64, ctx.f8.f64, ctx.f9.f64)));
	// stfs f9,4(r18)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// stfs f8,8(r19)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// lwz r19,0(r7)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f8,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r18,r19,31
	ctx.r18.u64 = ctx.r19.u32 & 0x1;
	// lfs f7,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r19,r7,20
	ctx.r19.s64 = ctx.r7.s64 + 20;
	// lfs f29,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// addi r18,r18,6
	ctx.r18.s64 = ctx.r18.s64 + 6;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f15,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f15.f64 = double(temp.f32);
	// lfsx f9,r18,r7
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f15,8(r19)
	temp.f32 = float(ctx.f15.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// fmadds f8,f9,f8,f28
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f28.f64)));
	// fmuls f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f8,4(r19)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r19.u32 + 4, temp.u32);
	// addi r19,r22,16
	ctx.r19.s64 = ctx.r22.s64 + 16;
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f9,f29,f9,f7
	ctx.f9.f64 = double(float(std::fma(ctx.f29.f64, ctx.f9.f64, ctx.f7.f64)));
	// stfs f9,16(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r18,0(r22)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lfs f9,12(r22)
	temp.u32 = REX_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	ctx.r18.u64 = ctx.r18.u32 & 0x1;
	// addi r18,r18,5
	ctx.r18.s64 = ctx.r18.s64 + 5;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r18,r22
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r22.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f9,f7,f9,f27
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f27.f64)));
	// stfs f9,4(r19)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r19.u32 + 4, temp.u32);
	// stfs f8,8(r19)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// lfs f8,8(r22)
	temp.u32 = REX_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f9,4(r22)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r22.u32 + 4, temp.u32);
	// lwz r19,0(r11)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r18,0(r8)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// subf r19,r18,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r18.u64;
	// lwz r18,0(r11)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r19,r11
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r19,12(r8)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f8,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// subf r19,r19,r18
	ctx.r19.u64 = ctx.r18.u64 - ctx.r19.u64;
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r19,r11
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f13,20(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f9,8(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r19,0(r11)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r19,r11
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r19.u32 + ctx.r11.u32, temp.u32);
	// lwz r19,0(r11)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// stw r19,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// lwz r19,332(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r18,0(r19)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f13,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	ctx.r18.u64 = ctx.r18.u32 & 0x1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r18,r19
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f13,8(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// addi r19,r19,12
	ctx.r19.s64 = ctx.r19.s64 + 12;
	// lfs f13,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// stfs f26,4(r19)
	temp.f32 = float(ctx.f26.f64);
	REX_STORE_U32(ctx.r19.u32 + 4, temp.u32);
	// lwz r19,284(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r16,0(r28)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// extsw r18,r16
	ctx.r18.s64 = ctx.r16.s32;
	// lwz r15,0(r19)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f9,8(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// subf r16,r15,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r15.u64;
	// addi r15,r18,2
	ctx.r15.s64 = ctx.r18.s64 + 2;
	// clrlwi r18,r16,23
	ctx.r18.u64 = ctx.r16.u32 & 0x1FF;
	// rlwinm r16,r15,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r28
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f9,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f12.f64)));
	// fadds f12,f12,f16
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f16.f64));
	// stfsx f12,r16,r28
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r16.u32 + ctx.r28.u32, temp.u32);
	// lwz r18,0(r28)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// clrlwi r18,r18,23
	ctx.r18.u64 = ctx.r18.u32 & 0x1FF;
	// stw r18,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r18.u32);
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f13,12(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r19.u32 + 12, temp.u32);
	// lwz r19,340(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r16,0(r27)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// extsw r18,r16
	ctx.r18.s64 = ctx.r16.s32;
	// lwz r15,0(r19)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f12,8(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// subf r16,r15,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r15.u64;
	// addi r15,r18,2
	ctx.r15.s64 = ctx.r18.s64 + 2;
	// clrlwi r18,r16,23
	ctx.r18.u64 = ctx.r16.u32 & 0x1FF;
	// rlwinm r16,r15,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r27
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f12,f25
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f25.f64)));
	// stfsx f12,r16,r27
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r16.u32 + ctx.r27.u32, temp.u32);
	// lwz r18,0(r27)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// clrlwi r18,r18,23
	ctx.r18.u64 = ctx.r18.u32 & 0x1FF;
	// stw r18,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r18.u32);
	// fmadds f12,f9,f12,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f12,12(r19)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r19.u32 + 12, temp.u32);
	// lwz r19,292(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// fadds f13,f1,f24
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f24.f64));
	// addi r18,r19,12
	ctx.r18.s64 = ctx.r19.s64 + 12;
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f12,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r16,r16,31
	ctx.r16.u64 = ctx.r16.u32 & 0x1;
	// lfs f9,4(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r16,r19
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,4(r18)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// fmadds f12,f8,f12,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f9,8(r18)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// stfs f12,8(r19)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// lwz r19,0(r6)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r18,r19,31
	ctx.r18.u64 = ctx.r19.u32 & 0x1;
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r19,r6,20
	ctx.r19.s64 = ctx.r6.s64 + 20;
	// lfs f8,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r18,r18,6
	ctx.r18.s64 = ctx.r18.s64 + 6;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f13,r18,r6
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f12,f23
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f23.f64)));
	// stfs f7,8(r19)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// stfs f12,4(r19)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r19.u32 + 4, temp.u32);
	// addi r19,r21,16
	ctx.r19.s64 = ctx.r21.s64 + 16;
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f13,f8,f13,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f13,16(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r18,0(r21)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f13,12(r21)
	temp.u32 = REX_LOAD_U32(ctx.r21.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	ctx.r18.u64 = ctx.r18.u32 & 0x1;
	// addi r18,r18,5
	ctx.r18.s64 = ctx.r18.s64 + 5;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r18,r21
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r21.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f9,f13,f22
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f22.f64)));
	// stfs f13,4(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r19.u32 + 4, temp.u32);
	// stfs f12,8(r19)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// lfs f12,8(r21)
	temp.u32 = REX_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,4(r21)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// lwz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r16,0(r5)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f12,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// lwz r15,12(r5)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// subf r19,r16,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r16.u64;
	// subf r18,r15,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r15.u64;
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// clrlwi r18,r18,20
	ctx.r18.u64 = ctx.r18.u32 & 0xFFF;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r19,r10
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r18,r10
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f12,20(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// fadds f13,f0,f20
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f20.f64));
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f30,r19,r10
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r19.u32 + ctx.r10.u32, temp.u32);
	// lwz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// lwz r19,348(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r18,0(r19)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f12,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	ctx.r18.u64 = ctx.r18.u32 & 0x1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r18,r19
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,8(r19)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// addi r19,r19,12
	ctx.r19.s64 = ctx.r19.s64 + 12;
	// lfs f12,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r19)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// stfs f21,4(r19)
	temp.f32 = float(ctx.f21.f64);
	REX_STORE_U32(ctx.r19.u32 + 4, temp.u32);
	// lwz r18,0(r25)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r19,300(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r15,r18,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,0(r25)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f9,8(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// subf r18,r16,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r16.u64;
	// clrlwi r18,r18,21
	ctx.r18.u64 = ctx.r18.u32 & 0x7FF;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r18,r25
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f6.f64)));
	// fadds f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfsx f9,r15,r25
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r15.u32 + ctx.r25.u32, temp.u32);
	// lwz r18,0(r25)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// clrlwi r18,r18,21
	ctx.r18.u64 = ctx.r18.u32 & 0x7FF;
	// stw r18,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r18.u32);
	// fmadds f12,f8,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f12.f64)));
	// stfs f12,12(r19)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r19.u32 + 12, temp.u32);
	// lwz r18,0(r26)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r16,0(r20)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f7,12(r20)
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// extsw r19,r18
	ctx.r19.s64 = ctx.r18.s32;
	// lfs f9,8(r20)
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// subf r18,r16,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r16.u64;
	// lfs f8,4(r20)
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r16,r19,2
	ctx.r16.s64 = ctx.r19.s64 + 2;
	// clrlwi r19,r18,21
	ctx.r19.u64 = ctx.r18.u32 & 0x7FF;
	// rlwinm r18,r16,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r19,r26
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmadds f12,f12,f9,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfsx f12,r18,r26
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r18.u32 + ctx.r26.u32, temp.u32);
	// lwz r19,0(r26)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,21
	ctx.r19.u64 = ctx.r19.u32 & 0x7FF;
	// fmadds f13,f8,f13,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f7.f64)));
	// stw r19,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r19.u32);
	// stfs f13,16(r20)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r20.u32 + 16, temp.u32);
	// lwz r19,356(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r18,0(r24)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f12,8(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// subf r18,r16,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r16.u64;
	// clrlwi r18,r18,21
	ctx.r18.u64 = ctx.r18.u32 & 0x7FF;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r24
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r18,0(r24)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f9,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f13,f12,f19
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f19.f64)));
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// fadds f10,f10,f17
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f17.f64));
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r18,r24
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r18.u32 + ctx.r24.u32, temp.u32);
	// lwz r18,0(r24)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// fmadds f13,f12,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f13.f64)));
	// clrlwi r18,r18,21
	ctx.r18.u64 = ctx.r18.u32 & 0x7FF;
	// stw r18,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r18.u32);
	// stfs f13,12(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r19.u32 + 12, temp.u32);
	// lwz r18,0(r23)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r19,308(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r15,r18,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,0(r23)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f12,8(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// subf r18,r16,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r16.u64;
	// clrlwi r18,r18,22
	ctx.r18.u64 = ctx.r18.u32 & 0x3FF;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r23
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r23.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// fadds f12,f12,f18
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f18.f64));
	// stfsx f12,r15,r23
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r15.u32 + ctx.r23.u32, temp.u32);
	// lwz r18,0(r23)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// clrlwi r18,r18,22
	ctx.r18.u64 = ctx.r18.u32 & 0x3FF;
	// stw r18,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r18.u32);
	// fmadds f13,f12,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfs f13,12(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r19.u32 + 12, temp.u32);
	// lwz r19,0(r9)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r16,0(r4)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// lwz r15,12(r4)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// subf r19,r16,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r16.u64;
	// lfs f12,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// subf r18,r15,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r15.u64;
	// lwz r16,100(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// clrlwi r18,r18,20
	ctx.r18.u64 = ctx.r18.u32 & 0xFFF;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r16,r16,27
	ctx.r16.u64 = ctx.r16.u32 & 0x1F;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// lfsx f9,r19,r9
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r18,r9
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r19,0(r9)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r19,r9
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r19.u32 + ctx.r9.u32, temp.u32);
	// lwz r19,0(r9)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// stw r19,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
	// lwz r19,364(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r18,0(r19)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f10,8(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f13,12(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	ctx.r18.u64 = ctx.r18.u32 & 0x1;
	// addi r18,r18,5
	ctx.r18.s64 = ctx.r18.s64 + 5;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r18,r19
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r18,r19,16
	ctx.r18.s64 = ctx.r19.s64 + 16;
	// fmadds f13,f12,f13,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f10.f64)));
	// lfs f9,4(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r18)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// stfs f11,4(r18)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// stfs f13,4(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r19.u32 + 4, temp.u32);
	// bne cr6,0x822446b4
	if (!ctx.cr6.eq) goto loc_822446B4;
	// lwz r19,108(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r19,r19,128
	ctx.r19.s64 = ctx.r19.s64 + 128;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
loc_822446B4:
	// lwz r18,316(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// fsubs f11,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lfs f13,372(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// addi r19,r18,16
	ctx.r19.s64 = ctx.r18.s64 + 16;
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lwz r15,0(r18)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lfs f10,8(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// rlwinm r14,r16,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// subf r16,r15,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r15.u64;
	// clrlwi r16,r16,21
	ctx.r16.u64 = ctx.r16.u32 & 0x7FF;
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r16,r19
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f11.f64)));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfsx f0,r14,r19
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r14.u32 + ctx.r19.u32, temp.u32);
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// clrlwi r16,r16,21
	ctx.r16.u64 = ctx.r16.u32 & 0x7FF;
	// stw r16,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r16.u32);
	// fmadds f0,f0,f9,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f12.f64)));
	// stfs f0,12(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r18.u32 + 12, temp.u32);
	// lwz r18,360(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// addi r19,r18,20
	ctx.r19.s64 = ctx.r18.s64 + 20;
	// lwz r14,0(r18)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lfs f10,12(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r15,0(r19)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f11,4(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// extsw r16,r15
	ctx.r16.s64 = ctx.r15.s32;
	// subf r15,r14,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r14.u64;
	// addi r14,r16,2
	ctx.r14.s64 = ctx.r16.s64 + 2;
	// clrlwi r16,r15,21
	ctx.r16.u64 = ctx.r15.u32 & 0x7FF;
	// rlwinm r15,r14,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r16,r19
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f0,r15,r19
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r15.u32 + ctx.r19.u32, temp.u32);
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// clrlwi r16,r16,21
	ctx.r16.u64 = ctx.r16.u32 & 0x7FF;
	// fmadds f0,f13,f11,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f10.f64)));
	// lfs f11,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// stw r16,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r16.u32);
	// stfs f0,16(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r18.u32 + 16, temp.u32);
	// lwz r18,328(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// addi r19,r18,16
	ctx.r19.s64 = ctx.r18.s64 + 16;
	// lwz r14,0(r18)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lfs f13,8(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r15,0(r19)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// extsw r16,r15
	ctx.r16.s64 = ctx.r15.s32;
	// subf r15,r14,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r14.u64;
	// addi r14,r16,2
	ctx.r14.s64 = ctx.r16.s64 + 2;
	// clrlwi r16,r15,21
	ctx.r16.u64 = ctx.r15.u32 & 0x7FF;
	// rlwinm r15,r14,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r16,r19
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfsx f13,r15,r19
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r15.u32 + ctx.r19.u32, temp.u32);
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// clrlwi r16,r16,21
	ctx.r16.u64 = ctx.r16.u32 & 0x7FF;
	// stw r16,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r16.u32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,12(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r18.u32 + 12, temp.u32);
	// lwz r18,232(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r19,r18,16
	ctx.r19.s64 = ctx.r18.s64 + 16;
	// lwz r14,0(r18)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lfs f13,8(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r15,0(r19)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// extsw r16,r15
	ctx.r16.s64 = ctx.r15.s32;
	// subf r15,r14,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r14.u64;
	// addi r14,r16,2
	ctx.r14.s64 = ctx.r16.s64 + 2;
	// lfs f0,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r16,r15,22
	ctx.r16.u64 = ctx.r15.u32 & 0x3FF;
	// fadds f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// rlwinm r15,r14,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,104(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// lfs f0,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r14,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r14.u32 + ctx.r3.u32, temp.u32);
	// lwz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f0,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfsx f0,r16,r19
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfsx f5,r14,r3
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r14.u32 + ctx.r3.u32, temp.u32);
	// lwz r14,84(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfsx f4,r14,r3
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r14.u32 + ctx.r3.u32, temp.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfsx f13,r15,r19
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r15.u32 + ctx.r19.u32, temp.u32);
	// lwz r16,0(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// clrlwi r16,r16,22
	ctx.r16.u64 = ctx.r16.u32 & 0x3FF;
	// stw r16,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r16.u32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// lwz r19,80(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,12(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r18.u32 + 12, temp.u32);
	// lwz r18,0(r19)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f0,4(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r16,12(r19)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// lfs f13,16(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r19,r19,24
	ctx.r19.s64 = ctx.r19.s64 + 24;
	// lwz r15,0(r19)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// subf r18,r18,r15
	ctx.r18.u64 = ctx.r15.u64 - ctx.r18.u64;
	// mr r14,r15
	ctx.r14.u64 = ctx.r15.u64;
	// clrlwi r18,r18,20
	ctx.r18.u64 = ctx.r18.u32 & 0xFFF;
	// subf r16,r16,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r16.u64;
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// clrlwi r16,r16,20
	ctx.r16.u64 = ctx.r16.u32 & 0xFFF;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r18,r19
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	ctx.f12.f64 = double(temp.f32);
	// lwz r18,80(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsx f10,r16,r19
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,8(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// stfs f13,20(r18)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r18.u32 + 20, temp.u32);
	// lwz r18,0(r19)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f13,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r18,r19
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r18.u32 + ctx.r19.u32, temp.u32);
	// lwz r18,0(r19)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// clrlwi r18,r18,20
	ctx.r18.u64 = ctx.r18.u32 & 0xFFF;
	// stw r18,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r18.u32);
	// lwz r19,272(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r18,0(r19)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f0,8(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,12(r19)
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r16,r18,31
	ctx.r16.u64 = ctx.r18.u32 & 0x1;
	// addi r18,r19,16
	ctx.r18.s64 = ctx.r19.s64 + 16;
	// addi r16,r16,5
	ctx.r16.s64 = ctx.r16.s64 + 5;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,4(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r16,r19
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,8(r18)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f13,4(r18)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// lwz r18,112(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,4(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r19.u32 + 4, temp.u32);
	// lwz r19,120(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// stw r19,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// lwz r18,100(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r19,1024
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1024, ctx.xer);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// blt cr6,0x82243ee4
	if (ctx.cr6.lt) goto loc_82243EE4;
	// lwz r27,208(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,-28368
	ctx.r3.s64 = ctx.r3.s64 + -28368;
	// bl 0x82242b80
	ctx.lr = 0x82244964;
	sub_82242B80(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,-26296
	ctx.r3.s64 = ctx.r3.s64 + -26296;
	// bl 0x82242b80
	ctx.lr = 0x82244974;
	sub_82242B80(ctx, base);
	// lwz r29,204(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,-24224
	ctx.r3.s64 = ctx.r3.s64 + -24224;
	// bl 0x82242b80
	ctx.lr = 0x82244988;
	sub_82242B80(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,-22152
	ctx.r3.s64 = ctx.r3.s64 + -22152;
	// bl 0x82242b80
	ctx.lr = 0x82244998;
	sub_82242B80(ctx, base);
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r30,r4,-8
	ctx.r30.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-20080
	ctx.r3.s64 = ctx.r3.s64 + -20080;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82242f00
	ctx.lr = 0x822449B0;
	sub_82242F00(ctx, base);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r28,r4,-8
	ctx.r28.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-19024
	ctx.r3.s64 = ctx.r3.s64 + -19024;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82242f00
	ctx.lr = 0x822449C8;
	sub_82242F00(ctx, base);
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// subf r3,r29,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r29.u64;
	// lwz r6,288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// addi r11,r11,-21344
	ctx.r11.s64 = ctx.r11.s64 + -21344;
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// subf r26,r29,r28
	ctx.r26.u64 = ctx.r28.u64 - ctx.r29.u64;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// subf r31,r29,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r29.u64;
	// subf r25,r29,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r29.u64;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r24,r30,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,312(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// vaddfp v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// subf r28,r30,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r30.u64;
	// subf r29,r29,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r30,r30,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r30.u64;
	// lwz r8,304(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r23,-16
	ctx.r23.s64 = -16;
	// li r5,16
	ctx.r5.s64 = 16;
loc_82244A38:
	// lvx128 v11,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// lvx128 v10,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v11,v0,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v10,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r11,r23
	ea = (ctx.r11.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v9,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v8,v0,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v7,r24,r10
	ea = (ctx.r24.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r25,r11
	ea = (ctx.r25.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lvx128 v5,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v5,v12,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32)));
	// lvx128 v3,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v4,v12,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v4.f32)));
	// lvx128 v2,r26,r11
	ea = (ctx.r26.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v3,v12,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v1,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v2,v12,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v31,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vmaddfp v11,v13,v7,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v13,v6,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v9,v13,v31,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v8,v13,v1,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// stvx128 v5,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v4,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// stvx128 v3,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// stvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvx128 v9,r8,r5
	ea = (ctx.r8.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// bne cr6,0x82244a38
	if (!ctx.cr6.eq) goto loc_82244A38;
	// addi r1,r1,17888
	ctx.r1.s64 = ctx.r1.s64 + 17888;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82272dbc
	ctx.lr = 0x82244AE8;
	__restfpr_14(ctx, base);
	// b 0x82272e60
	__restgprlr_14(ctx, base);
	return;
}

