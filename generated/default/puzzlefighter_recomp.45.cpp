#include "puzzlefighter_funcs.45.h"

DEFINE_REX_FUNC(sub_820439D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82043c6c
	if (!ctx.cr0.eq) goto loc_82043C6C;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,-12(r1)
	REX_STORE_U16(ctx.r1.u32 + -12, ctx.r11.u16);
	// lhz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lhz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-12(r1)
	REX_STORE_U16(ctx.r1.u32 + -12, ctx.r11.u16);
	// lhz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lhz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-12(r1)
	REX_STORE_U16(ctx.r1.u32 + -12, ctx.r11.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4128
	ctx.r10.s64 = ctx.r10.s64 + 4128;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4092
	ctx.r10.s64 = ctx.r10.s64 + 4092;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4092
	ctx.r10.s64 = ctx.r10.s64 + 4092;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// lhz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 148, temp.u32);
	// lhz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-12(r1)
	REX_STORE_U16(ctx.r1.u32 + -12, ctx.r11.u16);
	// lhz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 164, temp.u32);
	// lhz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-12(r1)
	REX_STORE_U16(ctx.r1.u32 + -12, ctx.r11.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,29(r11)
	REX_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 96);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82043b7c
	if (!ctx.cr0.eq) goto loc_82043B7C;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4124
	ctx.r10.s64 = ctx.r10.s64 + 4124;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4124
	ctx.r10.s64 = ctx.r10.s64 + 4124;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4124
	ctx.r10.s64 = ctx.r10.s64 + 4124;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4124
	ctx.r10.s64 = ctx.r10.s64 + 4124;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// b 0x82043c6c
	goto loc_82043C6C;
loc_82043B7C:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,1828
	ctx.r10.s64 = ctx.r10.s64 + 1828;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,1828
	ctx.r10.s64 = ctx.r10.s64 + 1828;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,1828
	ctx.r10.s64 = ctx.r10.s64 + 1828;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,1828
	ctx.r10.s64 = ctx.r10.s64 + 1828;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4120
	ctx.r10.s64 = ctx.r10.s64 + 4120;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4120
	ctx.r10.s64 = ctx.r10.s64 + 4120;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4120
	ctx.r10.s64 = ctx.r10.s64 + 4120;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4120
	ctx.r10.s64 = ctx.r10.s64 + 4120;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4116
	ctx.r10.s64 = ctx.r10.s64 + 4116;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4116
	ctx.r10.s64 = ctx.r10.s64 + 4116;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4116
	ctx.r10.s64 = ctx.r10.s64 + 4116;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,4116
	ctx.r10.s64 = ctx.r10.s64 + 4116;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 224, temp.u32);
loc_82043C6C:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 96);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82043d78
	if (ctx.cr0.eq) goto loc_82043D78;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82043cb4
	if (ctx.cr0.gt) goto loc_82043CB4;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// b 0x82043d78
	goto loc_82043D78;
loc_82043CB4:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82043d28
	if (!ctx.cr0.eq) goto loc_82043D28;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lfs f0,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lfs f0,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// b 0x82043d78
	goto loc_82043D78;
loc_82043D28:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lfs f0,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lfs f0,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r10,r10,6128
	ctx.r10.s64 = ctx.r10.s64 + 6128;
	// lfs f0,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 164, temp.u32);
loc_82043D78:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82075100) {
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
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,6744
	ctx.r10.s64 = ctx.r10.s64 + 6744;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r10,r10,6744
	ctx.r10.s64 = ctx.r10.s64 + 6744;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,6744
	ctx.r11.s64 = ctx.r11.s64 + 6744;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82075160
	if (!ctx.cr6.lt) goto loc_82075160;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,6744
	ctx.r11.s64 = ctx.r11.s64 + 6744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82075160:
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
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
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
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
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
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
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
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
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
	// ble cr6,0x82075224
	if (!ctx.cr6.gt) goto loc_82075224;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82075234
	goto loc_82075234;
loc_82075224:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82075234:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82075250
	if (!ctx.cr6.eq) goto loc_82075250;
	// b 0x82075264
	goto loc_82075264;
loc_82075250:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15976
	ctx.r11.s64 = ctx.r11.s64 + 15976;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82072ef8
	ctx.lr = 0x82075264;
	sub_82072EF8(ctx, base);
loc_82075264:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8207A6D0) {
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
	// addi r10,r10,-29676
	ctx.r10.s64 = ctx.r10.s64 + -29676;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8207A720;
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

DEFINE_REX_FUNC(sub_8207C7F8) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r11,r11,-19248
	ctx.r11.s64 = ctx.r11.s64 + -19248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
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
	// addi r10,r10,-29552
	ctx.r10.s64 = ctx.r10.s64 + -29552;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8207C868;
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

DEFINE_REX_FUNC(sub_8207F300) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8207f108
	ctx.lr = 0x8207F3D0;
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

DEFINE_REX_FUNC(sub_82085668) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 132);
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
	// stb r11,132(r10)
	REX_STORE_U8(ctx.r10.u32 + 132, ctx.r11.u8);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82087DD0) {
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
	// addi r11,r11,-2328
	ctx.r11.s64 = ctx.r11.s64 + -2328;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
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
	// bl 0x82087d10
	ctx.lr = 0x82087E0C;
	sub_82087D10(ctx, base);
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
	// bl 0x82087d10
	ctx.lr = 0x82087E2C;
	sub_82087D10(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r11,r11,-2328
	ctx.r11.s64 = ctx.r11.s64 + -2328;
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

DEFINE_REX_FUNC(sub_8208CC98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16036
	ctx.r11.s64 = ctx.r11.s64 + 16036;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,158(r11)
	REX_STORE_U8(ctx.r11.u32 + 158, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,184(r11)
	REX_STORE_U8(ctx.r11.u32 + 184, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,271(r11)
	REX_STORE_U8(ctx.r11.u32 + 271, ctx.r10.u8);
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
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
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
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,223(r11)
	REX_STORE_U8(ctx.r11.u32 + 223, ctx.r10.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,1152(r11)
	REX_STORE_U8(ctx.r11.u32 + 1152, ctx.r10.u8);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,2176(r11)
	REX_STORE_U8(ctx.r11.u32 + 2176, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82090090) {
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
	// bne cr6,0x820900b4
	if (!ctx.cr6.eq) goto loc_820900B4;
	// bl 0x8215acc0
	ctx.lr = 0x820900B4;
	sub_8215ACC0(ctx, base);
loc_820900B4:
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094FE0) {
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
	// li r10,16
	ctx.r10.s64 = 16;
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
	// addi r10,r10,-27044
	ctx.r10.s64 = ctx.r10.s64 + -27044;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82095040;
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

DEFINE_REX_FUNC(sub_82098DE8) {
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
	// bne cr6,0x82098e60
	if (!ctx.cr6.eq) goto loc_82098E60;
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
	// beq 0x82098e60
	if (ctx.cr0.eq) goto loc_82098E60;
	// bl 0x82097228
	ctx.lr = 0x82098E54;
	sub_82097228(ctx, base);
	// bl 0x82097260
	ctx.lr = 0x82098E58;
	sub_82097260(ctx, base);
	// b 0x82098f98
	goto loc_82098F98;
loc_82098E60:
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
	// ble cr6,0x82098ee4
	if (!ctx.cr6.gt) goto loc_82098EE4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82098ef4
	goto loc_82098EF4;
loc_82098EE4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82098EF4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82098f10
	if (ctx.cr6.eq) goto loc_82098F10;
	// bl 0x82098b70
	ctx.lr = 0x82098F0C;
	sub_82098B70(ctx, base);
	// b 0x82098fc4
	goto loc_82098FC4;
loc_82098F10:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,268(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 268);
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
	// bne cr6,0x82098f50
	if (!ctx.cr6.eq) goto loc_82098F50;
	// b 0x82098f54
	goto loc_82098F54;
loc_82098F50:
	// bl 0x82097228
	ctx.lr = 0x82098F54;
	sub_82097228(ctx, base);
loc_82098F54:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,268(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 268);
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
	// bne cr6,0x82098f94
	if (!ctx.cr6.eq) goto loc_82098F94;
	// b 0x82098f98
	goto loc_82098F98;
loc_82098F94:
	// bl 0x82097260
	ctx.lr = 0x82098F98;
	sub_82097260(ctx, base);
loc_82098F98:
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
loc_82098FC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AA080) {
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
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,6926
	ctx.r10.s64 = 6926;
	// sth r10,50(r11)
	REX_STORE_U16(ctx.r11.u32 + 50, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,9313
	ctx.r10.s64 = 9313;
	// sth r10,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
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
	// sth r10,38(r11)
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,42(r11)
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29400
	ctx.r11.s64 = ctx.r11.s64 + -29400;
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820f1620
	ctx.lr = 0x820AA178;
	sub_820F1620(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29400
	ctx.r11.s64 = ctx.r11.s64 + -29400;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
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
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820f1620
	ctx.lr = 0x820AA1B0;
	sub_820F1620(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29392
	ctx.r11.s64 = ctx.r11.s64 + -29392;
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
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820f1f38
	ctx.lr = 0x820AA1E4;
	sub_820F1F38(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29392
	ctx.r11.s64 = ctx.r11.s64 + -29392;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
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
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820f1f38
	ctx.lr = 0x820AA21C;
	sub_820F1F38(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29392
	ctx.r11.s64 = ctx.r11.s64 + -29392;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
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
	// li r10,103
	ctx.r10.s64 = 103;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820f1f38
	ctx.lr = 0x820AA254;
	sub_820F1F38(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29392
	ctx.r11.s64 = ctx.r11.s64 + -29392;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
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
	// li r10,104
	ctx.r10.s64 = 104;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820f1f38
	ctx.lr = 0x820AA28C;
	sub_820F1F38(ctx, base);
	// bl 0x82155898
	ctx.lr = 0x820AA290;
	sub_82155898(ctx, base);
	// bl 0x82156780
	ctx.lr = 0x820AA294;
	sub_82156780(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,3328
	ctx.r11.s64 = ctx.r11.s64 + 3328;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,257
	ctx.r10.s64 = 257;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-24576
	ctx.r10.s64 = -24576;
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
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r10,130(r11)
	REX_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,291(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 291);
	// stb r11,159(r10)
	REX_STORE_U8(ctx.r10.u32 + 159, ctx.r11.u8);
	// bl 0x820dd508
	ctx.lr = 0x820AA324;
	sub_820DD508(ctx, base);
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
	// li r10,448
	ctx.r10.s64 = 448;
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,85
	ctx.r10.s64 = 85;
	// sth r10,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,85
	ctx.r10.s64 = 85;
	// sth r10,214(r11)
	REX_STORE_U16(ctx.r11.u32 + 214, ctx.r10.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5060
	ctx.r11.s64 = ctx.r11.s64 + 5060;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820f7d10
	ctx.lr = 0x820AA3CC;
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

DEFINE_REX_FUNC(sub_820DC7F8) {
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
	// addi r10,r10,-23680
	ctx.r10.s64 = ctx.r10.s64 + -23680;
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
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820DC8D4;
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

DEFINE_REX_FUNC(sub_820DE738) {
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
	// lbz r11,263(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 263);
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
	// beq cr6,0x820de790
	if (ctx.cr6.eq) goto loc_820DE790;
	// b 0x820deeec
	goto loc_820DEEEC;
loc_820DE790:
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
	// ble cr6,0x820de848
	if (!ctx.cr6.gt) goto loc_820DE848;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820de858
	goto loc_820DE858;
loc_820DE848:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DE858:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820de874
	if (!ctx.cr6.eq) goto loc_820DE874;
	// b 0x820deeec
	goto loc_820DEEEC;
loc_820DE874:
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
	// lbz r11,217(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 217);
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
	// beq cr6,0x820de8c0
	if (ctx.cr6.eq) goto loc_820DE8C0;
	// b 0x820deeec
	goto loc_820DEEEC;
loc_820DE8C0:
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// ble cr6,0x820de954
	if (!ctx.cr6.gt) goto loc_820DE954;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820de964
	goto loc_820DE964;
loc_820DE954:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DE964:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820de980
	if (!ctx.cr6.lt) goto loc_820DE980;
	// b 0x820dedcc
	goto loc_820DEDCC;
loc_820DE980:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x820dea1c
	if (ctx.cr6.lt) goto loc_820DEA1C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16016
	ctx.r10.s64 = ctx.r10.s64 + 16016;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,216(r10)
	REX_STORE_U8(ctx.r10.u32 + 216, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,219(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 219);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stb r11,219(r10)
	REX_STORE_U8(ctx.r10.u32 + 219, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,219(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 219);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,219(r10)
	REX_STORE_U8(ctx.r10.u32 + 219, ctx.r11.u8);
	// b 0x820de980
	goto loc_820DE980;
loc_820DEA1C:
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
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
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820deac4
	if (!ctx.cr6.gt) goto loc_820DEAC4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820dead4
	goto loc_820DEAD4;
loc_820DEAC4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DEAD4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820deaf0
	if (!ctx.cr6.lt) goto loc_820DEAF0;
	// b 0x820ded90
	goto loc_820DED90;
loc_820DEAF0:
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// ble cr6,0x820deb98
	if (!ctx.cr6.gt) goto loc_820DEB98;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820deba8
	goto loc_820DEBA8;
loc_820DEB98:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DEBA8:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820debc4
	if (!ctx.cr6.lt) goto loc_820DEBC4;
	// b 0x820ded90
	goto loc_820DED90;
loc_820DEBC4:
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// ble cr6,0x820dec6c
	if (!ctx.cr6.gt) goto loc_820DEC6C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820dec7c
	goto loc_820DEC7C;
loc_820DEC6C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DEC7C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820dec98
	if (!ctx.cr6.lt) goto loc_820DEC98;
	// b 0x820ded90
	goto loc_820DED90;
loc_820DEC98:
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
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
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
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
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
	// ble cr6,0x820ded40
	if (!ctx.cr6.gt) goto loc_820DED40;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820ded50
	goto loc_820DED50;
loc_820DED40:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DED50:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820ded6c
	if (!ctx.cr6.lt) goto loc_820DED6C;
	// b 0x820ded90
	goto loc_820DED90;
loc_820DED6C:
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
loc_820DED90:
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
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,524
	ctx.r10.s64 = 34340864;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x820dd6e0
	ctx.lr = 0x820DEDC4;
	sub_820DD6E0(ctx, base);
	// bl 0x820dd250
	ctx.lr = 0x820DEDC8;
	sub_820DD250(ctx, base);
	// b 0x820deeec
	goto loc_820DEEEC;
loc_820DEDCC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,219(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 219);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,219(r10)
	REX_STORE_U8(ctx.r10.u32 + 219, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,219(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 219);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,219(r10)
	REX_STORE_U8(ctx.r10.u32 + 219, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,216(r11)
	REX_STORE_U8(ctx.r11.u32 + 216, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,209(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 209);
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
	// lbz r11,209(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 209);
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
	// lbz r11,209(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 209);
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
	// ble cr6,0x820deebc
	if (!ctx.cr6.gt) goto loc_820DEEBC;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820deecc
	goto loc_820DEECC;
loc_820DEEBC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DEECC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820deee8
	if (!ctx.cr6.eq) goto loc_820DEEE8;
	// b 0x820deeec
	goto loc_820DEEEC;
loc_820DEEE8:
	// bl 0x820dd250
	ctx.lr = 0x820DEEEC;
	sub_820DD250(ctx, base);
loc_820DEEEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82105CF8) {
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
	// lbz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 228);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// bl 0x821447a0
	ctx.lr = 0x82105D50;
	sub_821447A0(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 228);
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
	// stb r11,228(r10)
	REX_STORE_U8(ctx.r10.u32 + 228, ctx.r11.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 228);
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
	// lbz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 228);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
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
	// lbz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 228);
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
	// ble cr6,0x82105e00
	if (!ctx.cr6.gt) goto loc_82105E00;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82105e10
	goto loc_82105E10;
loc_82105E00:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82105E10:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82105e2c
	if (!ctx.cr6.lt) goto loc_82105E2C;
	// b 0x82105e40
	goto loc_82105E40;
loc_82105E2C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,228(r11)
	REX_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
loc_82105E40:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820def00
	ctx.lr = 0x82105E54;
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

DEFINE_REX_FUNC(sub_8210E9A8) {
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
	ctx.lr = 0x8210E9B8;
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
	// blt cr6,0x8210ea04
	if (ctx.cr6.lt) goto loc_8210EA04;
	// b 0x8210ea10
	goto loc_8210EA10;
loc_8210EA04:
	// bl 0x820dd508
	ctx.lr = 0x8210EA08;
	sub_820DD508(ctx, base);
	// bl 0x820dfbc0
	ctx.lr = 0x8210EA0C;
	sub_820DFBC0(ctx, base);
	// b 0x8210ea14
	goto loc_8210EA14;
loc_8210EA10:
	// bl 0x820dd0e0
	ctx.lr = 0x8210EA14;
	sub_820DD0E0(ctx, base);
loc_8210EA14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82111580) {
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
	// bne cr6,0x821115d8
	if (!ctx.cr6.eq) goto loc_821115D8;
	// b 0x82111698
	goto loc_82111698;
loc_821115D8:
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
	// beq cr6,0x82111638
	if (ctx.cr6.eq) goto loc_82111638;
	// b 0x82111698
	goto loc_82111698;
loc_82111638:
	// li r4,218
	ctx.r4.s64 = 218;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21956
	ctx.r3.s64 = ctx.r11.s64 + 21956;
	// bl 0x821717d8
	ctx.lr = 0x82111648;
	sub_821717D8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
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
	// addi r10,r10,-18268
	ctx.r10.s64 = ctx.r10.s64 + -18268;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// bl 0x82156a20
	ctx.lr = 0x82111698;
	sub_82156A20(ctx, base);
loc_82111698:
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
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821116e4
	if (!ctx.cr6.eq) goto loc_821116E4;
	// b 0x82111830
	goto loc_82111830;
loc_821116E4:
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
	// beq cr6,0x82111794
	if (ctx.cr6.eq) goto loc_82111794;
	// b 0x82111830
	goto loc_82111830;
loc_82111794:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
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
	// lbz r11,267(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 267);
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
	// lbz r11,267(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 267);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16020
	ctx.r10.s64 = ctx.r10.s64 + 16020;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,267(r10)
	REX_STORE_U8(ctx.r10.u32 + 267, ctx.r11.u8);
loc_82111830:
	// bl 0x820dd0e0
	ctx.lr = 0x82111834;
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

DEFINE_REX_FUNC(sub_821245F0) {
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
	// bl 0x82123dd0
	ctx.lr = 0x82124600;
	sub_82123DD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821263D8) {
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
	// addi r10,r10,-16236
	ctx.r10.s64 = ctx.r10.s64 + -16236;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82126428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82126270
	ctx.lr = 0x8212642C;
	sub_82126270(ctx, base);
	// bl 0x820f7ba0
	ctx.lr = 0x82126430;
	sub_820F7BA0(ctx, base);
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
	// ble cr6,0x821264e0
	if (!ctx.cr6.gt) goto loc_821264E0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821264f0
	goto loc_821264F0;
loc_821264E0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821264F0:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8212650c
	if (ctx.cr6.lt) goto loc_8212650C;
	// b 0x82126510
	goto loc_82126510;
loc_8212650C:
	// bl 0x820f7ea0
	ctx.lr = 0x82126510;
	sub_820F7EA0(ctx, base);
loc_82126510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212F180) {
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
	// bl 0x8212e758
	ctx.lr = 0x8212F1B4;
	sub_8212E758(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16028
	ctx.r11.s64 = ctx.r11.s64 + 16028;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16028
	ctx.r10.s64 = ctx.r10.s64 + 16028;
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

DEFINE_REX_FUNC(sub_82132A00) {
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
	// lbz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 44);
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
	// bne cr6,0x82132a58
	if (!ctx.cr6.eq) goto loc_82132A58;
	// b 0x82132b88
	goto loc_82132B88;
loc_82132A58:
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
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5060
	ctx.r11.s64 = ctx.r11.s64 + 5060;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16040
	ctx.r10.s64 = ctx.r10.s64 + 16040;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x820f7d10
	ctx.lr = 0x82132AB0;
	sub_820F7D10(ctx, base);
	// bl 0x821559a0
	ctx.lr = 0x82132AB4;
	sub_821559A0(ctx, base);
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
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lis r10,-4
	ctx.r10.s64 = -262144;
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
	// bne cr6,0x82132b50
	if (!ctx.cr6.eq) goto loc_82132B50;
	// b 0x82132b6c
	goto loc_82132B6C;
loc_82132B50:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// addi r10,r10,16004
	ctx.r10.s64 = ctx.r10.s64 + 16004;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82132B6C:
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
loc_82132B88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213CF88) {
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
	// addi r10,r10,-14328
	ctx.r10.s64 = ctx.r10.s64 + -14328;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213CFE8;
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

DEFINE_REX_FUNC(sub_821410F0) {
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
	// addi r11,r11,-29460
	ctx.r11.s64 = ctx.r11.s64 + -29460;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,15104(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 15104);
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
	// lbz r11,280(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 280);
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
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
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
	// beq cr6,0x82141188
	if (ctx.cr6.eq) goto loc_82141188;
	// b 0x82141194
	goto loc_82141194;
loc_82141188:
	// bl 0x820f7ba0
	ctx.lr = 0x8214118C;
	sub_820F7BA0(ctx, base);
	// bl 0x820f7ea0
	ctx.lr = 0x82141190;
	sub_820F7EA0(ctx, base);
	// b 0x821411c0
	goto loc_821411C0;
loc_82141194:
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
loc_821411C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82147CE8) {
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
	// lbz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 80);
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
	// beq cr6,0x82147d40
	if (ctx.cr6.eq) goto loc_82147D40;
	// b 0x82147ef8
	goto loc_82147EF8;
loc_82147D40:
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
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
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
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
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
	// ble cr6,0x82147e64
	if (!ctx.cr6.gt) goto loc_82147E64;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82147e74
	goto loc_82147E74;
loc_82147E64:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82147E74:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82147ea4
	if (ctx.cr6.lt) goto loc_82147EA4;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82147ea4
	if (ctx.cr6.eq) goto loc_82147EA4;
	// b 0x82147ef8
	goto loc_82147EF8;
loc_82147EA4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,212(r11)
	REX_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-125
	ctx.r10.s64 = -125;
	// stb r10,213(r11)
	REX_STORE_U8(ctx.r11.u32 + 213, ctx.r10.u8);
	// bl 0x8211f558
	ctx.lr = 0x82147EE4;
	sub_8211F558(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821568b0
	ctx.lr = 0x82147EF8;
	sub_821568B0(ctx, base);
loc_82147EF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821561D0) {
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
	// bl 0x82155680
	ctx.lr = 0x821561E0;
	sub_82155680(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155a00
	ctx.lr = 0x821561FC;
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

DEFINE_REX_FUNC(sub_82157068) {
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
	ctx.lr = 0x82157078;
	sub_82155620(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r4,296
	ctx.r4.s64 = 296;
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
	ctx.lr = 0x821570A8;
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

DEFINE_REX_FUNC(sub_821595C8) {
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
	// li r10,256
	ctx.r10.s64 = 256;
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
	// li r10,1792
	ctx.r10.s64 = 1792;
	// sth r10,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29392
	ctx.r11.s64 = ctx.r11.s64 + -29392;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x821594d0
	ctx.lr = 0x821596C0;
	sub_821594D0(ctx, base);
	// bl 0x82158c30
	ctx.lr = 0x821596C4;
	sub_82158C30(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,-29400
	ctx.r11.s64 = ctx.r11.s64 + -29400;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,12288
	ctx.r11.s64 = ctx.r11.s64 + 12288;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x821596f8
	goto loc_821596F8;
loc_821596EC:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_821596F8:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bge cr6,0x82159720
	if (!ctx.cr6.lt) goto loc_82159720;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x821596ec
	goto loc_821596EC;
loc_82159720:
	// bl 0x82158d80
	ctx.lr = 0x82159724;
	sub_82158D80(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82158b00
	ctx.lr = 0x8215972C;
	sub_82158B00(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215974c
	if (ctx.cr6.eq) goto loc_8215974C;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82158b00
	ctx.lr = 0x8215974C;
	sub_82158B00(ctx, base);
loc_8215974C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,17988
	ctx.r11.s64 = ctx.r11.s64 + 17988;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,17988
	ctx.r11.s64 = ctx.r11.s64 + 17988;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x82158758
	ctx.lr = 0x82159780;
	sub_82158758(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82158758
	ctx.lr = 0x82159790;
	sub_82158758(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// li r4,5172
	ctx.r4.s64 = 5172;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,15696
	ctx.r3.s64 = ctx.r11.s64 + 15696;
	// bl 0x82158868
	ctx.lr = 0x821597A8;
	sub_82158868(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// li r4,5216
	ctx.r4.s64 = 5216;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15696
	ctx.r11.s64 = ctx.r11.s64 + 15696;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x82158868
	ctx.lr = 0x821597C4;
	sub_82158868(ctx, base);
	// li r4,11836
	ctx.r4.s64 = 11836;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15696
	ctx.r11.s64 = ctx.r11.s64 + 15696;
	// lbz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// bl 0x82158a40
	ctx.lr = 0x821597D8;
	sub_82158A40(ctx, base);
	// li r4,11900
	ctx.r4.s64 = 11900;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15696
	ctx.r11.s64 = ctx.r11.s64 + 15696;
	// lbz r3,260(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 260);
	// bl 0x82158a40
	ctx.lr = 0x821597EC;
	sub_82158A40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82172900) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mulli r11,r11,156
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(156));
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mulli r11,r11,156
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(156));
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mulli r11,r11,156
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(156));
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mulli r11,r11,156
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(156));
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,2318(r11)
	REX_STORE_U16(ctx.r11.u32 + 2318, ctx.r10.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,2316(r11)
	REX_STORE_U16(ctx.r11.u32 + 2316, ctx.r10.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,2320(r11)
	REX_STORE_U16(ctx.r11.u32 + 2320, ctx.r10.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,2324(r11)
	REX_STORE_U16(ctx.r11.u32 + 2324, ctx.r10.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,2326(r11)
	REX_STORE_U16(ctx.r11.u32 + 2326, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82177D08) {
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
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,10568
	ctx.r11.s64 = ctx.r11.s64 + 10568;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// lbz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82177d54
	if (ctx.cr0.eq) goto loc_82177D54;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82177d54
	if (!ctx.cr6.lt) goto loc_82177D54;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821758b8
	ctx.lr = 0x82177D50;
	sub_821758B8(ctx, base);
	// b 0x82177d5c
	goto loc_82177D5C;
loc_82177D54:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821757b8
	ctx.lr = 0x82177D5C;
	sub_821757B8(ctx, base);
loc_82177D5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82179370) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,2295(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2295);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821793a8
	if (!ctx.cr6.eq) goto loc_821793A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// b 0x821793b0
	goto loc_821793B0;
loc_821793A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
loc_821793B0:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,2294(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2294);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821793cc
	if (!ctx.cr6.eq) goto loc_821793CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// b 0x821793dc
	goto loc_821793DC;
loc_821793CC:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r11,2294(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2294);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
loc_821793DC:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r11,66(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 66);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821793f0
	if (ctx.cr6.eq) goto loc_821793F0;
	// b 0x821794e4
	goto loc_821794E4;
loc_821793F0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82179408
	goto loc_82179408;
loc_821793FC:
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_82179408:
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x821794e4
	if (!ctx.cr6.lt) goto loc_821794E4;
	// lwz r11,-8(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82179498
	if (ctx.cr6.eq) goto loc_82179498;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
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
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82179480
	if (!ctx.cr0.eq) goto loc_82179480;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-8(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
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
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179494
	if (ctx.cr0.eq) goto loc_82179494;
loc_82179480:
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// sth r11,66(r10)
	REX_STORE_U16(ctx.r10.u32 + 66, ctx.r11.u16);
	// b 0x821794e4
	goto loc_821794E4;
loc_82179494:
	// b 0x821794e0
	goto loc_821794E0;
loc_82179498:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,1196
	ctx.r11.s64 = ctx.r11.s64 + 1196;
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821794e0
	if (ctx.cr0.eq) goto loc_821794E0;
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// sth r11,66(r10)
	REX_STORE_U16(ctx.r10.u32 + 66, ctx.r11.u16);
	// b 0x821794e4
	goto loc_821794E4;
loc_821794E0:
	// b 0x821793fc
	goto loc_821793FC;
loc_821794E4:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218BE20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1828
	ctx.r11.s64 = ctx.r11.s64 + 1828;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11352
	ctx.r11.s64 = ctx.r11.s64 + 11352;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8218be70
	if (ctx.cr6.eq) goto loc_8218BE70;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11352
	ctx.r11.s64 = ctx.r11.s64 + 11352;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,576
	ctx.r10.s64 = ctx.r10.s64 + 576;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
loc_8218BE70:
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218EA60) {
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
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c7a60
	ctx.lr = 0x8218EA80;
	sub_821C7A60(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218ec84
	if (ctx.cr6.eq) goto loc_8218EC84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8218eac0
	goto loc_8218EAC0;
loc_8218EAB4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8218EAC0:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8218ec84
	if (!ctx.cr6.lt) goto loc_8218EC84;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11356
	ctx.r11.s64 = ctx.r11.s64 + 11356;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8218ebb8
	if (!ctx.cr6.eq) goto loc_8218EBB8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8218eb20
	if (ctx.cr6.eq) goto loc_8218EB20;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8218eb34
	if (!ctx.cr6.eq) goto loc_8218EB34;
loc_8218EB20:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x8218ebb4
	goto loc_8218EBB4;
loc_8218EB34:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8218eb54
	if (ctx.cr6.eq) goto loc_8218EB54;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8218eb68
	if (!ctx.cr6.eq) goto loc_8218EB68;
loc_8218EB54:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8218ebb4
	goto loc_8218EBB4;
loc_8218EB68:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8218eb90
	if (!ctx.cr6.eq) goto loc_8218EB90;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x8218ebb4
	goto loc_8218EBB4;
loc_8218EB90:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8218ebb4
	if (!ctx.cr6.eq) goto loc_8218EBB4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
loc_8218EBB4:
	// b 0x8218ec80
	goto loc_8218EC80;
loc_8218EBB8:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,11356
	ctx.r11.s64 = ctx.r11.s64 + 11356;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218ec80
	if (!ctx.cr6.eq) goto loc_8218EC80;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8218ebec
	if (ctx.cr6.eq) goto loc_8218EBEC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8218ec00
	if (!ctx.cr6.eq) goto loc_8218EC00;
loc_8218EBEC:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x8218ec80
	goto loc_8218EC80;
loc_8218EC00:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8218ec20
	if (ctx.cr6.eq) goto loc_8218EC20;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8218ec34
	if (!ctx.cr6.eq) goto loc_8218EC34;
loc_8218EC20:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8218ec80
	goto loc_8218EC80;
loc_8218EC34:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8218ec5c
	if (!ctx.cr6.eq) goto loc_8218EC5C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x8218ec80
	goto loc_8218EC80;
loc_8218EC5C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8218ec80
	if (!ctx.cr6.eq) goto loc_8218EC80;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
loc_8218EC80:
	// b 0x8218eab4
	goto loc_8218EAB4;
loc_8218EC84:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f2,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c7c40
	ctx.lr = 0x8218ECA8;
	sub_821C7C40(ctx, base);
	// bl 0x8218e810
	ctx.lr = 0x8218ECAC;
	sub_8218E810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219B0E8) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8219b078
	ctx.lr = 0x8219B108;
	sub_8219B078(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219DD80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,1828
	ctx.r10.s64 = ctx.r10.s64 + 1828;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,1828
	ctx.r10.s64 = ctx.r10.s64 + 1828;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,576
	ctx.r10.s64 = ctx.r10.s64 + 576;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,1828
	ctx.r10.s64 = ctx.r10.s64 + 1828;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// addi r10,r10,576
	ctx.r10.s64 = ctx.r10.s64 + 576;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,1828
	ctx.r10.s64 = ctx.r10.s64 + 1828;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0CB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e10
	ctx.lr = 0x821A0CC0;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r4,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821a2134
	if (ctx.cr6.eq) goto loc_821A2134;
	// lwz r31,28(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821a2134
	if (ctx.cr0.eq) goto loc_821A2134;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a2134
	if (ctx.cr6.eq) goto loc_821A2134;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a0d04
	if (!ctx.cr6.eq) goto loc_821A0D04;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a2134
	if (!ctx.cr6.eq) goto loc_821A2134;
loc_821A0D04:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821a0d18
	if (!ctx.cr6.eq) goto loc_821A0D18;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A0D18:
	// lwz r21,16(r24)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r25,4(r24)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r20,12(r24)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r26,0(r24)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// lwz r29,56(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,60(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r25,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// bgt cr6,0x821a2134
	if (ctx.cr6.gt) goto loc_821A2134;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r15,r11,-14868
	ctx.r15.s64 = ctx.r11.s64 + -14868;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r22,27
	ctx.r22.s64 = 27;
	// addi r14,r11,-14892
	ctx.r14.s64 = ctx.r11.s64 + -14892;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-14924
	ctx.r11.s64 = ctx.r11.s64 + -14924;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-14948
	ctx.r11.s64 = ctx.r11.s64 + -14948;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-14976
	ctx.r11.s64 = ctx.r11.s64 + -14976;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15000
	ctx.r11.s64 = ctx.r11.s64 + -15000;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15028
	ctx.r11.s64 = ctx.r11.s64 + -15028;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r17,r11,-15056
	ctx.r17.s64 = ctx.r11.s64 + -15056;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15084
	ctx.r11.s64 = ctx.r11.s64 + -15084;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r18,r11,-15124
	ctx.r18.s64 = ctx.r11.s64 + -15124;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15160
	ctx.r11.s64 = ctx.r11.s64 + -15160;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15192
	ctx.r11.s64 = ctx.r11.s64 + -15192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15212
	ctx.r11.s64 = ctx.r11.s64 + -15212;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15232
	ctx.r11.s64 = ctx.r11.s64 + -15232;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15260
	ctx.r11.s64 = ctx.r11.s64 + -15260;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15280
	ctx.r11.s64 = ctx.r11.s64 + -15280;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r16,r11,-15308
	ctx.r16.s64 = ctx.r11.s64 + -15308;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-15332
	ctx.r11.s64 = ctx.r11.s64 + -15332;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x821a0e24
	goto loc_821A0E24;
loc_821A0E20:
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_821A0E24:
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-15392
	ctx.r12.s64 = ctx.r12.s64 + -15392;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// addi r12,r12,3660
	ctx.r12.s64 = ctx.r12.s64 + 3660;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_821A0E4C;
	case 1:
		goto loc_821A0FC4;
	case 2:
		goto loc_821A1060;
	case 3:
		goto loc_821A10E8;
	case 4:
		goto loc_821A114C;
	case 5:
		goto loc_821A1170;
	case 6:
		goto loc_821A1228;
	case 7:
		goto loc_821A1354;
	case 8:
		goto loc_821A1408;
	case 9:
		goto loc_821A14C0;
	case 10:
		goto loc_821A1500;
	case 11:
		goto loc_821A152C;
	case 12:
		goto loc_821A1538;
	case 13:
		goto loc_821A15EC;
	case 14:
		goto loc_821A1654;
	case 15:
		goto loc_821A16D0;
	case 16:
		goto loc_821A1794;
	case 17:
		goto loc_821A1A60;
	case 18:
		goto loc_821A1B38;
	case 19:
		goto loc_821A1CF4;
	case 20:
		goto loc_821A1D5C;
	case 21:
		goto loc_821A1EA4;
	case 22:
		goto loc_821A1F2C;
	case 23:
		goto loc_821A1FD8;
	case 24:
		goto loc_821A1FF4;
	case 25:
		goto loc_821A20D0;
	case 26:
		goto loc_821A2170;
	case 27:
		goto loc_821A2178;
	case 28:
		goto loc_821A22CC;
	case 29:
		goto loc_821A0E4C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821A0E4C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821a0e84
	if (!ctx.cr0.eq) goto loc_821A0E84;
	// li r11,12
	ctx.r11.s64 = 12;
loc_821A0E5C:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a2128
	goto loc_821A2128;
loc_821A0E64:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A0E84:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x821a0e64
	if (ctx.cr6.lt) goto loc_821A0E64;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a0ee4
	if (ctx.cr0.eq) goto loc_821A0EE4;
	// cmplwi cr6,r29,35615
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 35615, ctx.xer);
	// bne cr6,0x821a0ee4
	if (!ctx.cr6.eq) goto loc_821A0EE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8219fcb8
	ctx.lr = 0x821A0EAC;
	sub_8219FCB8(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// li r11,139
	ctx.r11.s64 = 139;
	// stb r11,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8219fcb8
	ctx.lr = 0x821A0ED0;
	sub_8219FCB8(ctx, base);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r23,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// b 0x821a2128
	goto loc_821A2128;
loc_821A0EE4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r19,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r19.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a0efc
	if (ctx.cr0.eq) goto loc_821A0EFC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_821A0EFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a0f9c
	if (ctx.cr0.eq) goto loc_821A0F9C;
	// rlwinm r10,r29,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r29,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,31
	ctx.r10.s64 = 31;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,31
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(31));
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a0f9c
	if (!ctx.cr0.eq) goto loc_821A0F9C;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x821a0f3c
	if (ctx.cr6.eq) goto loc_821A0F3C;
loc_821A0F34:
	// stw r16,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r16.u32);
	// b 0x821a2124
	goto loc_821A2124;
loc_821A0F3C:
	// rlwinm r29,r29,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821a0f64
	if (!ctx.cr6.gt) goto loc_821A0F64;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_821A0F5C:
	// stw r11,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// b 0x821a2124
	goto loc_821A2124;
loc_821A0F64:
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x821a2c90
	ctx.lr = 0x821A0F7C;
	sub_821A2C90(ctx, base);
	// not r10,r29
	ctx.r10.u64 = ~ctx.r29.u64;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,48(r24)
	REX_STORE_U32(ctx.r24.u32 + 48, ctx.r3.u32);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// rlwimi r11,r10,24,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// b 0x821a0e5c
	goto loc_821A0E5C;
loc_821A0F9C:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A0FA4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A0FC4:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x821a0fa4
	if (ctx.cr6.lt) goto loc_821A0FA4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r29,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821a0f34
	if (!ctx.cr6.eq) goto loc_821A0F34;
	// rlwinm. r11,r29,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a0fec
	if (ctx.cr0.eq) goto loc_821A0FEC;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A0FEC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1000
	if (ctx.cr0.eq) goto loc_821A1000;
	// rlwinm r10,r29,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0x1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821A1000:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a102c
	if (ctx.cr0.eq) goto loc_821A102C;
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// stb r29,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r11,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8219fcb8
	ctx.lr = 0x821A1028;
	sub_8219FCB8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_821A102C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a1060
	goto loc_821A1060;
loc_821A1040:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A1060:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// blt cr6,0x821a1040
	if (ctx.cr6.lt) goto loc_821A1040;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1078
	if (ctx.cr0.eq) goto loc_821A1078;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_821A1078:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a10b4
	if (ctx.cr0.eq) goto loc_821A10B4;
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// stb r29,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r11,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// stb r10,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r11,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8219fcb8
	ctx.lr = 0x821A10B0;
	sub_8219FCB8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_821A10B4:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a10e8
	goto loc_821A10E8;
loc_821A10C8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A10E8:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x821a10c8
	if (ctx.cr6.lt) goto loc_821A10C8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1110
	if (ctx.cr0.eq) goto loc_821A1110;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r9,r29,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_821A1110:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a113c
	if (ctx.cr0.eq) goto loc_821A113C;
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// stb r29,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r11,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8219fcb8
	ctx.lr = 0x821A1138;
	sub_8219FCB8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_821A113C:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A114C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a12e4
	if (!ctx.cr0.eq) goto loc_821A12E4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1168
	if (ctx.cr0.eq) goto loc_821A1168;
	// stw r19,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r19.u32);
loc_821A1168:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A1170:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a121c
	if (ctx.cr0.eq) goto loc_821A121C;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x821a1190
	if (!ctx.cr6.gt) goto loc_821A1190;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_821A1190:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821a1210
	if (ctx.cr6.eq) goto loc_821A1210;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a11dc
	if (ctx.cr0.eq) goto loc_821A11DC;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x821a11dc
	if (ctx.cr0.eq) goto loc_821A11DC;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821a11d0
	if (ctx.cr6.gt) goto loc_821A11D0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_821A11D0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x82272590
	ctx.lr = 0x821A11DC;
	sub_82272590(ctx, base);
loc_821A11DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a11fc
	if (ctx.cr0.eq) goto loc_821A11FC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8219fcb8
	ctx.lr = 0x821A11F8;
	sub_8219FCB8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_821A11FC:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// subf r25,r28,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r28.u64;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821A1210:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a2180
	if (!ctx.cr6.eq) goto loc_821A2180;
loc_821A121C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r19,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r19.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A1228:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1338
	if (ctx.cr0.eq) goto loc_821A1338;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_821A1240:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lbzx r27,r28,r26
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1280
	if (ctx.cr0.eq) goto loc_821A1280;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821a1280
	if (ctx.cr0.eq) goto loc_821A1280;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821a1280
	if (!ctx.cr6.lt) goto loc_821A1280;
	// stbx r27,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u8);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821A1280:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821a1290
	if (ctx.cr6.eq) goto loc_821A1290;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x821a1240
	if (ctx.cr6.lt) goto loc_821A1240;
loc_821A1290:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a12b0
	if (ctx.cr0.eq) goto loc_821A12B0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8219fcb8
	ctx.lr = 0x821A12AC;
	sub_8219FCB8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_821A12B0:
	// subf r25,r28,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r28.u64;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821a2180
	if (!ctx.cr6.eq) goto loc_821A2180;
	// b 0x821a1348
	goto loc_821A1348;
loc_821A12C4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A12E4:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x821a12c4
	if (ctx.cr6.lt) goto loc_821A12C4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r29,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1300
	if (ctx.cr0.eq) goto loc_821A1300;
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
loc_821A1300:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a132c
	if (ctx.cr0.eq) goto loc_821A132C;
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// stb r29,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r11,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8219fcb8
	ctx.lr = 0x821A1328;
	sub_8219FCB8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_821A132C:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// b 0x821a1168
	goto loc_821A1168;
loc_821A1338:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1348
	if (ctx.cr0.eq) goto loc_821A1348;
	// stw r19,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r19.u32);
loc_821A1348:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r19,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r19.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A1354:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a13f0
	if (ctx.cr0.eq) goto loc_821A13F0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_821A136C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lbzx r27,r28,r26
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a13ac
	if (ctx.cr0.eq) goto loc_821A13AC;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821a13ac
	if (ctx.cr0.eq) goto loc_821A13AC;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821a13ac
	if (!ctx.cr6.lt) goto loc_821A13AC;
	// stbx r27,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u8);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821A13AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821a13bc
	if (ctx.cr6.eq) goto loc_821A13BC;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x821a136c
	if (ctx.cr6.lt) goto loc_821A136C;
loc_821A13BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a13dc
	if (ctx.cr0.eq) goto loc_821A13DC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8219fcb8
	ctx.lr = 0x821A13D8;
	sub_8219FCB8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_821A13DC:
	// subf r25,r28,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r28.u64;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821a2180
	if (!ctx.cr6.eq) goto loc_821A2180;
	// b 0x821a1400
	goto loc_821A1400;
loc_821A13F0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1400
	if (ctx.cr0.eq) goto loc_821A1400;
	// stw r19,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r19.u32);
loc_821A1400:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A1408:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a145c
	if (ctx.cr0.eq) goto loc_821A145C;
	// b 0x821a1438
	goto loc_821A1438;
loc_821A1418:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A1438:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x821a1418
	if (ctx.cr6.lt) goto loc_821A1418;
	// lhz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 26);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821a1454
	if (ctx.cr6.eq) goto loc_821A1454;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A1454:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_821A145C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1480
	if (ctx.cr0.eq) goto loc_821A1480;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r10,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 9;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r23,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r23.u32);
loc_821A1480:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8219fcb8
	ctx.lr = 0x821A1490;
	sub_8219FCB8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,48(r24)
	REX_STORE_U32(ctx.r24.u32 + 48, ctx.r3.u32);
loc_821A1498:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821a0e5c
	goto loc_821A0E5C;
loc_821A14A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A14C0:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// blt cr6,0x821a14a0
	if (ctx.cr6.lt) goto loc_821A14A0;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r29,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r29,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r29,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,10
	ctx.r8.s64 = 10;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,48(r24)
	REX_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_821A1500:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a2140
	if (ctx.cr6.eq) goto loc_821A2140;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a2c90
	ctx.lr = 0x821A151C;
	sub_821A2C90(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,48(r24)
	REX_STORE_U32(ctx.r24.u32 + 48, ctx.r3.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A152C:
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
loc_821A1538:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a157c
	if (ctx.cr6.eq) goto loc_821A157C;
	// clrlwi r11,r30,29
	ctx.r11.u64 = ctx.r30.u32 & 0x7;
	// li r10,24
	ctx.r10.s64 = 24;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x821a2128
	goto loc_821A2128;
loc_821A155C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A157C:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x821a155c
	if (ctx.cr6.lt) goto loc_821A155C;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// rlwinm r7,r29,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r30,-1
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a15d8
	if (ctx.cr6.lt) goto loc_821A15D8;
	// beq cr6,0x821a15c8
	if (ctx.cr6.eq) goto loc_821A15C8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821a15c0
	if (ctx.cr6.lt) goto loc_821A15C0;
	// bne cr6,0x821a15e0
	if (!ctx.cr6.eq) goto loc_821A15E0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// stw r22,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// b 0x821a15e0
	goto loc_821A15E0;
loc_821A15C0:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x821a15dc
	goto loc_821A15DC;
loc_821A15C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a0b50
	ctx.lr = 0x821A15D0;
	sub_821A0B50(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x821a15dc
	goto loc_821A15DC;
loc_821A15D8:
	// li r11,13
	ctx.r11.s64 = 13;
loc_821A15DC:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A15E0:
	// rlwinm r29,r7,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r6,-2
	ctx.r30.s64 = ctx.r6.s64 + -2;
	// b 0x821a2128
	goto loc_821A2128;
loc_821A15EC:
	// clrlwi r11,r30,29
	ctx.r11.u64 = ctx.r30.u32 & 0x7;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x821a161c
	goto loc_821A161C;
loc_821A15FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A161C:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// blt cr6,0x821a15fc
	if (ctx.cr6.lt) goto loc_821A15FC;
	// not r10,r29
	ctx.r10.u64 = ~ctx.r29.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821a1640
	if (ctx.cr6.eq) goto loc_821A1640;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A1640:
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821A1654:
	// lwz r28,64(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x821a1498
	if (ctx.cr0.eq) goto loc_821A1498;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x821a166c
	if (!ctx.cr6.gt) goto loc_821A166C;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_821A166C:
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x821a1678
	if (!ctx.cr6.gt) goto loc_821A1678;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_821A1678:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82272590
	ctx.lr = 0x821A1690;
	sub_82272590(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// subf r25,r28,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r28.u64;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// subf r21,r28,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r28.u64;
	// add r20,r28,r20
	ctx.r20.u64 = ctx.r28.u64 + ctx.r20.u64;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821a2128
	goto loc_821A2128;
loc_821A16B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A16D0:
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// blt cr6,0x821a16b0
	if (ctx.cr6.lt) goto loc_821A16B0;
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// addi r9,r10,257
	ctx.r9.s64 = ctx.r10.s64 + 257;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r29,r11,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r9,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r30,r30,-14
	ctx.r30.s64 = ctx.r30.s64 + -14;
	// cmplwi cr6,r9,286
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 286, ctx.xer);
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt cr6,0x821a1734
	if (ctx.cr6.gt) goto loc_821A1734;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bgt cr6,0x821a1734
	if (ctx.cr6.gt) goto loc_821A1734;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r19,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r19.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a1794
	goto loc_821A1794;
loc_821A1734:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A173C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A175C:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x821a173c
	if (ctx.cr6.lt) goto loc_821A173C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// clrlwi r10,r29,29
	ctx.r10.u64 = ctx.r29.u32 & 0x7;
	// rlwinm r29,r29,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// lhzx r11,r11,r18
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_821A1794:
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821a175c
	if (ctx.cr6.lt) goto loc_821A175C;
	// b 0x821a17cc
	goto loc_821A17CC;
loc_821A17A8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r18
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r19.u16);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_821A17CC:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// blt cr6,0x821a17a8
	if (ctx.cr6.lt) goto loc_821A17A8;
	// addi r11,r31,1328
	ctx.r11.s64 = ctx.r31.s64 + 1328;
	// addi r6,r31,108
	ctx.r6.s64 = ctx.r31.s64 + 108;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r8,r31,752
	ctx.r8.s64 = ctx.r31.s64 + 752;
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// bl 0x821a27d0
	ctx.lr = 0x821A1808;
	sub_821A27D0(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821a181c
	if (ctx.cr0.eq) goto loc_821A181C;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A181C:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r19,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r19.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a1a60
	goto loc_821A1A60;
loc_821A182C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x821a1888
	goto loc_821A1888;
loc_821A184C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// slw r11,r23,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_821A1888:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821a184c
	if (ctx.cr6.gt) goto loc_821A184C;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x821a1904
	if (!ctx.cr6.lt) goto loc_821A1904;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x821a18d4
	goto loc_821A18D4;
loc_821A18B4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_821A18D4:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821a18b4
	if (ctx.cr6.lt) goto loc_821A18B4;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u16);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// b 0x821a1a60
	goto loc_821A1A60;
loc_821A1904:
	// bne cr6,0x821a1970
	if (!ctx.cr6.eq) goto loc_821A1970;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// b 0x821a1934
	goto loc_821A1934;
loc_821A1914:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_821A1934:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821a1914
	if (ctx.cr6.lt) goto loc_821A1914;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// subf r30,r9,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r9.u64;
	// srw r29,r29,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1a7c
	if (ctx.cr0.eq) goto loc_821A1A7C;
	// addi r10,r11,55
	ctx.r10.s64 = ctx.r11.s64 + 55;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r29,r29,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// lhzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// b 0x821a1a14
	goto loc_821A1A14;
loc_821A1970:
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x821a19c8
	if (!ctx.cr6.eq) goto loc_821A19C8;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// b 0x821a19a4
	goto loc_821A19A4;
loc_821A1984:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_821A19A4:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821a1984
	if (ctx.cr6.lt) goto loc_821A1984;
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r30,r9,-3
	ctx.r30.s64 = ctx.r9.s64 + -3;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r29,r11,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// b 0x821a1a10
	goto loc_821A1A10;
loc_821A19C8:
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// b 0x821a19f0
	goto loc_821A19F0;
loc_821A19D0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_821A19F0:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821a19d0
	if (ctx.cr6.lt) goto loc_821A19D0;
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r30,r9,-7
	ctx.r30.s64 = ctx.r9.s64 + -7;
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r29,r11,25,7,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r9,11
	ctx.r11.s64 = ctx.r9.s64 + 11;
loc_821A1A10:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_821A1A14:
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x821a1a84
	if (ctx.cr6.gt) goto loc_821A1A84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1a60
	if (ctx.cr6.eq) goto loc_821A1A60;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
loc_821A1A3C:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u16);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// bne 0x821a1a3c
	if (!ctx.cr0.eq) goto loc_821A1A3C;
loc_821A1A60:
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821a182c
	if (ctx.cr6.lt) goto loc_821A182C;
	// b 0x821a1a8c
	goto loc_821A1A8C;
loc_821A1A7C:
	// stw r17,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r17.u32);
	// b 0x821a2124
	goto loc_821A2124;
loc_821A1A84:
	// stw r17,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r17.u32);
	// stw r22,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_821A1A8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x821a2128
	if (ctx.cr6.eq) goto loc_821A2128;
	// addi r11,r31,1328
	ctx.r11.s64 = ctx.r31.s64 + 1328;
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r28,r31,108
	ctx.r28.s64 = ctx.r31.s64 + 108;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r27,r31,752
	ctx.r27.s64 = ctx.r31.s64 + 752;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// bl 0x821a27d0
	ctx.lr = 0x821A1AD0;
	sub_821A27D0(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821a1ae4
	if (ctx.cr0.eq) goto loc_821A1AE4;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A1AE4:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bl 0x821a27d0
	ctx.lr = 0x821A1B1C;
	sub_821A27D0(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821a1b30
	if (ctx.cr0.eq) goto loc_821A1B30;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A1B30:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A1B38:
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// blt cr6,0x821a1b88
	if (ctx.cr6.lt) goto loc_821A1B88;
	// cmplwi cr6,r21,258
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 258, ctx.xer);
	// blt cr6,0x821a1b88
	if (ctx.cr6.lt) goto loc_821A1B88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r20,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r20.u32);
	// stw r21,16(r24)
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r21.u32);
	// stw r26,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r25,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r25.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x821a2370
	ctx.lr = 0x821A1B6C;
	sub_821A2370(ctx, base);
	// lwz r20,12(r24)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r21,16(r24)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r26,0(r24)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r25,4(r24)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r29,56(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,60(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// b 0x821a2128
	goto loc_821A2128;
loc_821A1B88:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x821a1be4
	goto loc_821A1BE4;
loc_821A1BA8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// slw r11,r23,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_821A1BE4:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821a1ba8
	if (ctx.cr6.gt) goto loc_821A1BA8;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x821a1ca0
	if (ctx.cr0.eq) goto loc_821A1CA0;
	// rlwinm. r9,r8,0,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821a1ca0
	if (!ctx.cr0.eq) goto loc_821A1CA0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,89(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// slw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r8.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x821a1c74
	goto loc_821A1C74;
loc_821A1C34:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lbz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// slw r10,r8,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// slw r10,r23,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r6.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// srw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
loc_821A1C74:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821a1c34
	if (ctx.cr6.gt) goto loc_821A1C34;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
loc_821A1CA0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// bne 0x821a1cc8
	if (!ctx.cr0.eq) goto loc_821A1CC8;
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x821a0e5c
	goto loc_821A0E5C;
loc_821A1CC8:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a1498
	if (!ctx.cr0.eq) goto loc_821A1498;
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1ce0
	if (ctx.cr0.eq) goto loc_821A1CE0;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A1CE0:
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821A1CF4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1d54
	if (ctx.cr0.eq) goto loc_821A1D54;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821a1d34
	if (!ctx.cr6.lt) goto loc_821A1D34;
loc_821A1D08:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a1d08
	if (ctx.cr6.lt) goto loc_821A1D08;
loc_821A1D34:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821A1D54:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A1D5C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x821a1db8
	goto loc_821A1DB8;
loc_821A1D7C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// slw r11,r23,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_821A1DB8:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821a1d7c
	if (ctx.cr6.gt) goto loc_821A1D7C;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r9,r8,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821a1e6c
	if (!ctx.cr0.eq) goto loc_821A1E6C;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,89(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// slw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r8.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x821a1e40
	goto loc_821A1E40;
loc_821A1E00:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lbz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// slw r10,r8,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// slw r10,r23,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r5.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// srw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
loc_821A1E40:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821a1e00
	if (ctx.cr6.gt) goto loc_821A1E00;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
loc_821A1E6C:
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// rlwinm. r10,r9,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// beq 0x821a1e8c
	if (ctx.cr0.eq) goto loc_821A1E8C;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A1E8C:
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_821A1EA4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a1f04
	if (ctx.cr0.eq) goto loc_821A1F04;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821a1ee4
	if (!ctx.cr6.lt) goto loc_821A1EE4;
loc_821A1EB8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a1eb8
	if (ctx.cr6.lt) goto loc_821A1EB8;
loc_821A1EE4:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_821A1F04:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r21,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r21.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821a1f24
	if (!ctx.cr6.gt) goto loc_821A1F24;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x821a0f5c
	goto loc_821A0F5C;
loc_821A1F24:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A1F2C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// subf r9,r21,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r21.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821a1f88
	if (!ctx.cr6.gt) goto loc_821A1F88;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821a1f6c
	if (!ctx.cr6.gt) goto loc_821A1F6C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x821a1f78
	goto loc_821A1F78;
loc_821A1F6C:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_821A1F78:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821a1f94
	if (!ctx.cr6.gt) goto loc_821A1F94;
	// b 0x821a1f90
	goto loc_821A1F90;
loc_821A1F88:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// subf r9,r11,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r11.u64;
loc_821A1F90:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821A1F94:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x821a1fa0
	if (!ctx.cr6.gt) goto loc_821A1FA0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_821A1FA0:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r21,r11,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r11.u64;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_821A1FAC:
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r10,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r10.u8);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// bne 0x821a1fac
	if (!ctx.cr0.eq) goto loc_821A1FAC;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a2128
	if (!ctx.cr6.eq) goto loc_821A2128;
loc_821A1FD0:
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x821a0e5c
	goto loc_821A0E5C;
loc_821A1FD8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// stb r11,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x821a1fd0
	goto loc_821A1FD0;
loc_821A1FF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a20c8
	if (ctx.cr6.eq) goto loc_821A20C8;
	// b 0x821a2024
	goto loc_821A2024;
loc_821A2004:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A2024:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// blt cr6,0x821a2004
	if (ctx.cr6.lt) goto loc_821A2004;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// subf. r5,r21,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq 0x821a2074
	if (ctx.cr0.eq) goto loc_821A2074;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r4,r5,r20
	ctx.r4.u64 = ctx.r20.u64 - ctx.r5.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a2068
	if (ctx.cr6.eq) goto loc_821A2068;
	// bl 0x8219fcb8
	ctx.lr = 0x821A2064;
	sub_8219FCB8(ctx, base);
	// b 0x821a206c
	goto loc_821A206C;
loc_821A2068:
	// bl 0x821a2c90
	ctx.lr = 0x821A206C;
	sub_821A2C90(ctx, base);
loc_821A206C:
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,48(r24)
	REX_STORE_U32(ctx.r24.u32 + 48, ctx.r3.u32);
loc_821A2074:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a208c
	if (ctx.cr6.eq) goto loc_821A208C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x821a20ac
	goto loc_821A20AC;
loc_821A208C:
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r29,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r29,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r29,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821A20AC:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821a20c0
	if (ctx.cr6.eq) goto loc_821A20C0;
	// stw r14,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r14.u32);
	// b 0x821a2124
	goto loc_821A2124;
loc_821A20C0:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_821A20C8:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A20D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a2168
	if (ctx.cr6.eq) goto loc_821A2168;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a2168
	if (ctx.cr6.eq) goto loc_821A2168;
	// b 0x821a210c
	goto loc_821A210C;
loc_821A20EC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a2180
	if (ctx.cr6.eq) goto loc_821A2180;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_821A210C:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// blt cr6,0x821a20ec
	if (ctx.cr6.lt) goto loc_821A20EC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821a2160
	if (ctx.cr6.eq) goto loc_821A2160;
	// stw r15,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r15.u32);
loc_821A2124:
	// stw r22,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_821A2128:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// ble cr6,0x821a0e20
	if (!ctx.cr6.gt) goto loc_821A0E20;
loc_821A2134:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_821A2138:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82272e60
	__restgprlr_14(ctx, base);
	return;
loc_821A2140:
	// stw r20,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r20.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r21,16(r24)
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r21.u32);
	// stw r26,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r25,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r25.u32);
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// b 0x821a2138
	goto loc_821A2138;
loc_821A2160:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_821A2168:
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A2170:
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// b 0x821a2180
	goto loc_821A2180;
loc_821A2178:
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_821A2180:
	// stw r20,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r20.u32);
	// stw r21,16(r24)
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r21.u32);
	// stw r26,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r25,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r25.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a21c0
	if (!ctx.cr6.eq) goto loc_821A21C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x821a21e4
	if (!ctx.cr6.lt) goto loc_821A21E4;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821a21e4
	if (ctx.cr6.eq) goto loc_821A21E4;
loc_821A21C0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x821a0b80
	ctx.lr = 0x821A21CC;
	sub_821A0B80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821a21e4
	if (ctx.cr0.eq) goto loc_821A21E4;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a2138
	goto loc_821A2138;
loc_821A21E4:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// subf r29,r11,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r30,r10,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r10.u32);
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x821a2264
	if (ctx.cr6.eq) goto loc_821A2264;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a2264
	if (ctx.cr6.eq) goto loc_821A2264;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// subf r4,r30,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r30.u64;
	// beq cr6,0x821a2258
	if (ctx.cr6.eq) goto loc_821A2258;
	// bl 0x8219fcb8
	ctx.lr = 0x821A2254;
	sub_8219FCB8(ctx, base);
	// b 0x821a225c
	goto loc_821A225C;
loc_821A2258:
	// bl 0x821a2c90
	ctx.lr = 0x821A225C;
	sub_821A2C90(ctx, base);
loc_821A225C:
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,48(r24)
	REX_STORE_U32(ctx.r24.u32 + 48, ctx.r3.u32);
loc_821A2264:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// rlwinm r9,r8,2,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r24)
	REX_STORE_U32(ctx.r24.u32 + 44, ctx.r11.u32);
	// bne cr6,0x821a22a4
	if (!ctx.cr6.eq) goto loc_821A22A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a22b0
	if (ctx.cr6.eq) goto loc_821A22B0;
loc_821A22A4:
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821a22c4
	if (!ctx.cr6.eq) goto loc_821A22C4;
loc_821A22B0:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a2138
	if (!ctx.cr6.eq) goto loc_821A2138;
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x821a2138
	goto loc_821A2138;
loc_821A22C4:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x821a2138
	goto loc_821A2138;
loc_821A22CC:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x821a2138
	goto loc_821A2138;
}

DEFINE_REX_FUNC(sub_82248418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x82248420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27496
	ctx.r11.s64 = ctx.r11.s64 + -27496;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82249218
	ctx.lr = 0x8224843C;
	sub_82249218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248320
	ctx.lr = 0x82248444;
	sub_82248320(ctx, base);
	// lbz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 68);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x822484a4
	if (ctx.cr6.eq) goto loc_822484A4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8224845C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82248490
	if (ctx.cr6.eq) goto loc_82248490;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82248484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_82248490:
	// lbz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 68);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224845c
	if (ctx.cr6.lt) goto loc_8224845C;
loc_822484A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248b08
	ctx.lr = 0x822484AC;
	sub_82248B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224D6E8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8224cc08
	sub_8224CC08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224D730) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8224f3f8
	sub_8224F3F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224E070) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e38
	ctx.lr = 0x8224E078;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lbz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e0cc
	if (ctx.cr6.eq) goto loc_8224E0CC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8224E09C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x8223ed68
	ctx.lr = 0x8224E0A8;
	sub_8223ED68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8224e0c8
	if (ctx.cr6.eq) goto loc_8224E0C8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224e09c
	if (ctx.cr6.lt) goto loc_8224E09C;
	// b 0x8224e0cc
	goto loc_8224E0CC;
loc_8224E0C8:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8224E0CC:
	// bl 0x828b00fc
	ctx.lr = 0x8224E0D0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,-30684
	ctx.r27.s64 = ctx.r11.s64 + -30684;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8224e0f8
	if (ctx.cr6.eq) goto loc_8224E0F8;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e10c
	if (ctx.cr6.eq) goto loc_8224E10C;
loc_8224E0F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828afbfc
	ctx.lr = 0x8224E100;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r31,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// stb r30,12(r27)
	REX_STORE_U8(ctx.r27.u32 + 12, ctx.r30.u8);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_8224E10C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// stw r10,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8224e2a4
	if (ctx.cr6.eq) goto loc_8224E2A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r30,r11,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8224e2a4
	if (ctx.cr6.eq) goto loc_8224E2A4;
	// lbz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e2a4
	if (ctx.cr6.eq) goto loc_8224E2A4;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e2a4
	if (ctx.cr6.eq) goto loc_8224E2A4;
	// lbz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 118);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e1ac
	if (ctx.cr6.eq) goto loc_8224E1AC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e2a4
	if (ctx.cr6.eq) goto loc_8224E2A4;
	// lbz r11,119(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 119);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224e2a4
	if (!ctx.cr6.eq) goto loc_8224E2A4;
	// lbz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e1a4
	if (ctx.cr6.eq) goto loc_8224E1A4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8224E180:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,184(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223f090
	ctx.lr = 0x8224E190;
	sub_8223F090(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224e180
	if (ctx.cr6.lt) goto loc_8224E180;
loc_8224E1A4:
	// stb r24,119(r30)
	REX_STORE_U8(ctx.r30.u32 + 119, ctx.r24.u8);
	// b 0x8224e2a0
	goto loc_8224E2A0;
loc_8224E1AC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e200
	if (ctx.cr6.eq) goto loc_8224E200;
	// lbz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e200
	if (ctx.cr6.eq) goto loc_8224E200;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8224E1CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x8223f2a0
	ctx.lr = 0x8224E1D8;
	sub_8223F2A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e1f8
	if (!ctx.cr6.eq) goto loc_8224E1F8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224e1cc
	if (ctx.cr6.lt) goto loc_8224E1CC;
	// b 0x8224e1fc
	goto loc_8224E1FC;
loc_8224E1F8:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8224E1FC:
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_8224E200:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e2a4
	if (ctx.cr6.eq) goto loc_8224E2A4;
	// lbz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e29c
	if (ctx.cr6.eq) goto loc_8224E29C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r26,3
	ctx.r26.s64 = 3;
loc_8224E220:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r10,-128
	ctx.r29.s64 = ctx.r10.s64 + -128;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stb r24,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r24.u8);
	// bl 0x8224c818
	ctx.lr = 0x8224E254;
	sub_8224C818(ctx, base);
	// rlwinm r11,r29,25,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 25) & 0x3;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x8224c8e8
	ctx.lr = 0x8224E270;
	sub_8224C8E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 184);
	// stb r26,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r26.u8);
	// bl 0x8223f228
	ctx.lr = 0x8224E288;
	sub_8223F228(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224e220
	if (ctx.cr6.lt) goto loc_8224E220;
loc_8224E29C:
	// stb r24,118(r30)
	REX_STORE_U8(ctx.r30.u32 + 118, ctx.r24.u8);
loc_8224E2A0:
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_8224E2A4:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8224e2ec
	if (ctx.cr6.eq) goto loc_8224E2EC;
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8224e2ec
	if (!ctx.cr6.eq) goto loc_8224E2EC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8224e2ec
	if (!ctx.cr6.eq) goto loc_8224E2EC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lbz r31,12(r27)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r27.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,12(r27)
	REX_STORE_U8(ctx.r27.u32 + 12, ctx.r11.u8);
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bl 0x828afbec
	ctx.lr = 0x8224E2E4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b010c
	ctx.lr = 0x8224E2EC;
	__imp__KfLowerIrql(ctx, base);
loc_8224E2EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82272e88
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82261888) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82261808
	sub_82261808(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822618C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82261D40) {
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
	// bl 0x82264618
	ctx.lr = 0x82261D58;
	sub_82264618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82261dc4
	if (ctx.cr0.lt) goto loc_82261DC4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82261d98
	if (!ctx.cr6.eq) goto loc_82261D98;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82261d90
	goto loc_82261D90;
loc_82261D74:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82261D90:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82261d74
	if (!ctx.cr0.eq) goto loc_82261D74;
loc_82261D98:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82261dc4
	if (!ctx.cr6.eq) goto loc_82261DC4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82261dc4
	if (ctx.cr0.eq) goto loc_82261DC4;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bl 0x8223ca88
	ctx.lr = 0x82261DC4;
	sub_8223CA88(ctx, base);
loc_82261DC4:
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

DEFINE_REX_FUNC(sub_82263458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e40
	ctx.lr = 0x82263460;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r26,r31,1272
	ctx.r26.s64 = ctx.r31.s64 + 1272;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x828afb6c
	ctx.lr = 0x82263484;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,278
	ctx.r11.s64 = ctx.r30.s64 + 278;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822634a4
	if (!ctx.cr0.eq) goto loc_822634A4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x822634c0
	goto loc_822634C0;
loc_822634A4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,-17344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -17344);
	// bl 0x82267d58
	ctx.lr = 0x822634BC;
	sub_82267D58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822634C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828afb5c
	ctx.lr = 0x822634C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82272e90
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82264748) {
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
	// bl 0x822689a0
	ctx.lr = 0x8226475C;
	sub_822689A0(ctx, base);
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

DEFINE_REX_FUNC(sub_822653E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e44
	ctx.lr = 0x822653E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// li r3,20
	ctx.r3.s64 = 20;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82239f98
	ctx.lr = 0x82265408;
	sub_82239F98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82265434
	if (!ctx.cr0.eq) goto loc_82265434;
loc_82265410:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// bl 0x822652f8
	ctx.lr = 0x82265420;
	sub_822652F8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82265424:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e94
	__restgprlr_27(ctx, base);
	return;
loc_82265434:
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82239f98
	ctx.lr = 0x82265448;
	sub_82239F98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq 0x82265410
	if (ctx.cr0.eq) goto loc_82265410;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82265424
	if (ctx.cr6.eq) goto loc_82265424;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82265460:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8226548c
	if (ctx.cr0.eq) goto loc_8226548C;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x82265490
	goto loc_82265490;
loc_8226548C:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82265490:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82265460
	if (!ctx.cr6.eq) goto loc_82265460;
	// b 0x82265424
	goto loc_82265424;
}

DEFINE_REX_FUNC(sub_82268390) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x8226840c
	if (ctx.cr6.lt) goto loc_8226840C;
	// beq cr6,0x822683d0
	if (ctx.cr6.eq) goto loc_822683D0;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x822683c0
	if (ctx.cr6.lt) goto loc_822683C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226850c
	goto loc_8226850C;
loc_822683C0:
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r5,r11,-20832
	ctx.r5.s64 = ctx.r11.s64 + -20832;
	// b 0x82268418
	goto loc_82268418;
loc_822683D0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82268400
	if (ctx.cr6.eq) goto loc_82268400;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_822683E0:
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sth r7,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// sth r8,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x822683e0
	if (!ctx.cr0.eq) goto loc_822683E0;
loc_82268400:
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82268410
	goto loc_82268410;
loc_8226840C:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82268410:
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r5,r11,-21088
	ctx.r5.s64 = ctx.r11.s64 + -21088;
loc_82268418:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82268504
	if (ctx.cr6.eq) goto loc_82268504;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f12,-17320(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + -17320);
	// lfd f13,-23920(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -23920);
loc_82268434:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82268484
	if (ctx.cr6.eq) goto loc_82268484;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_82268448:
	// lha r10,0(r7)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + 0));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,256(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// std r10,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// lfd f11,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f12
	ctx.f11.f64 = ctx.f11.f64 * ctx.f12.f64;
	// stfdx f11,r9,r3
	REX_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.f11.u64);
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// stw r10,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r10.u32);
	// bne 0x82268448
	if (!ctx.cr0.eq) goto loc_82268448;
loc_82268484:
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82268490:
	// rlwinm r30,r10,3,24,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xF8;
	// lfd f11,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfdx f10,r30,r3
	ctx.f10.u64 = REX_LOAD_U64(ctx.r30.u32 + ctx.r3.u32);
	// fmadd f0,f10,f11,f0
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f0.f64);
	// bne 0x82268490
	if (!ctx.cr0.eq) goto loc_82268490;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r10,-32767
	ctx.r11.s64 = ctx.r10.s64 + -32767;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// blt cr6,0x82268434
	if (ctx.cr6.lt) goto loc_82268434;
loc_82268504:
	// divwu r3,r8,r31
	ctx.r3.u64 = uint32_t(ctx.r31.u32 ? ctx.r8.u32 / ctx.r31.u32 : 0);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
loc_8226850C:
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82271EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x82271EC8;
	__savegprlr_28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r31,16384
	ctx.r31.s64 = 16384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,21176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21176);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,15252(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15252);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,-1720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -1720);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f10,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f10.u32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// lwz r30,-48(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// mullw r11,r8,r30
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,-48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// divw r28,r5,r10
	ctx.r28.u64 = uint32_t((ctx.r10.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r5.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// bge cr6,0x82271f50
	if (!ctx.cr6.lt) goto loc_82271F50;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82271F38:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// blt cr6,0x82271f38
	if (ctx.cr6.lt) goto loc_82271F38;
loc_82271F50:
	// addi r10,r28,2048
	ctx.r10.s64 = ctx.r28.s64 + 2048;
	// srawi r5,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 12;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82272000
	if (!ctx.cr6.lt) goto loc_82272000;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32101
	ctx.r10.s64 = -2103771136;
	// lfs f10,1828(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1828);
	ctx.f10.f64 = double(temp.f32);
	// lwz r29,-19832(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -19832);
loc_82271F74:
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// stfs f13,-48(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r31,r31,-32768
	ctx.r31.s64 = ctx.r31.s64 + -32768;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82271fdc
	if (!ctx.cr6.lt) goto loc_82271FDC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
loc_82271F90:
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lfsx f9,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lwz r11,-44(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82271fc4
	if (!ctx.cr6.gt) goto loc_82271FC4;
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
loc_82271FC4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82271f90
	if (ctx.cr6.lt) goto loc_82271F90;
loc_82271FDC:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,-48(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f9.f64 = double(temp.f32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// srawi r5,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 12;
	// lfsx f0,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// fmadds f12,f0,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// blt cr6,0x82271f74
	if (ctx.cr6.lt) goto loc_82271F74;
loc_82272000:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,22400(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22400);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fmuls f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_95) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_127) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82276DF0) {
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
	// lis r31,-32101
	ctx.r31.s64 = -2103771136;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,-18688(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -18688);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82276e30
	if (ctx.cr6.eq) goto loc_82276E30;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// lwz r11,-30276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-18688(r31)
	REX_STORE_U32(ctx.r31.u32 + -18688, ctx.r11.u32);
loc_82276E30:
	// lis r31,-32101
	ctx.r31.s64 = -2103771136;
	// lwz r3,-18684(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -18684);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82276e4c
	if (ctx.cr6.eq) goto loc_82276E4C;
	// bl 0x828b023c
	ctx.lr = 0x82276E44;
	__imp__KeTlsFree(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-18684(r31)
	REX_STORE_U32(ctx.r31.u32 + -18684, ctx.r11.u32);
loc_82276E4C:
	// bl 0x8227d770
	ctx.lr = 0x82276E50;
	sub_8227D770(ctx, base);
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

DEFINE_REX_FUNC(sub_82277F08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e3c
	ctx.lr = 0x82277F10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82276f28
	ctx.lr = 0x82277F34;
	sub_82276F28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822809b8
	ctx.lr = 0x82277F5C;
	sub_822809B8(ctx, base);
	// bl 0x82276f28
	ctx.lr = 0x82277F60;
	sub_82276F28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82272e8c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227B7A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e48
	ctx.lr = 0x8227B7B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227b830
	if (ctx.cr0.eq) goto loc_8227B830;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227b830
	if (!ctx.cr6.eq) goto loc_8227B830;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8227b838
	goto loc_8227B838;
loc_8227B7EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x8227a9e0
	ctx.lr = 0x8227B800;
	sub_8227A9E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8227b830
	if (!ctx.cr6.eq) goto loc_8227B830;
	// bl 0x82279410
	ctx.lr = 0x8227B814;
	sub_82279410(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x8227b838
	if (!ctx.cr6.eq) goto loc_8227B838;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8227a9e0
	ctx.lr = 0x8227B830;
	sub_8227A9E0(ctx, base);
loc_8227B830:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x8227b7ec
	if (ctx.cr6.gt) goto loc_8227B7EC;
loc_8227B838:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82272e98
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82281030) {
	REX_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82275410
	sub_82275410(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82281478) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82272e38
	ctx.lr = 0x82281480;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// std r24,80(r31)
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// bne cr6,0x822814cc
	if (!ctx.cr6.eq) goto loc_822814CC;
	// bl 0x82279448
	ctx.lr = 0x822814AC;
	sub_82279448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82279410
	ctx.lr = 0x822814B8;
	sub_82279410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822815b0
	goto loc_822815B0;
loc_822814CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822814e4
	if (ctx.cr6.lt) goto loc_822814E4;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// lwz r11,10320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 10320);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82281520
	if (ctx.cr6.lt) goto loc_82281520;
loc_822814E4:
	// bl 0x82279448
	ctx.lr = 0x822814E8;
	sub_82279448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82279410
	ctx.lr = 0x822814F4;
	sub_82279410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	ctx.lr = 0x82281518;
	sub_822792D8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822815b0
	goto loc_822815B0;
loc_82281520:
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r29,r11,10336
	ctx.r29.s64 = ctx.r11.s64 + 10336;
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r28,r11,44
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(44));
	// lwzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822814e4
	if (ctx.cr0.eq) goto loc_822814E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281940
	ctx.lr = 0x82281554;
	sub_82281940(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82281584
	if (ctx.cr0.eq) goto loc_82281584;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822813a8
	ctx.lr = 0x8228157C;
	sub_822813A8(ctx, base);
	// std r3,80(r31)
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// b 0x822815a0
	goto loc_822815A0;
loc_82281584:
	// bl 0x82279410
	ctx.lr = 0x82281588;
	sub_82279410(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82279448
	ctx.lr = 0x82281594;
	sub_82279448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r24,80(r31)
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
loc_822815A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x822815d8
	ctx.lr = 0x822815AC;
	sub_822815D8(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r31.u32 + 80);
loc_822815B0:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82272e88
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_828A4C78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,13(r10)
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,15(r10)
	REX_STORE_U8(ctx.r10.u32 + 15, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,17(r11)
	REX_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,19(r11)
	REX_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,822
	ctx.r11.s64 = ctx.r11.s64 + 822;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,822
	ctx.r11.s64 = ctx.r11.s64 + 822;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,822
	ctx.r11.s64 = ctx.r11.s64 + 822;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,22(r10)
	REX_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,822
	ctx.r11.s64 = ctx.r11.s64 + 822;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,828
	ctx.r11.s64 = ctx.r11.s64 + 828;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,28(r10)
	REX_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,828
	ctx.r11.s64 = ctx.r11.s64 + 828;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,29(r10)
	REX_STORE_U8(ctx.r10.u32 + 29, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,828
	ctx.r11.s64 = ctx.r11.s64 + 828;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,30(r10)
	REX_STORE_U8(ctx.r10.u32 + 30, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,828
	ctx.r11.s64 = ctx.r11.s64 + 828;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,31(r10)
	REX_STORE_U8(ctx.r10.u32 + 31, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,34(r11)
	REX_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,834
	ctx.r11.s64 = ctx.r11.s64 + 834;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,834
	ctx.r11.s64 = ctx.r11.s64 + 834;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,37(r10)
	REX_STORE_U8(ctx.r10.u32 + 37, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,834
	ctx.r11.s64 = ctx.r11.s64 + 834;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,38(r10)
	REX_STORE_U8(ctx.r10.u32 + 38, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,834
	ctx.r11.s64 = ctx.r11.s64 + 834;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,39(r10)
	REX_STORE_U8(ctx.r10.u32 + 39, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,41(r11)
	REX_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,42(r11)
	REX_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,43(r11)
	REX_STORE_U8(ctx.r11.u32 + 43, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,840
	ctx.r11.s64 = ctx.r11.s64 + 840;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,44(r10)
	REX_STORE_U8(ctx.r10.u32 + 44, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,840
	ctx.r11.s64 = ctx.r11.s64 + 840;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,840
	ctx.r11.s64 = ctx.r11.s64 + 840;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,46(r10)
	REX_STORE_U8(ctx.r10.u32 + 46, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,840
	ctx.r11.s64 = ctx.r11.s64 + 840;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,47(r10)
	REX_STORE_U8(ctx.r10.u32 + 47, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,48(r11)
	REX_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,49(r11)
	REX_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,50(r11)
	REX_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,51(r11)
	REX_STORE_U8(ctx.r11.u32 + 51, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,846
	ctx.r11.s64 = ctx.r11.s64 + 846;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,52(r10)
	REX_STORE_U8(ctx.r10.u32 + 52, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,846
	ctx.r11.s64 = ctx.r11.s64 + 846;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,53(r10)
	REX_STORE_U8(ctx.r10.u32 + 53, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,846
	ctx.r11.s64 = ctx.r11.s64 + 846;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,54(r10)
	REX_STORE_U8(ctx.r10.u32 + 54, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,846
	ctx.r11.s64 = ctx.r11.s64 + 846;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,55(r10)
	REX_STORE_U8(ctx.r10.u32 + 55, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,57(r11)
	REX_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,58(r11)
	REX_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,59(r11)
	REX_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,852
	ctx.r11.s64 = ctx.r11.s64 + 852;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,60(r10)
	REX_STORE_U8(ctx.r10.u32 + 60, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,852
	ctx.r11.s64 = ctx.r11.s64 + 852;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,61(r10)
	REX_STORE_U8(ctx.r10.u32 + 61, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,852
	ctx.r11.s64 = ctx.r11.s64 + 852;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,62(r10)
	REX_STORE_U8(ctx.r10.u32 + 62, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,852
	ctx.r11.s64 = ctx.r11.s64 + 852;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,63(r10)
	REX_STORE_U8(ctx.r10.u32 + 63, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,65(r11)
	REX_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,66(r11)
	REX_STORE_U8(ctx.r11.u32 + 66, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,67(r11)
	REX_STORE_U8(ctx.r11.u32 + 67, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,858
	ctx.r11.s64 = ctx.r11.s64 + 858;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,68(r10)
	REX_STORE_U8(ctx.r10.u32 + 68, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,858
	ctx.r11.s64 = ctx.r11.s64 + 858;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,69(r10)
	REX_STORE_U8(ctx.r10.u32 + 69, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,858
	ctx.r11.s64 = ctx.r11.s64 + 858;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,70(r10)
	REX_STORE_U8(ctx.r10.u32 + 70, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,858
	ctx.r11.s64 = ctx.r11.s64 + 858;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,71(r10)
	REX_STORE_U8(ctx.r10.u32 + 71, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,73(r11)
	REX_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,75(r11)
	REX_STORE_U8(ctx.r11.u32 + 75, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,81(r11)
	REX_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,82(r11)
	REX_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,83(r11)
	REX_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,870
	ctx.r11.s64 = ctx.r11.s64 + 870;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,84(r10)
	REX_STORE_U8(ctx.r10.u32 + 84, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,870
	ctx.r11.s64 = ctx.r11.s64 + 870;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,85(r10)
	REX_STORE_U8(ctx.r10.u32 + 85, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,870
	ctx.r11.s64 = ctx.r11.s64 + 870;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,86(r10)
	REX_STORE_U8(ctx.r10.u32 + 86, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,870
	ctx.r11.s64 = ctx.r11.s64 + 870;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,87(r10)
	REX_STORE_U8(ctx.r10.u32 + 87, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,876
	ctx.r11.s64 = ctx.r11.s64 + 876;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,92(r10)
	REX_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,876
	ctx.r11.s64 = ctx.r11.s64 + 876;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,93(r10)
	REX_STORE_U8(ctx.r10.u32 + 93, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,876
	ctx.r11.s64 = ctx.r11.s64 + 876;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,94(r10)
	REX_STORE_U8(ctx.r10.u32 + 94, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,876
	ctx.r11.s64 = ctx.r11.s64 + 876;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,95(r10)
	REX_STORE_U8(ctx.r10.u32 + 95, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,96(r11)
	REX_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,97(r11)
	REX_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,98(r11)
	REX_STORE_U8(ctx.r11.u32 + 98, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,99(r11)
	REX_STORE_U8(ctx.r11.u32 + 99, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,882
	ctx.r11.s64 = ctx.r11.s64 + 882;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,100(r10)
	REX_STORE_U8(ctx.r10.u32 + 100, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,882
	ctx.r11.s64 = ctx.r11.s64 + 882;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,101(r10)
	REX_STORE_U8(ctx.r10.u32 + 101, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,882
	ctx.r11.s64 = ctx.r11.s64 + 882;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,102(r10)
	REX_STORE_U8(ctx.r10.u32 + 102, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,882
	ctx.r11.s64 = ctx.r11.s64 + 882;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,103(r10)
	REX_STORE_U8(ctx.r10.u32 + 103, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,106(r11)
	REX_STORE_U8(ctx.r11.u32 + 106, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,888
	ctx.r11.s64 = ctx.r11.s64 + 888;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,108(r10)
	REX_STORE_U8(ctx.r10.u32 + 108, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,888
	ctx.r11.s64 = ctx.r11.s64 + 888;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,109(r10)
	REX_STORE_U8(ctx.r10.u32 + 109, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,888
	ctx.r11.s64 = ctx.r11.s64 + 888;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,110(r10)
	REX_STORE_U8(ctx.r10.u32 + 110, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,888
	ctx.r11.s64 = ctx.r11.s64 + 888;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,111(r10)
	REX_STORE_U8(ctx.r10.u32 + 111, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,113(r11)
	REX_STORE_U8(ctx.r11.u32 + 113, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,114(r11)
	REX_STORE_U8(ctx.r11.u32 + 114, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,115(r11)
	REX_STORE_U8(ctx.r11.u32 + 115, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,116(r10)
	REX_STORE_U8(ctx.r10.u32 + 116, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,117(r10)
	REX_STORE_U8(ctx.r10.u32 + 117, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,118(r10)
	REX_STORE_U8(ctx.r10.u32 + 118, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,894
	ctx.r11.s64 = ctx.r11.s64 + 894;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,119(r10)
	REX_STORE_U8(ctx.r10.u32 + 119, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,120(r11)
	REX_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,121(r11)
	REX_STORE_U8(ctx.r11.u32 + 121, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,122(r11)
	REX_STORE_U8(ctx.r11.u32 + 122, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,123(r11)
	REX_STORE_U8(ctx.r11.u32 + 123, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,124(r10)
	REX_STORE_U8(ctx.r10.u32 + 124, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,125(r10)
	REX_STORE_U8(ctx.r10.u32 + 125, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,126(r10)
	REX_STORE_U8(ctx.r10.u32 + 126, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,127(r10)
	REX_STORE_U8(ctx.r10.u32 + 127, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,129(r11)
	REX_STORE_U8(ctx.r11.u32 + 129, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,130(r11)
	REX_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,131(r11)
	REX_STORE_U8(ctx.r11.u32 + 131, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,906
	ctx.r11.s64 = ctx.r11.s64 + 906;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,132(r10)
	REX_STORE_U8(ctx.r10.u32 + 132, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,906
	ctx.r11.s64 = ctx.r11.s64 + 906;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,133(r10)
	REX_STORE_U8(ctx.r10.u32 + 133, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,906
	ctx.r11.s64 = ctx.r11.s64 + 906;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,134(r10)
	REX_STORE_U8(ctx.r10.u32 + 134, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,906
	ctx.r11.s64 = ctx.r11.s64 + 906;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,135(r10)
	REX_STORE_U8(ctx.r10.u32 + 135, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,136(r10)
	REX_STORE_U8(ctx.r10.u32 + 136, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,137(r10)
	REX_STORE_U8(ctx.r10.u32 + 137, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,138(r10)
	REX_STORE_U8(ctx.r10.u32 + 138, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,139(r10)
	REX_STORE_U8(ctx.r10.u32 + 139, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,140(r11)
	REX_STORE_U8(ctx.r11.u32 + 140, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,141(r11)
	REX_STORE_U8(ctx.r11.u32 + 141, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,142(r11)
	REX_STORE_U8(ctx.r11.u32 + 142, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,143(r11)
	REX_STORE_U8(ctx.r11.u32 + 143, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,912
	ctx.r11.s64 = ctx.r11.s64 + 912;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,144(r10)
	REX_STORE_U8(ctx.r10.u32 + 144, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,912
	ctx.r11.s64 = ctx.r11.s64 + 912;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,145(r10)
	REX_STORE_U8(ctx.r10.u32 + 145, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,912
	ctx.r11.s64 = ctx.r11.s64 + 912;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,146(r10)
	REX_STORE_U8(ctx.r10.u32 + 146, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,912
	ctx.r11.s64 = ctx.r11.s64 + 912;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,147(r10)
	REX_STORE_U8(ctx.r10.u32 + 147, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,148(r11)
	REX_STORE_U8(ctx.r11.u32 + 148, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,149(r11)
	REX_STORE_U8(ctx.r11.u32 + 149, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,150(r11)
	REX_STORE_U8(ctx.r11.u32 + 150, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,151(r11)
	REX_STORE_U8(ctx.r11.u32 + 151, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,918
	ctx.r11.s64 = ctx.r11.s64 + 918;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,152(r10)
	REX_STORE_U8(ctx.r10.u32 + 152, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,918
	ctx.r11.s64 = ctx.r11.s64 + 918;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,153(r10)
	REX_STORE_U8(ctx.r10.u32 + 153, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,918
	ctx.r11.s64 = ctx.r11.s64 + 918;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,154(r10)
	REX_STORE_U8(ctx.r10.u32 + 154, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,918
	ctx.r11.s64 = ctx.r11.s64 + 918;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,155(r10)
	REX_STORE_U8(ctx.r10.u32 + 155, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,156(r11)
	REX_STORE_U8(ctx.r11.u32 + 156, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,157(r11)
	REX_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,158(r11)
	REX_STORE_U8(ctx.r11.u32 + 158, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,159(r11)
	REX_STORE_U8(ctx.r11.u32 + 159, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,924
	ctx.r11.s64 = ctx.r11.s64 + 924;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,160(r10)
	REX_STORE_U8(ctx.r10.u32 + 160, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,924
	ctx.r11.s64 = ctx.r11.s64 + 924;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,161(r10)
	REX_STORE_U8(ctx.r10.u32 + 161, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,924
	ctx.r11.s64 = ctx.r11.s64 + 924;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,162(r10)
	REX_STORE_U8(ctx.r10.u32 + 162, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,924
	ctx.r11.s64 = ctx.r11.s64 + 924;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,163(r10)
	REX_STORE_U8(ctx.r10.u32 + 163, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,164(r11)
	REX_STORE_U8(ctx.r11.u32 + 164, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,165(r11)
	REX_STORE_U8(ctx.r11.u32 + 165, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,166(r11)
	REX_STORE_U8(ctx.r11.u32 + 166, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,167(r11)
	REX_STORE_U8(ctx.r11.u32 + 167, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,930
	ctx.r11.s64 = ctx.r11.s64 + 930;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,168(r10)
	REX_STORE_U8(ctx.r10.u32 + 168, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,930
	ctx.r11.s64 = ctx.r11.s64 + 930;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,169(r10)
	REX_STORE_U8(ctx.r10.u32 + 169, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,930
	ctx.r11.s64 = ctx.r11.s64 + 930;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,170(r10)
	REX_STORE_U8(ctx.r10.u32 + 170, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,930
	ctx.r11.s64 = ctx.r11.s64 + 930;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,171(r10)
	REX_STORE_U8(ctx.r10.u32 + 171, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,172(r11)
	REX_STORE_U8(ctx.r11.u32 + 172, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,173(r11)
	REX_STORE_U8(ctx.r11.u32 + 173, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,174(r11)
	REX_STORE_U8(ctx.r11.u32 + 174, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,175(r11)
	REX_STORE_U8(ctx.r11.u32 + 175, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,936
	ctx.r11.s64 = ctx.r11.s64 + 936;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,176(r10)
	REX_STORE_U8(ctx.r10.u32 + 176, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,936
	ctx.r11.s64 = ctx.r11.s64 + 936;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,177(r10)
	REX_STORE_U8(ctx.r10.u32 + 177, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,936
	ctx.r11.s64 = ctx.r11.s64 + 936;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,178(r10)
	REX_STORE_U8(ctx.r10.u32 + 178, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,936
	ctx.r11.s64 = ctx.r11.s64 + 936;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,179(r10)
	REX_STORE_U8(ctx.r10.u32 + 179, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,180(r11)
	REX_STORE_U8(ctx.r11.u32 + 180, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,181(r11)
	REX_STORE_U8(ctx.r11.u32 + 181, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,182(r11)
	REX_STORE_U8(ctx.r11.u32 + 182, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,183(r11)
	REX_STORE_U8(ctx.r11.u32 + 183, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,942
	ctx.r11.s64 = ctx.r11.s64 + 942;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,184(r10)
	REX_STORE_U8(ctx.r10.u32 + 184, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,942
	ctx.r11.s64 = ctx.r11.s64 + 942;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,185(r10)
	REX_STORE_U8(ctx.r10.u32 + 185, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,942
	ctx.r11.s64 = ctx.r11.s64 + 942;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,186(r10)
	REX_STORE_U8(ctx.r10.u32 + 186, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,942
	ctx.r11.s64 = ctx.r11.s64 + 942;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,187(r10)
	REX_STORE_U8(ctx.r10.u32 + 187, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,190(r11)
	REX_STORE_U8(ctx.r11.u32 + 190, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,191(r11)
	REX_STORE_U8(ctx.r11.u32 + 191, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,948
	ctx.r11.s64 = ctx.r11.s64 + 948;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,192(r10)
	REX_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,948
	ctx.r11.s64 = ctx.r11.s64 + 948;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,193(r10)
	REX_STORE_U8(ctx.r10.u32 + 193, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,948
	ctx.r11.s64 = ctx.r11.s64 + 948;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,194(r10)
	REX_STORE_U8(ctx.r10.u32 + 194, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,948
	ctx.r11.s64 = ctx.r11.s64 + 948;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,195(r10)
	REX_STORE_U8(ctx.r10.u32 + 195, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,196(r11)
	REX_STORE_U8(ctx.r11.u32 + 196, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,197(r11)
	REX_STORE_U8(ctx.r11.u32 + 197, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,198(r11)
	REX_STORE_U8(ctx.r11.u32 + 198, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,199(r11)
	REX_STORE_U8(ctx.r11.u32 + 199, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,954
	ctx.r11.s64 = ctx.r11.s64 + 954;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,200(r10)
	REX_STORE_U8(ctx.r10.u32 + 200, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,954
	ctx.r11.s64 = ctx.r11.s64 + 954;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,201(r10)
	REX_STORE_U8(ctx.r10.u32 + 201, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,954
	ctx.r11.s64 = ctx.r11.s64 + 954;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,202(r10)
	REX_STORE_U8(ctx.r10.u32 + 202, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,954
	ctx.r11.s64 = ctx.r11.s64 + 954;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,203(r10)
	REX_STORE_U8(ctx.r10.u32 + 203, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,204(r11)
	REX_STORE_U8(ctx.r11.u32 + 204, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,205(r11)
	REX_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,206(r11)
	REX_STORE_U8(ctx.r11.u32 + 206, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,207(r11)
	REX_STORE_U8(ctx.r11.u32 + 207, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,208(r10)
	REX_STORE_U8(ctx.r10.u32 + 208, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,209(r10)
	REX_STORE_U8(ctx.r10.u32 + 209, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,210(r10)
	REX_STORE_U8(ctx.r10.u32 + 210, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,211(r10)
	REX_STORE_U8(ctx.r10.u32 + 211, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,212(r11)
	REX_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,213(r11)
	REX_STORE_U8(ctx.r11.u32 + 213, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,214(r11)
	REX_STORE_U8(ctx.r11.u32 + 214, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,215(r11)
	REX_STORE_U8(ctx.r11.u32 + 215, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,966
	ctx.r11.s64 = ctx.r11.s64 + 966;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,216(r10)
	REX_STORE_U8(ctx.r10.u32 + 216, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,966
	ctx.r11.s64 = ctx.r11.s64 + 966;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,217(r10)
	REX_STORE_U8(ctx.r10.u32 + 217, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,966
	ctx.r11.s64 = ctx.r11.s64 + 966;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,218(r10)
	REX_STORE_U8(ctx.r10.u32 + 218, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,966
	ctx.r11.s64 = ctx.r11.s64 + 966;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,219(r10)
	REX_STORE_U8(ctx.r10.u32 + 219, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,220(r11)
	REX_STORE_U8(ctx.r11.u32 + 220, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,221(r11)
	REX_STORE_U8(ctx.r11.u32 + 221, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,222(r11)
	REX_STORE_U8(ctx.r11.u32 + 222, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,223(r11)
	REX_STORE_U8(ctx.r11.u32 + 223, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,972
	ctx.r11.s64 = ctx.r11.s64 + 972;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,224(r10)
	REX_STORE_U8(ctx.r10.u32 + 224, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,972
	ctx.r11.s64 = ctx.r11.s64 + 972;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,225(r10)
	REX_STORE_U8(ctx.r10.u32 + 225, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,972
	ctx.r11.s64 = ctx.r11.s64 + 972;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,226(r10)
	REX_STORE_U8(ctx.r10.u32 + 226, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,972
	ctx.r11.s64 = ctx.r11.s64 + 972;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,227(r10)
	REX_STORE_U8(ctx.r10.u32 + 227, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,228(r11)
	REX_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,229(r11)
	REX_STORE_U8(ctx.r11.u32 + 229, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,230(r11)
	REX_STORE_U8(ctx.r11.u32 + 230, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,231(r11)
	REX_STORE_U8(ctx.r11.u32 + 231, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,978
	ctx.r11.s64 = ctx.r11.s64 + 978;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,232(r10)
	REX_STORE_U8(ctx.r10.u32 + 232, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,978
	ctx.r11.s64 = ctx.r11.s64 + 978;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,233(r10)
	REX_STORE_U8(ctx.r10.u32 + 233, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,978
	ctx.r11.s64 = ctx.r11.s64 + 978;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,234(r10)
	REX_STORE_U8(ctx.r10.u32 + 234, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,978
	ctx.r11.s64 = ctx.r11.s64 + 978;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,235(r10)
	REX_STORE_U8(ctx.r10.u32 + 235, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,236(r11)
	REX_STORE_U8(ctx.r11.u32 + 236, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,237(r11)
	REX_STORE_U8(ctx.r11.u32 + 237, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,238(r11)
	REX_STORE_U8(ctx.r11.u32 + 238, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,239(r11)
	REX_STORE_U8(ctx.r11.u32 + 239, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,984
	ctx.r11.s64 = ctx.r11.s64 + 984;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,240(r10)
	REX_STORE_U8(ctx.r10.u32 + 240, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,984
	ctx.r11.s64 = ctx.r11.s64 + 984;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,241(r10)
	REX_STORE_U8(ctx.r10.u32 + 241, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,984
	ctx.r11.s64 = ctx.r11.s64 + 984;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,242(r10)
	REX_STORE_U8(ctx.r10.u32 + 242, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,984
	ctx.r11.s64 = ctx.r11.s64 + 984;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,243(r10)
	REX_STORE_U8(ctx.r10.u32 + 243, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,244(r11)
	REX_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,245(r11)
	REX_STORE_U8(ctx.r11.u32 + 245, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,246(r11)
	REX_STORE_U8(ctx.r11.u32 + 246, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,247(r11)
	REX_STORE_U8(ctx.r11.u32 + 247, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,990
	ctx.r11.s64 = ctx.r11.s64 + 990;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,248(r10)
	REX_STORE_U8(ctx.r10.u32 + 248, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,990
	ctx.r11.s64 = ctx.r11.s64 + 990;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,249(r10)
	REX_STORE_U8(ctx.r10.u32 + 249, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,990
	ctx.r11.s64 = ctx.r11.s64 + 990;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,250(r10)
	REX_STORE_U8(ctx.r10.u32 + 250, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,990
	ctx.r11.s64 = ctx.r11.s64 + 990;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,251(r10)
	REX_STORE_U8(ctx.r10.u32 + 251, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,252(r11)
	REX_STORE_U8(ctx.r11.u32 + 252, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,253(r11)
	REX_STORE_U8(ctx.r11.u32 + 253, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,254(r11)
	REX_STORE_U8(ctx.r11.u32 + 254, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,255(r11)
	REX_STORE_U8(ctx.r11.u32 + 255, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,996
	ctx.r11.s64 = ctx.r11.s64 + 996;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,256(r10)
	REX_STORE_U8(ctx.r10.u32 + 256, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,996
	ctx.r11.s64 = ctx.r11.s64 + 996;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,257(r10)
	REX_STORE_U8(ctx.r10.u32 + 257, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,996
	ctx.r11.s64 = ctx.r11.s64 + 996;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,258(r10)
	REX_STORE_U8(ctx.r10.u32 + 258, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,996
	ctx.r11.s64 = ctx.r11.s64 + 996;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,259(r10)
	REX_STORE_U8(ctx.r10.u32 + 259, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,260(r11)
	REX_STORE_U8(ctx.r11.u32 + 260, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,261(r11)
	REX_STORE_U8(ctx.r11.u32 + 261, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,262(r11)
	REX_STORE_U8(ctx.r11.u32 + 262, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,263(r11)
	REX_STORE_U8(ctx.r11.u32 + 263, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1002
	ctx.r11.s64 = ctx.r11.s64 + 1002;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,264(r10)
	REX_STORE_U8(ctx.r10.u32 + 264, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1002
	ctx.r11.s64 = ctx.r11.s64 + 1002;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,265(r10)
	REX_STORE_U8(ctx.r10.u32 + 265, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1002
	ctx.r11.s64 = ctx.r11.s64 + 1002;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,266(r10)
	REX_STORE_U8(ctx.r10.u32 + 266, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1002
	ctx.r11.s64 = ctx.r11.s64 + 1002;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,267(r10)
	REX_STORE_U8(ctx.r10.u32 + 267, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,268(r10)
	REX_STORE_U8(ctx.r10.u32 + 268, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,269(r10)
	REX_STORE_U8(ctx.r10.u32 + 269, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,270(r10)
	REX_STORE_U8(ctx.r10.u32 + 270, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,271(r10)
	REX_STORE_U8(ctx.r10.u32 + 271, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,272(r11)
	REX_STORE_U8(ctx.r11.u32 + 272, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,273(r11)
	REX_STORE_U8(ctx.r11.u32 + 273, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,274(r11)
	REX_STORE_U8(ctx.r11.u32 + 274, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,275(r11)
	REX_STORE_U8(ctx.r11.u32 + 275, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1008
	ctx.r11.s64 = ctx.r11.s64 + 1008;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,276(r10)
	REX_STORE_U8(ctx.r10.u32 + 276, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1008
	ctx.r11.s64 = ctx.r11.s64 + 1008;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,277(r10)
	REX_STORE_U8(ctx.r10.u32 + 277, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1008
	ctx.r11.s64 = ctx.r11.s64 + 1008;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,278(r10)
	REX_STORE_U8(ctx.r10.u32 + 278, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1008
	ctx.r11.s64 = ctx.r11.s64 + 1008;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,279(r10)
	REX_STORE_U8(ctx.r10.u32 + 279, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,280(r11)
	REX_STORE_U8(ctx.r11.u32 + 280, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,281(r11)
	REX_STORE_U8(ctx.r11.u32 + 281, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,282(r11)
	REX_STORE_U8(ctx.r11.u32 + 282, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,283(r11)
	REX_STORE_U8(ctx.r11.u32 + 283, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1014
	ctx.r11.s64 = ctx.r11.s64 + 1014;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,284(r10)
	REX_STORE_U8(ctx.r10.u32 + 284, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1014
	ctx.r11.s64 = ctx.r11.s64 + 1014;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,285(r10)
	REX_STORE_U8(ctx.r10.u32 + 285, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1014
	ctx.r11.s64 = ctx.r11.s64 + 1014;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,286(r10)
	REX_STORE_U8(ctx.r10.u32 + 286, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1014
	ctx.r11.s64 = ctx.r11.s64 + 1014;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,287(r10)
	REX_STORE_U8(ctx.r10.u32 + 287, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,288(r11)
	REX_STORE_U8(ctx.r11.u32 + 288, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,289(r11)
	REX_STORE_U8(ctx.r11.u32 + 289, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,290(r11)
	REX_STORE_U8(ctx.r11.u32 + 290, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,291(r11)
	REX_STORE_U8(ctx.r11.u32 + 291, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1020
	ctx.r11.s64 = ctx.r11.s64 + 1020;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,292(r10)
	REX_STORE_U8(ctx.r10.u32 + 292, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1020
	ctx.r11.s64 = ctx.r11.s64 + 1020;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,293(r10)
	REX_STORE_U8(ctx.r10.u32 + 293, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1020
	ctx.r11.s64 = ctx.r11.s64 + 1020;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,294(r10)
	REX_STORE_U8(ctx.r10.u32 + 294, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1020
	ctx.r11.s64 = ctx.r11.s64 + 1020;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,295(r10)
	REX_STORE_U8(ctx.r10.u32 + 295, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,296(r11)
	REX_STORE_U8(ctx.r11.u32 + 296, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,297(r11)
	REX_STORE_U8(ctx.r11.u32 + 297, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,298(r11)
	REX_STORE_U8(ctx.r11.u32 + 298, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,299(r11)
	REX_STORE_U8(ctx.r11.u32 + 299, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,300(r10)
	REX_STORE_U8(ctx.r10.u32 + 300, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,301(r10)
	REX_STORE_U8(ctx.r10.u32 + 301, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,302(r10)
	REX_STORE_U8(ctx.r10.u32 + 302, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1026
	ctx.r11.s64 = ctx.r11.s64 + 1026;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,303(r10)
	REX_STORE_U8(ctx.r10.u32 + 303, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,304(r11)
	REX_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,305(r11)
	REX_STORE_U8(ctx.r11.u32 + 305, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,306(r11)
	REX_STORE_U8(ctx.r11.u32 + 306, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,307(r11)
	REX_STORE_U8(ctx.r11.u32 + 307, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,308(r10)
	REX_STORE_U8(ctx.r10.u32 + 308, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,309(r10)
	REX_STORE_U8(ctx.r10.u32 + 309, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,310(r10)
	REX_STORE_U8(ctx.r10.u32 + 310, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,311(r10)
	REX_STORE_U8(ctx.r10.u32 + 311, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,312(r11)
	REX_STORE_U8(ctx.r11.u32 + 312, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,313(r11)
	REX_STORE_U8(ctx.r11.u32 + 313, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,314(r11)
	REX_STORE_U8(ctx.r11.u32 + 314, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,315(r11)
	REX_STORE_U8(ctx.r11.u32 + 315, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1038
	ctx.r11.s64 = ctx.r11.s64 + 1038;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,316(r10)
	REX_STORE_U8(ctx.r10.u32 + 316, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1038
	ctx.r11.s64 = ctx.r11.s64 + 1038;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,317(r10)
	REX_STORE_U8(ctx.r10.u32 + 317, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1038
	ctx.r11.s64 = ctx.r11.s64 + 1038;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,318(r10)
	REX_STORE_U8(ctx.r10.u32 + 318, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1038
	ctx.r11.s64 = ctx.r11.s64 + 1038;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,319(r10)
	REX_STORE_U8(ctx.r10.u32 + 319, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,320(r11)
	REX_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,321(r11)
	REX_STORE_U8(ctx.r11.u32 + 321, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,322(r11)
	REX_STORE_U8(ctx.r11.u32 + 322, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,323(r11)
	REX_STORE_U8(ctx.r11.u32 + 323, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1044
	ctx.r11.s64 = ctx.r11.s64 + 1044;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,324(r10)
	REX_STORE_U8(ctx.r10.u32 + 324, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1044
	ctx.r11.s64 = ctx.r11.s64 + 1044;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,325(r10)
	REX_STORE_U8(ctx.r10.u32 + 325, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1044
	ctx.r11.s64 = ctx.r11.s64 + 1044;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,326(r10)
	REX_STORE_U8(ctx.r10.u32 + 326, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1044
	ctx.r11.s64 = ctx.r11.s64 + 1044;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,327(r10)
	REX_STORE_U8(ctx.r10.u32 + 327, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,328(r11)
	REX_STORE_U8(ctx.r11.u32 + 328, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,329(r11)
	REX_STORE_U8(ctx.r11.u32 + 329, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,330(r11)
	REX_STORE_U8(ctx.r11.u32 + 330, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,331(r11)
	REX_STORE_U8(ctx.r11.u32 + 331, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1050
	ctx.r11.s64 = ctx.r11.s64 + 1050;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,332(r10)
	REX_STORE_U8(ctx.r10.u32 + 332, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1050
	ctx.r11.s64 = ctx.r11.s64 + 1050;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,333(r10)
	REX_STORE_U8(ctx.r10.u32 + 333, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1050
	ctx.r11.s64 = ctx.r11.s64 + 1050;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,334(r10)
	REX_STORE_U8(ctx.r10.u32 + 334, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1050
	ctx.r11.s64 = ctx.r11.s64 + 1050;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,335(r10)
	REX_STORE_U8(ctx.r10.u32 + 335, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,336(r11)
	REX_STORE_U8(ctx.r11.u32 + 336, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,337(r11)
	REX_STORE_U8(ctx.r11.u32 + 337, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,338(r11)
	REX_STORE_U8(ctx.r11.u32 + 338, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,339(r11)
	REX_STORE_U8(ctx.r11.u32 + 339, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,340(r10)
	REX_STORE_U8(ctx.r10.u32 + 340, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,341(r10)
	REX_STORE_U8(ctx.r10.u32 + 341, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,342(r10)
	REX_STORE_U8(ctx.r10.u32 + 342, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,343(r10)
	REX_STORE_U8(ctx.r10.u32 + 343, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,344(r11)
	REX_STORE_U8(ctx.r11.u32 + 344, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,345(r11)
	REX_STORE_U8(ctx.r11.u32 + 345, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,346(r11)
	REX_STORE_U8(ctx.r11.u32 + 346, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,347(r11)
	REX_STORE_U8(ctx.r11.u32 + 347, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1062
	ctx.r11.s64 = ctx.r11.s64 + 1062;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,348(r10)
	REX_STORE_U8(ctx.r10.u32 + 348, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1062
	ctx.r11.s64 = ctx.r11.s64 + 1062;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,349(r10)
	REX_STORE_U8(ctx.r10.u32 + 349, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1062
	ctx.r11.s64 = ctx.r11.s64 + 1062;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,350(r10)
	REX_STORE_U8(ctx.r10.u32 + 350, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1062
	ctx.r11.s64 = ctx.r11.s64 + 1062;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,351(r10)
	REX_STORE_U8(ctx.r10.u32 + 351, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,352(r11)
	REX_STORE_U8(ctx.r11.u32 + 352, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,353(r11)
	REX_STORE_U8(ctx.r11.u32 + 353, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,354(r11)
	REX_STORE_U8(ctx.r11.u32 + 354, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,355(r11)
	REX_STORE_U8(ctx.r11.u32 + 355, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,356(r10)
	REX_STORE_U8(ctx.r10.u32 + 356, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,357(r10)
	REX_STORE_U8(ctx.r10.u32 + 357, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,358(r10)
	REX_STORE_U8(ctx.r10.u32 + 358, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,359(r10)
	REX_STORE_U8(ctx.r10.u32 + 359, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,360(r11)
	REX_STORE_U8(ctx.r11.u32 + 360, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,361(r11)
	REX_STORE_U8(ctx.r11.u32 + 361, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,362(r11)
	REX_STORE_U8(ctx.r11.u32 + 362, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,363(r11)
	REX_STORE_U8(ctx.r11.u32 + 363, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1074
	ctx.r11.s64 = ctx.r11.s64 + 1074;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,364(r10)
	REX_STORE_U8(ctx.r10.u32 + 364, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1074
	ctx.r11.s64 = ctx.r11.s64 + 1074;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,365(r10)
	REX_STORE_U8(ctx.r10.u32 + 365, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1074
	ctx.r11.s64 = ctx.r11.s64 + 1074;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,366(r10)
	REX_STORE_U8(ctx.r10.u32 + 366, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1074
	ctx.r11.s64 = ctx.r11.s64 + 1074;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,367(r10)
	REX_STORE_U8(ctx.r10.u32 + 367, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,368(r11)
	REX_STORE_U8(ctx.r11.u32 + 368, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,369(r11)
	REX_STORE_U8(ctx.r11.u32 + 369, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,370(r11)
	REX_STORE_U8(ctx.r11.u32 + 370, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,371(r11)
	REX_STORE_U8(ctx.r11.u32 + 371, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,372(r10)
	REX_STORE_U8(ctx.r10.u32 + 372, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,373(r10)
	REX_STORE_U8(ctx.r10.u32 + 373, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,374(r10)
	REX_STORE_U8(ctx.r10.u32 + 374, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,375(r10)
	REX_STORE_U8(ctx.r10.u32 + 375, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,376(r11)
	REX_STORE_U8(ctx.r11.u32 + 376, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,377(r11)
	REX_STORE_U8(ctx.r11.u32 + 377, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,378(r11)
	REX_STORE_U8(ctx.r11.u32 + 378, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,379(r11)
	REX_STORE_U8(ctx.r11.u32 + 379, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1086
	ctx.r11.s64 = ctx.r11.s64 + 1086;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,380(r10)
	REX_STORE_U8(ctx.r10.u32 + 380, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1086
	ctx.r11.s64 = ctx.r11.s64 + 1086;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,381(r10)
	REX_STORE_U8(ctx.r10.u32 + 381, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1086
	ctx.r11.s64 = ctx.r11.s64 + 1086;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,382(r10)
	REX_STORE_U8(ctx.r10.u32 + 382, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1086
	ctx.r11.s64 = ctx.r11.s64 + 1086;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,383(r10)
	REX_STORE_U8(ctx.r10.u32 + 383, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,385(r11)
	REX_STORE_U8(ctx.r11.u32 + 385, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,386(r11)
	REX_STORE_U8(ctx.r11.u32 + 386, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,387(r11)
	REX_STORE_U8(ctx.r11.u32 + 387, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1092
	ctx.r11.s64 = ctx.r11.s64 + 1092;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,388(r10)
	REX_STORE_U8(ctx.r10.u32 + 388, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1092
	ctx.r11.s64 = ctx.r11.s64 + 1092;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,389(r10)
	REX_STORE_U8(ctx.r10.u32 + 389, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1092
	ctx.r11.s64 = ctx.r11.s64 + 1092;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,390(r10)
	REX_STORE_U8(ctx.r10.u32 + 390, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1092
	ctx.r11.s64 = ctx.r11.s64 + 1092;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,391(r10)
	REX_STORE_U8(ctx.r10.u32 + 391, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,392(r11)
	REX_STORE_U8(ctx.r11.u32 + 392, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,393(r11)
	REX_STORE_U8(ctx.r11.u32 + 393, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,394(r11)
	REX_STORE_U8(ctx.r11.u32 + 394, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,395(r11)
	REX_STORE_U8(ctx.r11.u32 + 395, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1098
	ctx.r11.s64 = ctx.r11.s64 + 1098;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,396(r10)
	REX_STORE_U8(ctx.r10.u32 + 396, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1098
	ctx.r11.s64 = ctx.r11.s64 + 1098;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,397(r10)
	REX_STORE_U8(ctx.r10.u32 + 397, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1098
	ctx.r11.s64 = ctx.r11.s64 + 1098;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,398(r10)
	REX_STORE_U8(ctx.r10.u32 + 398, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1098
	ctx.r11.s64 = ctx.r11.s64 + 1098;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,399(r10)
	REX_STORE_U8(ctx.r10.u32 + 399, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,400(r11)
	REX_STORE_U8(ctx.r11.u32 + 400, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,401(r11)
	REX_STORE_U8(ctx.r11.u32 + 401, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,402(r11)
	REX_STORE_U8(ctx.r11.u32 + 402, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,403(r11)
	REX_STORE_U8(ctx.r11.u32 + 403, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 + 1104;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,404(r10)
	REX_STORE_U8(ctx.r10.u32 + 404, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 + 1104;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,405(r10)
	REX_STORE_U8(ctx.r10.u32 + 405, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 + 1104;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,406(r10)
	REX_STORE_U8(ctx.r10.u32 + 406, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 + 1104;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,407(r10)
	REX_STORE_U8(ctx.r10.u32 + 407, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,408(r11)
	REX_STORE_U8(ctx.r11.u32 + 408, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,409(r11)
	REX_STORE_U8(ctx.r11.u32 + 409, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,410(r11)
	REX_STORE_U8(ctx.r11.u32 + 410, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,411(r11)
	REX_STORE_U8(ctx.r11.u32 + 411, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1110
	ctx.r11.s64 = ctx.r11.s64 + 1110;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,412(r10)
	REX_STORE_U8(ctx.r10.u32 + 412, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1110
	ctx.r11.s64 = ctx.r11.s64 + 1110;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,413(r10)
	REX_STORE_U8(ctx.r10.u32 + 413, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1110
	ctx.r11.s64 = ctx.r11.s64 + 1110;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,414(r10)
	REX_STORE_U8(ctx.r10.u32 + 414, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1110
	ctx.r11.s64 = ctx.r11.s64 + 1110;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,415(r10)
	REX_STORE_U8(ctx.r10.u32 + 415, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,416(r11)
	REX_STORE_U8(ctx.r11.u32 + 416, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,417(r11)
	REX_STORE_U8(ctx.r11.u32 + 417, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,418(r11)
	REX_STORE_U8(ctx.r11.u32 + 418, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,419(r11)
	REX_STORE_U8(ctx.r11.u32 + 419, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1116
	ctx.r11.s64 = ctx.r11.s64 + 1116;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,420(r10)
	REX_STORE_U8(ctx.r10.u32 + 420, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1116
	ctx.r11.s64 = ctx.r11.s64 + 1116;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,421(r10)
	REX_STORE_U8(ctx.r10.u32 + 421, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1116
	ctx.r11.s64 = ctx.r11.s64 + 1116;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,422(r10)
	REX_STORE_U8(ctx.r10.u32 + 422, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1116
	ctx.r11.s64 = ctx.r11.s64 + 1116;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,423(r10)
	REX_STORE_U8(ctx.r10.u32 + 423, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,424(r11)
	REX_STORE_U8(ctx.r11.u32 + 424, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,425(r11)
	REX_STORE_U8(ctx.r11.u32 + 425, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,426(r11)
	REX_STORE_U8(ctx.r11.u32 + 426, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,427(r11)
	REX_STORE_U8(ctx.r11.u32 + 427, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1122
	ctx.r11.s64 = ctx.r11.s64 + 1122;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,428(r10)
	REX_STORE_U8(ctx.r10.u32 + 428, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1122
	ctx.r11.s64 = ctx.r11.s64 + 1122;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,429(r10)
	REX_STORE_U8(ctx.r10.u32 + 429, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1122
	ctx.r11.s64 = ctx.r11.s64 + 1122;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,430(r10)
	REX_STORE_U8(ctx.r10.u32 + 430, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1122
	ctx.r11.s64 = ctx.r11.s64 + 1122;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,431(r10)
	REX_STORE_U8(ctx.r10.u32 + 431, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,432(r11)
	REX_STORE_U8(ctx.r11.u32 + 432, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,433(r11)
	REX_STORE_U8(ctx.r11.u32 + 433, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,434(r11)
	REX_STORE_U8(ctx.r11.u32 + 434, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,435(r11)
	REX_STORE_U8(ctx.r11.u32 + 435, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1128
	ctx.r11.s64 = ctx.r11.s64 + 1128;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,436(r10)
	REX_STORE_U8(ctx.r10.u32 + 436, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1128
	ctx.r11.s64 = ctx.r11.s64 + 1128;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,437(r10)
	REX_STORE_U8(ctx.r10.u32 + 437, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1128
	ctx.r11.s64 = ctx.r11.s64 + 1128;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,438(r10)
	REX_STORE_U8(ctx.r10.u32 + 438, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1128
	ctx.r11.s64 = ctx.r11.s64 + 1128;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,439(r10)
	REX_STORE_U8(ctx.r10.u32 + 439, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,440(r11)
	REX_STORE_U8(ctx.r11.u32 + 440, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,441(r11)
	REX_STORE_U8(ctx.r11.u32 + 441, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,442(r11)
	REX_STORE_U8(ctx.r11.u32 + 442, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,443(r11)
	REX_STORE_U8(ctx.r11.u32 + 443, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1134
	ctx.r11.s64 = ctx.r11.s64 + 1134;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,444(r10)
	REX_STORE_U8(ctx.r10.u32 + 444, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1134
	ctx.r11.s64 = ctx.r11.s64 + 1134;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,445(r10)
	REX_STORE_U8(ctx.r10.u32 + 445, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1134
	ctx.r11.s64 = ctx.r11.s64 + 1134;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,446(r10)
	REX_STORE_U8(ctx.r10.u32 + 446, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1134
	ctx.r11.s64 = ctx.r11.s64 + 1134;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,447(r10)
	REX_STORE_U8(ctx.r10.u32 + 447, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,448(r11)
	REX_STORE_U8(ctx.r11.u32 + 448, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,449(r11)
	REX_STORE_U8(ctx.r11.u32 + 449, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,450(r11)
	REX_STORE_U8(ctx.r11.u32 + 450, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,451(r11)
	REX_STORE_U8(ctx.r11.u32 + 451, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1140
	ctx.r11.s64 = ctx.r11.s64 + 1140;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,452(r10)
	REX_STORE_U8(ctx.r10.u32 + 452, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1140
	ctx.r11.s64 = ctx.r11.s64 + 1140;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,453(r10)
	REX_STORE_U8(ctx.r10.u32 + 453, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1140
	ctx.r11.s64 = ctx.r11.s64 + 1140;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,454(r10)
	REX_STORE_U8(ctx.r10.u32 + 454, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1140
	ctx.r11.s64 = ctx.r11.s64 + 1140;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,455(r10)
	REX_STORE_U8(ctx.r10.u32 + 455, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,456(r10)
	REX_STORE_U8(ctx.r10.u32 + 456, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,457(r10)
	REX_STORE_U8(ctx.r10.u32 + 457, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,458(r10)
	REX_STORE_U8(ctx.r10.u32 + 458, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,459(r10)
	REX_STORE_U8(ctx.r10.u32 + 459, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,461(r11)
	REX_STORE_U8(ctx.r11.u32 + 461, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,462(r11)
	REX_STORE_U8(ctx.r11.u32 + 462, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,463(r11)
	REX_STORE_U8(ctx.r11.u32 + 463, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1146
	ctx.r11.s64 = ctx.r11.s64 + 1146;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,464(r10)
	REX_STORE_U8(ctx.r10.u32 + 464, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1146
	ctx.r11.s64 = ctx.r11.s64 + 1146;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,465(r10)
	REX_STORE_U8(ctx.r10.u32 + 465, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1146
	ctx.r11.s64 = ctx.r11.s64 + 1146;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,466(r10)
	REX_STORE_U8(ctx.r10.u32 + 466, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1146
	ctx.r11.s64 = ctx.r11.s64 + 1146;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,467(r10)
	REX_STORE_U8(ctx.r10.u32 + 467, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,469(r11)
	REX_STORE_U8(ctx.r11.u32 + 469, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,470(r11)
	REX_STORE_U8(ctx.r11.u32 + 470, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,471(r11)
	REX_STORE_U8(ctx.r11.u32 + 471, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1158
	ctx.r11.s64 = ctx.r11.s64 + 1158;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,472(r10)
	REX_STORE_U8(ctx.r10.u32 + 472, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1158
	ctx.r11.s64 = ctx.r11.s64 + 1158;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,473(r10)
	REX_STORE_U8(ctx.r10.u32 + 473, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1158
	ctx.r11.s64 = ctx.r11.s64 + 1158;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,474(r10)
	REX_STORE_U8(ctx.r10.u32 + 474, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1158
	ctx.r11.s64 = ctx.r11.s64 + 1158;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,475(r10)
	REX_STORE_U8(ctx.r10.u32 + 475, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,476(r11)
	REX_STORE_U8(ctx.r11.u32 + 476, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,477(r11)
	REX_STORE_U8(ctx.r11.u32 + 477, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,478(r11)
	REX_STORE_U8(ctx.r11.u32 + 478, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,479(r11)
	REX_STORE_U8(ctx.r11.u32 + 479, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,480(r10)
	REX_STORE_U8(ctx.r10.u32 + 480, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,481(r10)
	REX_STORE_U8(ctx.r10.u32 + 481, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,482(r10)
	REX_STORE_U8(ctx.r10.u32 + 482, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,483(r10)
	REX_STORE_U8(ctx.r10.u32 + 483, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,484(r11)
	REX_STORE_U8(ctx.r11.u32 + 484, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,485(r11)
	REX_STORE_U8(ctx.r11.u32 + 485, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,486(r11)
	REX_STORE_U8(ctx.r11.u32 + 486, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,487(r11)
	REX_STORE_U8(ctx.r11.u32 + 487, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1182
	ctx.r11.s64 = ctx.r11.s64 + 1182;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,488(r10)
	REX_STORE_U8(ctx.r10.u32 + 488, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1182
	ctx.r11.s64 = ctx.r11.s64 + 1182;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,489(r10)
	REX_STORE_U8(ctx.r10.u32 + 489, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1182
	ctx.r11.s64 = ctx.r11.s64 + 1182;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,490(r10)
	REX_STORE_U8(ctx.r10.u32 + 490, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1182
	ctx.r11.s64 = ctx.r11.s64 + 1182;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,491(r10)
	REX_STORE_U8(ctx.r10.u32 + 491, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,492(r11)
	REX_STORE_U8(ctx.r11.u32 + 492, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,493(r11)
	REX_STORE_U8(ctx.r11.u32 + 493, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,494(r11)
	REX_STORE_U8(ctx.r11.u32 + 494, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,495(r11)
	REX_STORE_U8(ctx.r11.u32 + 495, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1194
	ctx.r11.s64 = ctx.r11.s64 + 1194;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,496(r10)
	REX_STORE_U8(ctx.r10.u32 + 496, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1194
	ctx.r11.s64 = ctx.r11.s64 + 1194;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,497(r10)
	REX_STORE_U8(ctx.r10.u32 + 497, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1194
	ctx.r11.s64 = ctx.r11.s64 + 1194;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,498(r10)
	REX_STORE_U8(ctx.r10.u32 + 498, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1194
	ctx.r11.s64 = ctx.r11.s64 + 1194;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,499(r10)
	REX_STORE_U8(ctx.r10.u32 + 499, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,500(r11)
	REX_STORE_U8(ctx.r11.u32 + 500, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,501(r11)
	REX_STORE_U8(ctx.r11.u32 + 501, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,502(r11)
	REX_STORE_U8(ctx.r11.u32 + 502, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,503(r11)
	REX_STORE_U8(ctx.r11.u32 + 503, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1206
	ctx.r11.s64 = ctx.r11.s64 + 1206;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,504(r10)
	REX_STORE_U8(ctx.r10.u32 + 504, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1206
	ctx.r11.s64 = ctx.r11.s64 + 1206;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,505(r10)
	REX_STORE_U8(ctx.r10.u32 + 505, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1206
	ctx.r11.s64 = ctx.r11.s64 + 1206;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,506(r10)
	REX_STORE_U8(ctx.r10.u32 + 506, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1206
	ctx.r11.s64 = ctx.r11.s64 + 1206;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,507(r10)
	REX_STORE_U8(ctx.r10.u32 + 507, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,508(r11)
	REX_STORE_U8(ctx.r11.u32 + 508, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,509(r11)
	REX_STORE_U8(ctx.r11.u32 + 509, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,510(r11)
	REX_STORE_U8(ctx.r11.u32 + 510, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,511(r11)
	REX_STORE_U8(ctx.r11.u32 + 511, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,512(r10)
	REX_STORE_U8(ctx.r10.u32 + 512, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,513(r10)
	REX_STORE_U8(ctx.r10.u32 + 513, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,514(r10)
	REX_STORE_U8(ctx.r10.u32 + 514, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1218
	ctx.r11.s64 = ctx.r11.s64 + 1218;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,515(r10)
	REX_STORE_U8(ctx.r10.u32 + 515, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,516(r11)
	REX_STORE_U8(ctx.r11.u32 + 516, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,517(r11)
	REX_STORE_U8(ctx.r11.u32 + 517, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,518(r11)
	REX_STORE_U8(ctx.r11.u32 + 518, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,519(r11)
	REX_STORE_U8(ctx.r11.u32 + 519, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1230
	ctx.r11.s64 = ctx.r11.s64 + 1230;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,520(r10)
	REX_STORE_U8(ctx.r10.u32 + 520, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1230
	ctx.r11.s64 = ctx.r11.s64 + 1230;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,521(r10)
	REX_STORE_U8(ctx.r10.u32 + 521, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1230
	ctx.r11.s64 = ctx.r11.s64 + 1230;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,522(r10)
	REX_STORE_U8(ctx.r10.u32 + 522, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1230
	ctx.r11.s64 = ctx.r11.s64 + 1230;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,523(r10)
	REX_STORE_U8(ctx.r10.u32 + 523, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,524(r11)
	REX_STORE_U8(ctx.r11.u32 + 524, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,525(r11)
	REX_STORE_U8(ctx.r11.u32 + 525, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,526(r11)
	REX_STORE_U8(ctx.r11.u32 + 526, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,527(r11)
	REX_STORE_U8(ctx.r11.u32 + 527, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1242
	ctx.r11.s64 = ctx.r11.s64 + 1242;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,528(r10)
	REX_STORE_U8(ctx.r10.u32 + 528, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1242
	ctx.r11.s64 = ctx.r11.s64 + 1242;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,529(r10)
	REX_STORE_U8(ctx.r10.u32 + 529, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1242
	ctx.r11.s64 = ctx.r11.s64 + 1242;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,530(r10)
	REX_STORE_U8(ctx.r10.u32 + 530, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1242
	ctx.r11.s64 = ctx.r11.s64 + 1242;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,531(r10)
	REX_STORE_U8(ctx.r10.u32 + 531, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,532(r11)
	REX_STORE_U8(ctx.r11.u32 + 532, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,533(r11)
	REX_STORE_U8(ctx.r11.u32 + 533, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,534(r11)
	REX_STORE_U8(ctx.r11.u32 + 534, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,535(r11)
	REX_STORE_U8(ctx.r11.u32 + 535, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1254
	ctx.r11.s64 = ctx.r11.s64 + 1254;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,536(r10)
	REX_STORE_U8(ctx.r10.u32 + 536, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1254
	ctx.r11.s64 = ctx.r11.s64 + 1254;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,537(r10)
	REX_STORE_U8(ctx.r10.u32 + 537, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1254
	ctx.r11.s64 = ctx.r11.s64 + 1254;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,538(r10)
	REX_STORE_U8(ctx.r10.u32 + 538, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1254
	ctx.r11.s64 = ctx.r11.s64 + 1254;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,539(r10)
	REX_STORE_U8(ctx.r10.u32 + 539, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,540(r11)
	REX_STORE_U8(ctx.r11.u32 + 540, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,541(r11)
	REX_STORE_U8(ctx.r11.u32 + 541, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,542(r11)
	REX_STORE_U8(ctx.r11.u32 + 542, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,543(r11)
	REX_STORE_U8(ctx.r11.u32 + 543, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1266
	ctx.r11.s64 = ctx.r11.s64 + 1266;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,544(r10)
	REX_STORE_U8(ctx.r10.u32 + 544, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1266
	ctx.r11.s64 = ctx.r11.s64 + 1266;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,545(r10)
	REX_STORE_U8(ctx.r10.u32 + 545, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1266
	ctx.r11.s64 = ctx.r11.s64 + 1266;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,546(r10)
	REX_STORE_U8(ctx.r10.u32 + 546, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1266
	ctx.r11.s64 = ctx.r11.s64 + 1266;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,547(r10)
	REX_STORE_U8(ctx.r10.u32 + 547, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,548(r11)
	REX_STORE_U8(ctx.r11.u32 + 548, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,549(r11)
	REX_STORE_U8(ctx.r11.u32 + 549, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,550(r11)
	REX_STORE_U8(ctx.r11.u32 + 550, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,551(r11)
	REX_STORE_U8(ctx.r11.u32 + 551, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1278
	ctx.r11.s64 = ctx.r11.s64 + 1278;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,552(r10)
	REX_STORE_U8(ctx.r10.u32 + 552, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1278
	ctx.r11.s64 = ctx.r11.s64 + 1278;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,553(r10)
	REX_STORE_U8(ctx.r10.u32 + 553, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1278
	ctx.r11.s64 = ctx.r11.s64 + 1278;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,554(r10)
	REX_STORE_U8(ctx.r10.u32 + 554, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1278
	ctx.r11.s64 = ctx.r11.s64 + 1278;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,555(r10)
	REX_STORE_U8(ctx.r10.u32 + 555, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,556(r11)
	REX_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,557(r11)
	REX_STORE_U8(ctx.r11.u32 + 557, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,558(r11)
	REX_STORE_U8(ctx.r11.u32 + 558, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,559(r11)
	REX_STORE_U8(ctx.r11.u32 + 559, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1290
	ctx.r11.s64 = ctx.r11.s64 + 1290;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,560(r10)
	REX_STORE_U8(ctx.r10.u32 + 560, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1290
	ctx.r11.s64 = ctx.r11.s64 + 1290;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,561(r10)
	REX_STORE_U8(ctx.r10.u32 + 561, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1290
	ctx.r11.s64 = ctx.r11.s64 + 1290;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,562(r10)
	REX_STORE_U8(ctx.r10.u32 + 562, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1290
	ctx.r11.s64 = ctx.r11.s64 + 1290;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,563(r10)
	REX_STORE_U8(ctx.r10.u32 + 563, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,564(r11)
	REX_STORE_U8(ctx.r11.u32 + 564, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,565(r11)
	REX_STORE_U8(ctx.r11.u32 + 565, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,566(r11)
	REX_STORE_U8(ctx.r11.u32 + 566, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,567(r11)
	REX_STORE_U8(ctx.r11.u32 + 567, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1302
	ctx.r11.s64 = ctx.r11.s64 + 1302;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,568(r10)
	REX_STORE_U8(ctx.r10.u32 + 568, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1302
	ctx.r11.s64 = ctx.r11.s64 + 1302;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,569(r10)
	REX_STORE_U8(ctx.r10.u32 + 569, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1302
	ctx.r11.s64 = ctx.r11.s64 + 1302;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,570(r10)
	REX_STORE_U8(ctx.r10.u32 + 570, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1302
	ctx.r11.s64 = ctx.r11.s64 + 1302;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,571(r10)
	REX_STORE_U8(ctx.r10.u32 + 571, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,572(r11)
	REX_STORE_U8(ctx.r11.u32 + 572, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,573(r11)
	REX_STORE_U8(ctx.r11.u32 + 573, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,574(r11)
	REX_STORE_U8(ctx.r11.u32 + 574, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,575(r11)
	REX_STORE_U8(ctx.r11.u32 + 575, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1314
	ctx.r11.s64 = ctx.r11.s64 + 1314;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,576(r10)
	REX_STORE_U8(ctx.r10.u32 + 576, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1314
	ctx.r11.s64 = ctx.r11.s64 + 1314;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,577(r10)
	REX_STORE_U8(ctx.r10.u32 + 577, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1314
	ctx.r11.s64 = ctx.r11.s64 + 1314;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,578(r10)
	REX_STORE_U8(ctx.r10.u32 + 578, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1314
	ctx.r11.s64 = ctx.r11.s64 + 1314;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,579(r10)
	REX_STORE_U8(ctx.r10.u32 + 579, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,580(r11)
	REX_STORE_U8(ctx.r11.u32 + 580, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,581(r11)
	REX_STORE_U8(ctx.r11.u32 + 581, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,582(r11)
	REX_STORE_U8(ctx.r11.u32 + 582, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,583(r11)
	REX_STORE_U8(ctx.r11.u32 + 583, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1326
	ctx.r11.s64 = ctx.r11.s64 + 1326;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,584(r10)
	REX_STORE_U8(ctx.r10.u32 + 584, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1326
	ctx.r11.s64 = ctx.r11.s64 + 1326;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,585(r10)
	REX_STORE_U8(ctx.r10.u32 + 585, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1326
	ctx.r11.s64 = ctx.r11.s64 + 1326;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,586(r10)
	REX_STORE_U8(ctx.r10.u32 + 586, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1326
	ctx.r11.s64 = ctx.r11.s64 + 1326;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,587(r10)
	REX_STORE_U8(ctx.r10.u32 + 587, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,588(r11)
	REX_STORE_U8(ctx.r11.u32 + 588, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,589(r11)
	REX_STORE_U8(ctx.r11.u32 + 589, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,590(r11)
	REX_STORE_U8(ctx.r11.u32 + 590, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,591(r11)
	REX_STORE_U8(ctx.r11.u32 + 591, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1338
	ctx.r11.s64 = ctx.r11.s64 + 1338;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,592(r10)
	REX_STORE_U8(ctx.r10.u32 + 592, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1338
	ctx.r11.s64 = ctx.r11.s64 + 1338;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,593(r10)
	REX_STORE_U8(ctx.r10.u32 + 593, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1338
	ctx.r11.s64 = ctx.r11.s64 + 1338;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,594(r10)
	REX_STORE_U8(ctx.r10.u32 + 594, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1338
	ctx.r11.s64 = ctx.r11.s64 + 1338;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,595(r10)
	REX_STORE_U8(ctx.r10.u32 + 595, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,596(r11)
	REX_STORE_U8(ctx.r11.u32 + 596, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,597(r11)
	REX_STORE_U8(ctx.r11.u32 + 597, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,598(r11)
	REX_STORE_U8(ctx.r11.u32 + 598, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,599(r11)
	REX_STORE_U8(ctx.r11.u32 + 599, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1350
	ctx.r11.s64 = ctx.r11.s64 + 1350;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,600(r10)
	REX_STORE_U8(ctx.r10.u32 + 600, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1350
	ctx.r11.s64 = ctx.r11.s64 + 1350;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,601(r10)
	REX_STORE_U8(ctx.r10.u32 + 601, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1350
	ctx.r11.s64 = ctx.r11.s64 + 1350;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,602(r10)
	REX_STORE_U8(ctx.r10.u32 + 602, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1350
	ctx.r11.s64 = ctx.r11.s64 + 1350;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,603(r10)
	REX_STORE_U8(ctx.r10.u32 + 603, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,604(r11)
	REX_STORE_U8(ctx.r11.u32 + 604, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,605(r11)
	REX_STORE_U8(ctx.r11.u32 + 605, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,606(r11)
	REX_STORE_U8(ctx.r11.u32 + 606, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,607(r11)
	REX_STORE_U8(ctx.r11.u32 + 607, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1362
	ctx.r11.s64 = ctx.r11.s64 + 1362;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,608(r10)
	REX_STORE_U8(ctx.r10.u32 + 608, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1362
	ctx.r11.s64 = ctx.r11.s64 + 1362;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,609(r10)
	REX_STORE_U8(ctx.r10.u32 + 609, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1362
	ctx.r11.s64 = ctx.r11.s64 + 1362;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,610(r10)
	REX_STORE_U8(ctx.r10.u32 + 610, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1362
	ctx.r11.s64 = ctx.r11.s64 + 1362;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,611(r10)
	REX_STORE_U8(ctx.r10.u32 + 611, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,612(r11)
	REX_STORE_U8(ctx.r11.u32 + 612, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,613(r11)
	REX_STORE_U8(ctx.r11.u32 + 613, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,614(r11)
	REX_STORE_U8(ctx.r11.u32 + 614, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,615(r11)
	REX_STORE_U8(ctx.r11.u32 + 615, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1374
	ctx.r11.s64 = ctx.r11.s64 + 1374;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,616(r10)
	REX_STORE_U8(ctx.r10.u32 + 616, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1374
	ctx.r11.s64 = ctx.r11.s64 + 1374;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,617(r10)
	REX_STORE_U8(ctx.r10.u32 + 617, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1374
	ctx.r11.s64 = ctx.r11.s64 + 1374;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,618(r10)
	REX_STORE_U8(ctx.r10.u32 + 618, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1374
	ctx.r11.s64 = ctx.r11.s64 + 1374;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,619(r10)
	REX_STORE_U8(ctx.r10.u32 + 619, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,620(r11)
	REX_STORE_U8(ctx.r11.u32 + 620, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,621(r11)
	REX_STORE_U8(ctx.r11.u32 + 621, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,622(r11)
	REX_STORE_U8(ctx.r11.u32 + 622, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,623(r11)
	REX_STORE_U8(ctx.r11.u32 + 623, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1386
	ctx.r11.s64 = ctx.r11.s64 + 1386;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,624(r10)
	REX_STORE_U8(ctx.r10.u32 + 624, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1386
	ctx.r11.s64 = ctx.r11.s64 + 1386;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,625(r10)
	REX_STORE_U8(ctx.r10.u32 + 625, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1386
	ctx.r11.s64 = ctx.r11.s64 + 1386;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,626(r10)
	REX_STORE_U8(ctx.r10.u32 + 626, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1386
	ctx.r11.s64 = ctx.r11.s64 + 1386;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,627(r10)
	REX_STORE_U8(ctx.r10.u32 + 627, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,628(r11)
	REX_STORE_U8(ctx.r11.u32 + 628, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,629(r11)
	REX_STORE_U8(ctx.r11.u32 + 629, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,630(r11)
	REX_STORE_U8(ctx.r11.u32 + 630, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,631(r11)
	REX_STORE_U8(ctx.r11.u32 + 631, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1398
	ctx.r11.s64 = ctx.r11.s64 + 1398;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,632(r10)
	REX_STORE_U8(ctx.r10.u32 + 632, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1398
	ctx.r11.s64 = ctx.r11.s64 + 1398;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,633(r10)
	REX_STORE_U8(ctx.r10.u32 + 633, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1398
	ctx.r11.s64 = ctx.r11.s64 + 1398;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,634(r10)
	REX_STORE_U8(ctx.r10.u32 + 634, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1398
	ctx.r11.s64 = ctx.r11.s64 + 1398;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,635(r10)
	REX_STORE_U8(ctx.r10.u32 + 635, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,636(r11)
	REX_STORE_U8(ctx.r11.u32 + 636, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,637(r11)
	REX_STORE_U8(ctx.r11.u32 + 637, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,638(r11)
	REX_STORE_U8(ctx.r11.u32 + 638, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,639(r11)
	REX_STORE_U8(ctx.r11.u32 + 639, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1410
	ctx.r11.s64 = ctx.r11.s64 + 1410;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,640(r10)
	REX_STORE_U8(ctx.r10.u32 + 640, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1410
	ctx.r11.s64 = ctx.r11.s64 + 1410;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,641(r10)
	REX_STORE_U8(ctx.r10.u32 + 641, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1410
	ctx.r11.s64 = ctx.r11.s64 + 1410;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,642(r10)
	REX_STORE_U8(ctx.r10.u32 + 642, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1410
	ctx.r11.s64 = ctx.r11.s64 + 1410;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,643(r10)
	REX_STORE_U8(ctx.r10.u32 + 643, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,644(r11)
	REX_STORE_U8(ctx.r11.u32 + 644, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,645(r11)
	REX_STORE_U8(ctx.r11.u32 + 645, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,646(r11)
	REX_STORE_U8(ctx.r11.u32 + 646, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,647(r11)
	REX_STORE_U8(ctx.r11.u32 + 647, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1422
	ctx.r11.s64 = ctx.r11.s64 + 1422;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,648(r10)
	REX_STORE_U8(ctx.r10.u32 + 648, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1422
	ctx.r11.s64 = ctx.r11.s64 + 1422;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,649(r10)
	REX_STORE_U8(ctx.r10.u32 + 649, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1422
	ctx.r11.s64 = ctx.r11.s64 + 1422;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,650(r10)
	REX_STORE_U8(ctx.r10.u32 + 650, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1422
	ctx.r11.s64 = ctx.r11.s64 + 1422;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,651(r10)
	REX_STORE_U8(ctx.r10.u32 + 651, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,652(r11)
	REX_STORE_U8(ctx.r11.u32 + 652, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,653(r11)
	REX_STORE_U8(ctx.r11.u32 + 653, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,654(r11)
	REX_STORE_U8(ctx.r11.u32 + 654, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,655(r11)
	REX_STORE_U8(ctx.r11.u32 + 655, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1434
	ctx.r11.s64 = ctx.r11.s64 + 1434;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,656(r10)
	REX_STORE_U8(ctx.r10.u32 + 656, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1434
	ctx.r11.s64 = ctx.r11.s64 + 1434;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,657(r10)
	REX_STORE_U8(ctx.r10.u32 + 657, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1434
	ctx.r11.s64 = ctx.r11.s64 + 1434;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,658(r10)
	REX_STORE_U8(ctx.r10.u32 + 658, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1434
	ctx.r11.s64 = ctx.r11.s64 + 1434;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,659(r10)
	REX_STORE_U8(ctx.r10.u32 + 659, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,660(r11)
	REX_STORE_U8(ctx.r11.u32 + 660, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,661(r11)
	REX_STORE_U8(ctx.r11.u32 + 661, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,662(r11)
	REX_STORE_U8(ctx.r11.u32 + 662, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,663(r11)
	REX_STORE_U8(ctx.r11.u32 + 663, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1446
	ctx.r11.s64 = ctx.r11.s64 + 1446;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,664(r10)
	REX_STORE_U8(ctx.r10.u32 + 664, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1446
	ctx.r11.s64 = ctx.r11.s64 + 1446;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,665(r10)
	REX_STORE_U8(ctx.r10.u32 + 665, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1446
	ctx.r11.s64 = ctx.r11.s64 + 1446;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,666(r10)
	REX_STORE_U8(ctx.r10.u32 + 666, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1446
	ctx.r11.s64 = ctx.r11.s64 + 1446;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,667(r10)
	REX_STORE_U8(ctx.r10.u32 + 667, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,668(r11)
	REX_STORE_U8(ctx.r11.u32 + 668, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,669(r11)
	REX_STORE_U8(ctx.r11.u32 + 669, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,670(r11)
	REX_STORE_U8(ctx.r11.u32 + 670, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,671(r11)
	REX_STORE_U8(ctx.r11.u32 + 671, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1458
	ctx.r11.s64 = ctx.r11.s64 + 1458;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,672(r10)
	REX_STORE_U8(ctx.r10.u32 + 672, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1458
	ctx.r11.s64 = ctx.r11.s64 + 1458;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,673(r10)
	REX_STORE_U8(ctx.r10.u32 + 673, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1458
	ctx.r11.s64 = ctx.r11.s64 + 1458;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,674(r10)
	REX_STORE_U8(ctx.r10.u32 + 674, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1458
	ctx.r11.s64 = ctx.r11.s64 + 1458;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,675(r10)
	REX_STORE_U8(ctx.r10.u32 + 675, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,676(r11)
	REX_STORE_U8(ctx.r11.u32 + 676, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,677(r11)
	REX_STORE_U8(ctx.r11.u32 + 677, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,678(r11)
	REX_STORE_U8(ctx.r11.u32 + 678, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,679(r11)
	REX_STORE_U8(ctx.r11.u32 + 679, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1470
	ctx.r11.s64 = ctx.r11.s64 + 1470;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,680(r10)
	REX_STORE_U8(ctx.r10.u32 + 680, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1470
	ctx.r11.s64 = ctx.r11.s64 + 1470;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,681(r10)
	REX_STORE_U8(ctx.r10.u32 + 681, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1470
	ctx.r11.s64 = ctx.r11.s64 + 1470;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,682(r10)
	REX_STORE_U8(ctx.r10.u32 + 682, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1470
	ctx.r11.s64 = ctx.r11.s64 + 1470;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,683(r10)
	REX_STORE_U8(ctx.r10.u32 + 683, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,684(r11)
	REX_STORE_U8(ctx.r11.u32 + 684, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,685(r11)
	REX_STORE_U8(ctx.r11.u32 + 685, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,686(r11)
	REX_STORE_U8(ctx.r11.u32 + 686, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,687(r11)
	REX_STORE_U8(ctx.r11.u32 + 687, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1482
	ctx.r11.s64 = ctx.r11.s64 + 1482;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,688(r10)
	REX_STORE_U8(ctx.r10.u32 + 688, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1482
	ctx.r11.s64 = ctx.r11.s64 + 1482;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,689(r10)
	REX_STORE_U8(ctx.r10.u32 + 689, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1482
	ctx.r11.s64 = ctx.r11.s64 + 1482;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,690(r10)
	REX_STORE_U8(ctx.r10.u32 + 690, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1482
	ctx.r11.s64 = ctx.r11.s64 + 1482;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,691(r10)
	REX_STORE_U8(ctx.r10.u32 + 691, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,692(r11)
	REX_STORE_U8(ctx.r11.u32 + 692, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,693(r11)
	REX_STORE_U8(ctx.r11.u32 + 693, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,694(r11)
	REX_STORE_U8(ctx.r11.u32 + 694, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,695(r11)
	REX_STORE_U8(ctx.r11.u32 + 695, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1494
	ctx.r11.s64 = ctx.r11.s64 + 1494;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,696(r10)
	REX_STORE_U8(ctx.r10.u32 + 696, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1494
	ctx.r11.s64 = ctx.r11.s64 + 1494;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,697(r10)
	REX_STORE_U8(ctx.r10.u32 + 697, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1494
	ctx.r11.s64 = ctx.r11.s64 + 1494;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,698(r10)
	REX_STORE_U8(ctx.r10.u32 + 698, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1494
	ctx.r11.s64 = ctx.r11.s64 + 1494;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,699(r10)
	REX_STORE_U8(ctx.r10.u32 + 699, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,700(r11)
	REX_STORE_U8(ctx.r11.u32 + 700, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,701(r11)
	REX_STORE_U8(ctx.r11.u32 + 701, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,702(r11)
	REX_STORE_U8(ctx.r11.u32 + 702, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,703(r11)
	REX_STORE_U8(ctx.r11.u32 + 703, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1506
	ctx.r11.s64 = ctx.r11.s64 + 1506;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,704(r10)
	REX_STORE_U8(ctx.r10.u32 + 704, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1506
	ctx.r11.s64 = ctx.r11.s64 + 1506;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,705(r10)
	REX_STORE_U8(ctx.r10.u32 + 705, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1506
	ctx.r11.s64 = ctx.r11.s64 + 1506;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,706(r10)
	REX_STORE_U8(ctx.r10.u32 + 706, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1506
	ctx.r11.s64 = ctx.r11.s64 + 1506;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,707(r10)
	REX_STORE_U8(ctx.r10.u32 + 707, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,708(r11)
	REX_STORE_U8(ctx.r11.u32 + 708, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,709(r11)
	REX_STORE_U8(ctx.r11.u32 + 709, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,710(r11)
	REX_STORE_U8(ctx.r11.u32 + 710, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,711(r11)
	REX_STORE_U8(ctx.r11.u32 + 711, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1518
	ctx.r11.s64 = ctx.r11.s64 + 1518;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,712(r10)
	REX_STORE_U8(ctx.r10.u32 + 712, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1518
	ctx.r11.s64 = ctx.r11.s64 + 1518;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,713(r10)
	REX_STORE_U8(ctx.r10.u32 + 713, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1518
	ctx.r11.s64 = ctx.r11.s64 + 1518;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,714(r10)
	REX_STORE_U8(ctx.r10.u32 + 714, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1518
	ctx.r11.s64 = ctx.r11.s64 + 1518;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,715(r10)
	REX_STORE_U8(ctx.r10.u32 + 715, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,716(r11)
	REX_STORE_U8(ctx.r11.u32 + 716, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,717(r11)
	REX_STORE_U8(ctx.r11.u32 + 717, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,718(r11)
	REX_STORE_U8(ctx.r11.u32 + 718, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,719(r11)
	REX_STORE_U8(ctx.r11.u32 + 719, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1530
	ctx.r11.s64 = ctx.r11.s64 + 1530;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,720(r10)
	REX_STORE_U8(ctx.r10.u32 + 720, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1530
	ctx.r11.s64 = ctx.r11.s64 + 1530;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,721(r10)
	REX_STORE_U8(ctx.r10.u32 + 721, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1530
	ctx.r11.s64 = ctx.r11.s64 + 1530;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,722(r10)
	REX_STORE_U8(ctx.r10.u32 + 722, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1530
	ctx.r11.s64 = ctx.r11.s64 + 1530;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,723(r10)
	REX_STORE_U8(ctx.r10.u32 + 723, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,724(r11)
	REX_STORE_U8(ctx.r11.u32 + 724, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,725(r11)
	REX_STORE_U8(ctx.r11.u32 + 725, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,726(r11)
	REX_STORE_U8(ctx.r11.u32 + 726, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,727(r11)
	REX_STORE_U8(ctx.r11.u32 + 727, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1542
	ctx.r11.s64 = ctx.r11.s64 + 1542;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,728(r10)
	REX_STORE_U8(ctx.r10.u32 + 728, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1542
	ctx.r11.s64 = ctx.r11.s64 + 1542;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,729(r10)
	REX_STORE_U8(ctx.r10.u32 + 729, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1542
	ctx.r11.s64 = ctx.r11.s64 + 1542;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,730(r10)
	REX_STORE_U8(ctx.r10.u32 + 730, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1542
	ctx.r11.s64 = ctx.r11.s64 + 1542;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,731(r10)
	REX_STORE_U8(ctx.r10.u32 + 731, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,732(r11)
	REX_STORE_U8(ctx.r11.u32 + 732, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,733(r11)
	REX_STORE_U8(ctx.r11.u32 + 733, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,734(r11)
	REX_STORE_U8(ctx.r11.u32 + 734, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,735(r11)
	REX_STORE_U8(ctx.r11.u32 + 735, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1554
	ctx.r11.s64 = ctx.r11.s64 + 1554;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,736(r10)
	REX_STORE_U8(ctx.r10.u32 + 736, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1554
	ctx.r11.s64 = ctx.r11.s64 + 1554;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,737(r10)
	REX_STORE_U8(ctx.r10.u32 + 737, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1554
	ctx.r11.s64 = ctx.r11.s64 + 1554;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,738(r10)
	REX_STORE_U8(ctx.r10.u32 + 738, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1554
	ctx.r11.s64 = ctx.r11.s64 + 1554;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,739(r10)
	REX_STORE_U8(ctx.r10.u32 + 739, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,740(r11)
	REX_STORE_U8(ctx.r11.u32 + 740, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,741(r11)
	REX_STORE_U8(ctx.r11.u32 + 741, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,742(r11)
	REX_STORE_U8(ctx.r11.u32 + 742, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,743(r11)
	REX_STORE_U8(ctx.r11.u32 + 743, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1566
	ctx.r11.s64 = ctx.r11.s64 + 1566;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,744(r10)
	REX_STORE_U8(ctx.r10.u32 + 744, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1566
	ctx.r11.s64 = ctx.r11.s64 + 1566;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,745(r10)
	REX_STORE_U8(ctx.r10.u32 + 745, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1566
	ctx.r11.s64 = ctx.r11.s64 + 1566;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,746(r10)
	REX_STORE_U8(ctx.r10.u32 + 746, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1566
	ctx.r11.s64 = ctx.r11.s64 + 1566;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,747(r10)
	REX_STORE_U8(ctx.r10.u32 + 747, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,748(r11)
	REX_STORE_U8(ctx.r11.u32 + 748, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,749(r11)
	REX_STORE_U8(ctx.r11.u32 + 749, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,750(r11)
	REX_STORE_U8(ctx.r11.u32 + 750, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,751(r11)
	REX_STORE_U8(ctx.r11.u32 + 751, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1578
	ctx.r11.s64 = ctx.r11.s64 + 1578;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,752(r10)
	REX_STORE_U8(ctx.r10.u32 + 752, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1578
	ctx.r11.s64 = ctx.r11.s64 + 1578;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,753(r10)
	REX_STORE_U8(ctx.r10.u32 + 753, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1578
	ctx.r11.s64 = ctx.r11.s64 + 1578;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,754(r10)
	REX_STORE_U8(ctx.r10.u32 + 754, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1578
	ctx.r11.s64 = ctx.r11.s64 + 1578;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,755(r10)
	REX_STORE_U8(ctx.r10.u32 + 755, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,756(r11)
	REX_STORE_U8(ctx.r11.u32 + 756, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,757(r11)
	REX_STORE_U8(ctx.r11.u32 + 757, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,758(r11)
	REX_STORE_U8(ctx.r11.u32 + 758, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,759(r11)
	REX_STORE_U8(ctx.r11.u32 + 759, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1590
	ctx.r11.s64 = ctx.r11.s64 + 1590;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,760(r10)
	REX_STORE_U8(ctx.r10.u32 + 760, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1590
	ctx.r11.s64 = ctx.r11.s64 + 1590;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,761(r10)
	REX_STORE_U8(ctx.r10.u32 + 761, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1590
	ctx.r11.s64 = ctx.r11.s64 + 1590;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,762(r10)
	REX_STORE_U8(ctx.r10.u32 + 762, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1590
	ctx.r11.s64 = ctx.r11.s64 + 1590;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,763(r10)
	REX_STORE_U8(ctx.r10.u32 + 763, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,764(r11)
	REX_STORE_U8(ctx.r11.u32 + 764, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,765(r11)
	REX_STORE_U8(ctx.r11.u32 + 765, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,766(r11)
	REX_STORE_U8(ctx.r11.u32 + 766, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,767(r11)
	REX_STORE_U8(ctx.r11.u32 + 767, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1602
	ctx.r11.s64 = ctx.r11.s64 + 1602;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,768(r10)
	REX_STORE_U8(ctx.r10.u32 + 768, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1602
	ctx.r11.s64 = ctx.r11.s64 + 1602;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,769(r10)
	REX_STORE_U8(ctx.r10.u32 + 769, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1602
	ctx.r11.s64 = ctx.r11.s64 + 1602;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,770(r10)
	REX_STORE_U8(ctx.r10.u32 + 770, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1602
	ctx.r11.s64 = ctx.r11.s64 + 1602;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,771(r10)
	REX_STORE_U8(ctx.r10.u32 + 771, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,772(r11)
	REX_STORE_U8(ctx.r11.u32 + 772, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,773(r11)
	REX_STORE_U8(ctx.r11.u32 + 773, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,774(r11)
	REX_STORE_U8(ctx.r11.u32 + 774, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,775(r11)
	REX_STORE_U8(ctx.r11.u32 + 775, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1614
	ctx.r11.s64 = ctx.r11.s64 + 1614;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,776(r10)
	REX_STORE_U8(ctx.r10.u32 + 776, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1614
	ctx.r11.s64 = ctx.r11.s64 + 1614;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,777(r10)
	REX_STORE_U8(ctx.r10.u32 + 777, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1614
	ctx.r11.s64 = ctx.r11.s64 + 1614;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,778(r10)
	REX_STORE_U8(ctx.r10.u32 + 778, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1614
	ctx.r11.s64 = ctx.r11.s64 + 1614;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,779(r10)
	REX_STORE_U8(ctx.r10.u32 + 779, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,780(r11)
	REX_STORE_U8(ctx.r11.u32 + 780, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,781(r11)
	REX_STORE_U8(ctx.r11.u32 + 781, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,782(r11)
	REX_STORE_U8(ctx.r11.u32 + 782, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,783(r11)
	REX_STORE_U8(ctx.r11.u32 + 783, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1626
	ctx.r11.s64 = ctx.r11.s64 + 1626;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,784(r10)
	REX_STORE_U8(ctx.r10.u32 + 784, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1626
	ctx.r11.s64 = ctx.r11.s64 + 1626;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,785(r10)
	REX_STORE_U8(ctx.r10.u32 + 785, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1626
	ctx.r11.s64 = ctx.r11.s64 + 1626;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,786(r10)
	REX_STORE_U8(ctx.r10.u32 + 786, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1626
	ctx.r11.s64 = ctx.r11.s64 + 1626;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,787(r10)
	REX_STORE_U8(ctx.r10.u32 + 787, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,788(r11)
	REX_STORE_U8(ctx.r11.u32 + 788, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,789(r11)
	REX_STORE_U8(ctx.r11.u32 + 789, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,790(r11)
	REX_STORE_U8(ctx.r11.u32 + 790, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,791(r11)
	REX_STORE_U8(ctx.r11.u32 + 791, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1638
	ctx.r11.s64 = ctx.r11.s64 + 1638;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,792(r10)
	REX_STORE_U8(ctx.r10.u32 + 792, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1638
	ctx.r11.s64 = ctx.r11.s64 + 1638;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,793(r10)
	REX_STORE_U8(ctx.r10.u32 + 793, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1638
	ctx.r11.s64 = ctx.r11.s64 + 1638;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,794(r10)
	REX_STORE_U8(ctx.r10.u32 + 794, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1638
	ctx.r11.s64 = ctx.r11.s64 + 1638;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,795(r10)
	REX_STORE_U8(ctx.r10.u32 + 795, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,796(r11)
	REX_STORE_U8(ctx.r11.u32 + 796, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,797(r11)
	REX_STORE_U8(ctx.r11.u32 + 797, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,798(r11)
	REX_STORE_U8(ctx.r11.u32 + 798, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,799(r11)
	REX_STORE_U8(ctx.r11.u32 + 799, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1650
	ctx.r11.s64 = ctx.r11.s64 + 1650;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,800(r10)
	REX_STORE_U8(ctx.r10.u32 + 800, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1650
	ctx.r11.s64 = ctx.r11.s64 + 1650;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,801(r10)
	REX_STORE_U8(ctx.r10.u32 + 801, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1650
	ctx.r11.s64 = ctx.r11.s64 + 1650;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,802(r10)
	REX_STORE_U8(ctx.r10.u32 + 802, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1650
	ctx.r11.s64 = ctx.r11.s64 + 1650;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,803(r10)
	REX_STORE_U8(ctx.r10.u32 + 803, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,804(r11)
	REX_STORE_U8(ctx.r11.u32 + 804, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,805(r11)
	REX_STORE_U8(ctx.r11.u32 + 805, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,806(r11)
	REX_STORE_U8(ctx.r11.u32 + 806, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,807(r11)
	REX_STORE_U8(ctx.r11.u32 + 807, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1662
	ctx.r11.s64 = ctx.r11.s64 + 1662;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,808(r10)
	REX_STORE_U8(ctx.r10.u32 + 808, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1662
	ctx.r11.s64 = ctx.r11.s64 + 1662;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,809(r10)
	REX_STORE_U8(ctx.r10.u32 + 809, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1662
	ctx.r11.s64 = ctx.r11.s64 + 1662;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,810(r10)
	REX_STORE_U8(ctx.r10.u32 + 810, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,1662
	ctx.r11.s64 = ctx.r11.s64 + 1662;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,811(r10)
	REX_STORE_U8(ctx.r10.u32 + 811, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,588
	ctx.r11.s64 = ctx.r11.s64 + 588;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,812(r10)
	REX_STORE_U8(ctx.r10.u32 + 812, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,588
	ctx.r11.s64 = ctx.r11.s64 + 588;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,813(r10)
	REX_STORE_U8(ctx.r10.u32 + 813, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,588
	ctx.r11.s64 = ctx.r11.s64 + 588;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,814(r10)
	REX_STORE_U8(ctx.r10.u32 + 814, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r11,r11,588
	ctx.r11.s64 = ctx.r11.s64 + 588;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stb r11,815(r10)
	REX_STORE_U8(ctx.r10.u32 + 815, ctx.r11.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,816(r11)
	REX_STORE_U8(ctx.r11.u32 + 816, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,817(r11)
	REX_STORE_U8(ctx.r11.u32 + 817, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,818(r11)
	REX_STORE_U8(ctx.r11.u32 + 818, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,819(r11)
	REX_STORE_U8(ctx.r11.u32 + 819, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,820(r11)
	REX_STORE_U8(ctx.r11.u32 + 820, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,821(r11)
	REX_STORE_U8(ctx.r11.u32 + 821, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,822(r11)
	REX_STORE_U8(ctx.r11.u32 + 822, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,823(r11)
	REX_STORE_U8(ctx.r11.u32 + 823, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,824(r11)
	REX_STORE_U8(ctx.r11.u32 + 824, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,825(r11)
	REX_STORE_U8(ctx.r11.u32 + 825, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,826(r11)
	REX_STORE_U8(ctx.r11.u32 + 826, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,827(r11)
	REX_STORE_U8(ctx.r11.u32 + 827, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,828(r11)
	REX_STORE_U8(ctx.r11.u32 + 828, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,829(r11)
	REX_STORE_U8(ctx.r11.u32 + 829, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,830(r11)
	REX_STORE_U8(ctx.r11.u32 + 830, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,831(r11)
	REX_STORE_U8(ctx.r11.u32 + 831, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,832(r11)
	REX_STORE_U8(ctx.r11.u32 + 832, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,833(r11)
	REX_STORE_U8(ctx.r11.u32 + 833, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,834(r11)
	REX_STORE_U8(ctx.r11.u32 + 834, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,835(r11)
	REX_STORE_U8(ctx.r11.u32 + 835, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,836(r11)
	REX_STORE_U8(ctx.r11.u32 + 836, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,837(r11)
	REX_STORE_U8(ctx.r11.u32 + 837, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,838(r11)
	REX_STORE_U8(ctx.r11.u32 + 838, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,839(r11)
	REX_STORE_U8(ctx.r11.u32 + 839, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,840(r11)
	REX_STORE_U8(ctx.r11.u32 + 840, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,841(r11)
	REX_STORE_U8(ctx.r11.u32 + 841, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,842(r11)
	REX_STORE_U8(ctx.r11.u32 + 842, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,843(r11)
	REX_STORE_U8(ctx.r11.u32 + 843, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,844(r11)
	REX_STORE_U8(ctx.r11.u32 + 844, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,845(r11)
	REX_STORE_U8(ctx.r11.u32 + 845, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,846(r11)
	REX_STORE_U8(ctx.r11.u32 + 846, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,847(r11)
	REX_STORE_U8(ctx.r11.u32 + 847, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,848(r11)
	REX_STORE_U8(ctx.r11.u32 + 848, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,849(r11)
	REX_STORE_U8(ctx.r11.u32 + 849, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,850(r11)
	REX_STORE_U8(ctx.r11.u32 + 850, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,851(r11)
	REX_STORE_U8(ctx.r11.u32 + 851, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,852(r11)
	REX_STORE_U8(ctx.r11.u32 + 852, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,853(r11)
	REX_STORE_U8(ctx.r11.u32 + 853, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,854(r11)
	REX_STORE_U8(ctx.r11.u32 + 854, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,855(r11)
	REX_STORE_U8(ctx.r11.u32 + 855, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,856(r11)
	REX_STORE_U8(ctx.r11.u32 + 856, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,857(r11)
	REX_STORE_U8(ctx.r11.u32 + 857, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,858(r11)
	REX_STORE_U8(ctx.r11.u32 + 858, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,859(r11)
	REX_STORE_U8(ctx.r11.u32 + 859, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,860(r11)
	REX_STORE_U8(ctx.r11.u32 + 860, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,861(r11)
	REX_STORE_U8(ctx.r11.u32 + 861, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,862(r11)
	REX_STORE_U8(ctx.r11.u32 + 862, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,863(r11)
	REX_STORE_U8(ctx.r11.u32 + 863, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,864(r11)
	REX_STORE_U8(ctx.r11.u32 + 864, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,865(r11)
	REX_STORE_U8(ctx.r11.u32 + 865, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,866(r11)
	REX_STORE_U8(ctx.r11.u32 + 866, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,867(r11)
	REX_STORE_U8(ctx.r11.u32 + 867, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,868(r11)
	REX_STORE_U8(ctx.r11.u32 + 868, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,869(r11)
	REX_STORE_U8(ctx.r11.u32 + 869, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,870(r11)
	REX_STORE_U8(ctx.r11.u32 + 870, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,871(r11)
	REX_STORE_U8(ctx.r11.u32 + 871, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,872(r11)
	REX_STORE_U8(ctx.r11.u32 + 872, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,873(r11)
	REX_STORE_U8(ctx.r11.u32 + 873, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,874(r11)
	REX_STORE_U8(ctx.r11.u32 + 874, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,875(r11)
	REX_STORE_U8(ctx.r11.u32 + 875, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,876(r11)
	REX_STORE_U8(ctx.r11.u32 + 876, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,877(r11)
	REX_STORE_U8(ctx.r11.u32 + 877, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,878(r11)
	REX_STORE_U8(ctx.r11.u32 + 878, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,879(r11)
	REX_STORE_U8(ctx.r11.u32 + 879, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,880(r11)
	REX_STORE_U8(ctx.r11.u32 + 880, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,881(r11)
	REX_STORE_U8(ctx.r11.u32 + 881, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,882(r11)
	REX_STORE_U8(ctx.r11.u32 + 882, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,883(r11)
	REX_STORE_U8(ctx.r11.u32 + 883, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,884(r11)
	REX_STORE_U8(ctx.r11.u32 + 884, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,885(r11)
	REX_STORE_U8(ctx.r11.u32 + 885, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,886(r11)
	REX_STORE_U8(ctx.r11.u32 + 886, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,887(r11)
	REX_STORE_U8(ctx.r11.u32 + 887, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,888(r11)
	REX_STORE_U8(ctx.r11.u32 + 888, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,889(r11)
	REX_STORE_U8(ctx.r11.u32 + 889, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,890(r11)
	REX_STORE_U8(ctx.r11.u32 + 890, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,891(r11)
	REX_STORE_U8(ctx.r11.u32 + 891, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,892(r11)
	REX_STORE_U8(ctx.r11.u32 + 892, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,893(r11)
	REX_STORE_U8(ctx.r11.u32 + 893, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,894(r11)
	REX_STORE_U8(ctx.r11.u32 + 894, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,895(r11)
	REX_STORE_U8(ctx.r11.u32 + 895, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,896(r11)
	REX_STORE_U8(ctx.r11.u32 + 896, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,897(r11)
	REX_STORE_U8(ctx.r11.u32 + 897, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,898(r11)
	REX_STORE_U8(ctx.r11.u32 + 898, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,899(r11)
	REX_STORE_U8(ctx.r11.u32 + 899, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,900(r11)
	REX_STORE_U8(ctx.r11.u32 + 900, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,901(r11)
	REX_STORE_U8(ctx.r11.u32 + 901, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,902(r11)
	REX_STORE_U8(ctx.r11.u32 + 902, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,903(r11)
	REX_STORE_U8(ctx.r11.u32 + 903, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,904(r11)
	REX_STORE_U8(ctx.r11.u32 + 904, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,905(r11)
	REX_STORE_U8(ctx.r11.u32 + 905, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,906(r11)
	REX_STORE_U8(ctx.r11.u32 + 906, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,907(r11)
	REX_STORE_U8(ctx.r11.u32 + 907, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,908(r11)
	REX_STORE_U8(ctx.r11.u32 + 908, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,909(r11)
	REX_STORE_U8(ctx.r11.u32 + 909, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,910(r11)
	REX_STORE_U8(ctx.r11.u32 + 910, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,911(r11)
	REX_STORE_U8(ctx.r11.u32 + 911, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,912(r11)
	REX_STORE_U8(ctx.r11.u32 + 912, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,913(r11)
	REX_STORE_U8(ctx.r11.u32 + 913, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,914(r11)
	REX_STORE_U8(ctx.r11.u32 + 914, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,915(r11)
	REX_STORE_U8(ctx.r11.u32 + 915, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,916(r11)
	REX_STORE_U8(ctx.r11.u32 + 916, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,917(r11)
	REX_STORE_U8(ctx.r11.u32 + 917, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,918(r11)
	REX_STORE_U8(ctx.r11.u32 + 918, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,919(r11)
	REX_STORE_U8(ctx.r11.u32 + 919, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,920(r11)
	REX_STORE_U8(ctx.r11.u32 + 920, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,921(r11)
	REX_STORE_U8(ctx.r11.u32 + 921, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,922(r11)
	REX_STORE_U8(ctx.r11.u32 + 922, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,923(r11)
	REX_STORE_U8(ctx.r11.u32 + 923, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,924(r11)
	REX_STORE_U8(ctx.r11.u32 + 924, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,925(r11)
	REX_STORE_U8(ctx.r11.u32 + 925, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,926(r11)
	REX_STORE_U8(ctx.r11.u32 + 926, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,927(r11)
	REX_STORE_U8(ctx.r11.u32 + 927, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,928(r11)
	REX_STORE_U8(ctx.r11.u32 + 928, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,929(r11)
	REX_STORE_U8(ctx.r11.u32 + 929, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,930(r11)
	REX_STORE_U8(ctx.r11.u32 + 930, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,931(r11)
	REX_STORE_U8(ctx.r11.u32 + 931, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,932(r11)
	REX_STORE_U8(ctx.r11.u32 + 932, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,933(r11)
	REX_STORE_U8(ctx.r11.u32 + 933, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,934(r11)
	REX_STORE_U8(ctx.r11.u32 + 934, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,935(r11)
	REX_STORE_U8(ctx.r11.u32 + 935, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,936(r11)
	REX_STORE_U8(ctx.r11.u32 + 936, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,937(r11)
	REX_STORE_U8(ctx.r11.u32 + 937, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,938(r11)
	REX_STORE_U8(ctx.r11.u32 + 938, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,939(r11)
	REX_STORE_U8(ctx.r11.u32 + 939, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,940(r11)
	REX_STORE_U8(ctx.r11.u32 + 940, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,941(r11)
	REX_STORE_U8(ctx.r11.u32 + 941, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,942(r11)
	REX_STORE_U8(ctx.r11.u32 + 942, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,943(r11)
	REX_STORE_U8(ctx.r11.u32 + 943, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,944(r11)
	REX_STORE_U8(ctx.r11.u32 + 944, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,945(r11)
	REX_STORE_U8(ctx.r11.u32 + 945, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,946(r11)
	REX_STORE_U8(ctx.r11.u32 + 946, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,947(r11)
	REX_STORE_U8(ctx.r11.u32 + 947, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,948(r11)
	REX_STORE_U8(ctx.r11.u32 + 948, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,949(r11)
	REX_STORE_U8(ctx.r11.u32 + 949, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,950(r11)
	REX_STORE_U8(ctx.r11.u32 + 950, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,951(r11)
	REX_STORE_U8(ctx.r11.u32 + 951, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,952(r11)
	REX_STORE_U8(ctx.r11.u32 + 952, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,953(r11)
	REX_STORE_U8(ctx.r11.u32 + 953, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,954(r11)
	REX_STORE_U8(ctx.r11.u32 + 954, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,955(r11)
	REX_STORE_U8(ctx.r11.u32 + 955, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,956(r11)
	REX_STORE_U8(ctx.r11.u32 + 956, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,957(r11)
	REX_STORE_U8(ctx.r11.u32 + 957, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,958(r11)
	REX_STORE_U8(ctx.r11.u32 + 958, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,959(r11)
	REX_STORE_U8(ctx.r11.u32 + 959, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,960(r11)
	REX_STORE_U8(ctx.r11.u32 + 960, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,961(r11)
	REX_STORE_U8(ctx.r11.u32 + 961, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,962(r11)
	REX_STORE_U8(ctx.r11.u32 + 962, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,963(r11)
	REX_STORE_U8(ctx.r11.u32 + 963, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,964(r11)
	REX_STORE_U8(ctx.r11.u32 + 964, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,965(r11)
	REX_STORE_U8(ctx.r11.u32 + 965, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,966(r11)
	REX_STORE_U8(ctx.r11.u32 + 966, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,967(r11)
	REX_STORE_U8(ctx.r11.u32 + 967, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,968(r11)
	REX_STORE_U8(ctx.r11.u32 + 968, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,969(r11)
	REX_STORE_U8(ctx.r11.u32 + 969, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,970(r11)
	REX_STORE_U8(ctx.r11.u32 + 970, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,971(r11)
	REX_STORE_U8(ctx.r11.u32 + 971, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,972(r11)
	REX_STORE_U8(ctx.r11.u32 + 972, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,973(r11)
	REX_STORE_U8(ctx.r11.u32 + 973, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,974(r11)
	REX_STORE_U8(ctx.r11.u32 + 974, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,975(r11)
	REX_STORE_U8(ctx.r11.u32 + 975, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,976(r11)
	REX_STORE_U8(ctx.r11.u32 + 976, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,977(r11)
	REX_STORE_U8(ctx.r11.u32 + 977, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,978(r11)
	REX_STORE_U8(ctx.r11.u32 + 978, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,979(r11)
	REX_STORE_U8(ctx.r11.u32 + 979, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,980(r11)
	REX_STORE_U8(ctx.r11.u32 + 980, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,981(r11)
	REX_STORE_U8(ctx.r11.u32 + 981, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,982(r11)
	REX_STORE_U8(ctx.r11.u32 + 982, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,983(r11)
	REX_STORE_U8(ctx.r11.u32 + 983, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,984(r11)
	REX_STORE_U8(ctx.r11.u32 + 984, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,985(r11)
	REX_STORE_U8(ctx.r11.u32 + 985, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,986(r11)
	REX_STORE_U8(ctx.r11.u32 + 986, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,987(r11)
	REX_STORE_U8(ctx.r11.u32 + 987, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,988(r11)
	REX_STORE_U8(ctx.r11.u32 + 988, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,989(r11)
	REX_STORE_U8(ctx.r11.u32 + 989, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,990(r11)
	REX_STORE_U8(ctx.r11.u32 + 990, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,991(r11)
	REX_STORE_U8(ctx.r11.u32 + 991, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,992(r11)
	REX_STORE_U8(ctx.r11.u32 + 992, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,993(r11)
	REX_STORE_U8(ctx.r11.u32 + 993, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,994(r11)
	REX_STORE_U8(ctx.r11.u32 + 994, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,995(r11)
	REX_STORE_U8(ctx.r11.u32 + 995, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,996(r11)
	REX_STORE_U8(ctx.r11.u32 + 996, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,997(r11)
	REX_STORE_U8(ctx.r11.u32 + 997, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,998(r11)
	REX_STORE_U8(ctx.r11.u32 + 998, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,999(r11)
	REX_STORE_U8(ctx.r11.u32 + 999, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1000(r11)
	REX_STORE_U8(ctx.r11.u32 + 1000, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1001(r11)
	REX_STORE_U8(ctx.r11.u32 + 1001, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1002(r11)
	REX_STORE_U8(ctx.r11.u32 + 1002, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1003(r11)
	REX_STORE_U8(ctx.r11.u32 + 1003, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1004(r11)
	REX_STORE_U8(ctx.r11.u32 + 1004, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1005(r11)
	REX_STORE_U8(ctx.r11.u32 + 1005, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1006(r11)
	REX_STORE_U8(ctx.r11.u32 + 1006, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1007(r11)
	REX_STORE_U8(ctx.r11.u32 + 1007, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1008(r11)
	REX_STORE_U8(ctx.r11.u32 + 1008, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1009(r11)
	REX_STORE_U8(ctx.r11.u32 + 1009, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1010(r11)
	REX_STORE_U8(ctx.r11.u32 + 1010, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1011(r11)
	REX_STORE_U8(ctx.r11.u32 + 1011, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1012(r11)
	REX_STORE_U8(ctx.r11.u32 + 1012, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1013(r11)
	REX_STORE_U8(ctx.r11.u32 + 1013, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1014(r11)
	REX_STORE_U8(ctx.r11.u32 + 1014, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1015(r11)
	REX_STORE_U8(ctx.r11.u32 + 1015, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1016(r11)
	REX_STORE_U8(ctx.r11.u32 + 1016, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1017(r11)
	REX_STORE_U8(ctx.r11.u32 + 1017, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1018(r11)
	REX_STORE_U8(ctx.r11.u32 + 1018, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,1019(r11)
	REX_STORE_U8(ctx.r11.u32 + 1019, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1020(r11)
	REX_STORE_U8(ctx.r11.u32 + 1020, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1021(r11)
	REX_STORE_U8(ctx.r11.u32 + 1021, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1022(r11)
	REX_STORE_U8(ctx.r11.u32 + 1022, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1023(r11)
	REX_STORE_U8(ctx.r11.u32 + 1023, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1024(r11)
	REX_STORE_U8(ctx.r11.u32 + 1024, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,1025(r11)
	REX_STORE_U8(ctx.r11.u32 + 1025, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1026(r11)
	REX_STORE_U8(ctx.r11.u32 + 1026, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1027(r11)
	REX_STORE_U8(ctx.r11.u32 + 1027, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1028(r11)
	REX_STORE_U8(ctx.r11.u32 + 1028, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1029(r11)
	REX_STORE_U8(ctx.r11.u32 + 1029, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1030(r11)
	REX_STORE_U8(ctx.r11.u32 + 1030, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,1031(r11)
	REX_STORE_U8(ctx.r11.u32 + 1031, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1032(r11)
	REX_STORE_U8(ctx.r11.u32 + 1032, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1033(r11)
	REX_STORE_U8(ctx.r11.u32 + 1033, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1034(r11)
	REX_STORE_U8(ctx.r11.u32 + 1034, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1035(r11)
	REX_STORE_U8(ctx.r11.u32 + 1035, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1036(r11)
	REX_STORE_U8(ctx.r11.u32 + 1036, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1037(r11)
	REX_STORE_U8(ctx.r11.u32 + 1037, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1038(r11)
	REX_STORE_U8(ctx.r11.u32 + 1038, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1039(r11)
	REX_STORE_U8(ctx.r11.u32 + 1039, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1040(r11)
	REX_STORE_U8(ctx.r11.u32 + 1040, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1041(r11)
	REX_STORE_U8(ctx.r11.u32 + 1041, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1042(r11)
	REX_STORE_U8(ctx.r11.u32 + 1042, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1043(r11)
	REX_STORE_U8(ctx.r11.u32 + 1043, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1044(r11)
	REX_STORE_U8(ctx.r11.u32 + 1044, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1045(r11)
	REX_STORE_U8(ctx.r11.u32 + 1045, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1046(r11)
	REX_STORE_U8(ctx.r11.u32 + 1046, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1047(r11)
	REX_STORE_U8(ctx.r11.u32 + 1047, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1048(r11)
	REX_STORE_U8(ctx.r11.u32 + 1048, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1049(r11)
	REX_STORE_U8(ctx.r11.u32 + 1049, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1050(r11)
	REX_STORE_U8(ctx.r11.u32 + 1050, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1051(r11)
	REX_STORE_U8(ctx.r11.u32 + 1051, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1052(r11)
	REX_STORE_U8(ctx.r11.u32 + 1052, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1053(r11)
	REX_STORE_U8(ctx.r11.u32 + 1053, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1054(r11)
	REX_STORE_U8(ctx.r11.u32 + 1054, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1055(r11)
	REX_STORE_U8(ctx.r11.u32 + 1055, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1056(r11)
	REX_STORE_U8(ctx.r11.u32 + 1056, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1057(r11)
	REX_STORE_U8(ctx.r11.u32 + 1057, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1058(r11)
	REX_STORE_U8(ctx.r11.u32 + 1058, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1059(r11)
	REX_STORE_U8(ctx.r11.u32 + 1059, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1060(r11)
	REX_STORE_U8(ctx.r11.u32 + 1060, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1061(r11)
	REX_STORE_U8(ctx.r11.u32 + 1061, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1062(r11)
	REX_STORE_U8(ctx.r11.u32 + 1062, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1063(r11)
	REX_STORE_U8(ctx.r11.u32 + 1063, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1064(r11)
	REX_STORE_U8(ctx.r11.u32 + 1064, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1065(r11)
	REX_STORE_U8(ctx.r11.u32 + 1065, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1066(r11)
	REX_STORE_U8(ctx.r11.u32 + 1066, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,1067(r11)
	REX_STORE_U8(ctx.r11.u32 + 1067, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1068(r11)
	REX_STORE_U8(ctx.r11.u32 + 1068, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1069(r11)
	REX_STORE_U8(ctx.r11.u32 + 1069, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1070(r11)
	REX_STORE_U8(ctx.r11.u32 + 1070, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1071(r11)
	REX_STORE_U8(ctx.r11.u32 + 1071, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1072(r11)
	REX_STORE_U8(ctx.r11.u32 + 1072, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,1073(r11)
	REX_STORE_U8(ctx.r11.u32 + 1073, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1074(r11)
	REX_STORE_U8(ctx.r11.u32 + 1074, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1075(r11)
	REX_STORE_U8(ctx.r11.u32 + 1075, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1076(r11)
	REX_STORE_U8(ctx.r11.u32 + 1076, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1077(r11)
	REX_STORE_U8(ctx.r11.u32 + 1077, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1078(r11)
	REX_STORE_U8(ctx.r11.u32 + 1078, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,1079(r11)
	REX_STORE_U8(ctx.r11.u32 + 1079, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1080(r11)
	REX_STORE_U8(ctx.r11.u32 + 1080, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1081(r11)
	REX_STORE_U8(ctx.r11.u32 + 1081, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1082(r11)
	REX_STORE_U8(ctx.r11.u32 + 1082, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1083(r11)
	REX_STORE_U8(ctx.r11.u32 + 1083, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1084(r11)
	REX_STORE_U8(ctx.r11.u32 + 1084, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1085(r11)
	REX_STORE_U8(ctx.r11.u32 + 1085, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1086(r11)
	REX_STORE_U8(ctx.r11.u32 + 1086, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1087(r11)
	REX_STORE_U8(ctx.r11.u32 + 1087, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1088(r11)
	REX_STORE_U8(ctx.r11.u32 + 1088, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1089(r11)
	REX_STORE_U8(ctx.r11.u32 + 1089, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1090(r11)
	REX_STORE_U8(ctx.r11.u32 + 1090, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1091(r11)
	REX_STORE_U8(ctx.r11.u32 + 1091, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1092(r11)
	REX_STORE_U8(ctx.r11.u32 + 1092, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1093(r11)
	REX_STORE_U8(ctx.r11.u32 + 1093, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1094(r11)
	REX_STORE_U8(ctx.r11.u32 + 1094, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1095(r11)
	REX_STORE_U8(ctx.r11.u32 + 1095, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1096(r11)
	REX_STORE_U8(ctx.r11.u32 + 1096, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1097(r11)
	REX_STORE_U8(ctx.r11.u32 + 1097, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1098(r11)
	REX_STORE_U8(ctx.r11.u32 + 1098, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1099(r11)
	REX_STORE_U8(ctx.r11.u32 + 1099, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1100(r11)
	REX_STORE_U8(ctx.r11.u32 + 1100, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1101(r11)
	REX_STORE_U8(ctx.r11.u32 + 1101, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1102(r11)
	REX_STORE_U8(ctx.r11.u32 + 1102, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1103(r11)
	REX_STORE_U8(ctx.r11.u32 + 1103, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1104(r11)
	REX_STORE_U8(ctx.r11.u32 + 1104, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1105(r11)
	REX_STORE_U8(ctx.r11.u32 + 1105, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1106(r11)
	REX_STORE_U8(ctx.r11.u32 + 1106, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1107(r11)
	REX_STORE_U8(ctx.r11.u32 + 1107, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1108(r11)
	REX_STORE_U8(ctx.r11.u32 + 1108, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1109(r11)
	REX_STORE_U8(ctx.r11.u32 + 1109, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1110(r11)
	REX_STORE_U8(ctx.r11.u32 + 1110, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1111(r11)
	REX_STORE_U8(ctx.r11.u32 + 1111, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1112(r11)
	REX_STORE_U8(ctx.r11.u32 + 1112, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1113(r11)
	REX_STORE_U8(ctx.r11.u32 + 1113, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1114(r11)
	REX_STORE_U8(ctx.r11.u32 + 1114, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,1115(r11)
	REX_STORE_U8(ctx.r11.u32 + 1115, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1116(r11)
	REX_STORE_U8(ctx.r11.u32 + 1116, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1117(r11)
	REX_STORE_U8(ctx.r11.u32 + 1117, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1118(r11)
	REX_STORE_U8(ctx.r11.u32 + 1118, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1119(r11)
	REX_STORE_U8(ctx.r11.u32 + 1119, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1120(r11)
	REX_STORE_U8(ctx.r11.u32 + 1120, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,1121(r11)
	REX_STORE_U8(ctx.r11.u32 + 1121, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1122(r11)
	REX_STORE_U8(ctx.r11.u32 + 1122, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1123(r11)
	REX_STORE_U8(ctx.r11.u32 + 1123, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1124(r11)
	REX_STORE_U8(ctx.r11.u32 + 1124, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1125(r11)
	REX_STORE_U8(ctx.r11.u32 + 1125, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1126(r11)
	REX_STORE_U8(ctx.r11.u32 + 1126, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,1127(r11)
	REX_STORE_U8(ctx.r11.u32 + 1127, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1128(r11)
	REX_STORE_U8(ctx.r11.u32 + 1128, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1129(r11)
	REX_STORE_U8(ctx.r11.u32 + 1129, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1130(r11)
	REX_STORE_U8(ctx.r11.u32 + 1130, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1131(r11)
	REX_STORE_U8(ctx.r11.u32 + 1131, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1132(r11)
	REX_STORE_U8(ctx.r11.u32 + 1132, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1133(r11)
	REX_STORE_U8(ctx.r11.u32 + 1133, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1134(r11)
	REX_STORE_U8(ctx.r11.u32 + 1134, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1135(r11)
	REX_STORE_U8(ctx.r11.u32 + 1135, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1136(r11)
	REX_STORE_U8(ctx.r11.u32 + 1136, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1137(r11)
	REX_STORE_U8(ctx.r11.u32 + 1137, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1138(r11)
	REX_STORE_U8(ctx.r11.u32 + 1138, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1139(r11)
	REX_STORE_U8(ctx.r11.u32 + 1139, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1140(r11)
	REX_STORE_U8(ctx.r11.u32 + 1140, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1141(r11)
	REX_STORE_U8(ctx.r11.u32 + 1141, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1142(r11)
	REX_STORE_U8(ctx.r11.u32 + 1142, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,1143(r11)
	REX_STORE_U8(ctx.r11.u32 + 1143, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1144(r11)
	REX_STORE_U8(ctx.r11.u32 + 1144, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1145(r11)
	REX_STORE_U8(ctx.r11.u32 + 1145, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1146(r11)
	REX_STORE_U8(ctx.r11.u32 + 1146, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1147(r11)
	REX_STORE_U8(ctx.r11.u32 + 1147, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1148(r11)
	REX_STORE_U8(ctx.r11.u32 + 1148, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1149(r11)
	REX_STORE_U8(ctx.r11.u32 + 1149, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1150(r11)
	REX_STORE_U8(ctx.r11.u32 + 1150, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,1151(r11)
	REX_STORE_U8(ctx.r11.u32 + 1151, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1152(r11)
	REX_STORE_U8(ctx.r11.u32 + 1152, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1153(r11)
	REX_STORE_U8(ctx.r11.u32 + 1153, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1154(r11)
	REX_STORE_U8(ctx.r11.u32 + 1154, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1155(r11)
	REX_STORE_U8(ctx.r11.u32 + 1155, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1156(r11)
	REX_STORE_U8(ctx.r11.u32 + 1156, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1157(r11)
	REX_STORE_U8(ctx.r11.u32 + 1157, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1158(r11)
	REX_STORE_U8(ctx.r11.u32 + 1158, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1159(r11)
	REX_STORE_U8(ctx.r11.u32 + 1159, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1160(r11)
	REX_STORE_U8(ctx.r11.u32 + 1160, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1161(r11)
	REX_STORE_U8(ctx.r11.u32 + 1161, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1162(r11)
	REX_STORE_U8(ctx.r11.u32 + 1162, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,1163(r11)
	REX_STORE_U8(ctx.r11.u32 + 1163, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1164(r11)
	REX_STORE_U8(ctx.r11.u32 + 1164, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1165(r11)
	REX_STORE_U8(ctx.r11.u32 + 1165, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1166(r11)
	REX_STORE_U8(ctx.r11.u32 + 1166, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1167(r11)
	REX_STORE_U8(ctx.r11.u32 + 1167, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1168(r11)
	REX_STORE_U8(ctx.r11.u32 + 1168, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1169(r11)
	REX_STORE_U8(ctx.r11.u32 + 1169, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1170(r11)
	REX_STORE_U8(ctx.r11.u32 + 1170, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1171(r11)
	REX_STORE_U8(ctx.r11.u32 + 1171, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1172(r11)
	REX_STORE_U8(ctx.r11.u32 + 1172, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1173(r11)
	REX_STORE_U8(ctx.r11.u32 + 1173, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1174(r11)
	REX_STORE_U8(ctx.r11.u32 + 1174, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1175(r11)
	REX_STORE_U8(ctx.r11.u32 + 1175, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1176(r11)
	REX_STORE_U8(ctx.r11.u32 + 1176, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1177(r11)
	REX_STORE_U8(ctx.r11.u32 + 1177, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1178(r11)
	REX_STORE_U8(ctx.r11.u32 + 1178, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1179(r11)
	REX_STORE_U8(ctx.r11.u32 + 1179, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1180(r11)
	REX_STORE_U8(ctx.r11.u32 + 1180, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1181(r11)
	REX_STORE_U8(ctx.r11.u32 + 1181, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1182(r11)
	REX_STORE_U8(ctx.r11.u32 + 1182, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1183(r11)
	REX_STORE_U8(ctx.r11.u32 + 1183, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1184(r11)
	REX_STORE_U8(ctx.r11.u32 + 1184, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1185(r11)
	REX_STORE_U8(ctx.r11.u32 + 1185, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1186(r11)
	REX_STORE_U8(ctx.r11.u32 + 1186, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,1187(r11)
	REX_STORE_U8(ctx.r11.u32 + 1187, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1188(r11)
	REX_STORE_U8(ctx.r11.u32 + 1188, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1189(r11)
	REX_STORE_U8(ctx.r11.u32 + 1189, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1190(r11)
	REX_STORE_U8(ctx.r11.u32 + 1190, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1191(r11)
	REX_STORE_U8(ctx.r11.u32 + 1191, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1192(r11)
	REX_STORE_U8(ctx.r11.u32 + 1192, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1193(r11)
	REX_STORE_U8(ctx.r11.u32 + 1193, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1194(r11)
	REX_STORE_U8(ctx.r11.u32 + 1194, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1195(r11)
	REX_STORE_U8(ctx.r11.u32 + 1195, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1196(r11)
	REX_STORE_U8(ctx.r11.u32 + 1196, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1197(r11)
	REX_STORE_U8(ctx.r11.u32 + 1197, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1198(r11)
	REX_STORE_U8(ctx.r11.u32 + 1198, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1199(r11)
	REX_STORE_U8(ctx.r11.u32 + 1199, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1200(r11)
	REX_STORE_U8(ctx.r11.u32 + 1200, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1201(r11)
	REX_STORE_U8(ctx.r11.u32 + 1201, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1202(r11)
	REX_STORE_U8(ctx.r11.u32 + 1202, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1203(r11)
	REX_STORE_U8(ctx.r11.u32 + 1203, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1204(r11)
	REX_STORE_U8(ctx.r11.u32 + 1204, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1205(r11)
	REX_STORE_U8(ctx.r11.u32 + 1205, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1206(r11)
	REX_STORE_U8(ctx.r11.u32 + 1206, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1207(r11)
	REX_STORE_U8(ctx.r11.u32 + 1207, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1208(r11)
	REX_STORE_U8(ctx.r11.u32 + 1208, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1209(r11)
	REX_STORE_U8(ctx.r11.u32 + 1209, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1210(r11)
	REX_STORE_U8(ctx.r11.u32 + 1210, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,1211(r11)
	REX_STORE_U8(ctx.r11.u32 + 1211, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1212(r11)
	REX_STORE_U8(ctx.r11.u32 + 1212, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1213(r11)
	REX_STORE_U8(ctx.r11.u32 + 1213, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1214(r11)
	REX_STORE_U8(ctx.r11.u32 + 1214, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1215(r11)
	REX_STORE_U8(ctx.r11.u32 + 1215, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1216(r11)
	REX_STORE_U8(ctx.r11.u32 + 1216, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,1217(r11)
	REX_STORE_U8(ctx.r11.u32 + 1217, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1218(r11)
	REX_STORE_U8(ctx.r11.u32 + 1218, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1219(r11)
	REX_STORE_U8(ctx.r11.u32 + 1219, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1220(r11)
	REX_STORE_U8(ctx.r11.u32 + 1220, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1221(r11)
	REX_STORE_U8(ctx.r11.u32 + 1221, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1222(r11)
	REX_STORE_U8(ctx.r11.u32 + 1222, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,1223(r11)
	REX_STORE_U8(ctx.r11.u32 + 1223, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1224(r11)
	REX_STORE_U8(ctx.r11.u32 + 1224, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1225(r11)
	REX_STORE_U8(ctx.r11.u32 + 1225, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1226(r11)
	REX_STORE_U8(ctx.r11.u32 + 1226, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1227(r11)
	REX_STORE_U8(ctx.r11.u32 + 1227, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1228(r11)
	REX_STORE_U8(ctx.r11.u32 + 1228, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,1229(r11)
	REX_STORE_U8(ctx.r11.u32 + 1229, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1230(r11)
	REX_STORE_U8(ctx.r11.u32 + 1230, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1231(r11)
	REX_STORE_U8(ctx.r11.u32 + 1231, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1232(r11)
	REX_STORE_U8(ctx.r11.u32 + 1232, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1233(r11)
	REX_STORE_U8(ctx.r11.u32 + 1233, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1234(r11)
	REX_STORE_U8(ctx.r11.u32 + 1234, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,1235(r11)
	REX_STORE_U8(ctx.r11.u32 + 1235, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1236(r11)
	REX_STORE_U8(ctx.r11.u32 + 1236, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1237(r11)
	REX_STORE_U8(ctx.r11.u32 + 1237, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1238(r11)
	REX_STORE_U8(ctx.r11.u32 + 1238, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1239(r11)
	REX_STORE_U8(ctx.r11.u32 + 1239, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1240(r11)
	REX_STORE_U8(ctx.r11.u32 + 1240, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,1241(r11)
	REX_STORE_U8(ctx.r11.u32 + 1241, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1242(r11)
	REX_STORE_U8(ctx.r11.u32 + 1242, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1243(r11)
	REX_STORE_U8(ctx.r11.u32 + 1243, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1244(r11)
	REX_STORE_U8(ctx.r11.u32 + 1244, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1245(r11)
	REX_STORE_U8(ctx.r11.u32 + 1245, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1246(r11)
	REX_STORE_U8(ctx.r11.u32 + 1246, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,1247(r11)
	REX_STORE_U8(ctx.r11.u32 + 1247, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1248(r11)
	REX_STORE_U8(ctx.r11.u32 + 1248, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1249(r11)
	REX_STORE_U8(ctx.r11.u32 + 1249, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1250(r11)
	REX_STORE_U8(ctx.r11.u32 + 1250, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1251(r11)
	REX_STORE_U8(ctx.r11.u32 + 1251, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1252(r11)
	REX_STORE_U8(ctx.r11.u32 + 1252, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1253(r11)
	REX_STORE_U8(ctx.r11.u32 + 1253, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1254(r11)
	REX_STORE_U8(ctx.r11.u32 + 1254, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1255(r11)
	REX_STORE_U8(ctx.r11.u32 + 1255, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1256(r11)
	REX_STORE_U8(ctx.r11.u32 + 1256, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1257(r11)
	REX_STORE_U8(ctx.r11.u32 + 1257, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1258(r11)
	REX_STORE_U8(ctx.r11.u32 + 1258, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,1259(r11)
	REX_STORE_U8(ctx.r11.u32 + 1259, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1260(r11)
	REX_STORE_U8(ctx.r11.u32 + 1260, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1261(r11)
	REX_STORE_U8(ctx.r11.u32 + 1261, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1262(r11)
	REX_STORE_U8(ctx.r11.u32 + 1262, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1263(r11)
	REX_STORE_U8(ctx.r11.u32 + 1263, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1264(r11)
	REX_STORE_U8(ctx.r11.u32 + 1264, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1265(r11)
	REX_STORE_U8(ctx.r11.u32 + 1265, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1266(r11)
	REX_STORE_U8(ctx.r11.u32 + 1266, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1267(r11)
	REX_STORE_U8(ctx.r11.u32 + 1267, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1268(r11)
	REX_STORE_U8(ctx.r11.u32 + 1268, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1269(r11)
	REX_STORE_U8(ctx.r11.u32 + 1269, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1270(r11)
	REX_STORE_U8(ctx.r11.u32 + 1270, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1271(r11)
	REX_STORE_U8(ctx.r11.u32 + 1271, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1272(r11)
	REX_STORE_U8(ctx.r11.u32 + 1272, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1273(r11)
	REX_STORE_U8(ctx.r11.u32 + 1273, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1274(r11)
	REX_STORE_U8(ctx.r11.u32 + 1274, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1275(r11)
	REX_STORE_U8(ctx.r11.u32 + 1275, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1276(r11)
	REX_STORE_U8(ctx.r11.u32 + 1276, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1277(r11)
	REX_STORE_U8(ctx.r11.u32 + 1277, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1278(r11)
	REX_STORE_U8(ctx.r11.u32 + 1278, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1279(r11)
	REX_STORE_U8(ctx.r11.u32 + 1279, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1280(r11)
	REX_STORE_U8(ctx.r11.u32 + 1280, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1281(r11)
	REX_STORE_U8(ctx.r11.u32 + 1281, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1282(r11)
	REX_STORE_U8(ctx.r11.u32 + 1282, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,1283(r11)
	REX_STORE_U8(ctx.r11.u32 + 1283, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1284(r11)
	REX_STORE_U8(ctx.r11.u32 + 1284, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1285(r11)
	REX_STORE_U8(ctx.r11.u32 + 1285, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1286(r11)
	REX_STORE_U8(ctx.r11.u32 + 1286, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1287(r11)
	REX_STORE_U8(ctx.r11.u32 + 1287, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1288(r11)
	REX_STORE_U8(ctx.r11.u32 + 1288, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1289(r11)
	REX_STORE_U8(ctx.r11.u32 + 1289, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1290(r11)
	REX_STORE_U8(ctx.r11.u32 + 1290, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1291(r11)
	REX_STORE_U8(ctx.r11.u32 + 1291, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1292(r11)
	REX_STORE_U8(ctx.r11.u32 + 1292, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1293(r11)
	REX_STORE_U8(ctx.r11.u32 + 1293, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1294(r11)
	REX_STORE_U8(ctx.r11.u32 + 1294, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1295(r11)
	REX_STORE_U8(ctx.r11.u32 + 1295, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1296(r11)
	REX_STORE_U8(ctx.r11.u32 + 1296, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1297(r11)
	REX_STORE_U8(ctx.r11.u32 + 1297, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1298(r11)
	REX_STORE_U8(ctx.r11.u32 + 1298, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1299(r11)
	REX_STORE_U8(ctx.r11.u32 + 1299, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1300(r11)
	REX_STORE_U8(ctx.r11.u32 + 1300, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1301(r11)
	REX_STORE_U8(ctx.r11.u32 + 1301, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1302(r11)
	REX_STORE_U8(ctx.r11.u32 + 1302, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1303(r11)
	REX_STORE_U8(ctx.r11.u32 + 1303, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1304(r11)
	REX_STORE_U8(ctx.r11.u32 + 1304, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1305(r11)
	REX_STORE_U8(ctx.r11.u32 + 1305, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1306(r11)
	REX_STORE_U8(ctx.r11.u32 + 1306, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,1307(r11)
	REX_STORE_U8(ctx.r11.u32 + 1307, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1308(r11)
	REX_STORE_U8(ctx.r11.u32 + 1308, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1309(r11)
	REX_STORE_U8(ctx.r11.u32 + 1309, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1310(r11)
	REX_STORE_U8(ctx.r11.u32 + 1310, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1311(r11)
	REX_STORE_U8(ctx.r11.u32 + 1311, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1312(r11)
	REX_STORE_U8(ctx.r11.u32 + 1312, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,1313(r11)
	REX_STORE_U8(ctx.r11.u32 + 1313, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1314(r11)
	REX_STORE_U8(ctx.r11.u32 + 1314, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1315(r11)
	REX_STORE_U8(ctx.r11.u32 + 1315, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1316(r11)
	REX_STORE_U8(ctx.r11.u32 + 1316, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1317(r11)
	REX_STORE_U8(ctx.r11.u32 + 1317, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1318(r11)
	REX_STORE_U8(ctx.r11.u32 + 1318, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,1319(r11)
	REX_STORE_U8(ctx.r11.u32 + 1319, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1320(r11)
	REX_STORE_U8(ctx.r11.u32 + 1320, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1321(r11)
	REX_STORE_U8(ctx.r11.u32 + 1321, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1322(r11)
	REX_STORE_U8(ctx.r11.u32 + 1322, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1323(r11)
	REX_STORE_U8(ctx.r11.u32 + 1323, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1324(r11)
	REX_STORE_U8(ctx.r11.u32 + 1324, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,1325(r11)
	REX_STORE_U8(ctx.r11.u32 + 1325, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1326(r11)
	REX_STORE_U8(ctx.r11.u32 + 1326, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1327(r11)
	REX_STORE_U8(ctx.r11.u32 + 1327, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1328(r11)
	REX_STORE_U8(ctx.r11.u32 + 1328, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1329(r11)
	REX_STORE_U8(ctx.r11.u32 + 1329, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1330(r11)
	REX_STORE_U8(ctx.r11.u32 + 1330, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,1331(r11)
	REX_STORE_U8(ctx.r11.u32 + 1331, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1332(r11)
	REX_STORE_U8(ctx.r11.u32 + 1332, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1333(r11)
	REX_STORE_U8(ctx.r11.u32 + 1333, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1334(r11)
	REX_STORE_U8(ctx.r11.u32 + 1334, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1335(r11)
	REX_STORE_U8(ctx.r11.u32 + 1335, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1336(r11)
	REX_STORE_U8(ctx.r11.u32 + 1336, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,1337(r11)
	REX_STORE_U8(ctx.r11.u32 + 1337, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1338(r11)
	REX_STORE_U8(ctx.r11.u32 + 1338, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1339(r11)
	REX_STORE_U8(ctx.r11.u32 + 1339, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1340(r11)
	REX_STORE_U8(ctx.r11.u32 + 1340, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1341(r11)
	REX_STORE_U8(ctx.r11.u32 + 1341, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1342(r11)
	REX_STORE_U8(ctx.r11.u32 + 1342, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,1343(r11)
	REX_STORE_U8(ctx.r11.u32 + 1343, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1344(r11)
	REX_STORE_U8(ctx.r11.u32 + 1344, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1345(r11)
	REX_STORE_U8(ctx.r11.u32 + 1345, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1346(r11)
	REX_STORE_U8(ctx.r11.u32 + 1346, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1347(r11)
	REX_STORE_U8(ctx.r11.u32 + 1347, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1348(r11)
	REX_STORE_U8(ctx.r11.u32 + 1348, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1349(r11)
	REX_STORE_U8(ctx.r11.u32 + 1349, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1350(r11)
	REX_STORE_U8(ctx.r11.u32 + 1350, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1351(r11)
	REX_STORE_U8(ctx.r11.u32 + 1351, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1352(r11)
	REX_STORE_U8(ctx.r11.u32 + 1352, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1353(r11)
	REX_STORE_U8(ctx.r11.u32 + 1353, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1354(r11)
	REX_STORE_U8(ctx.r11.u32 + 1354, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,1355(r11)
	REX_STORE_U8(ctx.r11.u32 + 1355, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1356(r11)
	REX_STORE_U8(ctx.r11.u32 + 1356, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1357(r11)
	REX_STORE_U8(ctx.r11.u32 + 1357, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1358(r11)
	REX_STORE_U8(ctx.r11.u32 + 1358, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1359(r11)
	REX_STORE_U8(ctx.r11.u32 + 1359, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1360(r11)
	REX_STORE_U8(ctx.r11.u32 + 1360, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1361(r11)
	REX_STORE_U8(ctx.r11.u32 + 1361, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1362(r11)
	REX_STORE_U8(ctx.r11.u32 + 1362, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1363(r11)
	REX_STORE_U8(ctx.r11.u32 + 1363, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1364(r11)
	REX_STORE_U8(ctx.r11.u32 + 1364, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1365(r11)
	REX_STORE_U8(ctx.r11.u32 + 1365, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1366(r11)
	REX_STORE_U8(ctx.r11.u32 + 1366, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1367(r11)
	REX_STORE_U8(ctx.r11.u32 + 1367, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1368(r11)
	REX_STORE_U8(ctx.r11.u32 + 1368, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1369(r11)
	REX_STORE_U8(ctx.r11.u32 + 1369, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1370(r11)
	REX_STORE_U8(ctx.r11.u32 + 1370, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1371(r11)
	REX_STORE_U8(ctx.r11.u32 + 1371, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1372(r11)
	REX_STORE_U8(ctx.r11.u32 + 1372, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1373(r11)
	REX_STORE_U8(ctx.r11.u32 + 1373, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1374(r11)
	REX_STORE_U8(ctx.r11.u32 + 1374, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1375(r11)
	REX_STORE_U8(ctx.r11.u32 + 1375, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1376(r11)
	REX_STORE_U8(ctx.r11.u32 + 1376, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1377(r11)
	REX_STORE_U8(ctx.r11.u32 + 1377, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1378(r11)
	REX_STORE_U8(ctx.r11.u32 + 1378, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,1379(r11)
	REX_STORE_U8(ctx.r11.u32 + 1379, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1380(r11)
	REX_STORE_U8(ctx.r11.u32 + 1380, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1381(r11)
	REX_STORE_U8(ctx.r11.u32 + 1381, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1382(r11)
	REX_STORE_U8(ctx.r11.u32 + 1382, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1383(r11)
	REX_STORE_U8(ctx.r11.u32 + 1383, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1384(r11)
	REX_STORE_U8(ctx.r11.u32 + 1384, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1385(r11)
	REX_STORE_U8(ctx.r11.u32 + 1385, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1386(r11)
	REX_STORE_U8(ctx.r11.u32 + 1386, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1387(r11)
	REX_STORE_U8(ctx.r11.u32 + 1387, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1388(r11)
	REX_STORE_U8(ctx.r11.u32 + 1388, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1389(r11)
	REX_STORE_U8(ctx.r11.u32 + 1389, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1390(r11)
	REX_STORE_U8(ctx.r11.u32 + 1390, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1391(r11)
	REX_STORE_U8(ctx.r11.u32 + 1391, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1392(r11)
	REX_STORE_U8(ctx.r11.u32 + 1392, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1393(r11)
	REX_STORE_U8(ctx.r11.u32 + 1393, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1394(r11)
	REX_STORE_U8(ctx.r11.u32 + 1394, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1395(r11)
	REX_STORE_U8(ctx.r11.u32 + 1395, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1396(r11)
	REX_STORE_U8(ctx.r11.u32 + 1396, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1397(r11)
	REX_STORE_U8(ctx.r11.u32 + 1397, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1398(r11)
	REX_STORE_U8(ctx.r11.u32 + 1398, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1399(r11)
	REX_STORE_U8(ctx.r11.u32 + 1399, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1400(r11)
	REX_STORE_U8(ctx.r11.u32 + 1400, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1401(r11)
	REX_STORE_U8(ctx.r11.u32 + 1401, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1402(r11)
	REX_STORE_U8(ctx.r11.u32 + 1402, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,1403(r11)
	REX_STORE_U8(ctx.r11.u32 + 1403, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1404(r11)
	REX_STORE_U8(ctx.r11.u32 + 1404, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1405(r11)
	REX_STORE_U8(ctx.r11.u32 + 1405, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1406(r11)
	REX_STORE_U8(ctx.r11.u32 + 1406, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1407(r11)
	REX_STORE_U8(ctx.r11.u32 + 1407, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1408(r11)
	REX_STORE_U8(ctx.r11.u32 + 1408, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,1409(r11)
	REX_STORE_U8(ctx.r11.u32 + 1409, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1410(r11)
	REX_STORE_U8(ctx.r11.u32 + 1410, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1411(r11)
	REX_STORE_U8(ctx.r11.u32 + 1411, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1412(r11)
	REX_STORE_U8(ctx.r11.u32 + 1412, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1413(r11)
	REX_STORE_U8(ctx.r11.u32 + 1413, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1414(r11)
	REX_STORE_U8(ctx.r11.u32 + 1414, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,1415(r11)
	REX_STORE_U8(ctx.r11.u32 + 1415, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1416(r11)
	REX_STORE_U8(ctx.r11.u32 + 1416, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1417(r11)
	REX_STORE_U8(ctx.r11.u32 + 1417, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1418(r11)
	REX_STORE_U8(ctx.r11.u32 + 1418, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1419(r11)
	REX_STORE_U8(ctx.r11.u32 + 1419, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1420(r11)
	REX_STORE_U8(ctx.r11.u32 + 1420, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,1421(r11)
	REX_STORE_U8(ctx.r11.u32 + 1421, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1422(r11)
	REX_STORE_U8(ctx.r11.u32 + 1422, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1423(r11)
	REX_STORE_U8(ctx.r11.u32 + 1423, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1424(r11)
	REX_STORE_U8(ctx.r11.u32 + 1424, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1425(r11)
	REX_STORE_U8(ctx.r11.u32 + 1425, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1426(r11)
	REX_STORE_U8(ctx.r11.u32 + 1426, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,1427(r11)
	REX_STORE_U8(ctx.r11.u32 + 1427, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1428(r11)
	REX_STORE_U8(ctx.r11.u32 + 1428, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1429(r11)
	REX_STORE_U8(ctx.r11.u32 + 1429, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1430(r11)
	REX_STORE_U8(ctx.r11.u32 + 1430, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1431(r11)
	REX_STORE_U8(ctx.r11.u32 + 1431, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1432(r11)
	REX_STORE_U8(ctx.r11.u32 + 1432, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,1433(r11)
	REX_STORE_U8(ctx.r11.u32 + 1433, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1434(r11)
	REX_STORE_U8(ctx.r11.u32 + 1434, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1435(r11)
	REX_STORE_U8(ctx.r11.u32 + 1435, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1436(r11)
	REX_STORE_U8(ctx.r11.u32 + 1436, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1437(r11)
	REX_STORE_U8(ctx.r11.u32 + 1437, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1438(r11)
	REX_STORE_U8(ctx.r11.u32 + 1438, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,1439(r11)
	REX_STORE_U8(ctx.r11.u32 + 1439, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1440(r11)
	REX_STORE_U8(ctx.r11.u32 + 1440, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1441(r11)
	REX_STORE_U8(ctx.r11.u32 + 1441, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1442(r11)
	REX_STORE_U8(ctx.r11.u32 + 1442, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1443(r11)
	REX_STORE_U8(ctx.r11.u32 + 1443, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1444(r11)
	REX_STORE_U8(ctx.r11.u32 + 1444, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1445(r11)
	REX_STORE_U8(ctx.r11.u32 + 1445, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1446(r11)
	REX_STORE_U8(ctx.r11.u32 + 1446, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1447(r11)
	REX_STORE_U8(ctx.r11.u32 + 1447, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1448(r11)
	REX_STORE_U8(ctx.r11.u32 + 1448, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1449(r11)
	REX_STORE_U8(ctx.r11.u32 + 1449, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1450(r11)
	REX_STORE_U8(ctx.r11.u32 + 1450, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,1451(r11)
	REX_STORE_U8(ctx.r11.u32 + 1451, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1452(r11)
	REX_STORE_U8(ctx.r11.u32 + 1452, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1453(r11)
	REX_STORE_U8(ctx.r11.u32 + 1453, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1454(r11)
	REX_STORE_U8(ctx.r11.u32 + 1454, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1455(r11)
	REX_STORE_U8(ctx.r11.u32 + 1455, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1456(r11)
	REX_STORE_U8(ctx.r11.u32 + 1456, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1457(r11)
	REX_STORE_U8(ctx.r11.u32 + 1457, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1458(r11)
	REX_STORE_U8(ctx.r11.u32 + 1458, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1459(r11)
	REX_STORE_U8(ctx.r11.u32 + 1459, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1460(r11)
	REX_STORE_U8(ctx.r11.u32 + 1460, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1461(r11)
	REX_STORE_U8(ctx.r11.u32 + 1461, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1462(r11)
	REX_STORE_U8(ctx.r11.u32 + 1462, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1463(r11)
	REX_STORE_U8(ctx.r11.u32 + 1463, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1464(r11)
	REX_STORE_U8(ctx.r11.u32 + 1464, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1465(r11)
	REX_STORE_U8(ctx.r11.u32 + 1465, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1466(r11)
	REX_STORE_U8(ctx.r11.u32 + 1466, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1467(r11)
	REX_STORE_U8(ctx.r11.u32 + 1467, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1468(r11)
	REX_STORE_U8(ctx.r11.u32 + 1468, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1469(r11)
	REX_STORE_U8(ctx.r11.u32 + 1469, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1470(r11)
	REX_STORE_U8(ctx.r11.u32 + 1470, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1471(r11)
	REX_STORE_U8(ctx.r11.u32 + 1471, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1472(r11)
	REX_STORE_U8(ctx.r11.u32 + 1472, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1473(r11)
	REX_STORE_U8(ctx.r11.u32 + 1473, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1474(r11)
	REX_STORE_U8(ctx.r11.u32 + 1474, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,1475(r11)
	REX_STORE_U8(ctx.r11.u32 + 1475, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1476(r11)
	REX_STORE_U8(ctx.r11.u32 + 1476, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1477(r11)
	REX_STORE_U8(ctx.r11.u32 + 1477, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1478(r11)
	REX_STORE_U8(ctx.r11.u32 + 1478, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1479(r11)
	REX_STORE_U8(ctx.r11.u32 + 1479, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,1480(r11)
	REX_STORE_U8(ctx.r11.u32 + 1480, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1481(r11)
	REX_STORE_U8(ctx.r11.u32 + 1481, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1482(r11)
	REX_STORE_U8(ctx.r11.u32 + 1482, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1483(r11)
	REX_STORE_U8(ctx.r11.u32 + 1483, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1484(r11)
	REX_STORE_U8(ctx.r11.u32 + 1484, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1485(r11)
	REX_STORE_U8(ctx.r11.u32 + 1485, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1486(r11)
	REX_STORE_U8(ctx.r11.u32 + 1486, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1487(r11)
	REX_STORE_U8(ctx.r11.u32 + 1487, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1488(r11)
	REX_STORE_U8(ctx.r11.u32 + 1488, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1489(r11)
	REX_STORE_U8(ctx.r11.u32 + 1489, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1490(r11)
	REX_STORE_U8(ctx.r11.u32 + 1490, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1491(r11)
	REX_STORE_U8(ctx.r11.u32 + 1491, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1492(r11)
	REX_STORE_U8(ctx.r11.u32 + 1492, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1493(r11)
	REX_STORE_U8(ctx.r11.u32 + 1493, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1494(r11)
	REX_STORE_U8(ctx.r11.u32 + 1494, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1495(r11)
	REX_STORE_U8(ctx.r11.u32 + 1495, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1496(r11)
	REX_STORE_U8(ctx.r11.u32 + 1496, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1497(r11)
	REX_STORE_U8(ctx.r11.u32 + 1497, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1498(r11)
	REX_STORE_U8(ctx.r11.u32 + 1498, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,1499(r11)
	REX_STORE_U8(ctx.r11.u32 + 1499, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1500(r11)
	REX_STORE_U8(ctx.r11.u32 + 1500, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1501(r11)
	REX_STORE_U8(ctx.r11.u32 + 1501, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1502(r11)
	REX_STORE_U8(ctx.r11.u32 + 1502, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1503(r11)
	REX_STORE_U8(ctx.r11.u32 + 1503, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1504(r11)
	REX_STORE_U8(ctx.r11.u32 + 1504, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1505(r11)
	REX_STORE_U8(ctx.r11.u32 + 1505, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1506(r11)
	REX_STORE_U8(ctx.r11.u32 + 1506, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1507(r11)
	REX_STORE_U8(ctx.r11.u32 + 1507, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1508(r11)
	REX_STORE_U8(ctx.r11.u32 + 1508, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1509(r11)
	REX_STORE_U8(ctx.r11.u32 + 1509, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1510(r11)
	REX_STORE_U8(ctx.r11.u32 + 1510, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,1511(r11)
	REX_STORE_U8(ctx.r11.u32 + 1511, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1512(r11)
	REX_STORE_U8(ctx.r11.u32 + 1512, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1513(r11)
	REX_STORE_U8(ctx.r11.u32 + 1513, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1514(r11)
	REX_STORE_U8(ctx.r11.u32 + 1514, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1515(r11)
	REX_STORE_U8(ctx.r11.u32 + 1515, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1516(r11)
	REX_STORE_U8(ctx.r11.u32 + 1516, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1517(r11)
	REX_STORE_U8(ctx.r11.u32 + 1517, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1518(r11)
	REX_STORE_U8(ctx.r11.u32 + 1518, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1519(r11)
	REX_STORE_U8(ctx.r11.u32 + 1519, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1520(r11)
	REX_STORE_U8(ctx.r11.u32 + 1520, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1521(r11)
	REX_STORE_U8(ctx.r11.u32 + 1521, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1522(r11)
	REX_STORE_U8(ctx.r11.u32 + 1522, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,1523(r11)
	REX_STORE_U8(ctx.r11.u32 + 1523, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1524(r11)
	REX_STORE_U8(ctx.r11.u32 + 1524, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1525(r11)
	REX_STORE_U8(ctx.r11.u32 + 1525, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1526(r11)
	REX_STORE_U8(ctx.r11.u32 + 1526, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1527(r11)
	REX_STORE_U8(ctx.r11.u32 + 1527, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1528(r11)
	REX_STORE_U8(ctx.r11.u32 + 1528, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1529(r11)
	REX_STORE_U8(ctx.r11.u32 + 1529, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1530(r11)
	REX_STORE_U8(ctx.r11.u32 + 1530, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1531(r11)
	REX_STORE_U8(ctx.r11.u32 + 1531, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1532(r11)
	REX_STORE_U8(ctx.r11.u32 + 1532, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1533(r11)
	REX_STORE_U8(ctx.r11.u32 + 1533, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1534(r11)
	REX_STORE_U8(ctx.r11.u32 + 1534, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,1535(r11)
	REX_STORE_U8(ctx.r11.u32 + 1535, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1536(r11)
	REX_STORE_U8(ctx.r11.u32 + 1536, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1537(r11)
	REX_STORE_U8(ctx.r11.u32 + 1537, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1538(r11)
	REX_STORE_U8(ctx.r11.u32 + 1538, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1539(r11)
	REX_STORE_U8(ctx.r11.u32 + 1539, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1540(r11)
	REX_STORE_U8(ctx.r11.u32 + 1540, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1541(r11)
	REX_STORE_U8(ctx.r11.u32 + 1541, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1542(r11)
	REX_STORE_U8(ctx.r11.u32 + 1542, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1543(r11)
	REX_STORE_U8(ctx.r11.u32 + 1543, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1544(r11)
	REX_STORE_U8(ctx.r11.u32 + 1544, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1545(r11)
	REX_STORE_U8(ctx.r11.u32 + 1545, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1546(r11)
	REX_STORE_U8(ctx.r11.u32 + 1546, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,1547(r11)
	REX_STORE_U8(ctx.r11.u32 + 1547, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1548(r11)
	REX_STORE_U8(ctx.r11.u32 + 1548, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1549(r11)
	REX_STORE_U8(ctx.r11.u32 + 1549, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1550(r11)
	REX_STORE_U8(ctx.r11.u32 + 1550, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1551(r11)
	REX_STORE_U8(ctx.r11.u32 + 1551, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1552(r11)
	REX_STORE_U8(ctx.r11.u32 + 1552, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,1553(r11)
	REX_STORE_U8(ctx.r11.u32 + 1553, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1554(r11)
	REX_STORE_U8(ctx.r11.u32 + 1554, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1555(r11)
	REX_STORE_U8(ctx.r11.u32 + 1555, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1556(r11)
	REX_STORE_U8(ctx.r11.u32 + 1556, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1557(r11)
	REX_STORE_U8(ctx.r11.u32 + 1557, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1558(r11)
	REX_STORE_U8(ctx.r11.u32 + 1558, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1559(r11)
	REX_STORE_U8(ctx.r11.u32 + 1559, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1560(r11)
	REX_STORE_U8(ctx.r11.u32 + 1560, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1561(r11)
	REX_STORE_U8(ctx.r11.u32 + 1561, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1562(r11)
	REX_STORE_U8(ctx.r11.u32 + 1562, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1563(r11)
	REX_STORE_U8(ctx.r11.u32 + 1563, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1564(r11)
	REX_STORE_U8(ctx.r11.u32 + 1564, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,1565(r11)
	REX_STORE_U8(ctx.r11.u32 + 1565, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1566(r11)
	REX_STORE_U8(ctx.r11.u32 + 1566, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1567(r11)
	REX_STORE_U8(ctx.r11.u32 + 1567, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1568(r11)
	REX_STORE_U8(ctx.r11.u32 + 1568, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1569(r11)
	REX_STORE_U8(ctx.r11.u32 + 1569, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,1570(r11)
	REX_STORE_U8(ctx.r11.u32 + 1570, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,1571(r11)
	REX_STORE_U8(ctx.r11.u32 + 1571, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1572(r11)
	REX_STORE_U8(ctx.r11.u32 + 1572, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1573(r11)
	REX_STORE_U8(ctx.r11.u32 + 1573, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1574(r11)
	REX_STORE_U8(ctx.r11.u32 + 1574, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1575(r11)
	REX_STORE_U8(ctx.r11.u32 + 1575, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1576(r11)
	REX_STORE_U8(ctx.r11.u32 + 1576, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,1577(r11)
	REX_STORE_U8(ctx.r11.u32 + 1577, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1578(r11)
	REX_STORE_U8(ctx.r11.u32 + 1578, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1579(r11)
	REX_STORE_U8(ctx.r11.u32 + 1579, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1580(r11)
	REX_STORE_U8(ctx.r11.u32 + 1580, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1581(r11)
	REX_STORE_U8(ctx.r11.u32 + 1581, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1582(r11)
	REX_STORE_U8(ctx.r11.u32 + 1582, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1583(r11)
	REX_STORE_U8(ctx.r11.u32 + 1583, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1584(r11)
	REX_STORE_U8(ctx.r11.u32 + 1584, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1585(r11)
	REX_STORE_U8(ctx.r11.u32 + 1585, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1586(r11)
	REX_STORE_U8(ctx.r11.u32 + 1586, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1587(r11)
	REX_STORE_U8(ctx.r11.u32 + 1587, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1588(r11)
	REX_STORE_U8(ctx.r11.u32 + 1588, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-127
	ctx.r10.s64 = -127;
	// stb r10,1589(r11)
	REX_STORE_U8(ctx.r11.u32 + 1589, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1590(r11)
	REX_STORE_U8(ctx.r11.u32 + 1590, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1591(r11)
	REX_STORE_U8(ctx.r11.u32 + 1591, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1592(r11)
	REX_STORE_U8(ctx.r11.u32 + 1592, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1593(r11)
	REX_STORE_U8(ctx.r11.u32 + 1593, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1594(r11)
	REX_STORE_U8(ctx.r11.u32 + 1594, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,1595(r11)
	REX_STORE_U8(ctx.r11.u32 + 1595, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1596(r11)
	REX_STORE_U8(ctx.r11.u32 + 1596, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1597(r11)
	REX_STORE_U8(ctx.r11.u32 + 1597, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1598(r11)
	REX_STORE_U8(ctx.r11.u32 + 1598, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1599(r11)
	REX_STORE_U8(ctx.r11.u32 + 1599, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1600(r11)
	REX_STORE_U8(ctx.r11.u32 + 1600, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-95
	ctx.r10.s64 = -95;
	// stb r10,1601(r11)
	REX_STORE_U8(ctx.r11.u32 + 1601, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1602(r11)
	REX_STORE_U8(ctx.r11.u32 + 1602, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1603(r11)
	REX_STORE_U8(ctx.r11.u32 + 1603, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1604(r11)
	REX_STORE_U8(ctx.r11.u32 + 1604, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1605(r11)
	REX_STORE_U8(ctx.r11.u32 + 1605, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1606(r11)
	REX_STORE_U8(ctx.r11.u32 + 1606, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r10,1607(r11)
	REX_STORE_U8(ctx.r11.u32 + 1607, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1608(r11)
	REX_STORE_U8(ctx.r11.u32 + 1608, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1609(r11)
	REX_STORE_U8(ctx.r11.u32 + 1609, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1610(r11)
	REX_STORE_U8(ctx.r11.u32 + 1610, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1611(r11)
	REX_STORE_U8(ctx.r11.u32 + 1611, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1612(r11)
	REX_STORE_U8(ctx.r11.u32 + 1612, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-63
	ctx.r10.s64 = -63;
	// stb r10,1613(r11)
	REX_STORE_U8(ctx.r11.u32 + 1613, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1614(r11)
	REX_STORE_U8(ctx.r11.u32 + 1614, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1615(r11)
	REX_STORE_U8(ctx.r11.u32 + 1615, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1616(r11)
	REX_STORE_U8(ctx.r11.u32 + 1616, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1617(r11)
	REX_STORE_U8(ctx.r11.u32 + 1617, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1618(r11)
	REX_STORE_U8(ctx.r11.u32 + 1618, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r10,1619(r11)
	REX_STORE_U8(ctx.r11.u32 + 1619, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1620(r11)
	REX_STORE_U8(ctx.r11.u32 + 1620, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1621(r11)
	REX_STORE_U8(ctx.r11.u32 + 1621, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1622(r11)
	REX_STORE_U8(ctx.r11.u32 + 1622, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1623(r11)
	REX_STORE_U8(ctx.r11.u32 + 1623, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1624(r11)
	REX_STORE_U8(ctx.r11.u32 + 1624, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-31
	ctx.r10.s64 = -31;
	// stb r10,1625(r11)
	REX_STORE_U8(ctx.r11.u32 + 1625, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1626(r11)
	REX_STORE_U8(ctx.r11.u32 + 1626, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1627(r11)
	REX_STORE_U8(ctx.r11.u32 + 1627, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1628(r11)
	REX_STORE_U8(ctx.r11.u32 + 1628, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1629(r11)
	REX_STORE_U8(ctx.r11.u32 + 1629, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1630(r11)
	REX_STORE_U8(ctx.r11.u32 + 1630, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stb r10,1631(r11)
	REX_STORE_U8(ctx.r11.u32 + 1631, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1632(r11)
	REX_STORE_U8(ctx.r11.u32 + 1632, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1633(r11)
	REX_STORE_U8(ctx.r11.u32 + 1633, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1634(r11)
	REX_STORE_U8(ctx.r11.u32 + 1634, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1635(r11)
	REX_STORE_U8(ctx.r11.u32 + 1635, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1636(r11)
	REX_STORE_U8(ctx.r11.u32 + 1636, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1637(r11)
	REX_STORE_U8(ctx.r11.u32 + 1637, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1638(r11)
	REX_STORE_U8(ctx.r11.u32 + 1638, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1639(r11)
	REX_STORE_U8(ctx.r11.u32 + 1639, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1640(r11)
	REX_STORE_U8(ctx.r11.u32 + 1640, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1641(r11)
	REX_STORE_U8(ctx.r11.u32 + 1641, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1642(r11)
	REX_STORE_U8(ctx.r11.u32 + 1642, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-96
	ctx.r10.s64 = -96;
	// stb r10,1643(r11)
	REX_STORE_U8(ctx.r11.u32 + 1643, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1644(r11)
	REX_STORE_U8(ctx.r11.u32 + 1644, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1645(r11)
	REX_STORE_U8(ctx.r11.u32 + 1645, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1646(r11)
	REX_STORE_U8(ctx.r11.u32 + 1646, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1647(r11)
	REX_STORE_U8(ctx.r11.u32 + 1647, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1648(r11)
	REX_STORE_U8(ctx.r11.u32 + 1648, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,33
	ctx.r10.s64 = 33;
	// stb r10,1649(r11)
	REX_STORE_U8(ctx.r11.u32 + 1649, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1650(r11)
	REX_STORE_U8(ctx.r11.u32 + 1650, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1651(r11)
	REX_STORE_U8(ctx.r11.u32 + 1651, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1652(r11)
	REX_STORE_U8(ctx.r11.u32 + 1652, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1653(r11)
	REX_STORE_U8(ctx.r11.u32 + 1653, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1654(r11)
	REX_STORE_U8(ctx.r11.u32 + 1654, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1655(r11)
	REX_STORE_U8(ctx.r11.u32 + 1655, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1656(r11)
	REX_STORE_U8(ctx.r11.u32 + 1656, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1657(r11)
	REX_STORE_U8(ctx.r11.u32 + 1657, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1658(r11)
	REX_STORE_U8(ctx.r11.u32 + 1658, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1659(r11)
	REX_STORE_U8(ctx.r11.u32 + 1659, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1660(r11)
	REX_STORE_U8(ctx.r11.u32 + 1660, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r10,1661(r11)
	REX_STORE_U8(ctx.r11.u32 + 1661, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,1662(r11)
	REX_STORE_U8(ctx.r11.u32 + 1662, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1663(r11)
	REX_STORE_U8(ctx.r11.u32 + 1663, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1664(r11)
	REX_STORE_U8(ctx.r11.u32 + 1664, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,1665(r11)
	REX_STORE_U8(ctx.r11.u32 + 1665, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,1666(r11)
	REX_STORE_U8(ctx.r11.u32 + 1666, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-32
	ctx.r10.s64 = -32;
	// stb r10,1667(r11)
	REX_STORE_U8(ctx.r11.u32 + 1667, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r10,1668(r11)
	REX_STORE_U8(ctx.r11.u32 + 1668, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,-64
	ctx.r10.s64 = -64;
	// stb r10,1669(r11)
	REX_STORE_U8(ctx.r11.u32 + 1669, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1670(r11)
	REX_STORE_U8(ctx.r11.u32 + 1670, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r10,1671(r11)
	REX_STORE_U8(ctx.r11.u32 + 1671, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,1672(r11)
	REX_STORE_U8(ctx.r11.u32 + 1672, ctx.r10.u8);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r10,1673(r11)
	REX_STORE_U8(ctx.r11.u32 + 1673, ctx.r10.u8);
	// blr 
	return;
}

