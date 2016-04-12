/*
 * Code for class GAME_ENGINE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F904_9444(EIF_REFERENCE);
extern void F904_9445(EIF_REFERENCE);
extern void F904_9446(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F904_9447(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F904_9448(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F904_9449(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit904(void);
extern EIF_REFERENCE _A904_38_2_3();
extern EIF_REFERENCE _A904_37_2();
extern EIF_REFERENCE _A904_40_2();
extern EIF_REFERENCE _A904_39_2_3();

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_ENGINE}.make */
void F904_9444 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_TYPED_VALUE ub3x = {{0}, SK_BOOL};
#define ub3 ub3x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 903, Current, 0, 0, 15148);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(903, Current, 15148);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7252, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7112, "enable_video", tr1))(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ub1 = (EIF_BOOLEAN) 1;
	ub2 = (EIF_BOOLEAN) 0;
	ub3 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6951, "enable_image", tr1))(tr1, ub1x, ub2x, ub3x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7312, dtype))(Current);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6958, "quit_library", tr1))(tr1);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7252, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7180, "quit_library", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ub1
#undef ub2
#undef ub3
}

/* {GAME_ENGINE}.run_game */
void F904_9445 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "run_game";
	RTEX;
	struct eif_ex_905 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_TYPED_VALUE uu1_3x = {{0}, SK_UINT8};
#define uu1_3 uu1_3x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 64);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(905, 0x00).id);
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,Current);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 903, Current, 4, 0, 15149);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(903, Current, 15149);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x80000389, 1, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(905, 0x00).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = (tr1);
	RTXA(tr1, loc1);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 1024L);
	ui4_2 = ((EIF_INTEGER_32) 512L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7388, "set_dimension", loc1))(loc1, ui4_1x, ui4_2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("MotoX",5,1870493016);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7352, "set_title", loc1))(loc1, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0xF800039B, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7392, "generate_window", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7949, "renderer", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = RTLN(eif_new_type(887, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7198, Dtype(tr2)))(tr2, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7522, "set_drawing_color", tr1))(tr1, ur1x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7949, "renderer", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7512, "clear", tr1))(tr1);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7949, "renderer", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	tr2 = RTLN(eif_new_type(887, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7198, Dtype(tr2)))(tr2, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(7,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7522, "set_drawing_color", tr1))(tr1, ur1x);
	RTHOOK(8);
	RTDBGAL(Current, 2, 0xF800039E, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(926, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7949, "renderer", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8004, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(8,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(6416, "has_error", loc2));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(10);
		RTDBGAL(Current, 3, 0xF800039D, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(925, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7949, "renderer", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7976, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(10,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		ui4_1 = ((EIF_INTEGER_32) 300L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7995, "set_y", loc3))(loc3, ui4_1x);
		RTHOOK(12);
		ui4_1 = ((EIF_INTEGER_32) 200L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7994, "set_x", loc3))(loc3, ui4_1x);
		RTHOOK(13);
		tb1 = *(EIF_BOOLEAN *)(loc3 + RTVA(6416, "has_error", loc3));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7252, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7032, "quit_signal_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(14,2);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,174,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {397,206,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr4) = 1L;
				memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
			}
			*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,1,174,200,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A904_40_2, (EIF_POINTER)(0),7316, tr3, 0, 1, -1, tr1, 1);
			}
			ur1 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr2))(tr2, ur1x);
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7061, "key_pressed_actions", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0xFF01,925,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 3, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
			RTAR(tr2,Current);
			((EIF_TYPED_VALUE *)tr2+2)->it_r = loc3;
			RTAR(tr2,loc3);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			{
				static EIF_TYPE_INDEX typarr0[] = {397,206,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr4) = 2L;
				memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
			}
			*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,2,174,200,0xFF01,874,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A904_38_2_3, (EIF_POINTER)(0),7314, tr3, 0, 1, -1, tr2, 2);
			}
			ur1 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7062, "key_released_actions", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0xFF01,925,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 3, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
			RTAR(tr2,Current);
			((EIF_TYPED_VALUE *)tr2+2)->it_r = loc3;
			RTAR(tr2,loc3);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			{
				static EIF_TYPE_INDEX typarr0[] = {397,206,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr4) = 2L;
				memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
			}
			*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,2,174,200,0xFF01,874,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A904_39_2_3, (EIF_POINTER)(0),7315, tr3, 0, 1, -1, tr2, 2);
			}
			ur1 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7252, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7033, "iteration_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(17,2);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,174,0xFF01,0,0xFF01,925,0xFF01,924,0xFF01,915,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 5, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			((EIF_TYPED_VALUE *)tr1+2)->it_r = loc3;
			RTAR(tr1,loc3);
			((EIF_TYPED_VALUE *)tr1+3)->it_r = loc2;
			RTAR(tr1,loc2);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7949, "renderer", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			((EIF_TYPED_VALUE *)tr1+4)->it_r = tr3;
			RTAR(tr1,tr3);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			{
				static EIF_TYPE_INDEX typarr0[] = {397,206,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr4) = 1L;
				memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
			}
			*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,1,174,200,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A904_37_2, (EIF_POINTER)(0),7313, tr3, 0, 1, -1, tr1, 1);
			}
			ur1 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr2))(tr2, ur1x);
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7252, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7174, "launch", tr1))(tr1);
		} else {
			RTHOOK(19);
			tr1 = RTMS_EX_H("Cannot create the Moto surface.",31,442678062);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
	} else {
		RTHOOK(20);
		tr1 = RTMS_EX_H("Cannot create the desert surface.",33,749570350);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu1_1
#undef uu1_2
#undef uu1_3
}

/* {GAME_ENGINE}.on_iteration */
void F904_9446 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "on_iteration";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_TYPED_VALUE ui4_8x = {{0}, SK_INT32};
#define ui4_8 ui4_8x.it_i4
	EIF_TYPED_VALUE ui4_9x = {{0}, SK_INT32};
#define ui4_9 ui4_9x.it_i4
	EIF_TYPED_VALUE ui4_10x = {{0}, SK_INT32};
#define ui4_10 ui4_10x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_TYPED_VALUE uu1_3x = {{0}, SK_UINT8};
#define uu1_3 uu1_3x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,arg4);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 903, Current, 0, 4, 15150);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(903, Current, 15150);
	RTCC(arg2, 903, l_feature_name, 2, eif_new_type(925, 0x01), 0x01);
	RTCC(arg3, 903, l_feature_name, 3, eif_new_type(924, 0x01), 0x01);
	RTCC(arg4, 903, l_feature_name, 4, eif_new_type(915, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7978, "update", arg2))(arg2, uu4_1x);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7992, "x", arg2));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7994, "set_x", arg2))(arg2, ui4_1x);
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7992, "x", arg2));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7998, "sub_image_width", arg2));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7962, "width", arg3))(arg3)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > ti4_3)) {
			RTHOOK(5);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7962, "width", arg3))(arg3)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7998, "sub_image_width", arg2));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ti4_2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7994, "set_x", arg2))(arg2, ui4_1x);
		}
	}
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(887, 0x01).id);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
	uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7198, Dtype(tr1)))(tr1, uu1_1x, uu1_2x, uu1_3x);
	RTNHOOK(6,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7522, "set_drawing_color", arg4))(arg4, ur1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7962, "width", arg3))(arg3)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7963, "height", arg3))(arg3)).it_i4);
	ui4_4 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7529, "draw_filled_rectangle", arg4))(arg4, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(8);
	ur1 = RTCCL(arg3);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7513, "draw_texture", arg4))(arg4, ur1x, ui4_1x, ui4_2x);
	RTHOOK(9);
	ur1 = RTCCL(arg2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7996, "sub_image_x", arg2));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7997, "sub_image_y", arg2));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7998, "sub_image_width", arg2));
	ui4_3 = ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7999, "sub_image_height", arg2));
	ui4_4 = ti4_4;
	ti4_5 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7992, "x", arg2));
	ui4_5 = ti4_5;
	ti4_6 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7993, "y", arg2));
	ui4_6 = ti4_6;
	ti4_7 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7998, "sub_image_width", arg2));
	ui4_7 = ti4_7;
	ti4_8 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7999, "sub_image_height", arg2));
	ui4_8 = ti4_8;
	ui4_9 = ((EIF_INTEGER_32) 0L);
	ui4_10 = ((EIF_INTEGER_32) 0L);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_1 = tr8_1;
	ub1 = (EIF_BOOLEAN) 0;
	tb1 = *(EIF_BOOLEAN *)(arg2 + RTVA(7987, "facing_left", arg2));
	ub2 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7520, "draw_sub_texture_with_scale_rotation_and_mirror", arg4))(arg4, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x, ui4_7x, ui4_8x, ui4_9x, ui4_10x, ur8_1x, ub1x, ub2x);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7507, "present", arg4))(arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ui4_7
#undef ui4_8
#undef ui4_9
#undef ui4_10
#undef uu4_1
#undef uu1_1
#undef uu1_2
#undef uu1_3
#undef ub1
#undef ub2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_ENGINE}.on_key_pressed */
void F904_9447 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "on_key_pressed";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 903, Current, 0, 3, 15151);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(903, Current, 15151);
	RTCC(arg2, 903, l_feature_name, 2, eif_new_type(874, 0x01), 0x01);
	RTCC(arg3, 903, l_feature_name, 3, eif_new_type(925, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6924, "is_repeat", arg2))(arg2)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6538, "is_right", arg2))(arg2)).it_b);
		if (tb1) {
			RTHOOK(3);
			uu4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7980, "go_right", arg3))(arg3, uu4_1x);
		} else {
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6539, "is_left", arg2))(arg2)).it_b);
			if (tb1) {
				RTHOOK(5);
				uu4_1 = arg1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7979, "go_left", arg3))(arg3, uu4_1x);
			} else {
				RTHOOK(6);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6541, "is_up", arg2))(arg2)).it_b);
				if (tb1) {
					RTHOOK(7);
					uu4_1 = arg1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7981, "go_up", arg3))(arg3, uu4_1x);
				} else {
					RTHOOK(8);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6540, "is_down", arg2))(arg2)).it_b);
					if (tb1) {
						RTHOOK(9);
						uu4_1 = arg1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7982, "go_down", arg3))(arg3, uu4_1x);
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_ENGINE}.on_key_released */
void F904_9448 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "on_key_released";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 903, Current, 0, 3, 15152);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(903, Current, 15152);
	RTCC(arg2, 903, l_feature_name, 2, eif_new_type(874, 0x01), 0x01);
	RTCC(arg3, 903, l_feature_name, 3, eif_new_type(925, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6924, "is_repeat", arg2))(arg2)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6538, "is_right", arg2))(arg2)).it_b);
		if (tb1) {
			RTHOOK(3);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7984, "stop_right", arg3))(arg3);
		} else {
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6539, "is_left", arg2))(arg2)).it_b);
			if (tb1) {
				RTHOOK(5);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7983, "stop_left", arg3))(arg3);
			} else {
				RTHOOK(6);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6541, "is_up", arg2))(arg2)).it_b);
				if (tb1) {
					RTHOOK(7);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7985, "stop_up", arg3))(arg3);
				} else {
					RTHOOK(8);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6540, "is_down", arg2))(arg2)).it_b);
					if (tb1) {
						RTHOOK(9);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7986, "stop_down", arg3))(arg3);
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_ENGINE}.on_quit */
void F904_9449 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_quit";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 903, Current, 0, 1, 15153);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(903, Current, 15153);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7252, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7179, "stop", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

void EIF_Minit904 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
