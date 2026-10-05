#include "puzzlefighter_funcs.85.h"

DEFINE_REX_FUNC(sub_8204A588) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// blt cr6,0x8204a5a8
	if (ctx.cr6.lt) goto loc_8204A5A8;
	// b 0x8204ac5c
	goto loc_8204AC5C;
loc_8204A5A8:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29316
	ctx.r11.s64 = ctx.r11.s64 + -29316;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29488
	ctx.r11.s64 = ctx.r11.s64 + -29488;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,44(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,-27516
	ctx.r10.s64 = ctx.r10.s64 + -27516;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// stw r11,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
loc_8204A634:
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-28(r1)
	REX_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
loc_8204A640:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4840
	ctx.r11.s64 = ctx.r11.s64 + 4840;
	// lwz r10,-20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8204ac28
	if (ctx.cr6.gt) goto loc_8204AC28;
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,5384
	ctx.r12.s64 = ctx.r12.s64 + 5384;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-22868
	ctx.r12.s64 = ctx.r12.s64 + -22868;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8204A6AC;
	case 1:
		goto loc_8204A704;
	case 2:
		goto loc_8204A788;
	case 3:
		goto loc_8204A828;
	case 4:
		goto loc_8204A854;
	case 5:
		goto loc_8204A890;
	case 6:
		goto loc_8204ABBC;
	case 7:
		goto loc_8204AB50;
	case 8:
		goto loc_8204AAE4;
	case 9:
		goto loc_8204AA78;
	case 10:
		goto loc_8204AA0C;
	case 11:
		goto loc_8204A9A0;
	case 12:
		goto loc_8204A934;
	case 13:
		goto loc_8204A8C8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8204A6AC:
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// b 0x8204ac28
	goto loc_8204AC28;
loc_8204A704:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
loc_8204A734:
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-24(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8204a734
	if (!ctx.cr6.eq) goto loc_8204A734;
	// b 0x8204ac28
	goto loc_8204AC28;
loc_8204A788:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
loc_8204A7D4:
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-24(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8204a7d4
	if (!ctx.cr6.eq) goto loc_8204A7D4;
	// b 0x8204ac28
	goto loc_8204AC28;
loc_8204A828:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// b 0x8204ac28
	goto loc_8204AC28;
loc_8204A854:
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// b 0x8204ac28
	goto loc_8204AC28;
loc_8204A890:
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// b 0x8204ac28
	goto loc_8204AC28;
loc_8204A8C8:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8204A934:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8204A9A0:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8204AA0C:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8204AA78:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8204AAE4:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8204AB50:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8204ABBC:
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8204AC28:
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r10,-28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8204a640
	if (ctx.cr6.gt) goto loc_8204A640;
	// lwz r11,-40(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-40(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// stw r11,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r10,-48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8204a634
	if (ctx.cr6.lt) goto loc_8204A634;
loc_8204AC5C:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8208B760) {
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
	// stb r10,333(r11)
	REX_STORE_U8(ctx.r11.u32 + 333, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,143(r11)
	REX_STORE_U8(ctx.r11.u32 + 143, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, ctx.r10.u8);
	// bl 0x820fcd58
	ctx.lr = 0x8208B844;
	sub_820FCD58(ctx, base);
	// bl 0x820fc580
	ctx.lr = 0x8208B848;
	sub_820FC580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82091048) {
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
	// bl 0x820fa958
	ctx.lr = 0x82091084;
	sub_820FA958(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1182(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1182);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,2206(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2206);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1154(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1154);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,2178(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2178);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// xor. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82091124
	if (ctx.cr0.eq) goto loc_82091124;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82091104
	if (!ctx.cr6.eq) goto loc_82091104;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8209111c
	if (ctx.cr6.eq) goto loc_8209111C;
loc_82091104:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82091124
	if (!ctx.cr6.eq) goto loc_82091124;
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82091124
	if (!ctx.cr6.eq) goto loc_82091124;
loc_8209111C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821937a8
	ctx.lr = 0x82091124;
	sub_821937A8(ctx, base);
loc_82091124:
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
	// bne cr6,0x82091154
	if (!ctx.cr6.eq) goto loc_82091154;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,1154(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1154);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82091184
	if (!ctx.cr6.eq) goto loc_82091184;
loc_82091154:
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
	// bne cr6,0x82091194
	if (!ctx.cr6.eq) goto loc_82091194;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,2178(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2178);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82091194
	if (ctx.cr6.eq) goto loc_82091194;
loc_82091184:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-2314
	ctx.r11.s64 = ctx.r11.s64 + -2314;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82091194:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820911f0
	if (!ctx.cr6.eq) goto loc_820911F0;
	// li r5,825
	ctx.r5.s64 = 825;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,21524
	ctx.r4.s64 = ctx.r11.s64 + 21524;
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-5508
	ctx.r11.s64 = ctx.r11.s64 + -5508;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x82171770
	ctx.lr = 0x820911C8;
	sub_82171770(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,128(r11)
	REX_STORE_U16(ctx.r11.u32 + 128, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,180(r11)
	REX_STORE_U16(ctx.r11.u32 + 180, ctx.r10.u16);
loc_820911F0:
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
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,50(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,50(r10)
	REX_STORE_U16(ctx.r10.u32 + 50, ctx.r11.u16);
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
	// sth r10,258(r11)
	REX_STORE_U16(ctx.r11.u32 + 258, ctx.r10.u16);
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
	// stb r10,300(r11)
	REX_STORE_U8(ctx.r11.u32 + 300, ctx.r10.u8);
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
	// stb r10,261(r11)
	REX_STORE_U8(ctx.r11.u32 + 261, ctx.r10.u8);
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
	// stb r10,263(r11)
	REX_STORE_U8(ctx.r11.u32 + 263, ctx.r10.u8);
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
	// stb r10,269(r11)
	REX_STORE_U8(ctx.r11.u32 + 269, ctx.r10.u8);
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
	// stb r10,184(r11)
	REX_STORE_U8(ctx.r11.u32 + 184, ctx.r10.u8);
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
	// stb r10,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r10.u8);
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
	// stb r10,268(r11)
	REX_STORE_U8(ctx.r11.u32 + 268, ctx.r10.u8);
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
	// stb r10,267(r11)
	REX_STORE_U8(ctx.r11.u32 + 267, ctx.r10.u8);
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
	// stb r10,280(r11)
	REX_STORE_U8(ctx.r11.u32 + 280, ctx.r10.u8);
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
	// stb r10,298(r11)
	REX_STORE_U8(ctx.r11.u32 + 298, ctx.r10.u8);
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
	// stb r10,293(r11)
	REX_STORE_U8(ctx.r11.u32 + 293, ctx.r10.u8);
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
	// stb r10,230(r11)
	REX_STORE_U8(ctx.r11.u32 + 230, ctx.r10.u8);
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
	// stb r10,232(r11)
	REX_STORE_U8(ctx.r11.u32 + 232, ctx.r10.u8);
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
	// stb r10,294(r11)
	REX_STORE_U8(ctx.r11.u32 + 294, ctx.r10.u8);
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
	// stb r10,292(r11)
	REX_STORE_U8(ctx.r11.u32 + 292, ctx.r10.u8);
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
	// stb r10,329(r11)
	REX_STORE_U8(ctx.r11.u32 + 329, ctx.r10.u8);
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
	// stb r10,295(r11)
	REX_STORE_U8(ctx.r11.u32 + 295, ctx.r10.u8);
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
	// stb r10,284(r11)
	REX_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
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
	// stb r10,285(r11)
	REX_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
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
	// stb r10,286(r11)
	REX_STORE_U8(ctx.r11.u32 + 286, ctx.r10.u8);
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
	// stb r10,337(r11)
	REX_STORE_U8(ctx.r11.u32 + 337, ctx.r10.u8);
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
	// stb r10,264(r11)
	REX_STORE_U8(ctx.r11.u32 + 264, ctx.r10.u8);
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
	// stb r10,265(r11)
	REX_STORE_U8(ctx.r11.u32 + 265, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,59
	ctx.r10.s64 = 59;
	// stb r10,266(r11)
	REX_STORE_U8(ctx.r11.u32 + 266, ctx.r10.u8);
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
	// stb r10,338(r11)
	REX_STORE_U8(ctx.r11.u32 + 338, ctx.r10.u8);
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
	// stb r10,342(r11)
	REX_STORE_U8(ctx.r11.u32 + 342, ctx.r10.u8);
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
	// sth r10,318(r11)
	REX_STORE_U16(ctx.r11.u32 + 318, ctx.r10.u16);
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
	// stb r10,307(r11)
	REX_STORE_U8(ctx.r11.u32 + 307, ctx.r10.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,1025(r11)
	REX_STORE_U8(ctx.r11.u32 + 1025, ctx.r10.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,2049(r11)
	REX_STORE_U8(ctx.r11.u32 + 2049, ctx.r10.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3329(r11)
	REX_STORE_U8(ctx.r11.u32 + 3329, ctx.r10.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3585(r11)
	REX_STORE_U8(ctx.r11.u32 + 3585, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,162(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 162);
	// stb r11,289(r10)
	REX_STORE_U8(ctx.r10.u32 + 289, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 172);
	// stb r11,185(r10)
	REX_STORE_U8(ctx.r10.u32 + 185, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 152);
	// stb r11,287(r10)
	REX_STORE_U8(ctx.r10.u32 + 287, ctx.r11.u8);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82091714
	if (!ctx.cr6.eq) goto loc_82091714;
	// b 0x82091728
	goto loc_82091728;
loc_82091714:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,287(r11)
	REX_STORE_U8(ctx.r11.u32 + 287, ctx.r10.u8);
loc_82091728:
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
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8208a950
	ctx.lr = 0x82091748;
	sub_8208A950(ctx, base);
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
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8208a950
	ctx.lr = 0x82091768;
	sub_8208A950(ctx, base);
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
	// lbz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 172);
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
	// lbz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 172);
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
	// ble cr6,0x820917ec
	if (!ctx.cr6.gt) goto loc_820917EC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820917fc
	goto loc_820917FC;
loc_820917EC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820917FC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82091818
	if (ctx.cr6.eq) goto loc_82091818;
	// b 0x8209184c
	goto loc_8209184C;
loc_82091818:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,321(r11)
	REX_STORE_U8(ctx.r11.u32 + 321, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,163(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 163);
	// stb r11,289(r10)
	REX_STORE_U8(ctx.r10.u32 + 289, ctx.r11.u8);
loc_8209184C:
	// bl 0x82099e40
	ctx.lr = 0x82091850;
	sub_82099E40(ctx, base);
	// bl 0x820997f0
	ctx.lr = 0x82091854;
	sub_820997F0(ctx, base);
	// bl 0x820f72a8
	ctx.lr = 0x82091858;
	sub_820F72A8(ctx, base);
	// bl 0x82085460
	ctx.lr = 0x8209185C;
	sub_82085460(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82091884
	if (ctx.cr6.eq) goto loc_82091884;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// sth r10,274(r11)
	REX_STORE_U16(ctx.r11.u32 + 274, ctx.r10.u16);
loc_82091884:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18274
	ctx.r11.s64 = ctx.r11.s64 + -18274;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820918ec
	if (!ctx.cr6.eq) goto loc_820918EC;
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
	// beq cr6,0x820918c0
	if (ctx.cr6.eq) goto loc_820918C0;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19744
	ctx.r11.s64 = ctx.r11.s64 + -19744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_820918C0:
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
	// beq cr6,0x820918e8
	if (ctx.cr6.eq) goto loc_820918E8;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19744
	ctx.r11.s64 = ctx.r11.s64 + -19744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
loc_820918E8:
	// bl 0x820f6e88
	ctx.lr = 0x820918EC;
	sub_820F6E88(ctx, base);
loc_820918EC:
	// bl 0x8209a6e8
	ctx.lr = 0x820918F0;
	sub_8209A6E8(ctx, base);
	// bl 0x820efd40
	ctx.lr = 0x820918F4;
	sub_820EFD40(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25245
	ctx.r11.s64 = ctx.r11.s64 + -25245;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209190c
	if (!ctx.cr6.eq) goto loc_8209190C;
	// bl 0x8215daa0
	ctx.lr = 0x8209190C;
	sub_8215DAA0(ctx, base);
loc_8209190C:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-25245
	ctx.r11.s64 = ctx.r11.s64 + -25245;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82091924
	if (!ctx.cr6.eq) goto loc_82091924;
	// bl 0x8215ab00
	ctx.lr = 0x82091924;
	sub_8215AB00(ctx, base);
loc_82091924:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EAE80) {
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
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
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
	// addi r10,r10,15980
	ctx.r10.s64 = ctx.r10.s64 + 15980;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
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
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
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
	// ble cr6,0x820eaf28
	if (!ctx.cr6.gt) goto loc_820EAF28;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820eaf38
	goto loc_820EAF38;
loc_820EAF28:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820EAF38:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eaf54
	if (ctx.cr6.eq) goto loc_820EAF54;
	// b 0x820eaf6c
	goto loc_820EAF6C;
loc_820EAF54:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820e8e08
	ctx.lr = 0x820EAF68;
	sub_820E8E08(ctx, base);
	// b 0x820eafa4
	goto loc_820EAFA4;
loc_820EAF6C:
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
	// addi r10,r10,15980
	ctx.r10.s64 = ctx.r10.s64 + 15980;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,15980
	ctx.r10.s64 = ctx.r10.s64 + 15980;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// bl 0x820e8e08
	ctx.lr = 0x820EAFA4;
	sub_820E8E08(ctx, base);
loc_820EAFA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EF0B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F0A20) {
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-22080
	ctx.r10.s64 = ctx.r10.s64 + -22080;
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,-22080
	ctx.r10.s64 = ctx.r10.s64 + -22080;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// sth r10,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
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
	// sth r10,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
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
	// lhz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// sth r10,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F7410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x820f744c
	goto loc_820F744C;
loc_820F7440:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_820F744C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x820f74a0
	if (!ctx.cr6.lt) goto loc_820F74A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f74a0
	if (ctx.cr6.eq) goto loc_820F74A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,10
	ctx.r10.s64 = 10;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,10
	ctx.r10.s64 = 10;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x820f7440
	goto loc_820F7440;
loc_820F74A0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,5276
	ctx.r10.s64 = ctx.r10.s64 + 5276;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,5276
	ctx.r10.s64 = ctx.r10.s64 + 5276;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-21224
	ctx.r11.s64 = ctx.r11.s64 + -21224;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,5276
	ctx.r11.s64 = ctx.r11.s64 + 5276;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820F7520:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7548
	if (ctx.cr0.eq) goto loc_820F7548;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820f7558
	goto loc_820F7558;
loc_820F7548:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820F7558:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
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
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820f75a8
	if (ctx.cr6.lt) goto loc_820F75A8;
	// b 0x820f7930
	goto loc_820F7930;
loc_820F75A8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15964
	ctx.r11.s64 = ctx.r11.s64 + 15964;
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
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x820f6c38
	ctx.lr = 0x820F7620;
	sub_820F6C38(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// bl 0x820f6c38
	ctx.lr = 0x820F7688;
	sub_820F6C38(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lbz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// bl 0x820f6c38
	ctx.lr = 0x820F76F0;
	sub_820F6C38(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 120);
	// bl 0x820f6c38
	ctx.lr = 0x820F7758;
	sub_820F6C38(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// bl 0x820f6c38
	ctx.lr = 0x820F77F8;
	sub_820F6C38(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 136);
	// bl 0x820f6c38
	ctx.lr = 0x820F7860;
	sub_820F6C38(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lbz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// bl 0x820f6c38
	ctx.lr = 0x820F78C8;
	sub_820F6C38(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 152);
	// bl 0x820f6c38
	ctx.lr = 0x820F7930;
	sub_820F6C38(ctx, base);
loc_820F7930:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
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
	// bge cr6,0x820f7980
	if (!ctx.cr6.lt) goto loc_820F7980;
	// b 0x820f7520
	goto loc_820F7520;
loc_820F7980:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r10,r10,5276
	ctx.r10.s64 = ctx.r10.s64 + 5276;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82117528) {
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
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82117580
	if (ctx.cr6.eq) goto loc_82117580;
	// bl 0x82123e88
	ctx.lr = 0x8211757C;
	sub_82123E88(ctx, base);
	// b 0x821176d4
	goto loc_821176D4;
loc_82117580:
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,333(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 333);
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
	// lbz r11,333(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 333);
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,333(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 333);
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
	// ble cr6,0x82117678
	if (!ctx.cr6.gt) goto loc_82117678;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82117688
	goto loc_82117688;
loc_82117678:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82117688:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821176a4
	if (!ctx.cr6.eq) goto loc_821176A4;
	// bl 0x82123e88
	ctx.lr = 0x821176A0;
	sub_82123E88(ctx, base);
	// b 0x821176d4
	goto loc_821176D4;
loc_821176A4:
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
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
	// bl 0x820f7ea0
	ctx.lr = 0x821176D4;
	sub_820F7EA0(ctx, base);
loc_821176D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82123DD0) {
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
	// bl 0x820fbe00
	ctx.lr = 0x82123DE0;
	sub_820FBE00(ctx, base);
	// bl 0x820f9f68
	ctx.lr = 0x82123DE4;
	sub_820F9F68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82125568) {
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
	// bl 0x820f9e60
	ctx.lr = 0x82125578;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82125594
	if (!ctx.cr6.eq) goto loc_82125594;
	// b 0x82125774
	goto loc_82125774;
loc_82125594:
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
	// li r10,8193
	ctx.r10.s64 = 8193;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
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
	// bl 0x820f9e60
	ctx.lr = 0x821255F8;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82125614
	if (!ctx.cr6.eq) goto loc_82125614;
	// b 0x82125774
	goto loc_82125774;
loc_82125614:
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
	// li r10,8193
	ctx.r10.s64 = 8193;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
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
	// bl 0x820f9e60
	ctx.lr = 0x82125678;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82125694
	if (!ctx.cr6.eq) goto loc_82125694;
	// b 0x82125774
	goto loc_82125774;
loc_82125694:
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
	// li r10,8193
	ctx.r10.s64 = 8193;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
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
	// bl 0x820f9e60
	ctx.lr = 0x821256F8;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82125714
	if (!ctx.cr6.eq) goto loc_82125714;
	// b 0x82125774
	goto loc_82125774;
loc_82125714:
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
	// li r10,8193
	ctx.r10.s64 = 8193;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
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
loc_82125774:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134588) {
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
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821345B8:
	// bl 0x820f9e60
	ctx.lr = 0x821345BC;
	sub_820F9E60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821345d8
	if (!ctx.cr6.eq) goto loc_821345D8;
	// b 0x82134990
	goto loc_82134990;
loc_821345D8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r10,r10,13823
	ctx.r10.u64 = ctx.r10.u64 | 13823;
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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
	// bge cr6,0x8213467c
	if (!ctx.cr6.lt) goto loc_8213467C;
	// b 0x821345b8
	goto loc_821345B8;
loc_8213467C:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
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
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82134720
	if (!ctx.cr6.gt) goto loc_82134720;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82134730
	goto loc_82134730;
loc_82134720:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82134730:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8213474c
	if (ctx.cr6.gt) goto loc_8213474C;
	// b 0x82134784
	goto loc_82134784;
loc_8213474C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82134784:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821347e0
	if (!ctx.cr6.gt) goto loc_821347E0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821347f0
	goto loc_821347F0;
loc_821347E0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821347F0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8213480c
	if (ctx.cr6.gt) goto loc_8213480C;
	// b 0x82134844
	goto loc_82134844;
loc_8213480C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82134844:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821348a0
	if (!ctx.cr6.gt) goto loc_821348A0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821348b0
	goto loc_821348B0;
loc_821348A0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821348B0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821348cc
	if (ctx.cr6.gt) goto loc_821348CC;
	// b 0x82134904
	goto loc_82134904;
loc_821348CC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16032
	ctx.r10.s64 = ctx.r10.s64 + 16032;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82134904:
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
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
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_82134990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82153AB8) {
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
loc_82153AC4:
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
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
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
	// ble cr6,0x82153b7c
	if (!ctx.cr6.gt) goto loc_82153B7C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82153b8c
	goto loc_82153B8C;
loc_82153B7C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82153B8C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82153ba8
	if (!ctx.cr6.lt) goto loc_82153BA8;
	// b 0x82153bb8
	goto loc_82153BB8;
loc_82153BA8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82153BB8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16036
	ctx.r10.s64 = ctx.r10.s64 + 16036;
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
	// bge cr6,0x82153c24
	if (!ctx.cr6.lt) goto loc_82153C24;
	// b 0x82153ac4
	goto loc_82153AC4;
loc_82153C24:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x82153910
	ctx.lr = 0x82153C44;
	sub_82153910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215DD50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r11,r11,-18285
	ctx.r11.s64 = ctx.r11.s64 + -18285;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215E678) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 172);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-13760
	ctx.r10.s64 = ctx.r10.s64 + -13760;
	// stb r11,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,173(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 173);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-13760
	ctx.r10.s64 = ctx.r10.s64 + -13760;
	// stb r11,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,178(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 178);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,28(r10)
	REX_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 176);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 180);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 184);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,22(r10)
	REX_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,182(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 182);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,174(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 174);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,27(r10)
	REX_STORE_U8(ctx.r10.u32 + 27, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,179(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 179);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,212(r10)
	REX_STORE_U8(ctx.r10.u32 + 212, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,177(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 177);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,204(r10)
	REX_STORE_U8(ctx.r10.u32 + 204, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,181(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 181);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,205(r10)
	REX_STORE_U8(ctx.r10.u32 + 205, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,185(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 185);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,206(r10)
	REX_STORE_U8(ctx.r10.u32 + 206, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,183(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 183);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,207(r10)
	REX_STORE_U8(ctx.r10.u32 + 207, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,210(r11)
	REX_STORE_U8(ctx.r11.u32 + 210, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,208(r11)
	REX_STORE_U8(ctx.r11.u32 + 208, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,209(r11)
	REX_STORE_U8(ctx.r11.u32 + 209, ctx.r10.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,175(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 175);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,211(r10)
	REX_STORE_U8(ctx.r10.u32 + 211, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 172);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215e85c
	if (ctx.cr0.eq) goto loc_8215E85C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,212(r11)
	REX_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// lbz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 212);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,-14128
	ctx.r10.s64 = ctx.r10.s64 + -14128;
	// stb r11,28(r10)
	REX_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
loc_8215E85C:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821743B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,6300
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6300, ctx.xer);
	// bge cr6,0x821743e0
	if (!ctx.cr6.lt) goto loc_821743E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1828
	ctx.r11.s64 = ctx.r11.s64 + 1828;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82174440
	goto loc_82174440;
loc_821743E0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-6300
	ctx.r11.s64 = ctx.r11.s64 + -6300;
	// li r10,1800
	ctx.r10.s64 = 1800;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1824
	ctx.r11.s64 = ctx.r11.s64 + 1824;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1828
	ctx.r11.s64 = ctx.r11.s64 + 1828;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f1,-12(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
loc_82174440:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821780D0) {
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
	// bl 0x82174c28
	ctx.lr = 0x821780E8;
	sub_82174C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821780f4
	if (ctx.cr0.eq) goto loc_821780F4;
	// b 0x82178104
	goto loc_82178104;
loc_821780F4:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821778b8
	ctx.lr = 0x821780FC;
	sub_821778B8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82174cb0
	ctx.lr = 0x82178104;
	sub_82174CB0(ctx, base);
loc_82178104:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82179120) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lwz r11,36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82179140
	if (ctx.cr6.eq) goto loc_82179140;
	// lwz r3,36(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// b 0x821791d0
	goto loc_821791D0;
loc_82179140:
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r11,r11,1152
	ctx.r11.u64 = ctx.r11.u64 & 1152;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821791cc
	if (ctx.cr0.eq) goto loc_821791CC;
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x821791a0
	if (ctx.cr6.eq) goto loc_821791A0;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r9,28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lhz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lhz r11,2334(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2334);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2334(r10)
	REX_STORE_U16(ctx.r10.u32 + 2334, ctx.r11.u16);
	// b 0x821791c4
	goto loc_821791C4;
loc_821791A0:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// andi. r10,r10,1152
	ctx.r10.u64 = ctx.r10.u64 & 1152;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r11,2334(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2334);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2334(r10)
	REX_STORE_U16(ctx.r10.u32 + 2334, ctx.r11.u16);
loc_821791C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821791d0
	goto loc_821791D0;
loc_821791CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821791D0:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217CD08) {
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
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,6660
	ctx.r10.s64 = ctx.r10.s64 + 6660;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217CD3C;
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

DEFINE_REX_FUNC(sub_8217E6B8) {
	REX_FUNC_PROLOGUE();
	// stb r3,23(r1)
	REX_STORE_U8(ctx.r1.u32 + 23, ctx.r3.u8);
	// stb r4,31(r1)
	REX_STORE_U8(ctx.r1.u32 + 31, ctx.r4.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217EC40) {
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
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82058270
	ctx.lr = 0x8217EC68;
	sub_82058270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82181788) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82181550
	ctx.lr = 0x821817A0;
	sub_82181550(ctx, base);
	// stw r3,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821815b0
	ctx.lr = 0x821817D8;
	sub_821815B0(ctx, base);
	// stw r3,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82181610
	ctx.lr = 0x82181810;
	sub_82181610(ctx, base);
	// stw r3,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820aaa58
	ctx.lr = 0x82181848;
	sub_820AAA58(ctx, base);
	// stw r3,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x82181670
	ctx.lr = 0x82181884;
	sub_82181670(ctx, base);
	// lwz r3,260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82192A40) {
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
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82192a64
	goto loc_82192A64;
loc_82192A58:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82192A64:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82192ae0
	if (!ctx.cr6.lt) goto loc_82192AE0;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r11,r11,18828
	ctx.r11.s64 = ctx.r11.s64 + 18828;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82192abc
	if (ctx.cr0.eq) goto loc_82192ABC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,15
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(15));
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// bl 0x821a69b8
	ctx.lr = 0x82192AA8;
	sub_821A69B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82192ab8
	if (ctx.cr0.eq) goto loc_82192AB8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82192ae4
	goto loc_82192AE4;
loc_82192AB8:
	// b 0x82192adc
	goto loc_82192ADC;
loc_82192ABC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,15
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(15));
	// addi r3,r11,135
	ctx.r3.s64 = ctx.r11.s64 + 135;
	// bl 0x821a69b8
	ctx.lr = 0x82192ACC;
	sub_821A69B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82192adc
	if (ctx.cr0.eq) goto loc_82192ADC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82192ae4
	goto loc_82192AE4;
loc_82192ADC:
	// b 0x82192a58
	goto loc_82192A58;
loc_82192AE0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82192AE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197348) {
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
	// addi r11,r11,-2116
	ctx.r11.s64 = ctx.r11.s64 + -2116;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8219747c
	if (!ctx.cr0.eq) goto loc_8219747C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-23644
	ctx.r3.s64 = ctx.r11.s64 + -23644;
	// bl 0x821e0ee8
	ctx.lr = 0x82197374;
	sub_821E0EE8(ctx, base);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16564
	ctx.r11.s64 = ctx.r11.s64 + -16564;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16564
	ctx.r11.s64 = ctx.r11.s64 + -16564;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-16516
	ctx.r10.s64 = ctx.r10.s64 + -16516;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r3,r11,53248
	ctx.r3.u64 = ctx.r11.u64 | 53248;
	// bl 0x821ca530
	ctx.lr = 0x821973A4;
	sub_821CA530(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821dfa08
	ctx.lr = 0x821973AC;
	sub_821DFA08(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r3,r11,53248
	ctx.r3.u64 = ctx.r11.u64 | 53248;
	// bl 0x821c9ea0
	ctx.lr = 0x821973B8;
	sub_821C9EA0(ctx, base);
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r11,r11,-28476
	ctx.r11.s64 = ctx.r11.s64 + -28476;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r11,r11,-27632
	ctx.r11.s64 = ctx.r11.s64 + -27632;
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// addi r10,r10,30908
	ctx.r10.s64 = ctx.r10.s64 + 30908;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-23728
	ctx.r4.s64 = ctx.r11.s64 + -23728;
	// li r3,72
	ctx.r3.s64 = 72;
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r11,r11,30908
	ctx.r11.s64 = ctx.r11.s64 + 30908;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82197400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r11,r11,30904
	ctx.r11.s64 = ctx.r11.s64 + 30904;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,15755
	ctx.r5.s64 = ctx.r11.s64 + 15755;
	// li r4,5
	ctx.r4.s64 = 5;
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r11,r11,30904
	ctx.r11.s64 = ctx.r11.s64 + 30904;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821d9fd0
	ctx.lr = 0x82197428;
	sub_821D9FD0(ctx, base);
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r11,r11,30904
	ctx.r11.s64 = ctx.r11.s64 + 30904;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,-16516
	ctx.r10.s64 = ctx.r10.s64 + -16516;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x821d42e0
	ctx.lr = 0x82197444;
	sub_821D42E0(ctx, base);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-16516
	ctx.r11.s64 = ctx.r11.s64 + -16516;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// bl 0x8219ed00
	ctx.lr = 0x82197454;
	sub_8219ED00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-23664
	ctx.r3.s64 = ctx.r11.s64 + -23664;
	// bl 0x82197198
	ctx.lr = 0x82197464;
	sub_82197198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821982b0
	ctx.lr = 0x8219746C;
	sub_821982B0(ctx, base);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-2116
	ctx.r11.s64 = ctx.r11.s64 + -2116;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8219747C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A310) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x821c1d68
	ctx.lr = 0x8219A32C;
	sub_821C1D68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219a534
	if (ctx.cr0.eq) goto loc_8219A534;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x821c1c60
	ctx.lr = 0x8219A33C;
	sub_821C1C60(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x821c1d20
	ctx.lr = 0x8219A348;
	sub_821C1D20(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821916b8
	ctx.lr = 0x8219A354;
	sub_821916B8(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r31,88(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82273760
	ctx.lr = 0x8219A364;
	sub_82273760(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,100
	ctx.r8.s64 = 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x822361f8
	ctx.lr = 0x8219A388;
	sub_822361F8(ctx, base);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r11,r11,-30104
	ctx.r11.s64 = ctx.r11.s64 + -30104;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219a52c
	if (ctx.cr6.eq) goto loc_8219A52C;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x821c2998
	ctx.lr = 0x8219A3A4;
	sub_821C2998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219a428
	if (ctx.cr0.eq) goto loc_8219A428;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-23276
	ctx.r11.s64 = ctx.r11.s64 + -23276;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8219A3C0:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x8219a3c0
	if (!ctx.cr6.eq) goto loc_8219A3C0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8219A3E8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// lbz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x8219a3e8
	if (!ctx.cr6.eq) goto loc_8219A3E8;
	// b 0x8219a52c
	goto loc_8219A52C;
loc_8219A428:
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x821c2970
	ctx.lr = 0x8219A430;
	sub_821C2970(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219a4b4
	if (ctx.cr0.eq) goto loc_8219A4B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-23280
	ctx.r11.s64 = ctx.r11.s64 + -23280;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8219A44C:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x8219a44c
	if (!ctx.cr6.eq) goto loc_8219A44C;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8219A474:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne cr6,0x8219a474
	if (!ctx.cr6.eq) goto loc_8219A474;
	// b 0x8219a52c
	goto loc_8219A52C;
loc_8219A4B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-23284
	ctx.r11.s64 = ctx.r11.s64 + -23284;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8219A4C8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bne cr6,0x8219a4c8
	if (!ctx.cr6.eq) goto loc_8219A4C8;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8219A4F0:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// lbz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 124);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne cr6,0x8219a4f0
	if (!ctx.cr6.eq) goto loc_8219A4F0;
loc_8219A52C:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8219a53c
	goto loc_8219A53C;
loc_8219A534:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15755
	ctx.r3.s64 = ctx.r11.s64 + 15755;
loc_8219A53C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A94D0) {
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
	// mulli r11,r3,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3));
	// addi r4,r11,19
	ctx.r4.s64 = ctx.r11.s64 + 19;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,1828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1828);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r10,r11,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,24132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24132);
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// srad r10,r10,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r10.s64 = ctx.r10.s64 >> temp.u64;
	// srd r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x822176e8
	ctx.lr = 0x821A955C;
	sub_822176E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AF5D8) {
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
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821af5fc
	if (ctx.cr0.eq) goto loc_821AF5FC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_821AF5FC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821af62c
	if (!ctx.cr6.eq) goto loc_821AF62C;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821b20d0
	ctx.lr = 0x821AF60C;
	sub_821B20D0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bgt 0x821af62c
	if (ctx.cr0.gt) goto loc_821AF62C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821af62c
	if (!ctx.cr6.eq) goto loc_821AF62C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0fa0
	ctx.lr = 0x821AF62C;
	sub_821B0FA0(ctx, base);
loc_821AF62C:
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

DEFINE_REX_FUNC(sub_821B1D58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e24
	ctx.lr = 0x821B1D60;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// lwz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// beq cr6,0x821b1da0
	if (ctx.cr6.eq) goto loc_821B1DA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821af690
	ctx.lr = 0x821B1D88;
	sub_821AF690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1da0
	if (ctx.cr0.eq) goto loc_821B1DA0;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x821b20c4
	goto loc_821B20C4;
loc_821B1DA0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821B1DA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b1da8
	if (!ctx.cr6.eq) goto loc_821B1DA8;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r11,-24028(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -24028);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,132
	ctx.r3.s64 = ctx.r28.s64 + 132;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B1DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,83
	ctx.r11.s64 = 83;
	// li r19,1
	ctx.r19.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// stw r19,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r19.u32);
	// stw r25,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// stw r25,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r25,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stb r19,13(r31)
	REX_STORE_U8(ctx.r31.u32 + 13, ctx.r19.u8);
	// stb r25,14(r31)
	REX_STORE_U8(ctx.r31.u32 + 14, ctx.r25.u8);
loc_821B1E20:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x821b1e20
	if (!ctx.cr0.eq) goto loc_821B1E20;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r25,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r25.u32);
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// beq 0x821b1ea8
	if (ctx.cr0.eq) goto loc_821B1EA8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821B1E78:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b1e78
	if (!ctx.cr6.eq) goto loc_821B1E78;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x821b1cc8
	ctx.lr = 0x821B1EA8;
	sub_821B1CC8(ctx, base);
loc_821B1EA8:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// li r26,8
	ctx.r26.s64 = 8;
	// lis r21,-32072
	ctx.r21.s64 = -2101870592;
	// lbz r23,0(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lbz r24,0(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lbz r20,0(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821B1EE0:
	// clrlwi r22,r8,24
	ctx.r22.u64 = ctx.r8.u32 & 0xFF;
	// and r11,r23,r22
	ctx.r11.u64 = ctx.r23.u64 & ctx.r22.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1f80
	if (ctx.cr0.eq) goto loc_821B1F80;
	// lwz r28,0(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821B1EFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b1efc
	if (!ctx.cr6.eq) goto loc_821B1EFC;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x821af7c8
	ctx.lr = 0x821B1F2C;
	sub_821AF7C8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821b1f6c
	if (!ctx.cr0.eq) goto loc_821B1F6C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b10f0
	ctx.lr = 0x821B1F3C;
	sub_821B10F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-24020(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + -24020);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821af948
	ctx.lr = 0x821B1F4C;
	sub_821AF948(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r11.u32);
	// bgt 0x821b1f6c
	if (ctx.cr0.gt) goto loc_821B1F6C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b1f6c
	if (!ctx.cr6.eq) goto loc_821B1F6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b0fa0
	ctx.lr = 0x821B1F6C;
	sub_821B0FA0(ctx, base);
loc_821B1F6C:
	// stw r29,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r11.u32);
	// b 0x821b1f84
	goto loc_821B1F84;
loc_821B1F80:
	// stw r25,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_821B1F84:
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x821b1ee0
	if (!ctx.cr0.eq) goto loc_821B1EE0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// clrlwi r26,r24,24
	ctx.r26.u64 = ctx.r24.u32 & 0xFF;
	// addi r28,r31,92
	ctx.r28.s64 = ctx.r31.s64 + 92;
loc_821B1FA8:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// stw r25,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// and r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 & ctx.r27.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1ffc
	if (ctx.cr0.eq) goto loc_821B1FFC;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821B1FC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b1fc8
	if (!ctx.cr6.eq) goto loc_821B1FC8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x821b1be0
	ctx.lr = 0x821B1FFC;
	sub_821B1BE0(ctx, base);
loc_821B1FFC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x821b1fa8
	if (ctx.cr6.lt) goto loc_821B1FA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// clrlwi r26,r20,24
	ctx.r26.u64 = ctx.r20.u32 & 0xFF;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821B2034:
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// stw r25,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// and r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 & ctx.r27.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b2064
	if (ctx.cr0.eq) goto loc_821B2064;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b1398
	ctx.lr = 0x821B2054;
	sub_821B1398(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b14a0
	ctx.lr = 0x821B2064;
	sub_821B14A0(ctx, base);
loc_821B2064:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x821b2034
	if (ctx.cr6.lt) goto loc_821B2034;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r11,20680
	ctx.r29.s64 = ctx.r11.s64 + 20680;
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B20A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// addi r10,r29,40
	ctx.r10.s64 = ctx.r29.s64 + 40;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B20C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B20C4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82272e74
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CA178) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ca19c
	if (!ctx.cr6.eq) goto loc_821CA19C;
	// bl 0x821c9a50
	ctx.lr = 0x821CA19C;
	sub_821C9A50(ctx, base);
loc_821CA19C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_821CB9C8) {
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
	ctx.lr = 0x821CB9E0;
	sub_821CA938(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cba38
	if (ctx.cr0.eq) goto loc_821CBA38;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821cba14
	if (ctx.cr6.eq) goto loc_821CBA14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cdd90
	ctx.lr = 0x821CB9FC;
	sub_821CDD90(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-32748
	ctx.r11.s64 = ctx.r11.s64 + -32748;
loc_821CBA04:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821d3be8
	ctx.lr = 0x821CBA10;
	sub_821D3BE8(ctx, base);
	// b 0x821cba38
	goto loc_821CBA38;
loc_821CBA14:
	// lwz r11,308(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821cba34
	if (ctx.cr6.eq) goto loc_821CBA34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cdd90
	ctx.lr = 0x821CBA28;
	sub_821CDD90(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-32656
	ctx.r11.s64 = ctx.r11.s64 + -32656;
	// b 0x821cba04
	goto loc_821CBA04;
loc_821CBA34:
	// bl 0x821ef960
	ctx.lr = 0x821CBA38;
	sub_821EF960(ctx, base);
loc_821CBA38:
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

DEFINE_REX_FUNC(sub_821CD960) {
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
	ctx.lr = 0x821CD978;
	sub_821CD370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd988
	if (ctx.cr0.eq) goto loc_821CD988;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ecaf8
	ctx.lr = 0x821CD988;
	sub_821ECAF8(ctx, base);
loc_821CD988:
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

DEFINE_REX_FUNC(sub_821CEF78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e30
	ctx.lr = 0x821CEF80;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-23508
	ctx.r30.s64 = ctx.r11.s64 + -23508;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r29,r11,-31524
	ctx.r29.s64 = ctx.r11.s64 + -31524;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r28,r11,-31612
	ctx.r28.s64 = ctx.r11.s64 + -31612;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,212
	ctx.r5.s64 = 212;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x821e0ce8
	ctx.lr = 0x821CEFD0;
	sub_821E0CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq 0x821ceff0
	if (ctx.cr0.eq) goto loc_821CEFF0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,172
	ctx.r4.s64 = 172;
	// bl 0x821f2948
	ctx.lr = 0x821CEFF0;
	sub_821F2948(ctx, base);
loc_821CEFF0:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,215
	ctx.r5.s64 = 215;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821e0ce8
	ctx.lr = 0x821CF008;
	sub_821E0CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// beq 0x821cf028
	if (ctx.cr0.eq) goto loc_821CF028;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,104
	ctx.r4.s64 = 104;
	// bl 0x821f2948
	ctx.lr = 0x821CF028;
	sub_821F2948(ctx, base);
loc_821CF028:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,218
	ctx.r5.s64 = 218;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x821e0ce8
	ctx.lr = 0x821CF040;
	sub_821E0CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq 0x821cf05c
	if (ctx.cr0.eq) goto loc_821CF05C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821ce7d0
	ctx.lr = 0x821CF05C;
	sub_821CE7D0(ctx, base);
loc_821CF05C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,221
	ctx.r5.s64 = 221;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821e0ce8
	ctx.lr = 0x821CF074;
	sub_821E0CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq 0x821cf094
	if (ctx.cr0.eq) goto loc_821CF094;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x821f2948
	ctx.lr = 0x821CF094;
	sub_821F2948(ctx, base);
loc_821CF094:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82272e80
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D8168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821D8170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,18828(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18828);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d81ac
	if (ctx.cr0.eq) goto loc_821D81AC;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x821d81a0
	if (!ctx.cr6.eq) goto loc_821D81A0;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x821d81b4
	goto loc_821D81B4;
loc_821D81A0:
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x821d81c8
	if (!ctx.cr6.eq) goto loc_821D81C8;
	// li r30,4
	ctx.r30.s64 = 4;
loc_821D81AC:
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// bne cr6,0x821d81c8
	if (!ctx.cr6.eq) goto loc_821D81C8;
loc_821D81B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821d8168
	ctx.lr = 0x821D81C0;
	sub_821D8168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d8228
	if (!ctx.cr0.eq) goto loc_821D8228;
loc_821D81C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821d81fc
	if (ctx.cr6.eq) goto loc_821D81FC;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a69b8
	ctx.lr = 0x821D81E4;
	sub_821A69B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d8224
	if (ctx.cr0.eq) goto loc_821D8224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a66d0
	ctx.lr = 0x821D81F4;
	sub_821A66D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x821d8228
	goto loc_821D8228;
loc_821D81FC:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_821D8204:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a69b8
	ctx.lr = 0x821D820C;
	sub_821A69B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d8230
	if (!ctx.cr0.eq) goto loc_821D8230;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x821d8204
	if (ctx.cr6.lt) goto loc_821D8204;
loc_821D8224:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D8228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
loc_821D8230:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821a66d0
	ctx.lr = 0x821D823C;
	sub_821A66D0(ctx, base);
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// b 0x821d8228
	goto loc_821D8228;
}

DEFINE_REX_FUNC(sub_821DDA90) {
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
	// lwz r10,-30328(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -30328);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ddac0
	if (ctx.cr6.eq) goto loc_821DDAC0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DDAC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DDAC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DDAD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272158
	ctx.lr = 0x821DDADC;
	sub_82272158(ctx, base);
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

DEFINE_REX_FUNC(sub_821DFC58) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822063c8
	ctx.lr = 0x821DFC74;
	sub_822063C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821dfc9c
	if (!ctx.cr0.eq) goto loc_821DFC9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cdd90
	ctx.lr = 0x821DFC84;
	sub_821CDD90(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-27816
	ctx.r11.s64 = ctx.r11.s64 + -27816;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821d3be8
	ctx.lr = 0x821DFC98;
	sub_821D3BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DFC9C:
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

DEFINE_REX_FUNC(sub_821E1E08) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821e1e64
	goto loc_821E1E64;
loc_821E1E18:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x821e1e2c
	if (ctx.cr6.lt) goto loc_821E1E2C;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// ble cr6,0x821e1e5c
	if (!ctx.cr6.gt) goto loc_821E1E5C;
loc_821E1E2C:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x821e1e3c
	if (ctx.cr6.lt) goto loc_821E1E3C;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x821e1e5c
	if (!ctx.cr6.gt) goto loc_821E1E5C;
loc_821E1E3C:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x821e1e4c
	if (ctx.cr6.lt) goto loc_821E1E4C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x821e1e5c
	if (!ctx.cr6.gt) goto loc_821E1E5C;
loc_821E1E4C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x821e1e5c
	if (ctx.cr6.eq) goto loc_821E1E5C;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x821e1e70
	if (!ctx.cr6.eq) goto loc_821E1E70;
loc_821E1E5C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
loc_821E1E64:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e1e18
	if (!ctx.cr0.eq) goto loc_821E1E18;
	// blr 
	return;
loc_821E1E70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E4CF8) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x821e4b88
	ctx.lr = 0x821E4D34;
	sub_821E4B88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E7C28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x821E7C30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x821e7c54
	if (!ctx.cr6.eq) goto loc_821E7C54;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x821e7b20
	ctx.lr = 0x821E7C50;
	sub_821E7B20(ctx, base);
	// b 0x821e7c7c
	goto loc_821E7C7C;
loc_821E7C54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9c88
	ctx.lr = 0x821E7C5C;
	sub_821D9C88(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e7b20
	ctx.lr = 0x821E7C6C;
	sub_821E7B20(ctx, base);
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// stw r31,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r31.u32);
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
loc_821E7C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EA618) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x821EA620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mullw. r29,r11,r10
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x821ea6ac
	if (!ctx.cr0.gt) goto loc_821EA6AC;
loc_821EA640:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e9af0
	ctx.lr = 0x821EA64C;
	sub_821E9AF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ea668
	if (ctx.cr0.eq) goto loc_821EA668;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EA668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EA668:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821ea640
	if (ctx.cr6.lt) goto loc_821EA640;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821ea6ac
	if (!ctx.cr6.gt) goto loc_821EA6AC;
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ea6ac
	if (ctx.cr0.eq) goto loc_821EA6AC;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ea6ac
	if (ctx.cr0.eq) goto loc_821EA6AC;
	// lwz r3,436(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EA6AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EA6AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EE2A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e38
	ctx.lr = 0x821EE2B0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// bl 0x821e0360
	ctx.lr = 0x821EE2CC;
	sub_821E0360(ctx, base);
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee2dc
	if (ctx.cr0.eq) goto loc_821EE2DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ee3f4
	goto loc_821EE3F4;
loc_821EE2DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x821ee2f8
	if (ctx.cr6.lt) goto loc_821EE2F8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_821EE2F8:
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f13.f64)));
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// clrlwi r27,r10,31
	ctx.r27.u64 = ctx.r10.u32 & 0x1;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x821ee328
	if (ctx.cr6.lt) goto loc_821EE328;
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821ee388
	if (!ctx.cr6.gt) goto loc_821EE388;
loc_821EE328:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ee350
	if (!ctx.cr0.eq) goto loc_821EE350;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,1
	ctx.r24.s64 = 1;
	// bne 0x821ee348
	if (!ctx.cr0.eq) goto loc_821EE348;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x821ee388
	goto loc_821EE388;
loc_821EE348:
	// stfs f12,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x821ee388
	goto loc_821EE388;
loc_821EE350:
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// bne 0x821ee368
	if (!ctx.cr0.eq) goto loc_821EE368;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x821ee36c
	goto loc_821EE36C;
loc_821EE368:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_821EE36C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x821e0360
	ctx.lr = 0x821EE378;
	sub_821E0360(ctx, base);
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee388
	if (ctx.cr0.eq) goto loc_821EE388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee190
	ctx.lr = 0x821EE388;
	sub_821EE190(ctx, base);
loc_821EE388:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r29,5
	ctx.r29.s64 = 5;
loc_821EE390:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee3bc
	if (ctx.cr0.eq) goto loc_821EE3BC;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee3ac
	if (ctx.cr0.eq) goto loc_821EE3AC;
	// stw r25,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// stw r25,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
loc_821EE3AC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8220f380
	ctx.lr = 0x821EE3BC;
	sub_8220F380(ctx, base);
loc_821EE3BC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821ee390
	if (!ctx.cr0.eq) goto loc_821EE390;
	// lfs f2,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f31,f2
	ctx.cr6.compare(ctx.f31.f64, ctx.f2.f64);
	// beq cr6,0x821ee3f0
	if (ctx.cr6.eq) goto loc_821EE3F0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee3f0
	if (ctx.cr0.eq) goto loc_821EE3F0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8220ea78
	ctx.lr = 0x821EE3F0;
	sub_8220EA78(ctx, base);
loc_821EE3F0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_821EE3F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82272e88
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F70A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,111(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 111);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x821f7100
	if (ctx.cr6.eq) goto loc_821F7100;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x821f7168
	if (!ctx.cr6.eq) goto loc_821F7168;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821f7168
	if (!ctx.cr6.gt) goto loc_821F7168;
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821f7168
	if (!ctx.cr6.gt) goto loc_821F7168;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821f716c
	goto loc_821F716C;
loc_821F7100:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821f69d0
	ctx.lr = 0x821F712C;
	sub_821F69D0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821f7168
	if (ctx.cr6.eq) goto loc_821F7168;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821f6968
	ctx.lr = 0x821F7168;
	sub_821F6968(ctx, base);
loc_821F7168:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821F716C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82201CF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e4c
	ctx.lr = 0x82201D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// std r4,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82201d30
	if (ctx.cr0.eq) goto loc_82201D30;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82201d38
	if (!ctx.cr0.eq) goto loc_82201D38;
loc_82201D30:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82201d68
	goto loc_82201D68;
loc_82201D38:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82201d44
	if (!ctx.cr6.gt) goto loc_82201D44;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82201D44:
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82201d58
	if (ctx.cr6.eq) goto loc_82201D58;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82201d5c
	if (ctx.cr6.eq) goto loc_82201D5C;
loc_82201D58:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82201D5C:
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
loc_82201D68:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201980
	ctx.lr = 0x82201D74;
	sub_82201980(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82201d88
	if (!ctx.cr6.gt) goto loc_82201D88;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82201D88:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bgt cr6,0x82201db8
	if (ctx.cr6.gt) goto loc_82201DB8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82201dbc
	if (!ctx.cr6.lt) goto loc_82201DBC;
loc_82201DB8:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82201DBC:
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e9c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822084A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e3c
	ctx.lr = 0x822084B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r25,3
	ctx.r25.s64 = 3;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// stb r26,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// bne cr6,0x822084e8
	if (!ctx.cr6.eq) goto loc_822084E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-8572
	ctx.r3.s64 = ctx.r11.s64 + -8572;
loc_822084DC:
	// bl 0x821d3be8
	ctx.lr = 0x822084E0;
	sub_821D3BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822088d0
	goto loc_822088D0;
loc_822084E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,15755
	ctx.r27.s64 = ctx.r11.s64 + 15755;
	// beq cr6,0x82208560
	if (ctx.cr6.eq) goto loc_82208560;
	// bl 0x821e7c88
	ctx.lr = 0x822084FC;
	sub_821E7C88(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82208510
	if (!ctx.cr0.eq) goto loc_82208510;
loc_82208504:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7304
	ctx.r3.s64 = ctx.r11.s64 + -7304;
	// b 0x822084dc
	goto loc_822084DC;
loc_82208510:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-7312
	ctx.r4.s64 = ctx.r11.s64 + -7312;
	// bl 0x821bb840
	ctx.lr = 0x82208520;
	sub_821BB840(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220866c
	if (ctx.cr0.eq) goto loc_8220866C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82208540
	if (ctx.cr6.eq) goto loc_82208540;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82208544
	goto loc_82208544;
loc_82208540:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82208544:
	// bl 0x821cdd88
	ctx.lr = 0x82208548;
	sub_821CDD88(ctx, base);
	// bl 0x821d98a0
	ctx.lr = 0x8220854C;
	sub_821D98A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7f68
	ctx.lr = 0x8220855C;
	sub_821E7F68(ctx, base);
	// b 0x8220866c
	goto loc_8220866C;
loc_82208560:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-7320
	ctx.r4.s64 = ctx.r11.s64 + -7320;
	// bl 0x821bb840
	ctx.lr = 0x82208570;
	sub_821BB840(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82208584
	if (ctx.cr0.eq) goto loc_82208584;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7372
	ctx.r3.s64 = ctx.r11.s64 + -7372;
	// b 0x822084dc
	goto loc_822084DC;
loc_82208584:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-7384
	ctx.r4.s64 = ctx.r11.s64 + -7384;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x821bb840
	ctx.lr = 0x822085A0;
	sub_821BB840(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822085d8
	if (ctx.cr0.eq) goto loc_822085D8;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822085c0
	if (ctx.cr6.eq) goto loc_822085C0;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822085c4
	goto loc_822085C4;
loc_822085C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822085C4:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82206ee8
	ctx.lr = 0x822085CC;
	sub_82206EE8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x82208634
	goto loc_82208634;
loc_822085D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-7312
	ctx.r4.s64 = ctx.r11.s64 + -7312;
	// bl 0x821bb840
	ctx.lr = 0x822085E8;
	sub_821BB840(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82208650
	if (ctx.cr0.eq) goto loc_82208650;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82208608
	if (ctx.cr6.eq) goto loc_82208608;
	// lwz r31,32(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8220860c
	goto loc_8220860C;
loc_82208608:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8220860C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cdd88
	ctx.lr = 0x82208614;
	sub_821CDD88(ctx, base);
	// bl 0x821d98a0
	ctx.lr = 0x82208618;
	sub_821D98A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82208650
	if (!ctx.cr6.eq) goto loc_82208650;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-7420
	ctx.r3.s64 = ctx.r11.s64 + -7420;
	// bl 0x821d3be8
	ctx.lr = 0x82208634;
	sub_821D3BE8(ctx, base);
loc_82208634:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82208650
	if (ctx.cr6.eq) goto loc_82208650;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7b20
	ctx.lr = 0x8220864C;
	sub_821E7B20(ctx, base);
	// b 0x82208660
	goto loc_82208660;
loc_82208650:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e7c28
	ctx.lr = 0x82208660;
	sub_821E7C28(ctx, base);
loc_82208660:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82208504
	if (ctx.cr6.eq) goto loc_82208504;
loc_8220866C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82207db8
	ctx.lr = 0x82208678;
	sub_82207DB8(ctx, base);
	// lwz r31,24(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82208880
	if (ctx.cr0.eq) goto loc_82208880;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-7468
	ctx.r29.s64 = ctx.r11.s64 + -7468;
loc_8220868C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822086a0
	if (ctx.cr6.eq) goto loc_822086A0;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x822086a4
	goto loc_822086A4;
loc_822086A0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822086A4:
	// bl 0x82206d28
	ctx.lr = 0x822086A8;
	sub_82206D28(ctx, base);
	// cmpwi cr6,r3,29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 29, ctx.xer);
	// bgt cr6,0x82208744
	if (ctx.cr6.gt) goto loc_82208744;
	// beq cr6,0x8220886c
	if (ctx.cr6.eq) goto loc_8220886C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82208770
	if (!ctx.cr6.gt) goto loc_82208770;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// ble cr6,0x8220886c
	if (!ctx.cr6.gt) goto loc_8220886C;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// beq cr6,0x8220886c
	if (ctx.cr6.eq) goto loc_8220886C;
	// cmpwi cr6,r3,25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 25, ctx.xer);
	// beq cr6,0x8220886c
	if (ctx.cr6.eq) goto loc_8220886C;
	// cmpwi cr6,r3,26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 26, ctx.xer);
	// beq cr6,0x8220886c
	if (ctx.cr6.eq) goto loc_8220886C;
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// beq cr6,0x82208714
	if (ctx.cr6.eq) goto loc_82208714;
	// cmpwi cr6,r3,28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 28, ctx.xer);
	// bne cr6,0x82208770
	if (!ctx.cr6.eq) goto loc_82208770;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82208704
	if (ctx.cr6.eq) goto loc_82208704;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82208708
	goto loc_82208708;
loc_82208704:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82208708:
	// bl 0x821e66f0
	ctx.lr = 0x8220870C;
	sub_821E66F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x8220886c
	goto loc_8220886C;
loc_82208714:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220872c
	if (ctx.cr6.eq) goto loc_8220872C;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82208730
	goto loc_82208730;
loc_8220872C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82208730:
	// li r5,127
	ctx.r5.s64 = 127;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82272490
	ctx.lr = 0x8220873C;
	sub_82272490(ctx, base);
	// stb r26,223(r1)
	REX_STORE_U8(ctx.r1.u32 + 223, ctx.r26.u8);
	// b 0x8220886c
	goto loc_8220886C;
loc_82208744:
	// cmpwi cr6,r3,30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 30, ctx.xer);
	// beq cr6,0x8220883c
	if (ctx.cr6.eq) goto loc_8220883C;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// beq cr6,0x822087f4
	if (ctx.cr6.eq) goto loc_822087F4;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// beq cr6,0x822087c4
	if (ctx.cr6.eq) goto loc_822087C4;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// beq cr6,0x82208794
	if (ctx.cr6.eq) goto loc_82208794;
	// addi r11,r3,-70
	ctx.r11.s64 = ctx.r3.s64 + -70;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8220886c
	if (!ctx.cr6.gt) goto loc_8220886C;
loc_82208770:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208784
	if (ctx.cr6.eq) goto loc_82208784;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x82208788
	goto loc_82208788;
loc_82208784:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82208788:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d3be8
	ctx.lr = 0x82208790;
	sub_821D3BE8(ctx, base);
	// b 0x8220886c
	goto loc_8220886C;
loc_82208794:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822087ac
	if (ctx.cr6.eq) goto loc_822087AC;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822087b0
	goto loc_822087B0;
loc_822087AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822087B0:
	// bl 0x821e6678
	ctx.lr = 0x822087B4;
	sub_821E6678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e65f0
	ctx.lr = 0x822087C0;
	sub_821E65F0(ctx, base);
	// b 0x8220886c
	goto loc_8220886C;
loc_822087C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822087dc
	if (ctx.cr6.eq) goto loc_822087DC;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822087e0
	goto loc_822087E0;
loc_822087DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822087E0:
	// bl 0x821e6600
	ctx.lr = 0x822087E4;
	sub_821E6600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e65e0
	ctx.lr = 0x822087F0;
	sub_821E65E0(ctx, base);
	// b 0x8220886c
	goto loc_8220886C;
loc_822087F4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220880c
	if (ctx.cr6.eq) goto loc_8220880C;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82208810
	goto loc_82208810;
loc_8220880C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82208810:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82206f18
	ctx.lr = 0x82208818;
	sub_82206F18(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// beq 0x82208830
	if (ctx.cr0.eq) goto loc_82208830;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// b 0x82208834
	goto loc_82208834;
loc_82208830:
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
loc_82208834:
	// stw r11,124(r30)
	REX_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// b 0x8220886c
	goto loc_8220886C;
loc_8220883C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82208854
	if (ctx.cr6.eq) goto loc_82208854;
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82208858
	goto loc_82208858;
loc_82208854:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82208858:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82206ee8
	ctx.lr = 0x82208860;
	sub_82206EE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x821e7ad8
	ctx.lr = 0x8220886C;
	sub_821E7AD8(ctx, base);
loc_8220886C:
	// lwz r31,48(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8220868c
	if (!ctx.cr0.eq) goto loc_8220868C;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// bne cr6,0x82208884
	if (!ctx.cr6.eq) goto loc_82208884;
loc_82208880:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82208884:
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822088a8
	if (ctx.cr0.eq) goto loc_822088A8;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x822088a8
	if (ctx.cr6.eq) goto loc_822088A8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7160
	ctx.lr = 0x822088A8;
	sub_821E7160(ctx, base);
loc_822088A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4088(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822088c0
	if (!ctx.cr6.lt) goto loc_822088C0;
	// stfs f0,136(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 136, temp.u32);
loc_822088C0:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,40
	ctx.r11.u64 = ctx.r11.u64 | 40;
	// stw r11,124(r30)
	REX_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
loc_822088D0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82272e8c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822273A0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,9800
	ctx.r3.s64 = ctx.r11.s64 + 9800;
	// bl 0x82226ce0
	ctx.lr = 0x822273C0;
	sub_82226CE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16536(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16536);
	// lwz r6,10900(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 10900);
	// lwz r3,13416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 13416);
	// bl 0x82227120
	ctx.lr = 0x822273D8;
	sub_82227120(ctx, base);
	// lwz r11,13416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227410
	if (ctx.cr6.eq) goto loc_82227410;
	// lbz r8,10941(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 10941);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10908);
	// ori r8,r8,3
	ctx.r8.u64 = ctx.r8.u64 | 3;
	// lwz r9,10896(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stb r8,10941(r31)
	REX_STORE_U8(ctx.r31.u32 + 10941, ctx.r8.u8);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,11000(r31)
	REX_STORE_U32(ctx.r31.u32 + 11000, ctx.r10.u32);
	// bl 0x8222aae0
	ctx.lr = 0x8222740C;
	sub_8222AAE0(ctx, base);
	// b 0x8222742c
	goto loc_8222742C;
loc_82227410:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,9576
	ctx.r3.s64 = ctx.r11.s64 + 9576;
	// bl 0x82226ce0
	ctx.lr = 0x8222741C;
	sub_82226CE0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,9480
	ctx.r3.s64 = ctx.r11.s64 + 9480;
	// bl 0x82226ce0
	ctx.lr = 0x82227428;
	sub_82226CE0(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_8222742C:
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

DEFINE_REX_FUNC(sub_8222CD58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82272da8
	ctx.lr = 0x8222CD68;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1828(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f31
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8222cdd0
	if (!ctx.cr6.lt) goto loc_8222CDD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f2,15248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15248);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8222c380
	ctx.lr = 0x8222CD94;
	sub_8222C380(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f30,8364(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8364);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,1832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1832);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8222c380
	ctx.lr = 0x8222CDB0;
	sub_8222C380(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,13036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13036);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmsubs f13,f29,f30,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f29.f64, ctx.f30.f64, -ctx.f0.f64)));
	// lfs f0,15196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15196);
	ctx.f0.f64 = double(temp.f32);
loc_8222CDC8:
	// fadds f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x8222ce38
	goto loc_8222CE38;
loc_8222CDD0:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,1832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1832);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x8222ce30
	if (!ctx.cr6.lt) goto loc_8222CE30;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8222c380
	ctx.lr = 0x8222CDEC;
	sub_8222C380(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f29,13036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13036);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,15248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15248);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8222c380
	ctx.lr = 0x8222CE0C;
	sub_8222C380(ctx, base);
	// fmuls f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f12,f31
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f0,4132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4132);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmsubs f13,f28,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f28.f64, ctx.f29.f64, -ctx.f13.f64)));
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lfs f0,8280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8280);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8222cdc8
	goto loc_8222CDC8;
loc_8222CE30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f1.f64 = double(temp.f32);
loc_8222CE38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82272df4
	ctx.lr = 0x8222CE44;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82233E58) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828af7fc
	__imp__NetDll_ioctlsocket(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82233F30) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828af89c
	__imp__NetDll_XNetXnAddrToInAddr(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82234388) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// lwz r10,512(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r3,512(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,512(r11)
	REX_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822353A0) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x828af9cc
	ctx.lr = 0x822353B8;
	__imp__XamShowMessageBoxUI(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82235C10) {
	REX_FUNC_PROLOGUE();
	// b 0x8223aaf0
	sub_8223AAF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822360D8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,65001
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65001, ctx.xer);
	// bne cr6,0x82236114
	if (!ctx.cr6.eq) goto loc_82236114;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8223aca8
	ctx.lr = 0x82236110;
	sub_8223ACA8(ctx, base);
	// b 0x8223619c
	goto loc_8223619C;
loc_82236114:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82236148
	if (!ctx.cr6.eq) goto loc_82236148;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82236124:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82236124
	if (!ctx.cr6.eq) goto loc_82236124;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x8223614c
	goto loc_8223614C;
loc_82236148:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8223614C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8223615c
	if (!ctx.cr6.eq) goto loc_8223615C;
loc_82236154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8223619c
	goto loc_8223619C;
loc_8223615C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82236190
	if (ctx.cr6.lt) goto loc_82236190;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82236190
	if (ctx.cr6.lt) goto loc_82236190;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x828aff3c
	ctx.lr = 0x82236180;
	__imp__RtlMultiByteToUnicodeN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82236154
	if (!ctx.cr0.lt) goto loc_82236154;
	// bl 0x828aff2c
	ctx.lr = 0x8223618C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82236194
	goto loc_82236194;
loc_82236190:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82236194:
	// bl 0x8223aa98
	ctx.lr = 0x82236198;
	sub_8223AA98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223619C:
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

DEFINE_REX_FUNC(sub_8223C680) {
	REX_FUNC_PROLOGUE();
	// lhz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8223c740
	sub_8223C740(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223C868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e40
	ctx.lr = 0x8223C870;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-21408
	ctx.r30.s64 = ctx.r11.s64 + -21408;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x828afb6c
	ctx.lr = 0x8223C898;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C8BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x828afb5c
	ctx.lr = 0x8223C8C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82272e90
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223EE38) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r4,r10,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r10,r10,8,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F00;
	// lhz r9,82(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 82);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// beq cr6,0x8223ef08
	if (ctx.cr6.eq) goto loc_8223EF08;
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8223eeb0
	if (!ctx.cr6.lt) goto loc_8223EEB0;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// sth r9,82(r8)
	REX_STORE_U16(ctx.r8.u32 + 82, ctx.r9.u16);
	// b 0x8223ef04
	goto loc_8223EF04;
loc_8223EEB0:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r8,82(r9)
	REX_STORE_U16(ctx.r9.u32 + 82, ctx.r8.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r7,r9,10,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1F;
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8223eee8
	if (ctx.cr6.lt) goto loc_8223EEE8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8223EEE8:
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r9,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// oris r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 2147483648;
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// bne cr6,0x8223ef08
	if (!ctx.cr6.eq) goto loc_8223EF08;
loc_8223EF04:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8223EF08:
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// rlwinm r7,r6,5,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1F;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8223ef34
	if (!ctx.cr6.gt) goto loc_8223EF34;
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// b 0x8223ef50
	goto loc_8223EF50;
loc_8223EF34:
	// blt cr6,0x8223ef48
	if (ctx.cr6.lt) goto loc_8223EF48;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8223ef50
	if (!ctx.cr6.eq) goto loc_8223EF50;
loc_8223EF48:
	// rlwinm r9,r6,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8223EF50:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223ef98
	if (ctx.cr6.eq) goto loc_8223EF98;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8223ef64
	if (ctx.cr6.lt) goto loc_8223EF64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8223EF64:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r6,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8223ef84
	if (ctx.cr6.lt) goto loc_8223EF84;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8223EF84:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r5,r10,0,27,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFE0);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8223EF98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223efb8
	if (ctx.cr6.eq) goto loc_8223EFB8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223efb8
	if (ctx.cr6.eq) goto loc_8223EFB8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// sth r30,82(r10)
	REX_STORE_U16(ctx.r10.u32 + 82, ctx.r30.u16);
loc_8223EFB8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r3,r31,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249BB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,512
	ctx.r10.s64 = 512;
loc_82249BC0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne cr6,0x82249bc0
	if (!ctx.cr6.eq) goto loc_82249BC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224F7B8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8224f370
	sub_8224F370(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224FD00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e34
	ctx.lr = 0x8224FD08;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r28,r5,-8
	ctx.r28.s64 = ctx.r5.s64 + -8;
	// bne cr6,0x8224fd2c
	if (!ctx.cr6.eq) goto loc_8224FD2C;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_8224FD2C:
	// bl 0x828b00fc
	ctx.lr = 0x8224FD30;
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
	// beq cr6,0x8224fd58
	if (ctx.cr6.eq) goto loc_8224FD58;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8224fd6c
	if (ctx.cr6.eq) goto loc_8224FD6C;
loc_8224FD58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828afbfc
	ctx.lr = 0x8224FD60;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_8224FD6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82247030
	ctx.lr = 0x8224FD80;
	sub_82247030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8224fdb0
	if (ctx.cr6.lt) goto loc_8224FDB0;
	// lbz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x822471b8
	ctx.lr = 0x8224FDA4;
	sub_822471B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8224fe88
	if (!ctx.cr6.lt) goto loc_8224FE88;
loc_8224FDB0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8224fdfc
	if (ctx.cr6.eq) goto loc_8224FDFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8224fdfc
	if (!ctx.cr6.eq) goto loc_8224FDFC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8224fdfc
	if (!ctx.cr6.eq) goto loc_8224FDFC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x8224FDF4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x8224FDFC;
	__imp__KfLowerIrql(ctx, base);
loc_8224FDFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82250414
	if (!ctx.cr6.eq) goto loc_82250414;
loc_8224FE08:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82241788
	ctx.lr = 0x8224FE14;
	sub_82241788(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_8224FE18:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82250080
	if (ctx.cr6.eq) goto loc_82250080;
	// lwz r11,188(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 188);
	// lwz r10,192(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 192);
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82250080
	if (!ctx.cr0.eq) goto loc_82250080;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82250060
	if (ctx.cr6.eq) goto loc_82250060;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8224fe50
	if (ctx.cr6.eq) goto loc_8224FE50;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r25)
	REX_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
loc_8224FE50:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// stw r11,120(r26)
	REX_STORE_U32(ctx.r26.u32 + 120, ctx.r11.u32);
	// lwz r11,180(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82250080
	if (ctx.cr6.eq) goto loc_82250080;
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,36(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224FE84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82250080
	goto loc_82250080;
loc_8224FE88:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r26,184
	ctx.r30.s64 = ctx.r26.s64 + 184;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r23,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r23.u32);
	// lbz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224ffb8
	if (ctx.cr6.eq) goto loc_8224FFB8;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8224ffb8
	if (!ctx.cr6.eq) goto loc_8224FFB8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4092);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8224ff1c
	if (ctx.cr6.eq) goto loc_8224FF1C;
	// lfs f0,112(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stfs f0,224(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r26.u32 + 224, temp.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// lfs f0,40(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8224FEF0:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8224fef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224FEF0;
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224FF1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224FF1C:
	// lbz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224ff68
	if (ctx.cr6.eq) goto loc_8224FF68;
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// lfs f13,224(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,158(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 158);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,158(r11)
	REX_STORE_U16(ctx.r11.u32 + 158, ctx.r10.u16);
	// beq cr6,0x8224ff60
	if (ctx.cr6.eq) goto loc_8224FF60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-23872(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23872);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8224ff64
	goto loc_8224FF64;
loc_8224FF60:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8224FF64:
	// stfs f0,224(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r26.u32 + 224, temp.u32);
loc_8224FF68:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8224fe08
	if (ctx.cr6.eq) goto loc_8224FE08;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8224fe08
	if (!ctx.cr6.eq) goto loc_8224FE08;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8224fe08
	if (!ctx.cr6.eq) goto loc_8224FE08;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x8224FFAC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x8224FFB4;
	__imp__KfLowerIrql(ctx, base);
	// b 0x8224fe08
	goto loc_8224FE08;
loc_8224FFB8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lbz r29,13(r30)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82250004
	if (ctx.cr6.eq) goto loc_82250004;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82250004
	if (ctx.cr6.eq) goto loc_82250004;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8224FFE0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x822724f0
	ctx.lr = 0x8224FFF4;
	sub_822724F0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8224ffe0
	if (!ctx.cr6.eq) goto loc_8224FFE0;
loc_82250004:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82250050
	if (ctx.cr6.eq) goto loc_82250050;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82250050
	if (!ctx.cr6.eq) goto loc_82250050;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82250050
	if (!ctx.cr6.eq) goto loc_82250050;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x82250048;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x82250050;
	__imp__KfLowerIrql(ctx, base);
loc_82250050:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82272e84
	__restgprlr_23(ctx, base);
	return;
loc_82250060:
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225007C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82250080:
	// addi r28,r26,184
	ctx.r28.s64 = ctx.r26.s64 + 184;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82250284
	if (ctx.cr0.eq) goto loc_82250284;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82250184
	if (!ctx.cr6.eq) goto loc_82250184;
	// bl 0x828b00fc
	ctx.lr = 0x822500A0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822500c0
	if (ctx.cr6.eq) goto loc_822500C0;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822500d8
	if (ctx.cr6.eq) goto loc_822500D8;
loc_822500C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828afbfc
	ctx.lr = 0x822500C8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_822500D8:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 + 20;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822500fc
	if (ctx.cr6.eq) goto loc_822500FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x82250100
	goto loc_82250100;
loc_822500FC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82250100:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82250140
	if (ctx.cr6.eq) goto loc_82250140;
	// lbz r10,117(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 117);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82250140
	if (!ctx.cr6.eq) goto loc_82250140;
	// lwz r10,272(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8225012c
	if (ctx.cr6.eq) goto loc_8225012C;
	// stw r23,272(r26)
	REX_STORE_U32(ctx.r26.u32 + 272, ctx.r23.u32);
	// b 0x82250134
	goto loc_82250134;
loc_8225012C:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,120(r26)
	REX_STORE_U32(ctx.r26.u32 + 120, ctx.r10.u32);
loc_82250134:
	// stb r24,117(r11)
	REX_STORE_U8(ctx.r11.u32 + 117, ctx.r24.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_82250140:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// beq cr6,0x82250184
	if (ctx.cr6.eq) goto loc_82250184;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82250184
	if (!ctx.cr6.eq) goto loc_82250184;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82250184
	if (!ctx.cr6.eq) goto loc_82250184;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x8225017C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x82250184;
	__imp__KfLowerIrql(ctx, base);
loc_82250184:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82250284
	if (ctx.cr6.eq) goto loc_82250284;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822501a4
	if (ctx.cr6.eq) goto loc_822501A4;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// b 0x822501a8
	goto loc_822501A8;
loc_822501A4:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
loc_822501A8:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r27,120(r26)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 120);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bge cr6,0x822501c4
	if (!ctx.cr6.lt) goto loc_822501C4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822501C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x82251420
	ctx.lr = 0x822501D0;
	sub_82251420(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x828b00fc
	ctx.lr = 0x822501D8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822501f8
	if (ctx.cr6.eq) goto loc_822501F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225020c
	if (ctx.cr6.eq) goto loc_8225020C;
loc_822501F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828afbfc
	ctx.lr = 0x82250200;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_8225020C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,120(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 120);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82250228
	if (!ctx.cr6.eq) goto loc_82250228;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stw r11,120(r26)
	REX_STORE_U32(ctx.r26.u32 + 120, ctx.r11.u32);
loc_82250228:
	// lwz r11,168(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 168);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,168(r26)
	REX_STORE_U32(ctx.r26.u32 + 168, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224fe18
	if (ctx.cr6.eq) goto loc_8224FE18;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8224fe18
	if (!ctx.cr6.eq) goto loc_8224FE18;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8224fe18
	if (!ctx.cr6.eq) goto loc_8224FE18;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x82250278;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x82250280;
	__imp__KfLowerIrql(ctx, base);
	// b 0x8224fe18
	goto loc_8224FE18;
loc_82250284:
	// bl 0x828b00fc
	ctx.lr = 0x82250288;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// beq cr6,0x822502a8
	if (ctx.cr6.eq) goto loc_822502A8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822502bc
	if (ctx.cr6.eq) goto loc_822502BC;
loc_822502A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828afbfc
	ctx.lr = 0x822502B0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_822502BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r26,184
	ctx.r30.s64 = ctx.r26.s64 + 184;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lbz r29,13(r30)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82250384
	if (ctx.cr6.eq) goto loc_82250384;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225031c
	if (ctx.cr6.eq) goto loc_8225031C;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822502F8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x822724f0
	ctx.lr = 0x8225030C;
	sub_822724F0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,1024
	ctx.r28.s64 = ctx.r28.s64 + 1024;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822502f8
	if (!ctx.cr6.eq) goto loc_822502F8;
loc_8225031C:
	// lbz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225036c
	if (!ctx.cr6.eq) goto loc_8225036C;
	// addi r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225034c
	if (ctx.cr6.eq) goto loc_8225034C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82250384
	if (!ctx.cr6.eq) goto loc_82250384;
loc_8225034C:
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82250384
	goto loc_82250384;
loc_8225036C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82250384:
	// lbz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822503c4
	if (ctx.cr6.eq) goto loc_822503C4;
	// lhz r10,174(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 174);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822503ac
	if (ctx.cr6.eq) goto loc_822503AC;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822503c4
	if (ctx.cr6.eq) goto loc_822503C4;
loc_822503AC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822503C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822503C4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82250410
	if (ctx.cr6.eq) goto loc_82250410;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82250410
	if (!ctx.cr6.eq) goto loc_82250410;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82250410
	if (!ctx.cr6.eq) goto loc_82250410;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x82250408;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b010c
	ctx.lr = 0x82250410;
	__imp__KfLowerIrql(ctx, base);
loc_82250410:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250414:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82272e84
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_14) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx v14,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_71) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_82288FA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r3,r11,-2288
	ctx.r3.s64 = ctx.r11.s64 + -2288;
	// b 0x82273730
	sub_82273730(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6AA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,13(r10)
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,15(r10)
	REX_STORE_U8(ctx.r10.u32 + 15, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,17(r11)
	REX_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,19(r11)
	REX_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,22(r10)
	REX_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,28(r10)
	REX_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,29(r10)
	REX_STORE_U8(ctx.r10.u32 + 29, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,30(r10)
	REX_STORE_U8(ctx.r10.u32 + 30, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,31(r10)
	REX_STORE_U8(ctx.r10.u32 + 31, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,34(r11)
	REX_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,37(r10)
	REX_STORE_U8(ctx.r10.u32 + 37, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,38(r10)
	REX_STORE_U8(ctx.r10.u32 + 38, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,39(r10)
	REX_STORE_U8(ctx.r10.u32 + 39, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,41(r11)
	REX_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,42(r11)
	REX_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,43(r11)
	REX_STORE_U8(ctx.r11.u32 + 43, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,44(r10)
	REX_STORE_U8(ctx.r10.u32 + 44, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,46(r10)
	REX_STORE_U8(ctx.r10.u32 + 46, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,47(r10)
	REX_STORE_U8(ctx.r10.u32 + 47, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,48(r11)
	REX_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,49(r11)
	REX_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,50(r11)
	REX_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,51(r11)
	REX_STORE_U8(ctx.r11.u32 + 51, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,52(r10)
	REX_STORE_U8(ctx.r10.u32 + 52, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,53(r10)
	REX_STORE_U8(ctx.r10.u32 + 53, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,54(r10)
	REX_STORE_U8(ctx.r10.u32 + 54, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,55(r10)
	REX_STORE_U8(ctx.r10.u32 + 55, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,57(r11)
	REX_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,58(r11)
	REX_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,59(r11)
	REX_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,60(r10)
	REX_STORE_U8(ctx.r10.u32 + 60, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,61(r10)
	REX_STORE_U8(ctx.r10.u32 + 61, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,62(r10)
	REX_STORE_U8(ctx.r10.u32 + 62, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,63(r10)
	REX_STORE_U8(ctx.r10.u32 + 63, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,65(r11)
	REX_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,66(r11)
	REX_STORE_U8(ctx.r11.u32 + 66, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,67(r11)
	REX_STORE_U8(ctx.r11.u32 + 67, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,68(r10)
	REX_STORE_U8(ctx.r10.u32 + 68, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,69(r10)
	REX_STORE_U8(ctx.r10.u32 + 69, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,70(r10)
	REX_STORE_U8(ctx.r10.u32 + 70, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,71(r10)
	REX_STORE_U8(ctx.r10.u32 + 71, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,73(r11)
	REX_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,75(r11)
	REX_STORE_U8(ctx.r11.u32 + 75, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,162
	ctx.r11.s64 = ctx.r11.s64 + 162;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,162
	ctx.r11.s64 = ctx.r11.s64 + 162;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,162
	ctx.r11.s64 = ctx.r11.s64 + 162;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,162
	ctx.r11.s64 = ctx.r11.s64 + 162;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,81(r11)
	REX_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,82(r11)
	REX_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,83(r11)
	REX_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,84(r10)
	REX_STORE_U8(ctx.r10.u32 + 84, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,85(r10)
	REX_STORE_U8(ctx.r10.u32 + 85, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,86(r10)
	REX_STORE_U8(ctx.r10.u32 + 86, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,87(r10)
	REX_STORE_U8(ctx.r10.u32 + 87, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,92(r10)
	REX_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,93(r10)
	REX_STORE_U8(ctx.r10.u32 + 93, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,94(r10)
	REX_STORE_U8(ctx.r10.u32 + 94, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,95(r10)
	REX_STORE_U8(ctx.r10.u32 + 95, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,96(r11)
	REX_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,97(r11)
	REX_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,98(r11)
	REX_STORE_U8(ctx.r11.u32 + 98, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,99(r11)
	REX_STORE_U8(ctx.r11.u32 + 99, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,100(r10)
	REX_STORE_U8(ctx.r10.u32 + 100, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,101(r10)
	REX_STORE_U8(ctx.r10.u32 + 101, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,102(r10)
	REX_STORE_U8(ctx.r10.u32 + 102, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,103(r10)
	REX_STORE_U8(ctx.r10.u32 + 103, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,104(r10)
	REX_STORE_U8(ctx.r10.u32 + 104, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,105(r10)
	REX_STORE_U8(ctx.r10.u32 + 105, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,106(r10)
	REX_STORE_U8(ctx.r10.u32 + 106, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// stb r11,107(r10)
	REX_STORE_U8(ctx.r10.u32 + 107, ctx.r11.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,108(r11)
	REX_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,110(r11)
	REX_STORE_U8(ctx.r11.u32 + 110, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,111(r11)
	REX_STORE_U8(ctx.r11.u32 + 111, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,113(r11)
	REX_STORE_U8(ctx.r11.u32 + 113, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,114(r11)
	REX_STORE_U8(ctx.r11.u32 + 114, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,115(r11)
	REX_STORE_U8(ctx.r11.u32 + 115, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,116(r11)
	REX_STORE_U8(ctx.r11.u32 + 116, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,117(r11)
	REX_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,118(r11)
	REX_STORE_U8(ctx.r11.u32 + 118, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,119(r11)
	REX_STORE_U8(ctx.r11.u32 + 119, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,120(r11)
	REX_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,121(r11)
	REX_STORE_U8(ctx.r11.u32 + 121, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,122(r11)
	REX_STORE_U8(ctx.r11.u32 + 122, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,123(r11)
	REX_STORE_U8(ctx.r11.u32 + 123, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,124(r11)
	REX_STORE_U8(ctx.r11.u32 + 124, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,125(r11)
	REX_STORE_U8(ctx.r11.u32 + 125, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,126(r11)
	REX_STORE_U8(ctx.r11.u32 + 126, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,127(r11)
	REX_STORE_U8(ctx.r11.u32 + 127, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,129(r11)
	REX_STORE_U8(ctx.r11.u32 + 129, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,130(r11)
	REX_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,131(r11)
	REX_STORE_U8(ctx.r11.u32 + 131, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,132(r11)
	REX_STORE_U8(ctx.r11.u32 + 132, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,133(r11)
	REX_STORE_U8(ctx.r11.u32 + 133, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,134(r11)
	REX_STORE_U8(ctx.r11.u32 + 134, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,135(r11)
	REX_STORE_U8(ctx.r11.u32 + 135, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,136(r11)
	REX_STORE_U8(ctx.r11.u32 + 136, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,137(r11)
	REX_STORE_U8(ctx.r11.u32 + 137, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,139(r11)
	REX_STORE_U8(ctx.r11.u32 + 139, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,140(r11)
	REX_STORE_U8(ctx.r11.u32 + 140, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,141(r11)
	REX_STORE_U8(ctx.r11.u32 + 141, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,142(r11)
	REX_STORE_U8(ctx.r11.u32 + 142, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,143(r11)
	REX_STORE_U8(ctx.r11.u32 + 143, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,144(r11)
	REX_STORE_U8(ctx.r11.u32 + 144, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,145(r11)
	REX_STORE_U8(ctx.r11.u32 + 145, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,146(r11)
	REX_STORE_U8(ctx.r11.u32 + 146, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,148(r11)
	REX_STORE_U8(ctx.r11.u32 + 148, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,149(r11)
	REX_STORE_U8(ctx.r11.u32 + 149, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,150(r11)
	REX_STORE_U8(ctx.r11.u32 + 150, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,151(r11)
	REX_STORE_U8(ctx.r11.u32 + 151, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,152(r11)
	REX_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,153(r11)
	REX_STORE_U8(ctx.r11.u32 + 153, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,154(r11)
	REX_STORE_U8(ctx.r11.u32 + 154, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,155(r11)
	REX_STORE_U8(ctx.r11.u32 + 155, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,156(r11)
	REX_STORE_U8(ctx.r11.u32 + 156, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,157(r11)
	REX_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,158(r11)
	REX_STORE_U8(ctx.r11.u32 + 158, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,159(r11)
	REX_STORE_U8(ctx.r11.u32 + 159, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,160(r11)
	REX_STORE_U8(ctx.r11.u32 + 160, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,161(r11)
	REX_STORE_U8(ctx.r11.u32 + 161, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,162(r11)
	REX_STORE_U8(ctx.r11.u32 + 162, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,163(r11)
	REX_STORE_U8(ctx.r11.u32 + 163, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,164(r11)
	REX_STORE_U8(ctx.r11.u32 + 164, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,165(r11)
	REX_STORE_U8(ctx.r11.u32 + 165, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,166(r11)
	REX_STORE_U8(ctx.r11.u32 + 166, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,167(r11)
	REX_STORE_U8(ctx.r11.u32 + 167, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,168(r11)
	REX_STORE_U8(ctx.r11.u32 + 168, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,169(r11)
	REX_STORE_U8(ctx.r11.u32 + 169, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,170(r11)
	REX_STORE_U8(ctx.r11.u32 + 170, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,171(r11)
	REX_STORE_U8(ctx.r11.u32 + 171, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r10,172(r11)
	REX_STORE_U8(ctx.r11.u32 + 172, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,173(r11)
	REX_STORE_U8(ctx.r11.u32 + 173, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,174(r11)
	REX_STORE_U8(ctx.r11.u32 + 174, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,175(r11)
	REX_STORE_U8(ctx.r11.u32 + 175, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,176(r11)
	REX_STORE_U8(ctx.r11.u32 + 176, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-108
	ctx.r10.s64 = -108;
	// stb r10,177(r11)
	REX_STORE_U8(ctx.r11.u32 + 177, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,178(r11)
	REX_STORE_U8(ctx.r11.u32 + 178, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,179(r11)
	REX_STORE_U8(ctx.r11.u32 + 179, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,180(r11)
	REX_STORE_U8(ctx.r11.u32 + 180, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-92
	ctx.r10.s64 = -92;
	// stb r10,181(r11)
	REX_STORE_U8(ctx.r11.u32 + 181, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,69
	ctx.r10.s64 = 69;
	// stb r10,182(r11)
	REX_STORE_U8(ctx.r11.u32 + 182, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,183(r11)
	REX_STORE_U8(ctx.r11.u32 + 183, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,184(r11)
	REX_STORE_U8(ctx.r11.u32 + 184, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,185(r11)
	REX_STORE_U8(ctx.r11.u32 + 185, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,186(r11)
	REX_STORE_U8(ctx.r11.u32 + 186, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,89
	ctx.r10.s64 = 89;
	// stb r10,187(r11)
	REX_STORE_U8(ctx.r11.u32 + 187, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-92
	ctx.r10.s64 = -92;
	// stb r10,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,69
	ctx.r10.s64 = 69;
	// stb r10,190(r11)
	REX_STORE_U8(ctx.r11.u32 + 190, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,191(r11)
	REX_STORE_U8(ctx.r11.u32 + 191, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,192(r11)
	REX_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,193(r11)
	REX_STORE_U8(ctx.r11.u32 + 193, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,194(r11)
	REX_STORE_U8(ctx.r11.u32 + 194, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,89
	ctx.r10.s64 = 89;
	// stb r10,195(r11)
	REX_STORE_U8(ctx.r11.u32 + 195, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,196(r11)
	REX_STORE_U8(ctx.r11.u32 + 196, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-92
	ctx.r10.s64 = -92;
	// stb r10,197(r11)
	REX_STORE_U8(ctx.r11.u32 + 197, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,69
	ctx.r10.s64 = 69;
	// stb r10,198(r11)
	REX_STORE_U8(ctx.r11.u32 + 198, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,199(r11)
	REX_STORE_U8(ctx.r11.u32 + 199, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,200(r11)
	REX_STORE_U8(ctx.r11.u32 + 200, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,201(r11)
	REX_STORE_U8(ctx.r11.u32 + 201, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,202(r11)
	REX_STORE_U8(ctx.r11.u32 + 202, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,89
	ctx.r10.s64 = 89;
	// stb r10,203(r11)
	REX_STORE_U8(ctx.r11.u32 + 203, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,204(r11)
	REX_STORE_U8(ctx.r11.u32 + 204, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-92
	ctx.r10.s64 = -92;
	// stb r10,205(r11)
	REX_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,69
	ctx.r10.s64 = 69;
	// stb r10,206(r11)
	REX_STORE_U8(ctx.r11.u32 + 206, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,207(r11)
	REX_STORE_U8(ctx.r11.u32 + 207, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,208(r11)
	REX_STORE_U8(ctx.r11.u32 + 208, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,209(r11)
	REX_STORE_U8(ctx.r11.u32 + 209, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,210(r11)
	REX_STORE_U8(ctx.r11.u32 + 210, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,89
	ctx.r10.s64 = 89;
	// stb r10,211(r11)
	REX_STORE_U8(ctx.r11.u32 + 211, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,212(r11)
	REX_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-109
	ctx.r10.s64 = -109;
	// stb r10,213(r11)
	REX_STORE_U8(ctx.r11.u32 + 213, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,214(r11)
	REX_STORE_U8(ctx.r11.u32 + 214, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,215(r11)
	REX_STORE_U8(ctx.r11.u32 + 215, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,216(r11)
	REX_STORE_U8(ctx.r11.u32 + 216, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,57
	ctx.r10.s64 = 57;
	// stb r10,217(r11)
	REX_STORE_U8(ctx.r11.u32 + 217, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,218(r11)
	REX_STORE_U8(ctx.r11.u32 + 218, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,108
	ctx.r10.s64 = 108;
	// stb r10,219(r11)
	REX_STORE_U8(ctx.r11.u32 + 219, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,220(r11)
	REX_STORE_U8(ctx.r11.u32 + 220, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,221(r11)
	REX_STORE_U8(ctx.r11.u32 + 221, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r10,222(r11)
	REX_STORE_U8(ctx.r11.u32 + 222, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,223(r11)
	REX_STORE_U8(ctx.r11.u32 + 223, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,224(r11)
	REX_STORE_U8(ctx.r11.u32 + 224, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,225(r11)
	REX_STORE_U8(ctx.r11.u32 + 225, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,226(r11)
	REX_STORE_U8(ctx.r11.u32 + 226, ctx.r10.u8);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// li r10,-122
	ctx.r10.s64 = -122;
	// stb r10,227(r11)
	REX_STORE_U8(ctx.r11.u32 + 227, ctx.r10.u8);
	// blr 
	return;
}

