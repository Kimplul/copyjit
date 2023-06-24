#ifndef COPYJIT_DEFNS_H
#define COPYJIT_DEFNS_H
void *compile_add(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_add, gen_add_len);
 	ctx->pc += gen_add_len;
 	return pc;
 }
void *compile_addao(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addao, gen_addao_len);
 	ctx->pc += gen_addao_len;
 	return pc;
 }
void *compile_addxo(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addxo, gen_addxo_len);
 	ctx->pc += gen_addxo_len;
 	return pc;
 }
void *compile_addyo(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addyo, gen_addyo_len);
 	ctx->pc += gen_addyo_len;
 	return pc;
 }
void *compile_ban(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_ban, gen_ban_len);
 	ctx->pc += gen_ban_len;
 	return pc;
 }
void *compile_baz(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_baz, gen_baz_len);
 	ctx->pc += gen_baz_len;
 	return pc;
 }
void *compile_end(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_end, gen_end_len);
 	ctx->pc += gen_end_len;
 	return pc;
 }
void *compile_incy(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_incy, gen_incy_len);
 	ctx->pc += gen_incy_len;
 	return pc;
 }
void *compile_j(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_j, gen_j_len);
 	ctx->pc += gen_j_len;
 	return pc;
 }
void *compile_movao(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_movao, gen_movao_len);
 	ctx->pc += gen_movao_len;
 	return pc;
 }
void *compile_movxa(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_movxa, gen_movxa_len);
 	ctx->pc += gen_movxa_len;
 	return pc;
 }
void *compile_movxo(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_movxo, gen_movxo_len);
 	ctx->pc += gen_movxo_len;
 	return pc;
 }
void *compile_movya(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_movya, gen_movya_len);
 	ctx->pc += gen_movya_len;
 	return pc;
 }
void *compile_movyo(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_movyo, gen_movyo_len);
 	ctx->pc += gen_movyo_len;
 	return pc;
 }
void *compile_sub(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sub, gen_sub_len);
 	ctx->pc += gen_sub_len;
 	return pc;
 }
void *compile_subxo(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_subxo, gen_subxo_len);
 	ctx->pc += gen_subxo_len;
 	return pc;
 }
void *compile_subyo(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_subyo, gen_subyo_len);
 	ctx->pc += gen_subyo_len;
 	return pc;
 }
void *compile_addi0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi0, gen_addi0_len);
 	ctx->pc += gen_addi0_len;
 	return pc;
 }
void *compile_addi1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi1, gen_addi1_len);
 	ctx->pc += gen_addi1_len;
 	return pc;
 }
void *compile_addi10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi10, gen_addi10_len);
 	ctx->pc += gen_addi10_len;
 	return pc;
 }
void *compile_addi100(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi100, gen_addi100_len);
 	ctx->pc += gen_addi100_len;
 	return pc;
 }
void *compile_addi101(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi101, gen_addi101_len);
 	ctx->pc += gen_addi101_len;
 	return pc;
 }
void *compile_addi102(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi102, gen_addi102_len);
 	ctx->pc += gen_addi102_len;
 	return pc;
 }
void *compile_addi103(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi103, gen_addi103_len);
 	ctx->pc += gen_addi103_len;
 	return pc;
 }
void *compile_addi104(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi104, gen_addi104_len);
 	ctx->pc += gen_addi104_len;
 	return pc;
 }
void *compile_addi105(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi105, gen_addi105_len);
 	ctx->pc += gen_addi105_len;
 	return pc;
 }
void *compile_addi106(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi106, gen_addi106_len);
 	ctx->pc += gen_addi106_len;
 	return pc;
 }
void *compile_addi107(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi107, gen_addi107_len);
 	ctx->pc += gen_addi107_len;
 	return pc;
 }
void *compile_addi108(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi108, gen_addi108_len);
 	ctx->pc += gen_addi108_len;
 	return pc;
 }
void *compile_addi109(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi109, gen_addi109_len);
 	ctx->pc += gen_addi109_len;
 	return pc;
 }
void *compile_addi11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi11, gen_addi11_len);
 	ctx->pc += gen_addi11_len;
 	return pc;
 }
void *compile_addi110(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi110, gen_addi110_len);
 	ctx->pc += gen_addi110_len;
 	return pc;
 }
void *compile_addi111(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi111, gen_addi111_len);
 	ctx->pc += gen_addi111_len;
 	return pc;
 }
void *compile_addi112(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi112, gen_addi112_len);
 	ctx->pc += gen_addi112_len;
 	return pc;
 }
void *compile_addi113(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi113, gen_addi113_len);
 	ctx->pc += gen_addi113_len;
 	return pc;
 }
void *compile_addi114(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi114, gen_addi114_len);
 	ctx->pc += gen_addi114_len;
 	return pc;
 }
void *compile_addi115(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi115, gen_addi115_len);
 	ctx->pc += gen_addi115_len;
 	return pc;
 }
void *compile_addi116(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi116, gen_addi116_len);
 	ctx->pc += gen_addi116_len;
 	return pc;
 }
void *compile_addi117(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi117, gen_addi117_len);
 	ctx->pc += gen_addi117_len;
 	return pc;
 }
void *compile_addi118(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi118, gen_addi118_len);
 	ctx->pc += gen_addi118_len;
 	return pc;
 }
void *compile_addi119(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi119, gen_addi119_len);
 	ctx->pc += gen_addi119_len;
 	return pc;
 }
void *compile_addi12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi12, gen_addi12_len);
 	ctx->pc += gen_addi12_len;
 	return pc;
 }
void *compile_addi120(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi120, gen_addi120_len);
 	ctx->pc += gen_addi120_len;
 	return pc;
 }
void *compile_addi121(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi121, gen_addi121_len);
 	ctx->pc += gen_addi121_len;
 	return pc;
 }
void *compile_addi122(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi122, gen_addi122_len);
 	ctx->pc += gen_addi122_len;
 	return pc;
 }
void *compile_addi123(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi123, gen_addi123_len);
 	ctx->pc += gen_addi123_len;
 	return pc;
 }
void *compile_addi124(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi124, gen_addi124_len);
 	ctx->pc += gen_addi124_len;
 	return pc;
 }
void *compile_addi125(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi125, gen_addi125_len);
 	ctx->pc += gen_addi125_len;
 	return pc;
 }
void *compile_addi126(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi126, gen_addi126_len);
 	ctx->pc += gen_addi126_len;
 	return pc;
 }
void *compile_addi127(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi127, gen_addi127_len);
 	ctx->pc += gen_addi127_len;
 	return pc;
 }
void *compile_addi128(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi128, gen_addi128_len);
 	ctx->pc += gen_addi128_len;
 	return pc;
 }
void *compile_addi129(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi129, gen_addi129_len);
 	ctx->pc += gen_addi129_len;
 	return pc;
 }
void *compile_addi13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi13, gen_addi13_len);
 	ctx->pc += gen_addi13_len;
 	return pc;
 }
void *compile_addi130(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi130, gen_addi130_len);
 	ctx->pc += gen_addi130_len;
 	return pc;
 }
void *compile_addi131(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi131, gen_addi131_len);
 	ctx->pc += gen_addi131_len;
 	return pc;
 }
void *compile_addi132(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi132, gen_addi132_len);
 	ctx->pc += gen_addi132_len;
 	return pc;
 }
void *compile_addi133(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi133, gen_addi133_len);
 	ctx->pc += gen_addi133_len;
 	return pc;
 }
void *compile_addi134(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi134, gen_addi134_len);
 	ctx->pc += gen_addi134_len;
 	return pc;
 }
void *compile_addi135(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi135, gen_addi135_len);
 	ctx->pc += gen_addi135_len;
 	return pc;
 }
void *compile_addi136(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi136, gen_addi136_len);
 	ctx->pc += gen_addi136_len;
 	return pc;
 }
void *compile_addi137(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi137, gen_addi137_len);
 	ctx->pc += gen_addi137_len;
 	return pc;
 }
void *compile_addi138(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi138, gen_addi138_len);
 	ctx->pc += gen_addi138_len;
 	return pc;
 }
void *compile_addi139(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi139, gen_addi139_len);
 	ctx->pc += gen_addi139_len;
 	return pc;
 }
void *compile_addi14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi14, gen_addi14_len);
 	ctx->pc += gen_addi14_len;
 	return pc;
 }
void *compile_addi140(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi140, gen_addi140_len);
 	ctx->pc += gen_addi140_len;
 	return pc;
 }
void *compile_addi141(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi141, gen_addi141_len);
 	ctx->pc += gen_addi141_len;
 	return pc;
 }
void *compile_addi142(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi142, gen_addi142_len);
 	ctx->pc += gen_addi142_len;
 	return pc;
 }
void *compile_addi143(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi143, gen_addi143_len);
 	ctx->pc += gen_addi143_len;
 	return pc;
 }
void *compile_addi144(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi144, gen_addi144_len);
 	ctx->pc += gen_addi144_len;
 	return pc;
 }
void *compile_addi145(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi145, gen_addi145_len);
 	ctx->pc += gen_addi145_len;
 	return pc;
 }
void *compile_addi146(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi146, gen_addi146_len);
 	ctx->pc += gen_addi146_len;
 	return pc;
 }
void *compile_addi147(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi147, gen_addi147_len);
 	ctx->pc += gen_addi147_len;
 	return pc;
 }
void *compile_addi148(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi148, gen_addi148_len);
 	ctx->pc += gen_addi148_len;
 	return pc;
 }
void *compile_addi149(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi149, gen_addi149_len);
 	ctx->pc += gen_addi149_len;
 	return pc;
 }
void *compile_addi15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi15, gen_addi15_len);
 	ctx->pc += gen_addi15_len;
 	return pc;
 }
void *compile_addi150(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi150, gen_addi150_len);
 	ctx->pc += gen_addi150_len;
 	return pc;
 }
void *compile_addi151(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi151, gen_addi151_len);
 	ctx->pc += gen_addi151_len;
 	return pc;
 }
void *compile_addi152(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi152, gen_addi152_len);
 	ctx->pc += gen_addi152_len;
 	return pc;
 }
void *compile_addi153(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi153, gen_addi153_len);
 	ctx->pc += gen_addi153_len;
 	return pc;
 }
void *compile_addi154(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi154, gen_addi154_len);
 	ctx->pc += gen_addi154_len;
 	return pc;
 }
void *compile_addi155(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi155, gen_addi155_len);
 	ctx->pc += gen_addi155_len;
 	return pc;
 }
void *compile_addi156(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi156, gen_addi156_len);
 	ctx->pc += gen_addi156_len;
 	return pc;
 }
void *compile_addi157(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi157, gen_addi157_len);
 	ctx->pc += gen_addi157_len;
 	return pc;
 }
void *compile_addi158(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi158, gen_addi158_len);
 	ctx->pc += gen_addi158_len;
 	return pc;
 }
void *compile_addi159(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi159, gen_addi159_len);
 	ctx->pc += gen_addi159_len;
 	return pc;
 }
void *compile_addi16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi16, gen_addi16_len);
 	ctx->pc += gen_addi16_len;
 	return pc;
 }
void *compile_addi160(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi160, gen_addi160_len);
 	ctx->pc += gen_addi160_len;
 	return pc;
 }
void *compile_addi161(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi161, gen_addi161_len);
 	ctx->pc += gen_addi161_len;
 	return pc;
 }
void *compile_addi162(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi162, gen_addi162_len);
 	ctx->pc += gen_addi162_len;
 	return pc;
 }
void *compile_addi163(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi163, gen_addi163_len);
 	ctx->pc += gen_addi163_len;
 	return pc;
 }
void *compile_addi164(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi164, gen_addi164_len);
 	ctx->pc += gen_addi164_len;
 	return pc;
 }
void *compile_addi165(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi165, gen_addi165_len);
 	ctx->pc += gen_addi165_len;
 	return pc;
 }
void *compile_addi166(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi166, gen_addi166_len);
 	ctx->pc += gen_addi166_len;
 	return pc;
 }
void *compile_addi167(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi167, gen_addi167_len);
 	ctx->pc += gen_addi167_len;
 	return pc;
 }
void *compile_addi168(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi168, gen_addi168_len);
 	ctx->pc += gen_addi168_len;
 	return pc;
 }
void *compile_addi169(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi169, gen_addi169_len);
 	ctx->pc += gen_addi169_len;
 	return pc;
 }
void *compile_addi17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi17, gen_addi17_len);
 	ctx->pc += gen_addi17_len;
 	return pc;
 }
void *compile_addi170(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi170, gen_addi170_len);
 	ctx->pc += gen_addi170_len;
 	return pc;
 }
void *compile_addi171(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi171, gen_addi171_len);
 	ctx->pc += gen_addi171_len;
 	return pc;
 }
void *compile_addi172(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi172, gen_addi172_len);
 	ctx->pc += gen_addi172_len;
 	return pc;
 }
void *compile_addi173(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi173, gen_addi173_len);
 	ctx->pc += gen_addi173_len;
 	return pc;
 }
void *compile_addi174(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi174, gen_addi174_len);
 	ctx->pc += gen_addi174_len;
 	return pc;
 }
void *compile_addi175(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi175, gen_addi175_len);
 	ctx->pc += gen_addi175_len;
 	return pc;
 }
void *compile_addi176(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi176, gen_addi176_len);
 	ctx->pc += gen_addi176_len;
 	return pc;
 }
void *compile_addi177(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi177, gen_addi177_len);
 	ctx->pc += gen_addi177_len;
 	return pc;
 }
void *compile_addi178(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi178, gen_addi178_len);
 	ctx->pc += gen_addi178_len;
 	return pc;
 }
void *compile_addi179(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi179, gen_addi179_len);
 	ctx->pc += gen_addi179_len;
 	return pc;
 }
void *compile_addi18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi18, gen_addi18_len);
 	ctx->pc += gen_addi18_len;
 	return pc;
 }
void *compile_addi180(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi180, gen_addi180_len);
 	ctx->pc += gen_addi180_len;
 	return pc;
 }
void *compile_addi181(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi181, gen_addi181_len);
 	ctx->pc += gen_addi181_len;
 	return pc;
 }
void *compile_addi182(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi182, gen_addi182_len);
 	ctx->pc += gen_addi182_len;
 	return pc;
 }
void *compile_addi183(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi183, gen_addi183_len);
 	ctx->pc += gen_addi183_len;
 	return pc;
 }
void *compile_addi184(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi184, gen_addi184_len);
 	ctx->pc += gen_addi184_len;
 	return pc;
 }
void *compile_addi185(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi185, gen_addi185_len);
 	ctx->pc += gen_addi185_len;
 	return pc;
 }
void *compile_addi186(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi186, gen_addi186_len);
 	ctx->pc += gen_addi186_len;
 	return pc;
 }
void *compile_addi187(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi187, gen_addi187_len);
 	ctx->pc += gen_addi187_len;
 	return pc;
 }
void *compile_addi188(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi188, gen_addi188_len);
 	ctx->pc += gen_addi188_len;
 	return pc;
 }
void *compile_addi189(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi189, gen_addi189_len);
 	ctx->pc += gen_addi189_len;
 	return pc;
 }
void *compile_addi19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi19, gen_addi19_len);
 	ctx->pc += gen_addi19_len;
 	return pc;
 }
void *compile_addi190(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi190, gen_addi190_len);
 	ctx->pc += gen_addi190_len;
 	return pc;
 }
void *compile_addi191(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi191, gen_addi191_len);
 	ctx->pc += gen_addi191_len;
 	return pc;
 }
void *compile_addi192(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi192, gen_addi192_len);
 	ctx->pc += gen_addi192_len;
 	return pc;
 }
void *compile_addi193(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi193, gen_addi193_len);
 	ctx->pc += gen_addi193_len;
 	return pc;
 }
void *compile_addi194(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi194, gen_addi194_len);
 	ctx->pc += gen_addi194_len;
 	return pc;
 }
void *compile_addi195(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi195, gen_addi195_len);
 	ctx->pc += gen_addi195_len;
 	return pc;
 }
void *compile_addi196(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi196, gen_addi196_len);
 	ctx->pc += gen_addi196_len;
 	return pc;
 }
void *compile_addi197(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi197, gen_addi197_len);
 	ctx->pc += gen_addi197_len;
 	return pc;
 }
void *compile_addi198(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi198, gen_addi198_len);
 	ctx->pc += gen_addi198_len;
 	return pc;
 }
void *compile_addi199(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi199, gen_addi199_len);
 	ctx->pc += gen_addi199_len;
 	return pc;
 }
void *compile_addi2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi2, gen_addi2_len);
 	ctx->pc += gen_addi2_len;
 	return pc;
 }
void *compile_addi20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi20, gen_addi20_len);
 	ctx->pc += gen_addi20_len;
 	return pc;
 }
void *compile_addi200(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi200, gen_addi200_len);
 	ctx->pc += gen_addi200_len;
 	return pc;
 }
void *compile_addi201(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi201, gen_addi201_len);
 	ctx->pc += gen_addi201_len;
 	return pc;
 }
void *compile_addi202(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi202, gen_addi202_len);
 	ctx->pc += gen_addi202_len;
 	return pc;
 }
void *compile_addi203(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi203, gen_addi203_len);
 	ctx->pc += gen_addi203_len;
 	return pc;
 }
void *compile_addi204(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi204, gen_addi204_len);
 	ctx->pc += gen_addi204_len;
 	return pc;
 }
void *compile_addi205(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi205, gen_addi205_len);
 	ctx->pc += gen_addi205_len;
 	return pc;
 }
void *compile_addi206(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi206, gen_addi206_len);
 	ctx->pc += gen_addi206_len;
 	return pc;
 }
void *compile_addi207(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi207, gen_addi207_len);
 	ctx->pc += gen_addi207_len;
 	return pc;
 }
void *compile_addi208(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi208, gen_addi208_len);
 	ctx->pc += gen_addi208_len;
 	return pc;
 }
void *compile_addi209(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi209, gen_addi209_len);
 	ctx->pc += gen_addi209_len;
 	return pc;
 }
void *compile_addi21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi21, gen_addi21_len);
 	ctx->pc += gen_addi21_len;
 	return pc;
 }
void *compile_addi210(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi210, gen_addi210_len);
 	ctx->pc += gen_addi210_len;
 	return pc;
 }
void *compile_addi211(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi211, gen_addi211_len);
 	ctx->pc += gen_addi211_len;
 	return pc;
 }
void *compile_addi212(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi212, gen_addi212_len);
 	ctx->pc += gen_addi212_len;
 	return pc;
 }
void *compile_addi213(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi213, gen_addi213_len);
 	ctx->pc += gen_addi213_len;
 	return pc;
 }
void *compile_addi214(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi214, gen_addi214_len);
 	ctx->pc += gen_addi214_len;
 	return pc;
 }
void *compile_addi215(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi215, gen_addi215_len);
 	ctx->pc += gen_addi215_len;
 	return pc;
 }
void *compile_addi216(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi216, gen_addi216_len);
 	ctx->pc += gen_addi216_len;
 	return pc;
 }
void *compile_addi217(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi217, gen_addi217_len);
 	ctx->pc += gen_addi217_len;
 	return pc;
 }
void *compile_addi218(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi218, gen_addi218_len);
 	ctx->pc += gen_addi218_len;
 	return pc;
 }
void *compile_addi219(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi219, gen_addi219_len);
 	ctx->pc += gen_addi219_len;
 	return pc;
 }
void *compile_addi22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi22, gen_addi22_len);
 	ctx->pc += gen_addi22_len;
 	return pc;
 }
void *compile_addi220(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi220, gen_addi220_len);
 	ctx->pc += gen_addi220_len;
 	return pc;
 }
void *compile_addi221(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi221, gen_addi221_len);
 	ctx->pc += gen_addi221_len;
 	return pc;
 }
void *compile_addi222(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi222, gen_addi222_len);
 	ctx->pc += gen_addi222_len;
 	return pc;
 }
void *compile_addi223(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi223, gen_addi223_len);
 	ctx->pc += gen_addi223_len;
 	return pc;
 }
void *compile_addi224(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi224, gen_addi224_len);
 	ctx->pc += gen_addi224_len;
 	return pc;
 }
void *compile_addi225(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi225, gen_addi225_len);
 	ctx->pc += gen_addi225_len;
 	return pc;
 }
void *compile_addi226(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi226, gen_addi226_len);
 	ctx->pc += gen_addi226_len;
 	return pc;
 }
void *compile_addi227(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi227, gen_addi227_len);
 	ctx->pc += gen_addi227_len;
 	return pc;
 }
void *compile_addi228(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi228, gen_addi228_len);
 	ctx->pc += gen_addi228_len;
 	return pc;
 }
void *compile_addi229(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi229, gen_addi229_len);
 	ctx->pc += gen_addi229_len;
 	return pc;
 }
void *compile_addi23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi23, gen_addi23_len);
 	ctx->pc += gen_addi23_len;
 	return pc;
 }
void *compile_addi230(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi230, gen_addi230_len);
 	ctx->pc += gen_addi230_len;
 	return pc;
 }
void *compile_addi231(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi231, gen_addi231_len);
 	ctx->pc += gen_addi231_len;
 	return pc;
 }
void *compile_addi232(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi232, gen_addi232_len);
 	ctx->pc += gen_addi232_len;
 	return pc;
 }
void *compile_addi233(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi233, gen_addi233_len);
 	ctx->pc += gen_addi233_len;
 	return pc;
 }
void *compile_addi234(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi234, gen_addi234_len);
 	ctx->pc += gen_addi234_len;
 	return pc;
 }
void *compile_addi235(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi235, gen_addi235_len);
 	ctx->pc += gen_addi235_len;
 	return pc;
 }
void *compile_addi236(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi236, gen_addi236_len);
 	ctx->pc += gen_addi236_len;
 	return pc;
 }
void *compile_addi237(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi237, gen_addi237_len);
 	ctx->pc += gen_addi237_len;
 	return pc;
 }
void *compile_addi238(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi238, gen_addi238_len);
 	ctx->pc += gen_addi238_len;
 	return pc;
 }
void *compile_addi239(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi239, gen_addi239_len);
 	ctx->pc += gen_addi239_len;
 	return pc;
 }
void *compile_addi24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi24, gen_addi24_len);
 	ctx->pc += gen_addi24_len;
 	return pc;
 }
void *compile_addi240(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi240, gen_addi240_len);
 	ctx->pc += gen_addi240_len;
 	return pc;
 }
void *compile_addi241(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi241, gen_addi241_len);
 	ctx->pc += gen_addi241_len;
 	return pc;
 }
void *compile_addi242(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi242, gen_addi242_len);
 	ctx->pc += gen_addi242_len;
 	return pc;
 }
void *compile_addi243(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi243, gen_addi243_len);
 	ctx->pc += gen_addi243_len;
 	return pc;
 }
void *compile_addi244(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi244, gen_addi244_len);
 	ctx->pc += gen_addi244_len;
 	return pc;
 }
void *compile_addi245(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi245, gen_addi245_len);
 	ctx->pc += gen_addi245_len;
 	return pc;
 }
void *compile_addi246(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi246, gen_addi246_len);
 	ctx->pc += gen_addi246_len;
 	return pc;
 }
void *compile_addi247(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi247, gen_addi247_len);
 	ctx->pc += gen_addi247_len;
 	return pc;
 }
void *compile_addi248(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi248, gen_addi248_len);
 	ctx->pc += gen_addi248_len;
 	return pc;
 }
void *compile_addi249(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi249, gen_addi249_len);
 	ctx->pc += gen_addi249_len;
 	return pc;
 }
void *compile_addi25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi25, gen_addi25_len);
 	ctx->pc += gen_addi25_len;
 	return pc;
 }
void *compile_addi250(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi250, gen_addi250_len);
 	ctx->pc += gen_addi250_len;
 	return pc;
 }
void *compile_addi251(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi251, gen_addi251_len);
 	ctx->pc += gen_addi251_len;
 	return pc;
 }
void *compile_addi252(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi252, gen_addi252_len);
 	ctx->pc += gen_addi252_len;
 	return pc;
 }
void *compile_addi253(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi253, gen_addi253_len);
 	ctx->pc += gen_addi253_len;
 	return pc;
 }
void *compile_addi254(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi254, gen_addi254_len);
 	ctx->pc += gen_addi254_len;
 	return pc;
 }
void *compile_addi255(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi255, gen_addi255_len);
 	ctx->pc += gen_addi255_len;
 	return pc;
 }
void *compile_addi26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi26, gen_addi26_len);
 	ctx->pc += gen_addi26_len;
 	return pc;
 }
void *compile_addi27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi27, gen_addi27_len);
 	ctx->pc += gen_addi27_len;
 	return pc;
 }
void *compile_addi28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi28, gen_addi28_len);
 	ctx->pc += gen_addi28_len;
 	return pc;
 }
void *compile_addi29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi29, gen_addi29_len);
 	ctx->pc += gen_addi29_len;
 	return pc;
 }
void *compile_addi3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi3, gen_addi3_len);
 	ctx->pc += gen_addi3_len;
 	return pc;
 }
void *compile_addi30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi30, gen_addi30_len);
 	ctx->pc += gen_addi30_len;
 	return pc;
 }
void *compile_addi31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi31, gen_addi31_len);
 	ctx->pc += gen_addi31_len;
 	return pc;
 }
void *compile_addi32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi32, gen_addi32_len);
 	ctx->pc += gen_addi32_len;
 	return pc;
 }
void *compile_addi33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi33, gen_addi33_len);
 	ctx->pc += gen_addi33_len;
 	return pc;
 }
void *compile_addi34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi34, gen_addi34_len);
 	ctx->pc += gen_addi34_len;
 	return pc;
 }
void *compile_addi35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi35, gen_addi35_len);
 	ctx->pc += gen_addi35_len;
 	return pc;
 }
void *compile_addi36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi36, gen_addi36_len);
 	ctx->pc += gen_addi36_len;
 	return pc;
 }
void *compile_addi37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi37, gen_addi37_len);
 	ctx->pc += gen_addi37_len;
 	return pc;
 }
void *compile_addi38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi38, gen_addi38_len);
 	ctx->pc += gen_addi38_len;
 	return pc;
 }
void *compile_addi39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi39, gen_addi39_len);
 	ctx->pc += gen_addi39_len;
 	return pc;
 }
void *compile_addi4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi4, gen_addi4_len);
 	ctx->pc += gen_addi4_len;
 	return pc;
 }
void *compile_addi40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi40, gen_addi40_len);
 	ctx->pc += gen_addi40_len;
 	return pc;
 }
void *compile_addi41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi41, gen_addi41_len);
 	ctx->pc += gen_addi41_len;
 	return pc;
 }
void *compile_addi42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi42, gen_addi42_len);
 	ctx->pc += gen_addi42_len;
 	return pc;
 }
void *compile_addi43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi43, gen_addi43_len);
 	ctx->pc += gen_addi43_len;
 	return pc;
 }
void *compile_addi44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi44, gen_addi44_len);
 	ctx->pc += gen_addi44_len;
 	return pc;
 }
void *compile_addi45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi45, gen_addi45_len);
 	ctx->pc += gen_addi45_len;
 	return pc;
 }
void *compile_addi46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi46, gen_addi46_len);
 	ctx->pc += gen_addi46_len;
 	return pc;
 }
void *compile_addi47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi47, gen_addi47_len);
 	ctx->pc += gen_addi47_len;
 	return pc;
 }
void *compile_addi48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi48, gen_addi48_len);
 	ctx->pc += gen_addi48_len;
 	return pc;
 }
void *compile_addi49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi49, gen_addi49_len);
 	ctx->pc += gen_addi49_len;
 	return pc;
 }
void *compile_addi5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi5, gen_addi5_len);
 	ctx->pc += gen_addi5_len;
 	return pc;
 }
void *compile_addi50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi50, gen_addi50_len);
 	ctx->pc += gen_addi50_len;
 	return pc;
 }
void *compile_addi51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi51, gen_addi51_len);
 	ctx->pc += gen_addi51_len;
 	return pc;
 }
void *compile_addi52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi52, gen_addi52_len);
 	ctx->pc += gen_addi52_len;
 	return pc;
 }
void *compile_addi53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi53, gen_addi53_len);
 	ctx->pc += gen_addi53_len;
 	return pc;
 }
void *compile_addi54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi54, gen_addi54_len);
 	ctx->pc += gen_addi54_len;
 	return pc;
 }
void *compile_addi55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi55, gen_addi55_len);
 	ctx->pc += gen_addi55_len;
 	return pc;
 }
void *compile_addi56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi56, gen_addi56_len);
 	ctx->pc += gen_addi56_len;
 	return pc;
 }
void *compile_addi57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi57, gen_addi57_len);
 	ctx->pc += gen_addi57_len;
 	return pc;
 }
void *compile_addi58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi58, gen_addi58_len);
 	ctx->pc += gen_addi58_len;
 	return pc;
 }
void *compile_addi59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi59, gen_addi59_len);
 	ctx->pc += gen_addi59_len;
 	return pc;
 }
void *compile_addi6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi6, gen_addi6_len);
 	ctx->pc += gen_addi6_len;
 	return pc;
 }
void *compile_addi60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi60, gen_addi60_len);
 	ctx->pc += gen_addi60_len;
 	return pc;
 }
void *compile_addi61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi61, gen_addi61_len);
 	ctx->pc += gen_addi61_len;
 	return pc;
 }
void *compile_addi62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi62, gen_addi62_len);
 	ctx->pc += gen_addi62_len;
 	return pc;
 }
void *compile_addi63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi63, gen_addi63_len);
 	ctx->pc += gen_addi63_len;
 	return pc;
 }
void *compile_addi64(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi64, gen_addi64_len);
 	ctx->pc += gen_addi64_len;
 	return pc;
 }
void *compile_addi65(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi65, gen_addi65_len);
 	ctx->pc += gen_addi65_len;
 	return pc;
 }
void *compile_addi66(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi66, gen_addi66_len);
 	ctx->pc += gen_addi66_len;
 	return pc;
 }
void *compile_addi67(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi67, gen_addi67_len);
 	ctx->pc += gen_addi67_len;
 	return pc;
 }
void *compile_addi68(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi68, gen_addi68_len);
 	ctx->pc += gen_addi68_len;
 	return pc;
 }
void *compile_addi69(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi69, gen_addi69_len);
 	ctx->pc += gen_addi69_len;
 	return pc;
 }
void *compile_addi7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi7, gen_addi7_len);
 	ctx->pc += gen_addi7_len;
 	return pc;
 }
void *compile_addi70(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi70, gen_addi70_len);
 	ctx->pc += gen_addi70_len;
 	return pc;
 }
void *compile_addi71(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi71, gen_addi71_len);
 	ctx->pc += gen_addi71_len;
 	return pc;
 }
void *compile_addi72(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi72, gen_addi72_len);
 	ctx->pc += gen_addi72_len;
 	return pc;
 }
void *compile_addi73(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi73, gen_addi73_len);
 	ctx->pc += gen_addi73_len;
 	return pc;
 }
void *compile_addi74(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi74, gen_addi74_len);
 	ctx->pc += gen_addi74_len;
 	return pc;
 }
void *compile_addi75(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi75, gen_addi75_len);
 	ctx->pc += gen_addi75_len;
 	return pc;
 }
void *compile_addi76(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi76, gen_addi76_len);
 	ctx->pc += gen_addi76_len;
 	return pc;
 }
void *compile_addi77(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi77, gen_addi77_len);
 	ctx->pc += gen_addi77_len;
 	return pc;
 }
void *compile_addi78(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi78, gen_addi78_len);
 	ctx->pc += gen_addi78_len;
 	return pc;
 }
void *compile_addi79(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi79, gen_addi79_len);
 	ctx->pc += gen_addi79_len;
 	return pc;
 }
void *compile_addi8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi8, gen_addi8_len);
 	ctx->pc += gen_addi8_len;
 	return pc;
 }
void *compile_addi80(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi80, gen_addi80_len);
 	ctx->pc += gen_addi80_len;
 	return pc;
 }
void *compile_addi81(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi81, gen_addi81_len);
 	ctx->pc += gen_addi81_len;
 	return pc;
 }
void *compile_addi82(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi82, gen_addi82_len);
 	ctx->pc += gen_addi82_len;
 	return pc;
 }
void *compile_addi83(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi83, gen_addi83_len);
 	ctx->pc += gen_addi83_len;
 	return pc;
 }
void *compile_addi84(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi84, gen_addi84_len);
 	ctx->pc += gen_addi84_len;
 	return pc;
 }
void *compile_addi85(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi85, gen_addi85_len);
 	ctx->pc += gen_addi85_len;
 	return pc;
 }
void *compile_addi86(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi86, gen_addi86_len);
 	ctx->pc += gen_addi86_len;
 	return pc;
 }
void *compile_addi87(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi87, gen_addi87_len);
 	ctx->pc += gen_addi87_len;
 	return pc;
 }
void *compile_addi88(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi88, gen_addi88_len);
 	ctx->pc += gen_addi88_len;
 	return pc;
 }
void *compile_addi89(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi89, gen_addi89_len);
 	ctx->pc += gen_addi89_len;
 	return pc;
 }
void *compile_addi9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi9, gen_addi9_len);
 	ctx->pc += gen_addi9_len;
 	return pc;
 }
void *compile_addi90(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi90, gen_addi90_len);
 	ctx->pc += gen_addi90_len;
 	return pc;
 }
void *compile_addi91(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi91, gen_addi91_len);
 	ctx->pc += gen_addi91_len;
 	return pc;
 }
void *compile_addi92(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi92, gen_addi92_len);
 	ctx->pc += gen_addi92_len;
 	return pc;
 }
void *compile_addi93(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi93, gen_addi93_len);
 	ctx->pc += gen_addi93_len;
 	return pc;
 }
void *compile_addi94(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi94, gen_addi94_len);
 	ctx->pc += gen_addi94_len;
 	return pc;
 }
void *compile_addi95(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi95, gen_addi95_len);
 	ctx->pc += gen_addi95_len;
 	return pc;
 }
void *compile_addi96(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi96, gen_addi96_len);
 	ctx->pc += gen_addi96_len;
 	return pc;
 }
void *compile_addi97(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi97, gen_addi97_len);
 	ctx->pc += gen_addi97_len;
 	return pc;
 }
void *compile_addi98(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi98, gen_addi98_len);
 	ctx->pc += gen_addi98_len;
 	return pc;
 }
void *compile_addi99(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_addi99, gen_addi99_len);
 	ctx->pc += gen_addi99_len;
 	return pc;
 }
void *compile_bsa0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa0, gen_bsa0_len);
 	ctx->pc += gen_bsa0_len;
 	return pc;
 }
void *compile_bsa1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa1, gen_bsa1_len);
 	ctx->pc += gen_bsa1_len;
 	return pc;
 }
void *compile_bsa10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa10, gen_bsa10_len);
 	ctx->pc += gen_bsa10_len;
 	return pc;
 }
void *compile_bsa11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa11, gen_bsa11_len);
 	ctx->pc += gen_bsa11_len;
 	return pc;
 }
void *compile_bsa12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa12, gen_bsa12_len);
 	ctx->pc += gen_bsa12_len;
 	return pc;
 }
void *compile_bsa13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa13, gen_bsa13_len);
 	ctx->pc += gen_bsa13_len;
 	return pc;
 }
void *compile_bsa14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa14, gen_bsa14_len);
 	ctx->pc += gen_bsa14_len;
 	return pc;
 }
void *compile_bsa15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa15, gen_bsa15_len);
 	ctx->pc += gen_bsa15_len;
 	return pc;
 }
void *compile_bsa16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa16, gen_bsa16_len);
 	ctx->pc += gen_bsa16_len;
 	return pc;
 }
void *compile_bsa17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa17, gen_bsa17_len);
 	ctx->pc += gen_bsa17_len;
 	return pc;
 }
void *compile_bsa18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa18, gen_bsa18_len);
 	ctx->pc += gen_bsa18_len;
 	return pc;
 }
void *compile_bsa19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa19, gen_bsa19_len);
 	ctx->pc += gen_bsa19_len;
 	return pc;
 }
void *compile_bsa2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa2, gen_bsa2_len);
 	ctx->pc += gen_bsa2_len;
 	return pc;
 }
void *compile_bsa20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa20, gen_bsa20_len);
 	ctx->pc += gen_bsa20_len;
 	return pc;
 }
void *compile_bsa21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa21, gen_bsa21_len);
 	ctx->pc += gen_bsa21_len;
 	return pc;
 }
void *compile_bsa22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa22, gen_bsa22_len);
 	ctx->pc += gen_bsa22_len;
 	return pc;
 }
void *compile_bsa23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa23, gen_bsa23_len);
 	ctx->pc += gen_bsa23_len;
 	return pc;
 }
void *compile_bsa24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa24, gen_bsa24_len);
 	ctx->pc += gen_bsa24_len;
 	return pc;
 }
void *compile_bsa25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa25, gen_bsa25_len);
 	ctx->pc += gen_bsa25_len;
 	return pc;
 }
void *compile_bsa26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa26, gen_bsa26_len);
 	ctx->pc += gen_bsa26_len;
 	return pc;
 }
void *compile_bsa27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa27, gen_bsa27_len);
 	ctx->pc += gen_bsa27_len;
 	return pc;
 }
void *compile_bsa28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa28, gen_bsa28_len);
 	ctx->pc += gen_bsa28_len;
 	return pc;
 }
void *compile_bsa29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa29, gen_bsa29_len);
 	ctx->pc += gen_bsa29_len;
 	return pc;
 }
void *compile_bsa3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa3, gen_bsa3_len);
 	ctx->pc += gen_bsa3_len;
 	return pc;
 }
void *compile_bsa30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa30, gen_bsa30_len);
 	ctx->pc += gen_bsa30_len;
 	return pc;
 }
void *compile_bsa31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa31, gen_bsa31_len);
 	ctx->pc += gen_bsa31_len;
 	return pc;
 }
void *compile_bsa32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa32, gen_bsa32_len);
 	ctx->pc += gen_bsa32_len;
 	return pc;
 }
void *compile_bsa33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa33, gen_bsa33_len);
 	ctx->pc += gen_bsa33_len;
 	return pc;
 }
void *compile_bsa34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa34, gen_bsa34_len);
 	ctx->pc += gen_bsa34_len;
 	return pc;
 }
void *compile_bsa35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa35, gen_bsa35_len);
 	ctx->pc += gen_bsa35_len;
 	return pc;
 }
void *compile_bsa36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa36, gen_bsa36_len);
 	ctx->pc += gen_bsa36_len;
 	return pc;
 }
void *compile_bsa37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa37, gen_bsa37_len);
 	ctx->pc += gen_bsa37_len;
 	return pc;
 }
void *compile_bsa38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa38, gen_bsa38_len);
 	ctx->pc += gen_bsa38_len;
 	return pc;
 }
void *compile_bsa39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa39, gen_bsa39_len);
 	ctx->pc += gen_bsa39_len;
 	return pc;
 }
void *compile_bsa4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa4, gen_bsa4_len);
 	ctx->pc += gen_bsa4_len;
 	return pc;
 }
void *compile_bsa40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa40, gen_bsa40_len);
 	ctx->pc += gen_bsa40_len;
 	return pc;
 }
void *compile_bsa41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa41, gen_bsa41_len);
 	ctx->pc += gen_bsa41_len;
 	return pc;
 }
void *compile_bsa42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa42, gen_bsa42_len);
 	ctx->pc += gen_bsa42_len;
 	return pc;
 }
void *compile_bsa43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa43, gen_bsa43_len);
 	ctx->pc += gen_bsa43_len;
 	return pc;
 }
void *compile_bsa44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa44, gen_bsa44_len);
 	ctx->pc += gen_bsa44_len;
 	return pc;
 }
void *compile_bsa45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa45, gen_bsa45_len);
 	ctx->pc += gen_bsa45_len;
 	return pc;
 }
void *compile_bsa46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa46, gen_bsa46_len);
 	ctx->pc += gen_bsa46_len;
 	return pc;
 }
void *compile_bsa47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa47, gen_bsa47_len);
 	ctx->pc += gen_bsa47_len;
 	return pc;
 }
void *compile_bsa48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa48, gen_bsa48_len);
 	ctx->pc += gen_bsa48_len;
 	return pc;
 }
void *compile_bsa49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa49, gen_bsa49_len);
 	ctx->pc += gen_bsa49_len;
 	return pc;
 }
void *compile_bsa5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa5, gen_bsa5_len);
 	ctx->pc += gen_bsa5_len;
 	return pc;
 }
void *compile_bsa50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa50, gen_bsa50_len);
 	ctx->pc += gen_bsa50_len;
 	return pc;
 }
void *compile_bsa51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa51, gen_bsa51_len);
 	ctx->pc += gen_bsa51_len;
 	return pc;
 }
void *compile_bsa52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa52, gen_bsa52_len);
 	ctx->pc += gen_bsa52_len;
 	return pc;
 }
void *compile_bsa53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa53, gen_bsa53_len);
 	ctx->pc += gen_bsa53_len;
 	return pc;
 }
void *compile_bsa54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa54, gen_bsa54_len);
 	ctx->pc += gen_bsa54_len;
 	return pc;
 }
void *compile_bsa55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa55, gen_bsa55_len);
 	ctx->pc += gen_bsa55_len;
 	return pc;
 }
void *compile_bsa56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa56, gen_bsa56_len);
 	ctx->pc += gen_bsa56_len;
 	return pc;
 }
void *compile_bsa57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa57, gen_bsa57_len);
 	ctx->pc += gen_bsa57_len;
 	return pc;
 }
void *compile_bsa58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa58, gen_bsa58_len);
 	ctx->pc += gen_bsa58_len;
 	return pc;
 }
void *compile_bsa59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa59, gen_bsa59_len);
 	ctx->pc += gen_bsa59_len;
 	return pc;
 }
void *compile_bsa6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa6, gen_bsa6_len);
 	ctx->pc += gen_bsa6_len;
 	return pc;
 }
void *compile_bsa60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa60, gen_bsa60_len);
 	ctx->pc += gen_bsa60_len;
 	return pc;
 }
void *compile_bsa61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa61, gen_bsa61_len);
 	ctx->pc += gen_bsa61_len;
 	return pc;
 }
void *compile_bsa62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa62, gen_bsa62_len);
 	ctx->pc += gen_bsa62_len;
 	return pc;
 }
void *compile_bsa63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa63, gen_bsa63_len);
 	ctx->pc += gen_bsa63_len;
 	return pc;
 }
void *compile_bsa7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa7, gen_bsa7_len);
 	ctx->pc += gen_bsa7_len;
 	return pc;
 }
void *compile_bsa8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa8, gen_bsa8_len);
 	ctx->pc += gen_bsa8_len;
 	return pc;
 }
void *compile_bsa9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsa9, gen_bsa9_len);
 	ctx->pc += gen_bsa9_len;
 	return pc;
 }
void *compile_bso0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso0, gen_bso0_len);
 	ctx->pc += gen_bso0_len;
 	return pc;
 }
void *compile_bso1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso1, gen_bso1_len);
 	ctx->pc += gen_bso1_len;
 	return pc;
 }
void *compile_bso10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso10, gen_bso10_len);
 	ctx->pc += gen_bso10_len;
 	return pc;
 }
void *compile_bso11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso11, gen_bso11_len);
 	ctx->pc += gen_bso11_len;
 	return pc;
 }
void *compile_bso12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso12, gen_bso12_len);
 	ctx->pc += gen_bso12_len;
 	return pc;
 }
void *compile_bso13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso13, gen_bso13_len);
 	ctx->pc += gen_bso13_len;
 	return pc;
 }
void *compile_bso14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso14, gen_bso14_len);
 	ctx->pc += gen_bso14_len;
 	return pc;
 }
void *compile_bso15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso15, gen_bso15_len);
 	ctx->pc += gen_bso15_len;
 	return pc;
 }
void *compile_bso16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso16, gen_bso16_len);
 	ctx->pc += gen_bso16_len;
 	return pc;
 }
void *compile_bso17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso17, gen_bso17_len);
 	ctx->pc += gen_bso17_len;
 	return pc;
 }
void *compile_bso18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso18, gen_bso18_len);
 	ctx->pc += gen_bso18_len;
 	return pc;
 }
void *compile_bso19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso19, gen_bso19_len);
 	ctx->pc += gen_bso19_len;
 	return pc;
 }
void *compile_bso2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso2, gen_bso2_len);
 	ctx->pc += gen_bso2_len;
 	return pc;
 }
void *compile_bso20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso20, gen_bso20_len);
 	ctx->pc += gen_bso20_len;
 	return pc;
 }
void *compile_bso21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso21, gen_bso21_len);
 	ctx->pc += gen_bso21_len;
 	return pc;
 }
void *compile_bso22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso22, gen_bso22_len);
 	ctx->pc += gen_bso22_len;
 	return pc;
 }
void *compile_bso23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso23, gen_bso23_len);
 	ctx->pc += gen_bso23_len;
 	return pc;
 }
void *compile_bso24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso24, gen_bso24_len);
 	ctx->pc += gen_bso24_len;
 	return pc;
 }
void *compile_bso25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso25, gen_bso25_len);
 	ctx->pc += gen_bso25_len;
 	return pc;
 }
void *compile_bso26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso26, gen_bso26_len);
 	ctx->pc += gen_bso26_len;
 	return pc;
 }
void *compile_bso27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso27, gen_bso27_len);
 	ctx->pc += gen_bso27_len;
 	return pc;
 }
void *compile_bso28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso28, gen_bso28_len);
 	ctx->pc += gen_bso28_len;
 	return pc;
 }
void *compile_bso29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso29, gen_bso29_len);
 	ctx->pc += gen_bso29_len;
 	return pc;
 }
void *compile_bso3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso3, gen_bso3_len);
 	ctx->pc += gen_bso3_len;
 	return pc;
 }
void *compile_bso30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso30, gen_bso30_len);
 	ctx->pc += gen_bso30_len;
 	return pc;
 }
void *compile_bso31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso31, gen_bso31_len);
 	ctx->pc += gen_bso31_len;
 	return pc;
 }
void *compile_bso32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso32, gen_bso32_len);
 	ctx->pc += gen_bso32_len;
 	return pc;
 }
void *compile_bso33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso33, gen_bso33_len);
 	ctx->pc += gen_bso33_len;
 	return pc;
 }
void *compile_bso34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso34, gen_bso34_len);
 	ctx->pc += gen_bso34_len;
 	return pc;
 }
void *compile_bso35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso35, gen_bso35_len);
 	ctx->pc += gen_bso35_len;
 	return pc;
 }
void *compile_bso36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso36, gen_bso36_len);
 	ctx->pc += gen_bso36_len;
 	return pc;
 }
void *compile_bso37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso37, gen_bso37_len);
 	ctx->pc += gen_bso37_len;
 	return pc;
 }
void *compile_bso38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso38, gen_bso38_len);
 	ctx->pc += gen_bso38_len;
 	return pc;
 }
void *compile_bso39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso39, gen_bso39_len);
 	ctx->pc += gen_bso39_len;
 	return pc;
 }
void *compile_bso4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso4, gen_bso4_len);
 	ctx->pc += gen_bso4_len;
 	return pc;
 }
void *compile_bso40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso40, gen_bso40_len);
 	ctx->pc += gen_bso40_len;
 	return pc;
 }
void *compile_bso41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso41, gen_bso41_len);
 	ctx->pc += gen_bso41_len;
 	return pc;
 }
void *compile_bso42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso42, gen_bso42_len);
 	ctx->pc += gen_bso42_len;
 	return pc;
 }
void *compile_bso43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso43, gen_bso43_len);
 	ctx->pc += gen_bso43_len;
 	return pc;
 }
void *compile_bso44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso44, gen_bso44_len);
 	ctx->pc += gen_bso44_len;
 	return pc;
 }
void *compile_bso45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso45, gen_bso45_len);
 	ctx->pc += gen_bso45_len;
 	return pc;
 }
void *compile_bso46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso46, gen_bso46_len);
 	ctx->pc += gen_bso46_len;
 	return pc;
 }
void *compile_bso47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso47, gen_bso47_len);
 	ctx->pc += gen_bso47_len;
 	return pc;
 }
void *compile_bso48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso48, gen_bso48_len);
 	ctx->pc += gen_bso48_len;
 	return pc;
 }
void *compile_bso49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso49, gen_bso49_len);
 	ctx->pc += gen_bso49_len;
 	return pc;
 }
void *compile_bso5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso5, gen_bso5_len);
 	ctx->pc += gen_bso5_len;
 	return pc;
 }
void *compile_bso50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso50, gen_bso50_len);
 	ctx->pc += gen_bso50_len;
 	return pc;
 }
void *compile_bso51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso51, gen_bso51_len);
 	ctx->pc += gen_bso51_len;
 	return pc;
 }
void *compile_bso52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso52, gen_bso52_len);
 	ctx->pc += gen_bso52_len;
 	return pc;
 }
void *compile_bso53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso53, gen_bso53_len);
 	ctx->pc += gen_bso53_len;
 	return pc;
 }
void *compile_bso54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso54, gen_bso54_len);
 	ctx->pc += gen_bso54_len;
 	return pc;
 }
void *compile_bso55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso55, gen_bso55_len);
 	ctx->pc += gen_bso55_len;
 	return pc;
 }
void *compile_bso56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso56, gen_bso56_len);
 	ctx->pc += gen_bso56_len;
 	return pc;
 }
void *compile_bso57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso57, gen_bso57_len);
 	ctx->pc += gen_bso57_len;
 	return pc;
 }
void *compile_bso58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso58, gen_bso58_len);
 	ctx->pc += gen_bso58_len;
 	return pc;
 }
void *compile_bso59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso59, gen_bso59_len);
 	ctx->pc += gen_bso59_len;
 	return pc;
 }
void *compile_bso6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso6, gen_bso6_len);
 	ctx->pc += gen_bso6_len;
 	return pc;
 }
void *compile_bso60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso60, gen_bso60_len);
 	ctx->pc += gen_bso60_len;
 	return pc;
 }
void *compile_bso61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso61, gen_bso61_len);
 	ctx->pc += gen_bso61_len;
 	return pc;
 }
void *compile_bso62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso62, gen_bso62_len);
 	ctx->pc += gen_bso62_len;
 	return pc;
 }
void *compile_bso63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso63, gen_bso63_len);
 	ctx->pc += gen_bso63_len;
 	return pc;
 }
void *compile_bso7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso7, gen_bso7_len);
 	ctx->pc += gen_bso7_len;
 	return pc;
 }
void *compile_bso8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso8, gen_bso8_len);
 	ctx->pc += gen_bso8_len;
 	return pc;
 }
void *compile_bso9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bso9, gen_bso9_len);
 	ctx->pc += gen_bso9_len;
 	return pc;
 }
void *compile_bsx0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx0, gen_bsx0_len);
 	ctx->pc += gen_bsx0_len;
 	return pc;
 }
void *compile_bsx1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx1, gen_bsx1_len);
 	ctx->pc += gen_bsx1_len;
 	return pc;
 }
void *compile_bsx10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx10, gen_bsx10_len);
 	ctx->pc += gen_bsx10_len;
 	return pc;
 }
void *compile_bsx11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx11, gen_bsx11_len);
 	ctx->pc += gen_bsx11_len;
 	return pc;
 }
void *compile_bsx12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx12, gen_bsx12_len);
 	ctx->pc += gen_bsx12_len;
 	return pc;
 }
void *compile_bsx13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx13, gen_bsx13_len);
 	ctx->pc += gen_bsx13_len;
 	return pc;
 }
void *compile_bsx14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx14, gen_bsx14_len);
 	ctx->pc += gen_bsx14_len;
 	return pc;
 }
void *compile_bsx15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx15, gen_bsx15_len);
 	ctx->pc += gen_bsx15_len;
 	return pc;
 }
void *compile_bsx16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx16, gen_bsx16_len);
 	ctx->pc += gen_bsx16_len;
 	return pc;
 }
void *compile_bsx17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx17, gen_bsx17_len);
 	ctx->pc += gen_bsx17_len;
 	return pc;
 }
void *compile_bsx18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx18, gen_bsx18_len);
 	ctx->pc += gen_bsx18_len;
 	return pc;
 }
void *compile_bsx19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx19, gen_bsx19_len);
 	ctx->pc += gen_bsx19_len;
 	return pc;
 }
void *compile_bsx2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx2, gen_bsx2_len);
 	ctx->pc += gen_bsx2_len;
 	return pc;
 }
void *compile_bsx20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx20, gen_bsx20_len);
 	ctx->pc += gen_bsx20_len;
 	return pc;
 }
void *compile_bsx21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx21, gen_bsx21_len);
 	ctx->pc += gen_bsx21_len;
 	return pc;
 }
void *compile_bsx22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx22, gen_bsx22_len);
 	ctx->pc += gen_bsx22_len;
 	return pc;
 }
void *compile_bsx23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx23, gen_bsx23_len);
 	ctx->pc += gen_bsx23_len;
 	return pc;
 }
void *compile_bsx24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx24, gen_bsx24_len);
 	ctx->pc += gen_bsx24_len;
 	return pc;
 }
void *compile_bsx25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx25, gen_bsx25_len);
 	ctx->pc += gen_bsx25_len;
 	return pc;
 }
void *compile_bsx26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx26, gen_bsx26_len);
 	ctx->pc += gen_bsx26_len;
 	return pc;
 }
void *compile_bsx27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx27, gen_bsx27_len);
 	ctx->pc += gen_bsx27_len;
 	return pc;
 }
void *compile_bsx28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx28, gen_bsx28_len);
 	ctx->pc += gen_bsx28_len;
 	return pc;
 }
void *compile_bsx29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx29, gen_bsx29_len);
 	ctx->pc += gen_bsx29_len;
 	return pc;
 }
void *compile_bsx3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx3, gen_bsx3_len);
 	ctx->pc += gen_bsx3_len;
 	return pc;
 }
void *compile_bsx30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx30, gen_bsx30_len);
 	ctx->pc += gen_bsx30_len;
 	return pc;
 }
void *compile_bsx31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx31, gen_bsx31_len);
 	ctx->pc += gen_bsx31_len;
 	return pc;
 }
void *compile_bsx32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx32, gen_bsx32_len);
 	ctx->pc += gen_bsx32_len;
 	return pc;
 }
void *compile_bsx33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx33, gen_bsx33_len);
 	ctx->pc += gen_bsx33_len;
 	return pc;
 }
void *compile_bsx34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx34, gen_bsx34_len);
 	ctx->pc += gen_bsx34_len;
 	return pc;
 }
void *compile_bsx35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx35, gen_bsx35_len);
 	ctx->pc += gen_bsx35_len;
 	return pc;
 }
void *compile_bsx36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx36, gen_bsx36_len);
 	ctx->pc += gen_bsx36_len;
 	return pc;
 }
void *compile_bsx37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx37, gen_bsx37_len);
 	ctx->pc += gen_bsx37_len;
 	return pc;
 }
void *compile_bsx38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx38, gen_bsx38_len);
 	ctx->pc += gen_bsx38_len;
 	return pc;
 }
void *compile_bsx39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx39, gen_bsx39_len);
 	ctx->pc += gen_bsx39_len;
 	return pc;
 }
void *compile_bsx4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx4, gen_bsx4_len);
 	ctx->pc += gen_bsx4_len;
 	return pc;
 }
void *compile_bsx40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx40, gen_bsx40_len);
 	ctx->pc += gen_bsx40_len;
 	return pc;
 }
void *compile_bsx41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx41, gen_bsx41_len);
 	ctx->pc += gen_bsx41_len;
 	return pc;
 }
void *compile_bsx42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx42, gen_bsx42_len);
 	ctx->pc += gen_bsx42_len;
 	return pc;
 }
void *compile_bsx43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx43, gen_bsx43_len);
 	ctx->pc += gen_bsx43_len;
 	return pc;
 }
void *compile_bsx44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx44, gen_bsx44_len);
 	ctx->pc += gen_bsx44_len;
 	return pc;
 }
void *compile_bsx45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx45, gen_bsx45_len);
 	ctx->pc += gen_bsx45_len;
 	return pc;
 }
void *compile_bsx46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx46, gen_bsx46_len);
 	ctx->pc += gen_bsx46_len;
 	return pc;
 }
void *compile_bsx47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx47, gen_bsx47_len);
 	ctx->pc += gen_bsx47_len;
 	return pc;
 }
void *compile_bsx48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx48, gen_bsx48_len);
 	ctx->pc += gen_bsx48_len;
 	return pc;
 }
void *compile_bsx49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx49, gen_bsx49_len);
 	ctx->pc += gen_bsx49_len;
 	return pc;
 }
void *compile_bsx5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx5, gen_bsx5_len);
 	ctx->pc += gen_bsx5_len;
 	return pc;
 }
void *compile_bsx50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx50, gen_bsx50_len);
 	ctx->pc += gen_bsx50_len;
 	return pc;
 }
void *compile_bsx51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx51, gen_bsx51_len);
 	ctx->pc += gen_bsx51_len;
 	return pc;
 }
void *compile_bsx52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx52, gen_bsx52_len);
 	ctx->pc += gen_bsx52_len;
 	return pc;
 }
void *compile_bsx53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx53, gen_bsx53_len);
 	ctx->pc += gen_bsx53_len;
 	return pc;
 }
void *compile_bsx54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx54, gen_bsx54_len);
 	ctx->pc += gen_bsx54_len;
 	return pc;
 }
void *compile_bsx55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx55, gen_bsx55_len);
 	ctx->pc += gen_bsx55_len;
 	return pc;
 }
void *compile_bsx56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx56, gen_bsx56_len);
 	ctx->pc += gen_bsx56_len;
 	return pc;
 }
void *compile_bsx57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx57, gen_bsx57_len);
 	ctx->pc += gen_bsx57_len;
 	return pc;
 }
void *compile_bsx58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx58, gen_bsx58_len);
 	ctx->pc += gen_bsx58_len;
 	return pc;
 }
void *compile_bsx59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx59, gen_bsx59_len);
 	ctx->pc += gen_bsx59_len;
 	return pc;
 }
void *compile_bsx6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx6, gen_bsx6_len);
 	ctx->pc += gen_bsx6_len;
 	return pc;
 }
void *compile_bsx60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx60, gen_bsx60_len);
 	ctx->pc += gen_bsx60_len;
 	return pc;
 }
void *compile_bsx61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx61, gen_bsx61_len);
 	ctx->pc += gen_bsx61_len;
 	return pc;
 }
void *compile_bsx62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx62, gen_bsx62_len);
 	ctx->pc += gen_bsx62_len;
 	return pc;
 }
void *compile_bsx63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx63, gen_bsx63_len);
 	ctx->pc += gen_bsx63_len;
 	return pc;
 }
void *compile_bsx7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx7, gen_bsx7_len);
 	ctx->pc += gen_bsx7_len;
 	return pc;
 }
void *compile_bsx8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx8, gen_bsx8_len);
 	ctx->pc += gen_bsx8_len;
 	return pc;
 }
void *compile_bsx9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsx9, gen_bsx9_len);
 	ctx->pc += gen_bsx9_len;
 	return pc;
 }
void *compile_bsy0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy0, gen_bsy0_len);
 	ctx->pc += gen_bsy0_len;
 	return pc;
 }
void *compile_bsy1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy1, gen_bsy1_len);
 	ctx->pc += gen_bsy1_len;
 	return pc;
 }
void *compile_bsy10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy10, gen_bsy10_len);
 	ctx->pc += gen_bsy10_len;
 	return pc;
 }
void *compile_bsy11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy11, gen_bsy11_len);
 	ctx->pc += gen_bsy11_len;
 	return pc;
 }
void *compile_bsy12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy12, gen_bsy12_len);
 	ctx->pc += gen_bsy12_len;
 	return pc;
 }
void *compile_bsy13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy13, gen_bsy13_len);
 	ctx->pc += gen_bsy13_len;
 	return pc;
 }
void *compile_bsy14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy14, gen_bsy14_len);
 	ctx->pc += gen_bsy14_len;
 	return pc;
 }
void *compile_bsy15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy15, gen_bsy15_len);
 	ctx->pc += gen_bsy15_len;
 	return pc;
 }
void *compile_bsy16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy16, gen_bsy16_len);
 	ctx->pc += gen_bsy16_len;
 	return pc;
 }
void *compile_bsy17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy17, gen_bsy17_len);
 	ctx->pc += gen_bsy17_len;
 	return pc;
 }
void *compile_bsy18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy18, gen_bsy18_len);
 	ctx->pc += gen_bsy18_len;
 	return pc;
 }
void *compile_bsy19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy19, gen_bsy19_len);
 	ctx->pc += gen_bsy19_len;
 	return pc;
 }
void *compile_bsy2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy2, gen_bsy2_len);
 	ctx->pc += gen_bsy2_len;
 	return pc;
 }
void *compile_bsy20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy20, gen_bsy20_len);
 	ctx->pc += gen_bsy20_len;
 	return pc;
 }
void *compile_bsy21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy21, gen_bsy21_len);
 	ctx->pc += gen_bsy21_len;
 	return pc;
 }
void *compile_bsy22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy22, gen_bsy22_len);
 	ctx->pc += gen_bsy22_len;
 	return pc;
 }
void *compile_bsy23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy23, gen_bsy23_len);
 	ctx->pc += gen_bsy23_len;
 	return pc;
 }
void *compile_bsy24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy24, gen_bsy24_len);
 	ctx->pc += gen_bsy24_len;
 	return pc;
 }
void *compile_bsy25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy25, gen_bsy25_len);
 	ctx->pc += gen_bsy25_len;
 	return pc;
 }
void *compile_bsy26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy26, gen_bsy26_len);
 	ctx->pc += gen_bsy26_len;
 	return pc;
 }
void *compile_bsy27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy27, gen_bsy27_len);
 	ctx->pc += gen_bsy27_len;
 	return pc;
 }
void *compile_bsy28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy28, gen_bsy28_len);
 	ctx->pc += gen_bsy28_len;
 	return pc;
 }
void *compile_bsy29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy29, gen_bsy29_len);
 	ctx->pc += gen_bsy29_len;
 	return pc;
 }
void *compile_bsy3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy3, gen_bsy3_len);
 	ctx->pc += gen_bsy3_len;
 	return pc;
 }
void *compile_bsy30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy30, gen_bsy30_len);
 	ctx->pc += gen_bsy30_len;
 	return pc;
 }
void *compile_bsy31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy31, gen_bsy31_len);
 	ctx->pc += gen_bsy31_len;
 	return pc;
 }
void *compile_bsy32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy32, gen_bsy32_len);
 	ctx->pc += gen_bsy32_len;
 	return pc;
 }
void *compile_bsy33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy33, gen_bsy33_len);
 	ctx->pc += gen_bsy33_len;
 	return pc;
 }
void *compile_bsy34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy34, gen_bsy34_len);
 	ctx->pc += gen_bsy34_len;
 	return pc;
 }
void *compile_bsy35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy35, gen_bsy35_len);
 	ctx->pc += gen_bsy35_len;
 	return pc;
 }
void *compile_bsy36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy36, gen_bsy36_len);
 	ctx->pc += gen_bsy36_len;
 	return pc;
 }
void *compile_bsy37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy37, gen_bsy37_len);
 	ctx->pc += gen_bsy37_len;
 	return pc;
 }
void *compile_bsy38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy38, gen_bsy38_len);
 	ctx->pc += gen_bsy38_len;
 	return pc;
 }
void *compile_bsy39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy39, gen_bsy39_len);
 	ctx->pc += gen_bsy39_len;
 	return pc;
 }
void *compile_bsy4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy4, gen_bsy4_len);
 	ctx->pc += gen_bsy4_len;
 	return pc;
 }
void *compile_bsy40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy40, gen_bsy40_len);
 	ctx->pc += gen_bsy40_len;
 	return pc;
 }
void *compile_bsy41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy41, gen_bsy41_len);
 	ctx->pc += gen_bsy41_len;
 	return pc;
 }
void *compile_bsy42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy42, gen_bsy42_len);
 	ctx->pc += gen_bsy42_len;
 	return pc;
 }
void *compile_bsy43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy43, gen_bsy43_len);
 	ctx->pc += gen_bsy43_len;
 	return pc;
 }
void *compile_bsy44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy44, gen_bsy44_len);
 	ctx->pc += gen_bsy44_len;
 	return pc;
 }
void *compile_bsy45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy45, gen_bsy45_len);
 	ctx->pc += gen_bsy45_len;
 	return pc;
 }
void *compile_bsy46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy46, gen_bsy46_len);
 	ctx->pc += gen_bsy46_len;
 	return pc;
 }
void *compile_bsy47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy47, gen_bsy47_len);
 	ctx->pc += gen_bsy47_len;
 	return pc;
 }
void *compile_bsy48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy48, gen_bsy48_len);
 	ctx->pc += gen_bsy48_len;
 	return pc;
 }
void *compile_bsy49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy49, gen_bsy49_len);
 	ctx->pc += gen_bsy49_len;
 	return pc;
 }
void *compile_bsy5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy5, gen_bsy5_len);
 	ctx->pc += gen_bsy5_len;
 	return pc;
 }
void *compile_bsy50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy50, gen_bsy50_len);
 	ctx->pc += gen_bsy50_len;
 	return pc;
 }
void *compile_bsy51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy51, gen_bsy51_len);
 	ctx->pc += gen_bsy51_len;
 	return pc;
 }
void *compile_bsy52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy52, gen_bsy52_len);
 	ctx->pc += gen_bsy52_len;
 	return pc;
 }
void *compile_bsy53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy53, gen_bsy53_len);
 	ctx->pc += gen_bsy53_len;
 	return pc;
 }
void *compile_bsy54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy54, gen_bsy54_len);
 	ctx->pc += gen_bsy54_len;
 	return pc;
 }
void *compile_bsy55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy55, gen_bsy55_len);
 	ctx->pc += gen_bsy55_len;
 	return pc;
 }
void *compile_bsy56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy56, gen_bsy56_len);
 	ctx->pc += gen_bsy56_len;
 	return pc;
 }
void *compile_bsy57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy57, gen_bsy57_len);
 	ctx->pc += gen_bsy57_len;
 	return pc;
 }
void *compile_bsy58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy58, gen_bsy58_len);
 	ctx->pc += gen_bsy58_len;
 	return pc;
 }
void *compile_bsy59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy59, gen_bsy59_len);
 	ctx->pc += gen_bsy59_len;
 	return pc;
 }
void *compile_bsy6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy6, gen_bsy6_len);
 	ctx->pc += gen_bsy6_len;
 	return pc;
 }
void *compile_bsy60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy60, gen_bsy60_len);
 	ctx->pc += gen_bsy60_len;
 	return pc;
 }
void *compile_bsy61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy61, gen_bsy61_len);
 	ctx->pc += gen_bsy61_len;
 	return pc;
 }
void *compile_bsy62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy62, gen_bsy62_len);
 	ctx->pc += gen_bsy62_len;
 	return pc;
 }
void *compile_bsy63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy63, gen_bsy63_len);
 	ctx->pc += gen_bsy63_len;
 	return pc;
 }
void *compile_bsy7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy7, gen_bsy7_len);
 	ctx->pc += gen_bsy7_len;
 	return pc;
 }
void *compile_bsy8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy8, gen_bsy8_len);
 	ctx->pc += gen_bsy8_len;
 	return pc;
 }
void *compile_bsy9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_bsy9, gen_bsy9_len);
 	ctx->pc += gen_bsy9_len;
 	return pc;
 }
void *compile_li0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li0, gen_li0_len);
 	ctx->pc += gen_li0_len;
 	return pc;
 }
void *compile_li1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li1, gen_li1_len);
 	ctx->pc += gen_li1_len;
 	return pc;
 }
void *compile_li10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li10, gen_li10_len);
 	ctx->pc += gen_li10_len;
 	return pc;
 }
void *compile_li100(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li100, gen_li100_len);
 	ctx->pc += gen_li100_len;
 	return pc;
 }
void *compile_li101(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li101, gen_li101_len);
 	ctx->pc += gen_li101_len;
 	return pc;
 }
void *compile_li102(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li102, gen_li102_len);
 	ctx->pc += gen_li102_len;
 	return pc;
 }
void *compile_li103(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li103, gen_li103_len);
 	ctx->pc += gen_li103_len;
 	return pc;
 }
void *compile_li104(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li104, gen_li104_len);
 	ctx->pc += gen_li104_len;
 	return pc;
 }
void *compile_li105(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li105, gen_li105_len);
 	ctx->pc += gen_li105_len;
 	return pc;
 }
void *compile_li106(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li106, gen_li106_len);
 	ctx->pc += gen_li106_len;
 	return pc;
 }
void *compile_li107(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li107, gen_li107_len);
 	ctx->pc += gen_li107_len;
 	return pc;
 }
void *compile_li108(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li108, gen_li108_len);
 	ctx->pc += gen_li108_len;
 	return pc;
 }
void *compile_li109(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li109, gen_li109_len);
 	ctx->pc += gen_li109_len;
 	return pc;
 }
void *compile_li11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li11, gen_li11_len);
 	ctx->pc += gen_li11_len;
 	return pc;
 }
void *compile_li110(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li110, gen_li110_len);
 	ctx->pc += gen_li110_len;
 	return pc;
 }
void *compile_li111(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li111, gen_li111_len);
 	ctx->pc += gen_li111_len;
 	return pc;
 }
void *compile_li112(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li112, gen_li112_len);
 	ctx->pc += gen_li112_len;
 	return pc;
 }
void *compile_li113(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li113, gen_li113_len);
 	ctx->pc += gen_li113_len;
 	return pc;
 }
void *compile_li114(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li114, gen_li114_len);
 	ctx->pc += gen_li114_len;
 	return pc;
 }
void *compile_li115(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li115, gen_li115_len);
 	ctx->pc += gen_li115_len;
 	return pc;
 }
void *compile_li116(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li116, gen_li116_len);
 	ctx->pc += gen_li116_len;
 	return pc;
 }
void *compile_li117(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li117, gen_li117_len);
 	ctx->pc += gen_li117_len;
 	return pc;
 }
void *compile_li118(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li118, gen_li118_len);
 	ctx->pc += gen_li118_len;
 	return pc;
 }
void *compile_li119(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li119, gen_li119_len);
 	ctx->pc += gen_li119_len;
 	return pc;
 }
void *compile_li12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li12, gen_li12_len);
 	ctx->pc += gen_li12_len;
 	return pc;
 }
void *compile_li120(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li120, gen_li120_len);
 	ctx->pc += gen_li120_len;
 	return pc;
 }
void *compile_li121(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li121, gen_li121_len);
 	ctx->pc += gen_li121_len;
 	return pc;
 }
void *compile_li122(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li122, gen_li122_len);
 	ctx->pc += gen_li122_len;
 	return pc;
 }
void *compile_li123(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li123, gen_li123_len);
 	ctx->pc += gen_li123_len;
 	return pc;
 }
void *compile_li124(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li124, gen_li124_len);
 	ctx->pc += gen_li124_len;
 	return pc;
 }
void *compile_li125(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li125, gen_li125_len);
 	ctx->pc += gen_li125_len;
 	return pc;
 }
void *compile_li126(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li126, gen_li126_len);
 	ctx->pc += gen_li126_len;
 	return pc;
 }
void *compile_li127(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li127, gen_li127_len);
 	ctx->pc += gen_li127_len;
 	return pc;
 }
void *compile_li128(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li128, gen_li128_len);
 	ctx->pc += gen_li128_len;
 	return pc;
 }
void *compile_li129(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li129, gen_li129_len);
 	ctx->pc += gen_li129_len;
 	return pc;
 }
void *compile_li13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li13, gen_li13_len);
 	ctx->pc += gen_li13_len;
 	return pc;
 }
void *compile_li130(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li130, gen_li130_len);
 	ctx->pc += gen_li130_len;
 	return pc;
 }
void *compile_li131(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li131, gen_li131_len);
 	ctx->pc += gen_li131_len;
 	return pc;
 }
void *compile_li132(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li132, gen_li132_len);
 	ctx->pc += gen_li132_len;
 	return pc;
 }
void *compile_li133(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li133, gen_li133_len);
 	ctx->pc += gen_li133_len;
 	return pc;
 }
void *compile_li134(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li134, gen_li134_len);
 	ctx->pc += gen_li134_len;
 	return pc;
 }
void *compile_li135(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li135, gen_li135_len);
 	ctx->pc += gen_li135_len;
 	return pc;
 }
void *compile_li136(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li136, gen_li136_len);
 	ctx->pc += gen_li136_len;
 	return pc;
 }
void *compile_li137(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li137, gen_li137_len);
 	ctx->pc += gen_li137_len;
 	return pc;
 }
void *compile_li138(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li138, gen_li138_len);
 	ctx->pc += gen_li138_len;
 	return pc;
 }
void *compile_li139(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li139, gen_li139_len);
 	ctx->pc += gen_li139_len;
 	return pc;
 }
void *compile_li14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li14, gen_li14_len);
 	ctx->pc += gen_li14_len;
 	return pc;
 }
void *compile_li140(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li140, gen_li140_len);
 	ctx->pc += gen_li140_len;
 	return pc;
 }
void *compile_li141(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li141, gen_li141_len);
 	ctx->pc += gen_li141_len;
 	return pc;
 }
void *compile_li142(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li142, gen_li142_len);
 	ctx->pc += gen_li142_len;
 	return pc;
 }
void *compile_li143(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li143, gen_li143_len);
 	ctx->pc += gen_li143_len;
 	return pc;
 }
void *compile_li144(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li144, gen_li144_len);
 	ctx->pc += gen_li144_len;
 	return pc;
 }
void *compile_li145(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li145, gen_li145_len);
 	ctx->pc += gen_li145_len;
 	return pc;
 }
void *compile_li146(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li146, gen_li146_len);
 	ctx->pc += gen_li146_len;
 	return pc;
 }
void *compile_li147(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li147, gen_li147_len);
 	ctx->pc += gen_li147_len;
 	return pc;
 }
void *compile_li148(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li148, gen_li148_len);
 	ctx->pc += gen_li148_len;
 	return pc;
 }
void *compile_li149(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li149, gen_li149_len);
 	ctx->pc += gen_li149_len;
 	return pc;
 }
void *compile_li15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li15, gen_li15_len);
 	ctx->pc += gen_li15_len;
 	return pc;
 }
void *compile_li150(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li150, gen_li150_len);
 	ctx->pc += gen_li150_len;
 	return pc;
 }
void *compile_li151(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li151, gen_li151_len);
 	ctx->pc += gen_li151_len;
 	return pc;
 }
void *compile_li152(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li152, gen_li152_len);
 	ctx->pc += gen_li152_len;
 	return pc;
 }
void *compile_li153(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li153, gen_li153_len);
 	ctx->pc += gen_li153_len;
 	return pc;
 }
void *compile_li154(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li154, gen_li154_len);
 	ctx->pc += gen_li154_len;
 	return pc;
 }
void *compile_li155(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li155, gen_li155_len);
 	ctx->pc += gen_li155_len;
 	return pc;
 }
void *compile_li156(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li156, gen_li156_len);
 	ctx->pc += gen_li156_len;
 	return pc;
 }
void *compile_li157(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li157, gen_li157_len);
 	ctx->pc += gen_li157_len;
 	return pc;
 }
void *compile_li158(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li158, gen_li158_len);
 	ctx->pc += gen_li158_len;
 	return pc;
 }
void *compile_li159(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li159, gen_li159_len);
 	ctx->pc += gen_li159_len;
 	return pc;
 }
void *compile_li16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li16, gen_li16_len);
 	ctx->pc += gen_li16_len;
 	return pc;
 }
void *compile_li160(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li160, gen_li160_len);
 	ctx->pc += gen_li160_len;
 	return pc;
 }
void *compile_li161(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li161, gen_li161_len);
 	ctx->pc += gen_li161_len;
 	return pc;
 }
void *compile_li162(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li162, gen_li162_len);
 	ctx->pc += gen_li162_len;
 	return pc;
 }
void *compile_li163(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li163, gen_li163_len);
 	ctx->pc += gen_li163_len;
 	return pc;
 }
void *compile_li164(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li164, gen_li164_len);
 	ctx->pc += gen_li164_len;
 	return pc;
 }
void *compile_li165(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li165, gen_li165_len);
 	ctx->pc += gen_li165_len;
 	return pc;
 }
void *compile_li166(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li166, gen_li166_len);
 	ctx->pc += gen_li166_len;
 	return pc;
 }
void *compile_li167(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li167, gen_li167_len);
 	ctx->pc += gen_li167_len;
 	return pc;
 }
void *compile_li168(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li168, gen_li168_len);
 	ctx->pc += gen_li168_len;
 	return pc;
 }
void *compile_li169(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li169, gen_li169_len);
 	ctx->pc += gen_li169_len;
 	return pc;
 }
void *compile_li17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li17, gen_li17_len);
 	ctx->pc += gen_li17_len;
 	return pc;
 }
void *compile_li170(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li170, gen_li170_len);
 	ctx->pc += gen_li170_len;
 	return pc;
 }
void *compile_li171(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li171, gen_li171_len);
 	ctx->pc += gen_li171_len;
 	return pc;
 }
void *compile_li172(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li172, gen_li172_len);
 	ctx->pc += gen_li172_len;
 	return pc;
 }
void *compile_li173(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li173, gen_li173_len);
 	ctx->pc += gen_li173_len;
 	return pc;
 }
void *compile_li174(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li174, gen_li174_len);
 	ctx->pc += gen_li174_len;
 	return pc;
 }
void *compile_li175(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li175, gen_li175_len);
 	ctx->pc += gen_li175_len;
 	return pc;
 }
void *compile_li176(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li176, gen_li176_len);
 	ctx->pc += gen_li176_len;
 	return pc;
 }
void *compile_li177(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li177, gen_li177_len);
 	ctx->pc += gen_li177_len;
 	return pc;
 }
void *compile_li178(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li178, gen_li178_len);
 	ctx->pc += gen_li178_len;
 	return pc;
 }
void *compile_li179(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li179, gen_li179_len);
 	ctx->pc += gen_li179_len;
 	return pc;
 }
void *compile_li18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li18, gen_li18_len);
 	ctx->pc += gen_li18_len;
 	return pc;
 }
void *compile_li180(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li180, gen_li180_len);
 	ctx->pc += gen_li180_len;
 	return pc;
 }
void *compile_li181(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li181, gen_li181_len);
 	ctx->pc += gen_li181_len;
 	return pc;
 }
void *compile_li182(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li182, gen_li182_len);
 	ctx->pc += gen_li182_len;
 	return pc;
 }
void *compile_li183(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li183, gen_li183_len);
 	ctx->pc += gen_li183_len;
 	return pc;
 }
void *compile_li184(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li184, gen_li184_len);
 	ctx->pc += gen_li184_len;
 	return pc;
 }
void *compile_li185(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li185, gen_li185_len);
 	ctx->pc += gen_li185_len;
 	return pc;
 }
void *compile_li186(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li186, gen_li186_len);
 	ctx->pc += gen_li186_len;
 	return pc;
 }
void *compile_li187(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li187, gen_li187_len);
 	ctx->pc += gen_li187_len;
 	return pc;
 }
void *compile_li188(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li188, gen_li188_len);
 	ctx->pc += gen_li188_len;
 	return pc;
 }
void *compile_li189(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li189, gen_li189_len);
 	ctx->pc += gen_li189_len;
 	return pc;
 }
void *compile_li19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li19, gen_li19_len);
 	ctx->pc += gen_li19_len;
 	return pc;
 }
void *compile_li190(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li190, gen_li190_len);
 	ctx->pc += gen_li190_len;
 	return pc;
 }
void *compile_li191(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li191, gen_li191_len);
 	ctx->pc += gen_li191_len;
 	return pc;
 }
void *compile_li192(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li192, gen_li192_len);
 	ctx->pc += gen_li192_len;
 	return pc;
 }
void *compile_li193(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li193, gen_li193_len);
 	ctx->pc += gen_li193_len;
 	return pc;
 }
void *compile_li194(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li194, gen_li194_len);
 	ctx->pc += gen_li194_len;
 	return pc;
 }
void *compile_li195(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li195, gen_li195_len);
 	ctx->pc += gen_li195_len;
 	return pc;
 }
void *compile_li196(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li196, gen_li196_len);
 	ctx->pc += gen_li196_len;
 	return pc;
 }
void *compile_li197(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li197, gen_li197_len);
 	ctx->pc += gen_li197_len;
 	return pc;
 }
void *compile_li198(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li198, gen_li198_len);
 	ctx->pc += gen_li198_len;
 	return pc;
 }
void *compile_li199(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li199, gen_li199_len);
 	ctx->pc += gen_li199_len;
 	return pc;
 }
void *compile_li2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li2, gen_li2_len);
 	ctx->pc += gen_li2_len;
 	return pc;
 }
void *compile_li20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li20, gen_li20_len);
 	ctx->pc += gen_li20_len;
 	return pc;
 }
void *compile_li200(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li200, gen_li200_len);
 	ctx->pc += gen_li200_len;
 	return pc;
 }
void *compile_li201(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li201, gen_li201_len);
 	ctx->pc += gen_li201_len;
 	return pc;
 }
void *compile_li202(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li202, gen_li202_len);
 	ctx->pc += gen_li202_len;
 	return pc;
 }
void *compile_li203(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li203, gen_li203_len);
 	ctx->pc += gen_li203_len;
 	return pc;
 }
void *compile_li204(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li204, gen_li204_len);
 	ctx->pc += gen_li204_len;
 	return pc;
 }
void *compile_li205(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li205, gen_li205_len);
 	ctx->pc += gen_li205_len;
 	return pc;
 }
void *compile_li206(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li206, gen_li206_len);
 	ctx->pc += gen_li206_len;
 	return pc;
 }
void *compile_li207(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li207, gen_li207_len);
 	ctx->pc += gen_li207_len;
 	return pc;
 }
void *compile_li208(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li208, gen_li208_len);
 	ctx->pc += gen_li208_len;
 	return pc;
 }
void *compile_li209(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li209, gen_li209_len);
 	ctx->pc += gen_li209_len;
 	return pc;
 }
void *compile_li21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li21, gen_li21_len);
 	ctx->pc += gen_li21_len;
 	return pc;
 }
void *compile_li210(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li210, gen_li210_len);
 	ctx->pc += gen_li210_len;
 	return pc;
 }
void *compile_li211(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li211, gen_li211_len);
 	ctx->pc += gen_li211_len;
 	return pc;
 }
void *compile_li212(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li212, gen_li212_len);
 	ctx->pc += gen_li212_len;
 	return pc;
 }
void *compile_li213(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li213, gen_li213_len);
 	ctx->pc += gen_li213_len;
 	return pc;
 }
void *compile_li214(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li214, gen_li214_len);
 	ctx->pc += gen_li214_len;
 	return pc;
 }
void *compile_li215(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li215, gen_li215_len);
 	ctx->pc += gen_li215_len;
 	return pc;
 }
void *compile_li216(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li216, gen_li216_len);
 	ctx->pc += gen_li216_len;
 	return pc;
 }
void *compile_li217(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li217, gen_li217_len);
 	ctx->pc += gen_li217_len;
 	return pc;
 }
void *compile_li218(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li218, gen_li218_len);
 	ctx->pc += gen_li218_len;
 	return pc;
 }
void *compile_li219(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li219, gen_li219_len);
 	ctx->pc += gen_li219_len;
 	return pc;
 }
void *compile_li22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li22, gen_li22_len);
 	ctx->pc += gen_li22_len;
 	return pc;
 }
void *compile_li220(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li220, gen_li220_len);
 	ctx->pc += gen_li220_len;
 	return pc;
 }
void *compile_li221(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li221, gen_li221_len);
 	ctx->pc += gen_li221_len;
 	return pc;
 }
void *compile_li222(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li222, gen_li222_len);
 	ctx->pc += gen_li222_len;
 	return pc;
 }
void *compile_li223(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li223, gen_li223_len);
 	ctx->pc += gen_li223_len;
 	return pc;
 }
void *compile_li224(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li224, gen_li224_len);
 	ctx->pc += gen_li224_len;
 	return pc;
 }
void *compile_li225(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li225, gen_li225_len);
 	ctx->pc += gen_li225_len;
 	return pc;
 }
void *compile_li226(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li226, gen_li226_len);
 	ctx->pc += gen_li226_len;
 	return pc;
 }
void *compile_li227(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li227, gen_li227_len);
 	ctx->pc += gen_li227_len;
 	return pc;
 }
void *compile_li228(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li228, gen_li228_len);
 	ctx->pc += gen_li228_len;
 	return pc;
 }
void *compile_li229(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li229, gen_li229_len);
 	ctx->pc += gen_li229_len;
 	return pc;
 }
void *compile_li23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li23, gen_li23_len);
 	ctx->pc += gen_li23_len;
 	return pc;
 }
void *compile_li230(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li230, gen_li230_len);
 	ctx->pc += gen_li230_len;
 	return pc;
 }
void *compile_li231(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li231, gen_li231_len);
 	ctx->pc += gen_li231_len;
 	return pc;
 }
void *compile_li232(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li232, gen_li232_len);
 	ctx->pc += gen_li232_len;
 	return pc;
 }
void *compile_li233(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li233, gen_li233_len);
 	ctx->pc += gen_li233_len;
 	return pc;
 }
void *compile_li234(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li234, gen_li234_len);
 	ctx->pc += gen_li234_len;
 	return pc;
 }
void *compile_li235(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li235, gen_li235_len);
 	ctx->pc += gen_li235_len;
 	return pc;
 }
void *compile_li236(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li236, gen_li236_len);
 	ctx->pc += gen_li236_len;
 	return pc;
 }
void *compile_li237(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li237, gen_li237_len);
 	ctx->pc += gen_li237_len;
 	return pc;
 }
void *compile_li238(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li238, gen_li238_len);
 	ctx->pc += gen_li238_len;
 	return pc;
 }
void *compile_li239(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li239, gen_li239_len);
 	ctx->pc += gen_li239_len;
 	return pc;
 }
void *compile_li24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li24, gen_li24_len);
 	ctx->pc += gen_li24_len;
 	return pc;
 }
void *compile_li240(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li240, gen_li240_len);
 	ctx->pc += gen_li240_len;
 	return pc;
 }
void *compile_li241(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li241, gen_li241_len);
 	ctx->pc += gen_li241_len;
 	return pc;
 }
void *compile_li242(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li242, gen_li242_len);
 	ctx->pc += gen_li242_len;
 	return pc;
 }
void *compile_li243(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li243, gen_li243_len);
 	ctx->pc += gen_li243_len;
 	return pc;
 }
void *compile_li244(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li244, gen_li244_len);
 	ctx->pc += gen_li244_len;
 	return pc;
 }
void *compile_li245(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li245, gen_li245_len);
 	ctx->pc += gen_li245_len;
 	return pc;
 }
void *compile_li246(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li246, gen_li246_len);
 	ctx->pc += gen_li246_len;
 	return pc;
 }
void *compile_li247(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li247, gen_li247_len);
 	ctx->pc += gen_li247_len;
 	return pc;
 }
void *compile_li248(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li248, gen_li248_len);
 	ctx->pc += gen_li248_len;
 	return pc;
 }
void *compile_li249(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li249, gen_li249_len);
 	ctx->pc += gen_li249_len;
 	return pc;
 }
void *compile_li25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li25, gen_li25_len);
 	ctx->pc += gen_li25_len;
 	return pc;
 }
void *compile_li250(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li250, gen_li250_len);
 	ctx->pc += gen_li250_len;
 	return pc;
 }
void *compile_li251(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li251, gen_li251_len);
 	ctx->pc += gen_li251_len;
 	return pc;
 }
void *compile_li252(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li252, gen_li252_len);
 	ctx->pc += gen_li252_len;
 	return pc;
 }
void *compile_li253(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li253, gen_li253_len);
 	ctx->pc += gen_li253_len;
 	return pc;
 }
void *compile_li254(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li254, gen_li254_len);
 	ctx->pc += gen_li254_len;
 	return pc;
 }
void *compile_li255(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li255, gen_li255_len);
 	ctx->pc += gen_li255_len;
 	return pc;
 }
void *compile_li26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li26, gen_li26_len);
 	ctx->pc += gen_li26_len;
 	return pc;
 }
void *compile_li27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li27, gen_li27_len);
 	ctx->pc += gen_li27_len;
 	return pc;
 }
void *compile_li28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li28, gen_li28_len);
 	ctx->pc += gen_li28_len;
 	return pc;
 }
void *compile_li29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li29, gen_li29_len);
 	ctx->pc += gen_li29_len;
 	return pc;
 }
void *compile_li3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li3, gen_li3_len);
 	ctx->pc += gen_li3_len;
 	return pc;
 }
void *compile_li30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li30, gen_li30_len);
 	ctx->pc += gen_li30_len;
 	return pc;
 }
void *compile_li31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li31, gen_li31_len);
 	ctx->pc += gen_li31_len;
 	return pc;
 }
void *compile_li32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li32, gen_li32_len);
 	ctx->pc += gen_li32_len;
 	return pc;
 }
void *compile_li33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li33, gen_li33_len);
 	ctx->pc += gen_li33_len;
 	return pc;
 }
void *compile_li34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li34, gen_li34_len);
 	ctx->pc += gen_li34_len;
 	return pc;
 }
void *compile_li35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li35, gen_li35_len);
 	ctx->pc += gen_li35_len;
 	return pc;
 }
void *compile_li36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li36, gen_li36_len);
 	ctx->pc += gen_li36_len;
 	return pc;
 }
void *compile_li37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li37, gen_li37_len);
 	ctx->pc += gen_li37_len;
 	return pc;
 }
void *compile_li38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li38, gen_li38_len);
 	ctx->pc += gen_li38_len;
 	return pc;
 }
void *compile_li39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li39, gen_li39_len);
 	ctx->pc += gen_li39_len;
 	return pc;
 }
void *compile_li4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li4, gen_li4_len);
 	ctx->pc += gen_li4_len;
 	return pc;
 }
void *compile_li40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li40, gen_li40_len);
 	ctx->pc += gen_li40_len;
 	return pc;
 }
void *compile_li41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li41, gen_li41_len);
 	ctx->pc += gen_li41_len;
 	return pc;
 }
void *compile_li42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li42, gen_li42_len);
 	ctx->pc += gen_li42_len;
 	return pc;
 }
void *compile_li43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li43, gen_li43_len);
 	ctx->pc += gen_li43_len;
 	return pc;
 }
void *compile_li44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li44, gen_li44_len);
 	ctx->pc += gen_li44_len;
 	return pc;
 }
void *compile_li45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li45, gen_li45_len);
 	ctx->pc += gen_li45_len;
 	return pc;
 }
void *compile_li46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li46, gen_li46_len);
 	ctx->pc += gen_li46_len;
 	return pc;
 }
void *compile_li47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li47, gen_li47_len);
 	ctx->pc += gen_li47_len;
 	return pc;
 }
void *compile_li48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li48, gen_li48_len);
 	ctx->pc += gen_li48_len;
 	return pc;
 }
void *compile_li49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li49, gen_li49_len);
 	ctx->pc += gen_li49_len;
 	return pc;
 }
void *compile_li5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li5, gen_li5_len);
 	ctx->pc += gen_li5_len;
 	return pc;
 }
void *compile_li50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li50, gen_li50_len);
 	ctx->pc += gen_li50_len;
 	return pc;
 }
void *compile_li51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li51, gen_li51_len);
 	ctx->pc += gen_li51_len;
 	return pc;
 }
void *compile_li52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li52, gen_li52_len);
 	ctx->pc += gen_li52_len;
 	return pc;
 }
void *compile_li53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li53, gen_li53_len);
 	ctx->pc += gen_li53_len;
 	return pc;
 }
void *compile_li54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li54, gen_li54_len);
 	ctx->pc += gen_li54_len;
 	return pc;
 }
void *compile_li55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li55, gen_li55_len);
 	ctx->pc += gen_li55_len;
 	return pc;
 }
void *compile_li56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li56, gen_li56_len);
 	ctx->pc += gen_li56_len;
 	return pc;
 }
void *compile_li57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li57, gen_li57_len);
 	ctx->pc += gen_li57_len;
 	return pc;
 }
void *compile_li58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li58, gen_li58_len);
 	ctx->pc += gen_li58_len;
 	return pc;
 }
void *compile_li59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li59, gen_li59_len);
 	ctx->pc += gen_li59_len;
 	return pc;
 }
void *compile_li6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li6, gen_li6_len);
 	ctx->pc += gen_li6_len;
 	return pc;
 }
void *compile_li60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li60, gen_li60_len);
 	ctx->pc += gen_li60_len;
 	return pc;
 }
void *compile_li61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li61, gen_li61_len);
 	ctx->pc += gen_li61_len;
 	return pc;
 }
void *compile_li62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li62, gen_li62_len);
 	ctx->pc += gen_li62_len;
 	return pc;
 }
void *compile_li63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li63, gen_li63_len);
 	ctx->pc += gen_li63_len;
 	return pc;
 }
void *compile_li64(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li64, gen_li64_len);
 	ctx->pc += gen_li64_len;
 	return pc;
 }
void *compile_li65(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li65, gen_li65_len);
 	ctx->pc += gen_li65_len;
 	return pc;
 }
void *compile_li66(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li66, gen_li66_len);
 	ctx->pc += gen_li66_len;
 	return pc;
 }
void *compile_li67(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li67, gen_li67_len);
 	ctx->pc += gen_li67_len;
 	return pc;
 }
void *compile_li68(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li68, gen_li68_len);
 	ctx->pc += gen_li68_len;
 	return pc;
 }
void *compile_li69(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li69, gen_li69_len);
 	ctx->pc += gen_li69_len;
 	return pc;
 }
void *compile_li7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li7, gen_li7_len);
 	ctx->pc += gen_li7_len;
 	return pc;
 }
void *compile_li70(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li70, gen_li70_len);
 	ctx->pc += gen_li70_len;
 	return pc;
 }
void *compile_li71(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li71, gen_li71_len);
 	ctx->pc += gen_li71_len;
 	return pc;
 }
void *compile_li72(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li72, gen_li72_len);
 	ctx->pc += gen_li72_len;
 	return pc;
 }
void *compile_li73(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li73, gen_li73_len);
 	ctx->pc += gen_li73_len;
 	return pc;
 }
void *compile_li74(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li74, gen_li74_len);
 	ctx->pc += gen_li74_len;
 	return pc;
 }
void *compile_li75(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li75, gen_li75_len);
 	ctx->pc += gen_li75_len;
 	return pc;
 }
void *compile_li76(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li76, gen_li76_len);
 	ctx->pc += gen_li76_len;
 	return pc;
 }
void *compile_li77(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li77, gen_li77_len);
 	ctx->pc += gen_li77_len;
 	return pc;
 }
void *compile_li78(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li78, gen_li78_len);
 	ctx->pc += gen_li78_len;
 	return pc;
 }
void *compile_li79(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li79, gen_li79_len);
 	ctx->pc += gen_li79_len;
 	return pc;
 }
void *compile_li8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li8, gen_li8_len);
 	ctx->pc += gen_li8_len;
 	return pc;
 }
void *compile_li80(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li80, gen_li80_len);
 	ctx->pc += gen_li80_len;
 	return pc;
 }
void *compile_li81(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li81, gen_li81_len);
 	ctx->pc += gen_li81_len;
 	return pc;
 }
void *compile_li82(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li82, gen_li82_len);
 	ctx->pc += gen_li82_len;
 	return pc;
 }
void *compile_li83(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li83, gen_li83_len);
 	ctx->pc += gen_li83_len;
 	return pc;
 }
void *compile_li84(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li84, gen_li84_len);
 	ctx->pc += gen_li84_len;
 	return pc;
 }
void *compile_li85(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li85, gen_li85_len);
 	ctx->pc += gen_li85_len;
 	return pc;
 }
void *compile_li86(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li86, gen_li86_len);
 	ctx->pc += gen_li86_len;
 	return pc;
 }
void *compile_li87(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li87, gen_li87_len);
 	ctx->pc += gen_li87_len;
 	return pc;
 }
void *compile_li88(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li88, gen_li88_len);
 	ctx->pc += gen_li88_len;
 	return pc;
 }
void *compile_li89(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li89, gen_li89_len);
 	ctx->pc += gen_li89_len;
 	return pc;
 }
void *compile_li9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li9, gen_li9_len);
 	ctx->pc += gen_li9_len;
 	return pc;
 }
void *compile_li90(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li90, gen_li90_len);
 	ctx->pc += gen_li90_len;
 	return pc;
 }
void *compile_li91(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li91, gen_li91_len);
 	ctx->pc += gen_li91_len;
 	return pc;
 }
void *compile_li92(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li92, gen_li92_len);
 	ctx->pc += gen_li92_len;
 	return pc;
 }
void *compile_li93(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li93, gen_li93_len);
 	ctx->pc += gen_li93_len;
 	return pc;
 }
void *compile_li94(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li94, gen_li94_len);
 	ctx->pc += gen_li94_len;
 	return pc;
 }
void *compile_li95(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li95, gen_li95_len);
 	ctx->pc += gen_li95_len;
 	return pc;
 }
void *compile_li96(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li96, gen_li96_len);
 	ctx->pc += gen_li96_len;
 	return pc;
 }
void *compile_li97(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li97, gen_li97_len);
 	ctx->pc += gen_li97_len;
 	return pc;
 }
void *compile_li98(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li98, gen_li98_len);
 	ctx->pc += gen_li98_len;
 	return pc;
 }
void *compile_li99(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_li99, gen_li99_len);
 	ctx->pc += gen_li99_len;
 	return pc;
 }
void *compile_sla0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla0, gen_sla0_len);
 	ctx->pc += gen_sla0_len;
 	return pc;
 }
void *compile_sla1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla1, gen_sla1_len);
 	ctx->pc += gen_sla1_len;
 	return pc;
 }
void *compile_sla10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla10, gen_sla10_len);
 	ctx->pc += gen_sla10_len;
 	return pc;
 }
void *compile_sla11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla11, gen_sla11_len);
 	ctx->pc += gen_sla11_len;
 	return pc;
 }
void *compile_sla12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla12, gen_sla12_len);
 	ctx->pc += gen_sla12_len;
 	return pc;
 }
void *compile_sla13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla13, gen_sla13_len);
 	ctx->pc += gen_sla13_len;
 	return pc;
 }
void *compile_sla14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla14, gen_sla14_len);
 	ctx->pc += gen_sla14_len;
 	return pc;
 }
void *compile_sla15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla15, gen_sla15_len);
 	ctx->pc += gen_sla15_len;
 	return pc;
 }
void *compile_sla16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla16, gen_sla16_len);
 	ctx->pc += gen_sla16_len;
 	return pc;
 }
void *compile_sla17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla17, gen_sla17_len);
 	ctx->pc += gen_sla17_len;
 	return pc;
 }
void *compile_sla18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla18, gen_sla18_len);
 	ctx->pc += gen_sla18_len;
 	return pc;
 }
void *compile_sla19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla19, gen_sla19_len);
 	ctx->pc += gen_sla19_len;
 	return pc;
 }
void *compile_sla2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla2, gen_sla2_len);
 	ctx->pc += gen_sla2_len;
 	return pc;
 }
void *compile_sla20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla20, gen_sla20_len);
 	ctx->pc += gen_sla20_len;
 	return pc;
 }
void *compile_sla21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla21, gen_sla21_len);
 	ctx->pc += gen_sla21_len;
 	return pc;
 }
void *compile_sla22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla22, gen_sla22_len);
 	ctx->pc += gen_sla22_len;
 	return pc;
 }
void *compile_sla23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla23, gen_sla23_len);
 	ctx->pc += gen_sla23_len;
 	return pc;
 }
void *compile_sla24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla24, gen_sla24_len);
 	ctx->pc += gen_sla24_len;
 	return pc;
 }
void *compile_sla25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla25, gen_sla25_len);
 	ctx->pc += gen_sla25_len;
 	return pc;
 }
void *compile_sla26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla26, gen_sla26_len);
 	ctx->pc += gen_sla26_len;
 	return pc;
 }
void *compile_sla27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla27, gen_sla27_len);
 	ctx->pc += gen_sla27_len;
 	return pc;
 }
void *compile_sla28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla28, gen_sla28_len);
 	ctx->pc += gen_sla28_len;
 	return pc;
 }
void *compile_sla29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla29, gen_sla29_len);
 	ctx->pc += gen_sla29_len;
 	return pc;
 }
void *compile_sla3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla3, gen_sla3_len);
 	ctx->pc += gen_sla3_len;
 	return pc;
 }
void *compile_sla30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla30, gen_sla30_len);
 	ctx->pc += gen_sla30_len;
 	return pc;
 }
void *compile_sla31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla31, gen_sla31_len);
 	ctx->pc += gen_sla31_len;
 	return pc;
 }
void *compile_sla32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla32, gen_sla32_len);
 	ctx->pc += gen_sla32_len;
 	return pc;
 }
void *compile_sla33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla33, gen_sla33_len);
 	ctx->pc += gen_sla33_len;
 	return pc;
 }
void *compile_sla34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla34, gen_sla34_len);
 	ctx->pc += gen_sla34_len;
 	return pc;
 }
void *compile_sla35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla35, gen_sla35_len);
 	ctx->pc += gen_sla35_len;
 	return pc;
 }
void *compile_sla36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla36, gen_sla36_len);
 	ctx->pc += gen_sla36_len;
 	return pc;
 }
void *compile_sla37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla37, gen_sla37_len);
 	ctx->pc += gen_sla37_len;
 	return pc;
 }
void *compile_sla38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla38, gen_sla38_len);
 	ctx->pc += gen_sla38_len;
 	return pc;
 }
void *compile_sla39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla39, gen_sla39_len);
 	ctx->pc += gen_sla39_len;
 	return pc;
 }
void *compile_sla4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla4, gen_sla4_len);
 	ctx->pc += gen_sla4_len;
 	return pc;
 }
void *compile_sla40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla40, gen_sla40_len);
 	ctx->pc += gen_sla40_len;
 	return pc;
 }
void *compile_sla41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla41, gen_sla41_len);
 	ctx->pc += gen_sla41_len;
 	return pc;
 }
void *compile_sla42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla42, gen_sla42_len);
 	ctx->pc += gen_sla42_len;
 	return pc;
 }
void *compile_sla43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla43, gen_sla43_len);
 	ctx->pc += gen_sla43_len;
 	return pc;
 }
void *compile_sla44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla44, gen_sla44_len);
 	ctx->pc += gen_sla44_len;
 	return pc;
 }
void *compile_sla45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla45, gen_sla45_len);
 	ctx->pc += gen_sla45_len;
 	return pc;
 }
void *compile_sla46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla46, gen_sla46_len);
 	ctx->pc += gen_sla46_len;
 	return pc;
 }
void *compile_sla47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla47, gen_sla47_len);
 	ctx->pc += gen_sla47_len;
 	return pc;
 }
void *compile_sla48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla48, gen_sla48_len);
 	ctx->pc += gen_sla48_len;
 	return pc;
 }
void *compile_sla49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla49, gen_sla49_len);
 	ctx->pc += gen_sla49_len;
 	return pc;
 }
void *compile_sla5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla5, gen_sla5_len);
 	ctx->pc += gen_sla5_len;
 	return pc;
 }
void *compile_sla50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla50, gen_sla50_len);
 	ctx->pc += gen_sla50_len;
 	return pc;
 }
void *compile_sla51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla51, gen_sla51_len);
 	ctx->pc += gen_sla51_len;
 	return pc;
 }
void *compile_sla52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla52, gen_sla52_len);
 	ctx->pc += gen_sla52_len;
 	return pc;
 }
void *compile_sla53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla53, gen_sla53_len);
 	ctx->pc += gen_sla53_len;
 	return pc;
 }
void *compile_sla54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla54, gen_sla54_len);
 	ctx->pc += gen_sla54_len;
 	return pc;
 }
void *compile_sla55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla55, gen_sla55_len);
 	ctx->pc += gen_sla55_len;
 	return pc;
 }
void *compile_sla56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla56, gen_sla56_len);
 	ctx->pc += gen_sla56_len;
 	return pc;
 }
void *compile_sla57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla57, gen_sla57_len);
 	ctx->pc += gen_sla57_len;
 	return pc;
 }
void *compile_sla58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla58, gen_sla58_len);
 	ctx->pc += gen_sla58_len;
 	return pc;
 }
void *compile_sla59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla59, gen_sla59_len);
 	ctx->pc += gen_sla59_len;
 	return pc;
 }
void *compile_sla6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla6, gen_sla6_len);
 	ctx->pc += gen_sla6_len;
 	return pc;
 }
void *compile_sla60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla60, gen_sla60_len);
 	ctx->pc += gen_sla60_len;
 	return pc;
 }
void *compile_sla61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla61, gen_sla61_len);
 	ctx->pc += gen_sla61_len;
 	return pc;
 }
void *compile_sla62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla62, gen_sla62_len);
 	ctx->pc += gen_sla62_len;
 	return pc;
 }
void *compile_sla63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla63, gen_sla63_len);
 	ctx->pc += gen_sla63_len;
 	return pc;
 }
void *compile_sla7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla7, gen_sla7_len);
 	ctx->pc += gen_sla7_len;
 	return pc;
 }
void *compile_sla8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla8, gen_sla8_len);
 	ctx->pc += gen_sla8_len;
 	return pc;
 }
void *compile_sla9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sla9, gen_sla9_len);
 	ctx->pc += gen_sla9_len;
 	return pc;
 }
void *compile_slo0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo0, gen_slo0_len);
 	ctx->pc += gen_slo0_len;
 	return pc;
 }
void *compile_slo1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo1, gen_slo1_len);
 	ctx->pc += gen_slo1_len;
 	return pc;
 }
void *compile_slo10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo10, gen_slo10_len);
 	ctx->pc += gen_slo10_len;
 	return pc;
 }
void *compile_slo11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo11, gen_slo11_len);
 	ctx->pc += gen_slo11_len;
 	return pc;
 }
void *compile_slo12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo12, gen_slo12_len);
 	ctx->pc += gen_slo12_len;
 	return pc;
 }
void *compile_slo13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo13, gen_slo13_len);
 	ctx->pc += gen_slo13_len;
 	return pc;
 }
void *compile_slo14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo14, gen_slo14_len);
 	ctx->pc += gen_slo14_len;
 	return pc;
 }
void *compile_slo15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo15, gen_slo15_len);
 	ctx->pc += gen_slo15_len;
 	return pc;
 }
void *compile_slo16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo16, gen_slo16_len);
 	ctx->pc += gen_slo16_len;
 	return pc;
 }
void *compile_slo17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo17, gen_slo17_len);
 	ctx->pc += gen_slo17_len;
 	return pc;
 }
void *compile_slo18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo18, gen_slo18_len);
 	ctx->pc += gen_slo18_len;
 	return pc;
 }
void *compile_slo19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo19, gen_slo19_len);
 	ctx->pc += gen_slo19_len;
 	return pc;
 }
void *compile_slo2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo2, gen_slo2_len);
 	ctx->pc += gen_slo2_len;
 	return pc;
 }
void *compile_slo20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo20, gen_slo20_len);
 	ctx->pc += gen_slo20_len;
 	return pc;
 }
void *compile_slo21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo21, gen_slo21_len);
 	ctx->pc += gen_slo21_len;
 	return pc;
 }
void *compile_slo22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo22, gen_slo22_len);
 	ctx->pc += gen_slo22_len;
 	return pc;
 }
void *compile_slo23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo23, gen_slo23_len);
 	ctx->pc += gen_slo23_len;
 	return pc;
 }
void *compile_slo24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo24, gen_slo24_len);
 	ctx->pc += gen_slo24_len;
 	return pc;
 }
void *compile_slo25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo25, gen_slo25_len);
 	ctx->pc += gen_slo25_len;
 	return pc;
 }
void *compile_slo26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo26, gen_slo26_len);
 	ctx->pc += gen_slo26_len;
 	return pc;
 }
void *compile_slo27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo27, gen_slo27_len);
 	ctx->pc += gen_slo27_len;
 	return pc;
 }
void *compile_slo28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo28, gen_slo28_len);
 	ctx->pc += gen_slo28_len;
 	return pc;
 }
void *compile_slo29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo29, gen_slo29_len);
 	ctx->pc += gen_slo29_len;
 	return pc;
 }
void *compile_slo3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo3, gen_slo3_len);
 	ctx->pc += gen_slo3_len;
 	return pc;
 }
void *compile_slo30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo30, gen_slo30_len);
 	ctx->pc += gen_slo30_len;
 	return pc;
 }
void *compile_slo31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo31, gen_slo31_len);
 	ctx->pc += gen_slo31_len;
 	return pc;
 }
void *compile_slo32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo32, gen_slo32_len);
 	ctx->pc += gen_slo32_len;
 	return pc;
 }
void *compile_slo33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo33, gen_slo33_len);
 	ctx->pc += gen_slo33_len;
 	return pc;
 }
void *compile_slo34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo34, gen_slo34_len);
 	ctx->pc += gen_slo34_len;
 	return pc;
 }
void *compile_slo35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo35, gen_slo35_len);
 	ctx->pc += gen_slo35_len;
 	return pc;
 }
void *compile_slo36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo36, gen_slo36_len);
 	ctx->pc += gen_slo36_len;
 	return pc;
 }
void *compile_slo37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo37, gen_slo37_len);
 	ctx->pc += gen_slo37_len;
 	return pc;
 }
void *compile_slo38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo38, gen_slo38_len);
 	ctx->pc += gen_slo38_len;
 	return pc;
 }
void *compile_slo39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo39, gen_slo39_len);
 	ctx->pc += gen_slo39_len;
 	return pc;
 }
void *compile_slo4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo4, gen_slo4_len);
 	ctx->pc += gen_slo4_len;
 	return pc;
 }
void *compile_slo40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo40, gen_slo40_len);
 	ctx->pc += gen_slo40_len;
 	return pc;
 }
void *compile_slo41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo41, gen_slo41_len);
 	ctx->pc += gen_slo41_len;
 	return pc;
 }
void *compile_slo42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo42, gen_slo42_len);
 	ctx->pc += gen_slo42_len;
 	return pc;
 }
void *compile_slo43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo43, gen_slo43_len);
 	ctx->pc += gen_slo43_len;
 	return pc;
 }
void *compile_slo44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo44, gen_slo44_len);
 	ctx->pc += gen_slo44_len;
 	return pc;
 }
void *compile_slo45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo45, gen_slo45_len);
 	ctx->pc += gen_slo45_len;
 	return pc;
 }
void *compile_slo46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo46, gen_slo46_len);
 	ctx->pc += gen_slo46_len;
 	return pc;
 }
void *compile_slo47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo47, gen_slo47_len);
 	ctx->pc += gen_slo47_len;
 	return pc;
 }
void *compile_slo48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo48, gen_slo48_len);
 	ctx->pc += gen_slo48_len;
 	return pc;
 }
void *compile_slo49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo49, gen_slo49_len);
 	ctx->pc += gen_slo49_len;
 	return pc;
 }
void *compile_slo5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo5, gen_slo5_len);
 	ctx->pc += gen_slo5_len;
 	return pc;
 }
void *compile_slo50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo50, gen_slo50_len);
 	ctx->pc += gen_slo50_len;
 	return pc;
 }
void *compile_slo51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo51, gen_slo51_len);
 	ctx->pc += gen_slo51_len;
 	return pc;
 }
void *compile_slo52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo52, gen_slo52_len);
 	ctx->pc += gen_slo52_len;
 	return pc;
 }
void *compile_slo53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo53, gen_slo53_len);
 	ctx->pc += gen_slo53_len;
 	return pc;
 }
void *compile_slo54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo54, gen_slo54_len);
 	ctx->pc += gen_slo54_len;
 	return pc;
 }
void *compile_slo55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo55, gen_slo55_len);
 	ctx->pc += gen_slo55_len;
 	return pc;
 }
void *compile_slo56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo56, gen_slo56_len);
 	ctx->pc += gen_slo56_len;
 	return pc;
 }
void *compile_slo57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo57, gen_slo57_len);
 	ctx->pc += gen_slo57_len;
 	return pc;
 }
void *compile_slo58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo58, gen_slo58_len);
 	ctx->pc += gen_slo58_len;
 	return pc;
 }
void *compile_slo59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo59, gen_slo59_len);
 	ctx->pc += gen_slo59_len;
 	return pc;
 }
void *compile_slo6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo6, gen_slo6_len);
 	ctx->pc += gen_slo6_len;
 	return pc;
 }
void *compile_slo60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo60, gen_slo60_len);
 	ctx->pc += gen_slo60_len;
 	return pc;
 }
void *compile_slo61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo61, gen_slo61_len);
 	ctx->pc += gen_slo61_len;
 	return pc;
 }
void *compile_slo62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo62, gen_slo62_len);
 	ctx->pc += gen_slo62_len;
 	return pc;
 }
void *compile_slo63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo63, gen_slo63_len);
 	ctx->pc += gen_slo63_len;
 	return pc;
 }
void *compile_slo7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo7, gen_slo7_len);
 	ctx->pc += gen_slo7_len;
 	return pc;
 }
void *compile_slo8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo8, gen_slo8_len);
 	ctx->pc += gen_slo8_len;
 	return pc;
 }
void *compile_slo9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slo9, gen_slo9_len);
 	ctx->pc += gen_slo9_len;
 	return pc;
 }
void *compile_slx0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx0, gen_slx0_len);
 	ctx->pc += gen_slx0_len;
 	return pc;
 }
void *compile_slx1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx1, gen_slx1_len);
 	ctx->pc += gen_slx1_len;
 	return pc;
 }
void *compile_slx10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx10, gen_slx10_len);
 	ctx->pc += gen_slx10_len;
 	return pc;
 }
void *compile_slx11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx11, gen_slx11_len);
 	ctx->pc += gen_slx11_len;
 	return pc;
 }
void *compile_slx12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx12, gen_slx12_len);
 	ctx->pc += gen_slx12_len;
 	return pc;
 }
void *compile_slx13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx13, gen_slx13_len);
 	ctx->pc += gen_slx13_len;
 	return pc;
 }
void *compile_slx14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx14, gen_slx14_len);
 	ctx->pc += gen_slx14_len;
 	return pc;
 }
void *compile_slx15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx15, gen_slx15_len);
 	ctx->pc += gen_slx15_len;
 	return pc;
 }
void *compile_slx16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx16, gen_slx16_len);
 	ctx->pc += gen_slx16_len;
 	return pc;
 }
void *compile_slx17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx17, gen_slx17_len);
 	ctx->pc += gen_slx17_len;
 	return pc;
 }
void *compile_slx18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx18, gen_slx18_len);
 	ctx->pc += gen_slx18_len;
 	return pc;
 }
void *compile_slx19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx19, gen_slx19_len);
 	ctx->pc += gen_slx19_len;
 	return pc;
 }
void *compile_slx2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx2, gen_slx2_len);
 	ctx->pc += gen_slx2_len;
 	return pc;
 }
void *compile_slx20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx20, gen_slx20_len);
 	ctx->pc += gen_slx20_len;
 	return pc;
 }
void *compile_slx21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx21, gen_slx21_len);
 	ctx->pc += gen_slx21_len;
 	return pc;
 }
void *compile_slx22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx22, gen_slx22_len);
 	ctx->pc += gen_slx22_len;
 	return pc;
 }
void *compile_slx23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx23, gen_slx23_len);
 	ctx->pc += gen_slx23_len;
 	return pc;
 }
void *compile_slx24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx24, gen_slx24_len);
 	ctx->pc += gen_slx24_len;
 	return pc;
 }
void *compile_slx25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx25, gen_slx25_len);
 	ctx->pc += gen_slx25_len;
 	return pc;
 }
void *compile_slx26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx26, gen_slx26_len);
 	ctx->pc += gen_slx26_len;
 	return pc;
 }
void *compile_slx27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx27, gen_slx27_len);
 	ctx->pc += gen_slx27_len;
 	return pc;
 }
void *compile_slx28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx28, gen_slx28_len);
 	ctx->pc += gen_slx28_len;
 	return pc;
 }
void *compile_slx29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx29, gen_slx29_len);
 	ctx->pc += gen_slx29_len;
 	return pc;
 }
void *compile_slx3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx3, gen_slx3_len);
 	ctx->pc += gen_slx3_len;
 	return pc;
 }
void *compile_slx30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx30, gen_slx30_len);
 	ctx->pc += gen_slx30_len;
 	return pc;
 }
void *compile_slx31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx31, gen_slx31_len);
 	ctx->pc += gen_slx31_len;
 	return pc;
 }
void *compile_slx32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx32, gen_slx32_len);
 	ctx->pc += gen_slx32_len;
 	return pc;
 }
void *compile_slx33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx33, gen_slx33_len);
 	ctx->pc += gen_slx33_len;
 	return pc;
 }
void *compile_slx34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx34, gen_slx34_len);
 	ctx->pc += gen_slx34_len;
 	return pc;
 }
void *compile_slx35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx35, gen_slx35_len);
 	ctx->pc += gen_slx35_len;
 	return pc;
 }
void *compile_slx36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx36, gen_slx36_len);
 	ctx->pc += gen_slx36_len;
 	return pc;
 }
void *compile_slx37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx37, gen_slx37_len);
 	ctx->pc += gen_slx37_len;
 	return pc;
 }
void *compile_slx38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx38, gen_slx38_len);
 	ctx->pc += gen_slx38_len;
 	return pc;
 }
void *compile_slx39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx39, gen_slx39_len);
 	ctx->pc += gen_slx39_len;
 	return pc;
 }
void *compile_slx4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx4, gen_slx4_len);
 	ctx->pc += gen_slx4_len;
 	return pc;
 }
void *compile_slx40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx40, gen_slx40_len);
 	ctx->pc += gen_slx40_len;
 	return pc;
 }
void *compile_slx41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx41, gen_slx41_len);
 	ctx->pc += gen_slx41_len;
 	return pc;
 }
void *compile_slx42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx42, gen_slx42_len);
 	ctx->pc += gen_slx42_len;
 	return pc;
 }
void *compile_slx43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx43, gen_slx43_len);
 	ctx->pc += gen_slx43_len;
 	return pc;
 }
void *compile_slx44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx44, gen_slx44_len);
 	ctx->pc += gen_slx44_len;
 	return pc;
 }
void *compile_slx45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx45, gen_slx45_len);
 	ctx->pc += gen_slx45_len;
 	return pc;
 }
void *compile_slx46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx46, gen_slx46_len);
 	ctx->pc += gen_slx46_len;
 	return pc;
 }
void *compile_slx47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx47, gen_slx47_len);
 	ctx->pc += gen_slx47_len;
 	return pc;
 }
void *compile_slx48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx48, gen_slx48_len);
 	ctx->pc += gen_slx48_len;
 	return pc;
 }
void *compile_slx49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx49, gen_slx49_len);
 	ctx->pc += gen_slx49_len;
 	return pc;
 }
void *compile_slx5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx5, gen_slx5_len);
 	ctx->pc += gen_slx5_len;
 	return pc;
 }
void *compile_slx50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx50, gen_slx50_len);
 	ctx->pc += gen_slx50_len;
 	return pc;
 }
void *compile_slx51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx51, gen_slx51_len);
 	ctx->pc += gen_slx51_len;
 	return pc;
 }
void *compile_slx52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx52, gen_slx52_len);
 	ctx->pc += gen_slx52_len;
 	return pc;
 }
void *compile_slx53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx53, gen_slx53_len);
 	ctx->pc += gen_slx53_len;
 	return pc;
 }
void *compile_slx54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx54, gen_slx54_len);
 	ctx->pc += gen_slx54_len;
 	return pc;
 }
void *compile_slx55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx55, gen_slx55_len);
 	ctx->pc += gen_slx55_len;
 	return pc;
 }
void *compile_slx56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx56, gen_slx56_len);
 	ctx->pc += gen_slx56_len;
 	return pc;
 }
void *compile_slx57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx57, gen_slx57_len);
 	ctx->pc += gen_slx57_len;
 	return pc;
 }
void *compile_slx58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx58, gen_slx58_len);
 	ctx->pc += gen_slx58_len;
 	return pc;
 }
void *compile_slx59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx59, gen_slx59_len);
 	ctx->pc += gen_slx59_len;
 	return pc;
 }
void *compile_slx6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx6, gen_slx6_len);
 	ctx->pc += gen_slx6_len;
 	return pc;
 }
void *compile_slx60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx60, gen_slx60_len);
 	ctx->pc += gen_slx60_len;
 	return pc;
 }
void *compile_slx61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx61, gen_slx61_len);
 	ctx->pc += gen_slx61_len;
 	return pc;
 }
void *compile_slx62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx62, gen_slx62_len);
 	ctx->pc += gen_slx62_len;
 	return pc;
 }
void *compile_slx63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx63, gen_slx63_len);
 	ctx->pc += gen_slx63_len;
 	return pc;
 }
void *compile_slx7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx7, gen_slx7_len);
 	ctx->pc += gen_slx7_len;
 	return pc;
 }
void *compile_slx8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx8, gen_slx8_len);
 	ctx->pc += gen_slx8_len;
 	return pc;
 }
void *compile_slx9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_slx9, gen_slx9_len);
 	ctx->pc += gen_slx9_len;
 	return pc;
 }
void *compile_sly0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly0, gen_sly0_len);
 	ctx->pc += gen_sly0_len;
 	return pc;
 }
void *compile_sly1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly1, gen_sly1_len);
 	ctx->pc += gen_sly1_len;
 	return pc;
 }
void *compile_sly10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly10, gen_sly10_len);
 	ctx->pc += gen_sly10_len;
 	return pc;
 }
void *compile_sly11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly11, gen_sly11_len);
 	ctx->pc += gen_sly11_len;
 	return pc;
 }
void *compile_sly12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly12, gen_sly12_len);
 	ctx->pc += gen_sly12_len;
 	return pc;
 }
void *compile_sly13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly13, gen_sly13_len);
 	ctx->pc += gen_sly13_len;
 	return pc;
 }
void *compile_sly14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly14, gen_sly14_len);
 	ctx->pc += gen_sly14_len;
 	return pc;
 }
void *compile_sly15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly15, gen_sly15_len);
 	ctx->pc += gen_sly15_len;
 	return pc;
 }
void *compile_sly16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly16, gen_sly16_len);
 	ctx->pc += gen_sly16_len;
 	return pc;
 }
void *compile_sly17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly17, gen_sly17_len);
 	ctx->pc += gen_sly17_len;
 	return pc;
 }
void *compile_sly18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly18, gen_sly18_len);
 	ctx->pc += gen_sly18_len;
 	return pc;
 }
void *compile_sly19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly19, gen_sly19_len);
 	ctx->pc += gen_sly19_len;
 	return pc;
 }
void *compile_sly2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly2, gen_sly2_len);
 	ctx->pc += gen_sly2_len;
 	return pc;
 }
void *compile_sly20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly20, gen_sly20_len);
 	ctx->pc += gen_sly20_len;
 	return pc;
 }
void *compile_sly21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly21, gen_sly21_len);
 	ctx->pc += gen_sly21_len;
 	return pc;
 }
void *compile_sly22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly22, gen_sly22_len);
 	ctx->pc += gen_sly22_len;
 	return pc;
 }
void *compile_sly23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly23, gen_sly23_len);
 	ctx->pc += gen_sly23_len;
 	return pc;
 }
void *compile_sly24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly24, gen_sly24_len);
 	ctx->pc += gen_sly24_len;
 	return pc;
 }
void *compile_sly25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly25, gen_sly25_len);
 	ctx->pc += gen_sly25_len;
 	return pc;
 }
void *compile_sly26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly26, gen_sly26_len);
 	ctx->pc += gen_sly26_len;
 	return pc;
 }
void *compile_sly27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly27, gen_sly27_len);
 	ctx->pc += gen_sly27_len;
 	return pc;
 }
void *compile_sly28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly28, gen_sly28_len);
 	ctx->pc += gen_sly28_len;
 	return pc;
 }
void *compile_sly29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly29, gen_sly29_len);
 	ctx->pc += gen_sly29_len;
 	return pc;
 }
void *compile_sly3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly3, gen_sly3_len);
 	ctx->pc += gen_sly3_len;
 	return pc;
 }
void *compile_sly30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly30, gen_sly30_len);
 	ctx->pc += gen_sly30_len;
 	return pc;
 }
void *compile_sly31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly31, gen_sly31_len);
 	ctx->pc += gen_sly31_len;
 	return pc;
 }
void *compile_sly32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly32, gen_sly32_len);
 	ctx->pc += gen_sly32_len;
 	return pc;
 }
void *compile_sly33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly33, gen_sly33_len);
 	ctx->pc += gen_sly33_len;
 	return pc;
 }
void *compile_sly34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly34, gen_sly34_len);
 	ctx->pc += gen_sly34_len;
 	return pc;
 }
void *compile_sly35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly35, gen_sly35_len);
 	ctx->pc += gen_sly35_len;
 	return pc;
 }
void *compile_sly36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly36, gen_sly36_len);
 	ctx->pc += gen_sly36_len;
 	return pc;
 }
void *compile_sly37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly37, gen_sly37_len);
 	ctx->pc += gen_sly37_len;
 	return pc;
 }
void *compile_sly38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly38, gen_sly38_len);
 	ctx->pc += gen_sly38_len;
 	return pc;
 }
void *compile_sly39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly39, gen_sly39_len);
 	ctx->pc += gen_sly39_len;
 	return pc;
 }
void *compile_sly4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly4, gen_sly4_len);
 	ctx->pc += gen_sly4_len;
 	return pc;
 }
void *compile_sly40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly40, gen_sly40_len);
 	ctx->pc += gen_sly40_len;
 	return pc;
 }
void *compile_sly41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly41, gen_sly41_len);
 	ctx->pc += gen_sly41_len;
 	return pc;
 }
void *compile_sly42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly42, gen_sly42_len);
 	ctx->pc += gen_sly42_len;
 	return pc;
 }
void *compile_sly43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly43, gen_sly43_len);
 	ctx->pc += gen_sly43_len;
 	return pc;
 }
void *compile_sly44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly44, gen_sly44_len);
 	ctx->pc += gen_sly44_len;
 	return pc;
 }
void *compile_sly45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly45, gen_sly45_len);
 	ctx->pc += gen_sly45_len;
 	return pc;
 }
void *compile_sly46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly46, gen_sly46_len);
 	ctx->pc += gen_sly46_len;
 	return pc;
 }
void *compile_sly47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly47, gen_sly47_len);
 	ctx->pc += gen_sly47_len;
 	return pc;
 }
void *compile_sly48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly48, gen_sly48_len);
 	ctx->pc += gen_sly48_len;
 	return pc;
 }
void *compile_sly49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly49, gen_sly49_len);
 	ctx->pc += gen_sly49_len;
 	return pc;
 }
void *compile_sly5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly5, gen_sly5_len);
 	ctx->pc += gen_sly5_len;
 	return pc;
 }
void *compile_sly50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly50, gen_sly50_len);
 	ctx->pc += gen_sly50_len;
 	return pc;
 }
void *compile_sly51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly51, gen_sly51_len);
 	ctx->pc += gen_sly51_len;
 	return pc;
 }
void *compile_sly52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly52, gen_sly52_len);
 	ctx->pc += gen_sly52_len;
 	return pc;
 }
void *compile_sly53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly53, gen_sly53_len);
 	ctx->pc += gen_sly53_len;
 	return pc;
 }
void *compile_sly54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly54, gen_sly54_len);
 	ctx->pc += gen_sly54_len;
 	return pc;
 }
void *compile_sly55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly55, gen_sly55_len);
 	ctx->pc += gen_sly55_len;
 	return pc;
 }
void *compile_sly56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly56, gen_sly56_len);
 	ctx->pc += gen_sly56_len;
 	return pc;
 }
void *compile_sly57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly57, gen_sly57_len);
 	ctx->pc += gen_sly57_len;
 	return pc;
 }
void *compile_sly58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly58, gen_sly58_len);
 	ctx->pc += gen_sly58_len;
 	return pc;
 }
void *compile_sly59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly59, gen_sly59_len);
 	ctx->pc += gen_sly59_len;
 	return pc;
 }
void *compile_sly6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly6, gen_sly6_len);
 	ctx->pc += gen_sly6_len;
 	return pc;
 }
void *compile_sly60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly60, gen_sly60_len);
 	ctx->pc += gen_sly60_len;
 	return pc;
 }
void *compile_sly61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly61, gen_sly61_len);
 	ctx->pc += gen_sly61_len;
 	return pc;
 }
void *compile_sly62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly62, gen_sly62_len);
 	ctx->pc += gen_sly62_len;
 	return pc;
 }
void *compile_sly63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly63, gen_sly63_len);
 	ctx->pc += gen_sly63_len;
 	return pc;
 }
void *compile_sly7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly7, gen_sly7_len);
 	ctx->pc += gen_sly7_len;
 	return pc;
 }
void *compile_sly8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly8, gen_sly8_len);
 	ctx->pc += gen_sly8_len;
 	return pc;
 }
void *compile_sly9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sly9, gen_sly9_len);
 	ctx->pc += gen_sly9_len;
 	return pc;
 }
void *compile_sra0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra0, gen_sra0_len);
 	ctx->pc += gen_sra0_len;
 	return pc;
 }
void *compile_sra1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra1, gen_sra1_len);
 	ctx->pc += gen_sra1_len;
 	return pc;
 }
void *compile_sra10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra10, gen_sra10_len);
 	ctx->pc += gen_sra10_len;
 	return pc;
 }
void *compile_sra11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra11, gen_sra11_len);
 	ctx->pc += gen_sra11_len;
 	return pc;
 }
void *compile_sra12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra12, gen_sra12_len);
 	ctx->pc += gen_sra12_len;
 	return pc;
 }
void *compile_sra13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra13, gen_sra13_len);
 	ctx->pc += gen_sra13_len;
 	return pc;
 }
void *compile_sra14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra14, gen_sra14_len);
 	ctx->pc += gen_sra14_len;
 	return pc;
 }
void *compile_sra15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra15, gen_sra15_len);
 	ctx->pc += gen_sra15_len;
 	return pc;
 }
void *compile_sra16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra16, gen_sra16_len);
 	ctx->pc += gen_sra16_len;
 	return pc;
 }
void *compile_sra17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra17, gen_sra17_len);
 	ctx->pc += gen_sra17_len;
 	return pc;
 }
void *compile_sra18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra18, gen_sra18_len);
 	ctx->pc += gen_sra18_len;
 	return pc;
 }
void *compile_sra19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra19, gen_sra19_len);
 	ctx->pc += gen_sra19_len;
 	return pc;
 }
void *compile_sra2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra2, gen_sra2_len);
 	ctx->pc += gen_sra2_len;
 	return pc;
 }
void *compile_sra20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra20, gen_sra20_len);
 	ctx->pc += gen_sra20_len;
 	return pc;
 }
void *compile_sra21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra21, gen_sra21_len);
 	ctx->pc += gen_sra21_len;
 	return pc;
 }
void *compile_sra22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra22, gen_sra22_len);
 	ctx->pc += gen_sra22_len;
 	return pc;
 }
void *compile_sra23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra23, gen_sra23_len);
 	ctx->pc += gen_sra23_len;
 	return pc;
 }
void *compile_sra24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra24, gen_sra24_len);
 	ctx->pc += gen_sra24_len;
 	return pc;
 }
void *compile_sra25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra25, gen_sra25_len);
 	ctx->pc += gen_sra25_len;
 	return pc;
 }
void *compile_sra26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra26, gen_sra26_len);
 	ctx->pc += gen_sra26_len;
 	return pc;
 }
void *compile_sra27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra27, gen_sra27_len);
 	ctx->pc += gen_sra27_len;
 	return pc;
 }
void *compile_sra28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra28, gen_sra28_len);
 	ctx->pc += gen_sra28_len;
 	return pc;
 }
void *compile_sra29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra29, gen_sra29_len);
 	ctx->pc += gen_sra29_len;
 	return pc;
 }
void *compile_sra3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra3, gen_sra3_len);
 	ctx->pc += gen_sra3_len;
 	return pc;
 }
void *compile_sra30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra30, gen_sra30_len);
 	ctx->pc += gen_sra30_len;
 	return pc;
 }
void *compile_sra31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra31, gen_sra31_len);
 	ctx->pc += gen_sra31_len;
 	return pc;
 }
void *compile_sra32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra32, gen_sra32_len);
 	ctx->pc += gen_sra32_len;
 	return pc;
 }
void *compile_sra33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra33, gen_sra33_len);
 	ctx->pc += gen_sra33_len;
 	return pc;
 }
void *compile_sra34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra34, gen_sra34_len);
 	ctx->pc += gen_sra34_len;
 	return pc;
 }
void *compile_sra35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra35, gen_sra35_len);
 	ctx->pc += gen_sra35_len;
 	return pc;
 }
void *compile_sra36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra36, gen_sra36_len);
 	ctx->pc += gen_sra36_len;
 	return pc;
 }
void *compile_sra37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra37, gen_sra37_len);
 	ctx->pc += gen_sra37_len;
 	return pc;
 }
void *compile_sra38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra38, gen_sra38_len);
 	ctx->pc += gen_sra38_len;
 	return pc;
 }
void *compile_sra39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra39, gen_sra39_len);
 	ctx->pc += gen_sra39_len;
 	return pc;
 }
void *compile_sra4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra4, gen_sra4_len);
 	ctx->pc += gen_sra4_len;
 	return pc;
 }
void *compile_sra40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra40, gen_sra40_len);
 	ctx->pc += gen_sra40_len;
 	return pc;
 }
void *compile_sra41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra41, gen_sra41_len);
 	ctx->pc += gen_sra41_len;
 	return pc;
 }
void *compile_sra42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra42, gen_sra42_len);
 	ctx->pc += gen_sra42_len;
 	return pc;
 }
void *compile_sra43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra43, gen_sra43_len);
 	ctx->pc += gen_sra43_len;
 	return pc;
 }
void *compile_sra44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra44, gen_sra44_len);
 	ctx->pc += gen_sra44_len;
 	return pc;
 }
void *compile_sra45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra45, gen_sra45_len);
 	ctx->pc += gen_sra45_len;
 	return pc;
 }
void *compile_sra46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra46, gen_sra46_len);
 	ctx->pc += gen_sra46_len;
 	return pc;
 }
void *compile_sra47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra47, gen_sra47_len);
 	ctx->pc += gen_sra47_len;
 	return pc;
 }
void *compile_sra48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra48, gen_sra48_len);
 	ctx->pc += gen_sra48_len;
 	return pc;
 }
void *compile_sra49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra49, gen_sra49_len);
 	ctx->pc += gen_sra49_len;
 	return pc;
 }
void *compile_sra5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra5, gen_sra5_len);
 	ctx->pc += gen_sra5_len;
 	return pc;
 }
void *compile_sra50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra50, gen_sra50_len);
 	ctx->pc += gen_sra50_len;
 	return pc;
 }
void *compile_sra51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra51, gen_sra51_len);
 	ctx->pc += gen_sra51_len;
 	return pc;
 }
void *compile_sra52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra52, gen_sra52_len);
 	ctx->pc += gen_sra52_len;
 	return pc;
 }
void *compile_sra53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra53, gen_sra53_len);
 	ctx->pc += gen_sra53_len;
 	return pc;
 }
void *compile_sra54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra54, gen_sra54_len);
 	ctx->pc += gen_sra54_len;
 	return pc;
 }
void *compile_sra55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra55, gen_sra55_len);
 	ctx->pc += gen_sra55_len;
 	return pc;
 }
void *compile_sra56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra56, gen_sra56_len);
 	ctx->pc += gen_sra56_len;
 	return pc;
 }
void *compile_sra57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra57, gen_sra57_len);
 	ctx->pc += gen_sra57_len;
 	return pc;
 }
void *compile_sra58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra58, gen_sra58_len);
 	ctx->pc += gen_sra58_len;
 	return pc;
 }
void *compile_sra59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra59, gen_sra59_len);
 	ctx->pc += gen_sra59_len;
 	return pc;
 }
void *compile_sra6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra6, gen_sra6_len);
 	ctx->pc += gen_sra6_len;
 	return pc;
 }
void *compile_sra60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra60, gen_sra60_len);
 	ctx->pc += gen_sra60_len;
 	return pc;
 }
void *compile_sra61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra61, gen_sra61_len);
 	ctx->pc += gen_sra61_len;
 	return pc;
 }
void *compile_sra62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra62, gen_sra62_len);
 	ctx->pc += gen_sra62_len;
 	return pc;
 }
void *compile_sra63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra63, gen_sra63_len);
 	ctx->pc += gen_sra63_len;
 	return pc;
 }
void *compile_sra7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra7, gen_sra7_len);
 	ctx->pc += gen_sra7_len;
 	return pc;
 }
void *compile_sra8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra8, gen_sra8_len);
 	ctx->pc += gen_sra8_len;
 	return pc;
 }
void *compile_sra9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sra9, gen_sra9_len);
 	ctx->pc += gen_sra9_len;
 	return pc;
 }
void *compile_sro0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro0, gen_sro0_len);
 	ctx->pc += gen_sro0_len;
 	return pc;
 }
void *compile_sro1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro1, gen_sro1_len);
 	ctx->pc += gen_sro1_len;
 	return pc;
 }
void *compile_sro10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro10, gen_sro10_len);
 	ctx->pc += gen_sro10_len;
 	return pc;
 }
void *compile_sro11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro11, gen_sro11_len);
 	ctx->pc += gen_sro11_len;
 	return pc;
 }
void *compile_sro12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro12, gen_sro12_len);
 	ctx->pc += gen_sro12_len;
 	return pc;
 }
void *compile_sro13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro13, gen_sro13_len);
 	ctx->pc += gen_sro13_len;
 	return pc;
 }
void *compile_sro14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro14, gen_sro14_len);
 	ctx->pc += gen_sro14_len;
 	return pc;
 }
void *compile_sro15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro15, gen_sro15_len);
 	ctx->pc += gen_sro15_len;
 	return pc;
 }
void *compile_sro16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro16, gen_sro16_len);
 	ctx->pc += gen_sro16_len;
 	return pc;
 }
void *compile_sro17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro17, gen_sro17_len);
 	ctx->pc += gen_sro17_len;
 	return pc;
 }
void *compile_sro18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro18, gen_sro18_len);
 	ctx->pc += gen_sro18_len;
 	return pc;
 }
void *compile_sro19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro19, gen_sro19_len);
 	ctx->pc += gen_sro19_len;
 	return pc;
 }
void *compile_sro2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro2, gen_sro2_len);
 	ctx->pc += gen_sro2_len;
 	return pc;
 }
void *compile_sro20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro20, gen_sro20_len);
 	ctx->pc += gen_sro20_len;
 	return pc;
 }
void *compile_sro21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro21, gen_sro21_len);
 	ctx->pc += gen_sro21_len;
 	return pc;
 }
void *compile_sro22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro22, gen_sro22_len);
 	ctx->pc += gen_sro22_len;
 	return pc;
 }
void *compile_sro23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro23, gen_sro23_len);
 	ctx->pc += gen_sro23_len;
 	return pc;
 }
void *compile_sro24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro24, gen_sro24_len);
 	ctx->pc += gen_sro24_len;
 	return pc;
 }
void *compile_sro25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro25, gen_sro25_len);
 	ctx->pc += gen_sro25_len;
 	return pc;
 }
void *compile_sro26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro26, gen_sro26_len);
 	ctx->pc += gen_sro26_len;
 	return pc;
 }
void *compile_sro27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro27, gen_sro27_len);
 	ctx->pc += gen_sro27_len;
 	return pc;
 }
void *compile_sro28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro28, gen_sro28_len);
 	ctx->pc += gen_sro28_len;
 	return pc;
 }
void *compile_sro29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro29, gen_sro29_len);
 	ctx->pc += gen_sro29_len;
 	return pc;
 }
void *compile_sro3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro3, gen_sro3_len);
 	ctx->pc += gen_sro3_len;
 	return pc;
 }
void *compile_sro30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro30, gen_sro30_len);
 	ctx->pc += gen_sro30_len;
 	return pc;
 }
void *compile_sro31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro31, gen_sro31_len);
 	ctx->pc += gen_sro31_len;
 	return pc;
 }
void *compile_sro32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro32, gen_sro32_len);
 	ctx->pc += gen_sro32_len;
 	return pc;
 }
void *compile_sro33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro33, gen_sro33_len);
 	ctx->pc += gen_sro33_len;
 	return pc;
 }
void *compile_sro34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro34, gen_sro34_len);
 	ctx->pc += gen_sro34_len;
 	return pc;
 }
void *compile_sro35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro35, gen_sro35_len);
 	ctx->pc += gen_sro35_len;
 	return pc;
 }
void *compile_sro36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro36, gen_sro36_len);
 	ctx->pc += gen_sro36_len;
 	return pc;
 }
void *compile_sro37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro37, gen_sro37_len);
 	ctx->pc += gen_sro37_len;
 	return pc;
 }
void *compile_sro38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro38, gen_sro38_len);
 	ctx->pc += gen_sro38_len;
 	return pc;
 }
void *compile_sro39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro39, gen_sro39_len);
 	ctx->pc += gen_sro39_len;
 	return pc;
 }
void *compile_sro4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro4, gen_sro4_len);
 	ctx->pc += gen_sro4_len;
 	return pc;
 }
void *compile_sro40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro40, gen_sro40_len);
 	ctx->pc += gen_sro40_len;
 	return pc;
 }
void *compile_sro41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro41, gen_sro41_len);
 	ctx->pc += gen_sro41_len;
 	return pc;
 }
void *compile_sro42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro42, gen_sro42_len);
 	ctx->pc += gen_sro42_len;
 	return pc;
 }
void *compile_sro43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro43, gen_sro43_len);
 	ctx->pc += gen_sro43_len;
 	return pc;
 }
void *compile_sro44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro44, gen_sro44_len);
 	ctx->pc += gen_sro44_len;
 	return pc;
 }
void *compile_sro45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro45, gen_sro45_len);
 	ctx->pc += gen_sro45_len;
 	return pc;
 }
void *compile_sro46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro46, gen_sro46_len);
 	ctx->pc += gen_sro46_len;
 	return pc;
 }
void *compile_sro47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro47, gen_sro47_len);
 	ctx->pc += gen_sro47_len;
 	return pc;
 }
void *compile_sro48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro48, gen_sro48_len);
 	ctx->pc += gen_sro48_len;
 	return pc;
 }
void *compile_sro49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro49, gen_sro49_len);
 	ctx->pc += gen_sro49_len;
 	return pc;
 }
void *compile_sro5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro5, gen_sro5_len);
 	ctx->pc += gen_sro5_len;
 	return pc;
 }
void *compile_sro50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro50, gen_sro50_len);
 	ctx->pc += gen_sro50_len;
 	return pc;
 }
void *compile_sro51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro51, gen_sro51_len);
 	ctx->pc += gen_sro51_len;
 	return pc;
 }
void *compile_sro52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro52, gen_sro52_len);
 	ctx->pc += gen_sro52_len;
 	return pc;
 }
void *compile_sro53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro53, gen_sro53_len);
 	ctx->pc += gen_sro53_len;
 	return pc;
 }
void *compile_sro54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro54, gen_sro54_len);
 	ctx->pc += gen_sro54_len;
 	return pc;
 }
void *compile_sro55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro55, gen_sro55_len);
 	ctx->pc += gen_sro55_len;
 	return pc;
 }
void *compile_sro56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro56, gen_sro56_len);
 	ctx->pc += gen_sro56_len;
 	return pc;
 }
void *compile_sro57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro57, gen_sro57_len);
 	ctx->pc += gen_sro57_len;
 	return pc;
 }
void *compile_sro58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro58, gen_sro58_len);
 	ctx->pc += gen_sro58_len;
 	return pc;
 }
void *compile_sro59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro59, gen_sro59_len);
 	ctx->pc += gen_sro59_len;
 	return pc;
 }
void *compile_sro6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro6, gen_sro6_len);
 	ctx->pc += gen_sro6_len;
 	return pc;
 }
void *compile_sro60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro60, gen_sro60_len);
 	ctx->pc += gen_sro60_len;
 	return pc;
 }
void *compile_sro61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro61, gen_sro61_len);
 	ctx->pc += gen_sro61_len;
 	return pc;
 }
void *compile_sro62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro62, gen_sro62_len);
 	ctx->pc += gen_sro62_len;
 	return pc;
 }
void *compile_sro63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro63, gen_sro63_len);
 	ctx->pc += gen_sro63_len;
 	return pc;
 }
void *compile_sro7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro7, gen_sro7_len);
 	ctx->pc += gen_sro7_len;
 	return pc;
 }
void *compile_sro8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro8, gen_sro8_len);
 	ctx->pc += gen_sro8_len;
 	return pc;
 }
void *compile_sro9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sro9, gen_sro9_len);
 	ctx->pc += gen_sro9_len;
 	return pc;
 }
void *compile_srx0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx0, gen_srx0_len);
 	ctx->pc += gen_srx0_len;
 	return pc;
 }
void *compile_srx1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx1, gen_srx1_len);
 	ctx->pc += gen_srx1_len;
 	return pc;
 }
void *compile_srx10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx10, gen_srx10_len);
 	ctx->pc += gen_srx10_len;
 	return pc;
 }
void *compile_srx11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx11, gen_srx11_len);
 	ctx->pc += gen_srx11_len;
 	return pc;
 }
void *compile_srx12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx12, gen_srx12_len);
 	ctx->pc += gen_srx12_len;
 	return pc;
 }
void *compile_srx13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx13, gen_srx13_len);
 	ctx->pc += gen_srx13_len;
 	return pc;
 }
void *compile_srx14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx14, gen_srx14_len);
 	ctx->pc += gen_srx14_len;
 	return pc;
 }
void *compile_srx15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx15, gen_srx15_len);
 	ctx->pc += gen_srx15_len;
 	return pc;
 }
void *compile_srx16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx16, gen_srx16_len);
 	ctx->pc += gen_srx16_len;
 	return pc;
 }
void *compile_srx17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx17, gen_srx17_len);
 	ctx->pc += gen_srx17_len;
 	return pc;
 }
void *compile_srx18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx18, gen_srx18_len);
 	ctx->pc += gen_srx18_len;
 	return pc;
 }
void *compile_srx19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx19, gen_srx19_len);
 	ctx->pc += gen_srx19_len;
 	return pc;
 }
void *compile_srx2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx2, gen_srx2_len);
 	ctx->pc += gen_srx2_len;
 	return pc;
 }
void *compile_srx20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx20, gen_srx20_len);
 	ctx->pc += gen_srx20_len;
 	return pc;
 }
void *compile_srx21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx21, gen_srx21_len);
 	ctx->pc += gen_srx21_len;
 	return pc;
 }
void *compile_srx22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx22, gen_srx22_len);
 	ctx->pc += gen_srx22_len;
 	return pc;
 }
void *compile_srx23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx23, gen_srx23_len);
 	ctx->pc += gen_srx23_len;
 	return pc;
 }
void *compile_srx24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx24, gen_srx24_len);
 	ctx->pc += gen_srx24_len;
 	return pc;
 }
void *compile_srx25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx25, gen_srx25_len);
 	ctx->pc += gen_srx25_len;
 	return pc;
 }
void *compile_srx26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx26, gen_srx26_len);
 	ctx->pc += gen_srx26_len;
 	return pc;
 }
void *compile_srx27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx27, gen_srx27_len);
 	ctx->pc += gen_srx27_len;
 	return pc;
 }
void *compile_srx28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx28, gen_srx28_len);
 	ctx->pc += gen_srx28_len;
 	return pc;
 }
void *compile_srx29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx29, gen_srx29_len);
 	ctx->pc += gen_srx29_len;
 	return pc;
 }
void *compile_srx3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx3, gen_srx3_len);
 	ctx->pc += gen_srx3_len;
 	return pc;
 }
void *compile_srx30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx30, gen_srx30_len);
 	ctx->pc += gen_srx30_len;
 	return pc;
 }
void *compile_srx31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx31, gen_srx31_len);
 	ctx->pc += gen_srx31_len;
 	return pc;
 }
void *compile_srx32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx32, gen_srx32_len);
 	ctx->pc += gen_srx32_len;
 	return pc;
 }
void *compile_srx33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx33, gen_srx33_len);
 	ctx->pc += gen_srx33_len;
 	return pc;
 }
void *compile_srx34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx34, gen_srx34_len);
 	ctx->pc += gen_srx34_len;
 	return pc;
 }
void *compile_srx35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx35, gen_srx35_len);
 	ctx->pc += gen_srx35_len;
 	return pc;
 }
void *compile_srx36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx36, gen_srx36_len);
 	ctx->pc += gen_srx36_len;
 	return pc;
 }
void *compile_srx37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx37, gen_srx37_len);
 	ctx->pc += gen_srx37_len;
 	return pc;
 }
void *compile_srx38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx38, gen_srx38_len);
 	ctx->pc += gen_srx38_len;
 	return pc;
 }
void *compile_srx39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx39, gen_srx39_len);
 	ctx->pc += gen_srx39_len;
 	return pc;
 }
void *compile_srx4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx4, gen_srx4_len);
 	ctx->pc += gen_srx4_len;
 	return pc;
 }
void *compile_srx40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx40, gen_srx40_len);
 	ctx->pc += gen_srx40_len;
 	return pc;
 }
void *compile_srx41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx41, gen_srx41_len);
 	ctx->pc += gen_srx41_len;
 	return pc;
 }
void *compile_srx42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx42, gen_srx42_len);
 	ctx->pc += gen_srx42_len;
 	return pc;
 }
void *compile_srx43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx43, gen_srx43_len);
 	ctx->pc += gen_srx43_len;
 	return pc;
 }
void *compile_srx44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx44, gen_srx44_len);
 	ctx->pc += gen_srx44_len;
 	return pc;
 }
void *compile_srx45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx45, gen_srx45_len);
 	ctx->pc += gen_srx45_len;
 	return pc;
 }
void *compile_srx46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx46, gen_srx46_len);
 	ctx->pc += gen_srx46_len;
 	return pc;
 }
void *compile_srx47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx47, gen_srx47_len);
 	ctx->pc += gen_srx47_len;
 	return pc;
 }
void *compile_srx48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx48, gen_srx48_len);
 	ctx->pc += gen_srx48_len;
 	return pc;
 }
void *compile_srx49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx49, gen_srx49_len);
 	ctx->pc += gen_srx49_len;
 	return pc;
 }
void *compile_srx5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx5, gen_srx5_len);
 	ctx->pc += gen_srx5_len;
 	return pc;
 }
void *compile_srx50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx50, gen_srx50_len);
 	ctx->pc += gen_srx50_len;
 	return pc;
 }
void *compile_srx51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx51, gen_srx51_len);
 	ctx->pc += gen_srx51_len;
 	return pc;
 }
void *compile_srx52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx52, gen_srx52_len);
 	ctx->pc += gen_srx52_len;
 	return pc;
 }
void *compile_srx53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx53, gen_srx53_len);
 	ctx->pc += gen_srx53_len;
 	return pc;
 }
void *compile_srx54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx54, gen_srx54_len);
 	ctx->pc += gen_srx54_len;
 	return pc;
 }
void *compile_srx55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx55, gen_srx55_len);
 	ctx->pc += gen_srx55_len;
 	return pc;
 }
void *compile_srx56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx56, gen_srx56_len);
 	ctx->pc += gen_srx56_len;
 	return pc;
 }
void *compile_srx57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx57, gen_srx57_len);
 	ctx->pc += gen_srx57_len;
 	return pc;
 }
void *compile_srx58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx58, gen_srx58_len);
 	ctx->pc += gen_srx58_len;
 	return pc;
 }
void *compile_srx59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx59, gen_srx59_len);
 	ctx->pc += gen_srx59_len;
 	return pc;
 }
void *compile_srx6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx6, gen_srx6_len);
 	ctx->pc += gen_srx6_len;
 	return pc;
 }
void *compile_srx60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx60, gen_srx60_len);
 	ctx->pc += gen_srx60_len;
 	return pc;
 }
void *compile_srx61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx61, gen_srx61_len);
 	ctx->pc += gen_srx61_len;
 	return pc;
 }
void *compile_srx62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx62, gen_srx62_len);
 	ctx->pc += gen_srx62_len;
 	return pc;
 }
void *compile_srx63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx63, gen_srx63_len);
 	ctx->pc += gen_srx63_len;
 	return pc;
 }
void *compile_srx7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx7, gen_srx7_len);
 	ctx->pc += gen_srx7_len;
 	return pc;
 }
void *compile_srx8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx8, gen_srx8_len);
 	ctx->pc += gen_srx8_len;
 	return pc;
 }
void *compile_srx9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_srx9, gen_srx9_len);
 	ctx->pc += gen_srx9_len;
 	return pc;
 }
void *compile_sry0(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry0, gen_sry0_len);
 	ctx->pc += gen_sry0_len;
 	return pc;
 }
void *compile_sry1(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry1, gen_sry1_len);
 	ctx->pc += gen_sry1_len;
 	return pc;
 }
void *compile_sry10(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry10, gen_sry10_len);
 	ctx->pc += gen_sry10_len;
 	return pc;
 }
void *compile_sry11(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry11, gen_sry11_len);
 	ctx->pc += gen_sry11_len;
 	return pc;
 }
void *compile_sry12(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry12, gen_sry12_len);
 	ctx->pc += gen_sry12_len;
 	return pc;
 }
void *compile_sry13(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry13, gen_sry13_len);
 	ctx->pc += gen_sry13_len;
 	return pc;
 }
void *compile_sry14(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry14, gen_sry14_len);
 	ctx->pc += gen_sry14_len;
 	return pc;
 }
void *compile_sry15(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry15, gen_sry15_len);
 	ctx->pc += gen_sry15_len;
 	return pc;
 }
void *compile_sry16(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry16, gen_sry16_len);
 	ctx->pc += gen_sry16_len;
 	return pc;
 }
void *compile_sry17(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry17, gen_sry17_len);
 	ctx->pc += gen_sry17_len;
 	return pc;
 }
void *compile_sry18(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry18, gen_sry18_len);
 	ctx->pc += gen_sry18_len;
 	return pc;
 }
void *compile_sry19(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry19, gen_sry19_len);
 	ctx->pc += gen_sry19_len;
 	return pc;
 }
void *compile_sry2(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry2, gen_sry2_len);
 	ctx->pc += gen_sry2_len;
 	return pc;
 }
void *compile_sry20(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry20, gen_sry20_len);
 	ctx->pc += gen_sry20_len;
 	return pc;
 }
void *compile_sry21(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry21, gen_sry21_len);
 	ctx->pc += gen_sry21_len;
 	return pc;
 }
void *compile_sry22(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry22, gen_sry22_len);
 	ctx->pc += gen_sry22_len;
 	return pc;
 }
void *compile_sry23(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry23, gen_sry23_len);
 	ctx->pc += gen_sry23_len;
 	return pc;
 }
void *compile_sry24(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry24, gen_sry24_len);
 	ctx->pc += gen_sry24_len;
 	return pc;
 }
void *compile_sry25(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry25, gen_sry25_len);
 	ctx->pc += gen_sry25_len;
 	return pc;
 }
void *compile_sry26(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry26, gen_sry26_len);
 	ctx->pc += gen_sry26_len;
 	return pc;
 }
void *compile_sry27(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry27, gen_sry27_len);
 	ctx->pc += gen_sry27_len;
 	return pc;
 }
void *compile_sry28(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry28, gen_sry28_len);
 	ctx->pc += gen_sry28_len;
 	return pc;
 }
void *compile_sry29(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry29, gen_sry29_len);
 	ctx->pc += gen_sry29_len;
 	return pc;
 }
void *compile_sry3(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry3, gen_sry3_len);
 	ctx->pc += gen_sry3_len;
 	return pc;
 }
void *compile_sry30(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry30, gen_sry30_len);
 	ctx->pc += gen_sry30_len;
 	return pc;
 }
void *compile_sry31(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry31, gen_sry31_len);
 	ctx->pc += gen_sry31_len;
 	return pc;
 }
void *compile_sry32(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry32, gen_sry32_len);
 	ctx->pc += gen_sry32_len;
 	return pc;
 }
void *compile_sry33(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry33, gen_sry33_len);
 	ctx->pc += gen_sry33_len;
 	return pc;
 }
void *compile_sry34(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry34, gen_sry34_len);
 	ctx->pc += gen_sry34_len;
 	return pc;
 }
void *compile_sry35(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry35, gen_sry35_len);
 	ctx->pc += gen_sry35_len;
 	return pc;
 }
void *compile_sry36(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry36, gen_sry36_len);
 	ctx->pc += gen_sry36_len;
 	return pc;
 }
void *compile_sry37(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry37, gen_sry37_len);
 	ctx->pc += gen_sry37_len;
 	return pc;
 }
void *compile_sry38(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry38, gen_sry38_len);
 	ctx->pc += gen_sry38_len;
 	return pc;
 }
void *compile_sry39(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry39, gen_sry39_len);
 	ctx->pc += gen_sry39_len;
 	return pc;
 }
void *compile_sry4(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry4, gen_sry4_len);
 	ctx->pc += gen_sry4_len;
 	return pc;
 }
void *compile_sry40(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry40, gen_sry40_len);
 	ctx->pc += gen_sry40_len;
 	return pc;
 }
void *compile_sry41(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry41, gen_sry41_len);
 	ctx->pc += gen_sry41_len;
 	return pc;
 }
void *compile_sry42(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry42, gen_sry42_len);
 	ctx->pc += gen_sry42_len;
 	return pc;
 }
void *compile_sry43(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry43, gen_sry43_len);
 	ctx->pc += gen_sry43_len;
 	return pc;
 }
void *compile_sry44(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry44, gen_sry44_len);
 	ctx->pc += gen_sry44_len;
 	return pc;
 }
void *compile_sry45(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry45, gen_sry45_len);
 	ctx->pc += gen_sry45_len;
 	return pc;
 }
void *compile_sry46(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry46, gen_sry46_len);
 	ctx->pc += gen_sry46_len;
 	return pc;
 }
void *compile_sry47(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry47, gen_sry47_len);
 	ctx->pc += gen_sry47_len;
 	return pc;
 }
void *compile_sry48(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry48, gen_sry48_len);
 	ctx->pc += gen_sry48_len;
 	return pc;
 }
void *compile_sry49(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry49, gen_sry49_len);
 	ctx->pc += gen_sry49_len;
 	return pc;
 }
void *compile_sry5(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry5, gen_sry5_len);
 	ctx->pc += gen_sry5_len;
 	return pc;
 }
void *compile_sry50(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry50, gen_sry50_len);
 	ctx->pc += gen_sry50_len;
 	return pc;
 }
void *compile_sry51(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry51, gen_sry51_len);
 	ctx->pc += gen_sry51_len;
 	return pc;
 }
void *compile_sry52(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry52, gen_sry52_len);
 	ctx->pc += gen_sry52_len;
 	return pc;
 }
void *compile_sry53(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry53, gen_sry53_len);
 	ctx->pc += gen_sry53_len;
 	return pc;
 }
void *compile_sry54(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry54, gen_sry54_len);
 	ctx->pc += gen_sry54_len;
 	return pc;
 }
void *compile_sry55(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry55, gen_sry55_len);
 	ctx->pc += gen_sry55_len;
 	return pc;
 }
void *compile_sry56(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry56, gen_sry56_len);
 	ctx->pc += gen_sry56_len;
 	return pc;
 }
void *compile_sry57(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry57, gen_sry57_len);
 	ctx->pc += gen_sry57_len;
 	return pc;
 }
void *compile_sry58(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry58, gen_sry58_len);
 	ctx->pc += gen_sry58_len;
 	return pc;
 }
void *compile_sry59(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry59, gen_sry59_len);
 	ctx->pc += gen_sry59_len;
 	return pc;
 }
void *compile_sry6(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry6, gen_sry6_len);
 	ctx->pc += gen_sry6_len;
 	return pc;
 }
void *compile_sry60(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry60, gen_sry60_len);
 	ctx->pc += gen_sry60_len;
 	return pc;
 }
void *compile_sry61(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry61, gen_sry61_len);
 	ctx->pc += gen_sry61_len;
 	return pc;
 }
void *compile_sry62(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry62, gen_sry62_len);
 	ctx->pc += gen_sry62_len;
 	return pc;
 }
void *compile_sry63(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry63, gen_sry63_len);
 	ctx->pc += gen_sry63_len;
 	return pc;
 }
void *compile_sry7(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry7, gen_sry7_len);
 	ctx->pc += gen_sry7_len;
 	return pc;
 }
void *compile_sry8(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry8, gen_sry8_len);
 	ctx->pc += gen_sry8_len;
 	return pc;
 }
void *compile_sry9(ctx_t *ctx)
 {
 	void *pc = ctx->pc;
 	memcpy(pc, gen_sry9, gen_sry9_len);
 	ctx->pc += gen_sry9_len;
 	return pc;
 }
#endif /* COPYJIT_DEFNS_H */
