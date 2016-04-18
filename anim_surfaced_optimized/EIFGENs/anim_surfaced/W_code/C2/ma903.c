/*
 * Code for class MARYO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F903_9397(EIF_REFERENCE);
extern void F903_9398(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9399(EIF_REFERENCE);
extern void F903_9400(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F903_9401(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F903_9402(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F903_9403(EIF_REFERENCE);
extern void F903_9404(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9405(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9406(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9407(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9408(EIF_REFERENCE);
extern void F903_9409(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F903_9410(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F903_9411(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9412(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9413(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9414(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9415(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9416(EIF_REFERENCE);
extern void F903_9417(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9418(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9419(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9420(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9421(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9422(EIF_REFERENCE);
extern EIF_TYPED_VALUE F903_9423(EIF_REFERENCE);
extern void EIF_Minit903(void);

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

/* {MARYO}.default_create */
void F903_9397 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 902, Current, 1, 0, 15100);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15100);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7268, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(7268, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800039B, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(923, 0x01).id);
	tr2 = RTMS_EX_H("moto2.png",9,1412712551);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7693, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7189, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7190, "open", loc1))(loc1);
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(7191, "is_open", loc1));
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 7292, 0xF800038B, 0); /* right_surface */
			tr1 = RTLNSMART(RTWCT(7292, dtype, Dftype(Current)).id);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7377, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(6,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7292, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			RTDBGAA(Current, dtype, 7291, 0xF800038B, 0); /* left_surface */
			tr1 = RTLN(eif_new_type(908, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) -1L));
			ur8_1 = tr8_1;
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
			ur8_2 = tr8_2;
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7416, Dtype(tr1)))(tr1, ur1x, ur8_1x, ur8_2x, ub1x);
			RTNHOOK(7,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7291, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 7282, 0x10000000, 1); /* sub_image_width */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7404, "width", tr1))(tr1)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(7282, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L));
			RTHOOK(9);
			RTDBGAA(Current, dtype, 7283, 0x10000000, 1); /* sub_image_height */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7403, "height", tr1))(tr1)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(7283, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 7268, 0x04000000, 1); /* has_error */
			*(EIF_BOOLEAN *)(Current + RTWA(7268, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 7292, 0xF800038B, 0); /* right_surface */
			tr1 = RTLNSMART(RTWCT(7292, dtype, Dftype(Current)).id);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7382, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
			RTNHOOK(11,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7292, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(12);
			RTDBGAA(Current, dtype, 7291, 0xF800038B, 0); /* left_surface */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7291, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(13);
		RTDBGAA(Current, dtype, 7268, 0x04000000, 1); /* has_error */
		*(EIF_BOOLEAN *)(Current + RTWA(7268, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(14);
		RTDBGAA(Current, dtype, 7292, 0xF800038B, 0); /* right_surface */
		tr1 = RTLNSMART(RTWCT(7292, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7382, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(14,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7292, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		RTDBGAA(Current, dtype, 7291, 0xF800038B, 0); /* left_surface */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7291, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(16);
	RTDBGAA(Current, dtype, 7284, 0xF800038B, 0); /* surface */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7284, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7267, dtype))(Current);
	RTHOOK(18);
	RTDBGAA(Current, dtype, 7285, 0x04000000, 1); /* is_dirty */
	*(EIF_BOOLEAN *)(Current + RTWA(7285, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {MARYO}.initialize_animation_coordinate */
void F903_9398 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_animation_coordinate";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 902, Current, 0, 0, 15101);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15101);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7287, 0xF8000137, 0); /* animation_coordinates */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,358,0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3422, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7287, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7284, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7404, "width", tr3))(tr3)).it_i4);
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L));
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7284, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(4,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7404, "width", tr3))(tr3)).it_i4);
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L)) * ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", tr1))(tr1, ur1x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 7280, 0x10000000, 1); /* sub_image_x */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(6,2);
	ti4_1 = eif_integer_32_item(RTCV(tr2),1);
	*(EIF_INTEGER_32 *)(Current + RTWA(7280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 7281, 0x10000000, 1); /* sub_image_y */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(7,2);
	ti4_1 = eif_integer_32_item(RTCV(tr2),2);
	*(EIF_INTEGER_32 *)(Current + RTWA(7281, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {MARYO}.has_error */
EIF_TYPED_VALUE F903_9399 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7268,Dtype(Current)));
	return r;
}


/* {MARYO}.update */
void F903_9400 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 902, Current, 2, 1, 15103);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15103);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7274, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7275, dtype));
	if ((EIF_BOOLEAN) (tb1 || tb2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80000AE, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7290, dtype))(Current)).it_n4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(2,2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", tr2))(tr2)).it_i4);
		RTNHOOK(2,3);
		tu4_2 = (EIF_NATURAL_32) ti4_1;
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_32) (((EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 / tu4_1) % tu4_2)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L)));
		ui4_1 = ti4_1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(3);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7280, dtype));
		ti4_2 = eif_integer_32_item(RTCV(loc1),1);
		if (!(EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7281, dtype));
			ti4_2 = eif_integer_32_item(RTCV(loc1),2);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 7280, 0x10000000, 1); /* sub_image_x */
			ti4_1 = eif_integer_32_item(RTCV(loc1),1);
			*(EIF_INTEGER_32 *)(Current + RTWA(7280, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(5);
			RTDBGAA(Current, dtype, 7281, 0x10000000, 1); /* sub_image_y */
			ti4_1 = eif_integer_32_item(RTCV(loc1),2);
			*(EIF_INTEGER_32 *)(Current + RTWA(7281, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 7285, 0x04000000, 1); /* is_dirty */
			*(EIF_BOOLEAN *)(Current + RTWA(7285, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
		loc2 = *(EIF_NATURAL_32 *)(Current + RTWA(7288, dtype));
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) (arg1 - loc2);
		RTHOOK(8);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7289, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN) ((EIF_NATURAL_32) (loc2 / tu4_1) > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7275, dtype));
			if (tb1) {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 7284, 0xF800038B, 0); /* surface */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(7284, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 7276, 0x10000000, 1); /* x */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7289, dtype))(Current)).it_n4);
				ti4_2 = (EIF_INTEGER_32) (EIF_NATURAL_32) (loc2 / tu4_1);
				(*(EIF_INTEGER_32 *)(Current + RTWA(7276, dtype))) += ti4_2;
			} else {
				RTHOOK(12);
				RTDBGAA(Current, dtype, 7284, 0xF800038B, 0); /* surface */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7291, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(7284, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(13);
				RTDBGAA(Current, dtype, 7276, 0x10000000, 1); /* x */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7289, dtype))(Current)).it_n4);
				ti4_2 = (EIF_INTEGER_32) (EIF_NATURAL_32) (loc2 / tu4_1);
				(*(EIF_INTEGER_32 *)(Current + RTWA(7276, dtype))) -= ti4_2;
			}
			RTHOOK(14);
			RTDBGAA(Current, dtype, 7288, 0x38000000, 1); /* old_timestamp */
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7289, dtype))(Current)).it_n4);
			tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7289, dtype))(Current)).it_n4);
			(*(EIF_NATURAL_32 *)(Current + RTWA(7288, dtype))) += (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc2 / tu4_2) * tu4_3);
			RTHOOK(15);
			RTDBGAA(Current, dtype, 7285, 0x04000000, 1); /* is_dirty */
			*(EIF_BOOLEAN *)(Current + RTWA(7285, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef arg1
}

/* {MARYO}.go_left */
void F903_9401 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_left";
	RTEX;
#define arg1 arg1x.it_n4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 902, Current, 0, 1, 15104);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15104);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7288, 0x38000000, 1); /* old_timestamp */
	*(EIF_NATURAL_32 *)(Current + RTWA(7288, dtype)) = (EIF_NATURAL_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7274, 0x04000000, 1); /* going_left */
	*(EIF_BOOLEAN *)(Current + RTWA(7274, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MARYO}.go_right */
void F903_9402 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_right";
	RTEX;
#define arg1 arg1x.it_n4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 902, Current, 0, 1, 15105);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15105);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7288, 0x38000000, 1); /* old_timestamp */
	*(EIF_NATURAL_32 *)(Current + RTWA(7288, dtype)) = (EIF_NATURAL_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7275, 0x04000000, 1); /* going_right */
	*(EIF_BOOLEAN *)(Current + RTWA(7275, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MARYO}.stop_left */
void F903_9403 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop_left";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 902, Current, 0, 0, 15106);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15106);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7274, 0x04000000, 1); /* going_left */
	*(EIF_BOOLEAN *)(Current + RTWA(7274, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7275, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7280, 0x10000000, 1); /* sub_image_x */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2465, "first", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		ti4_1 = eif_integer_32_item(RTCV(tr2),1);
		*(EIF_INTEGER_32 *)(Current + RTWA(7280, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7281, 0x10000000, 1); /* sub_image_y */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2465, "first", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(4,2);
		ti4_1 = eif_integer_32_item(RTCV(tr2),2);
		*(EIF_INTEGER_32 *)(Current + RTWA(7281, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 7285, 0x04000000, 1); /* is_dirty */
		*(EIF_BOOLEAN *)(Current + RTWA(7285, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
}

/* {MARYO}.stop_right */
void F903_9404 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop_right";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 902, Current, 0, 0, 15107);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15107);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7275, 0x04000000, 1); /* going_right */
	*(EIF_BOOLEAN *)(Current + RTWA(7275, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7274, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7280, 0x10000000, 1); /* sub_image_x */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2465, "first", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		ti4_1 = eif_integer_32_item(RTCV(tr2),1);
		*(EIF_INTEGER_32 *)(Current + RTWA(7280, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7281, 0x10000000, 1); /* sub_image_y */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7287, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2465, "first", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(4,2);
		ti4_1 = eif_integer_32_item(RTCV(tr2),2);
		*(EIF_INTEGER_32 *)(Current + RTWA(7281, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 7285, 0x04000000, 1); /* is_dirty */
		*(EIF_BOOLEAN *)(Current + RTWA(7285, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
}

/* {MARYO}.going_left */
EIF_TYPED_VALUE F903_9405 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7274,Dtype(Current)));
	return r;
}


/* {MARYO}.going_right */
EIF_TYPED_VALUE F903_9406 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7275,Dtype(Current)));
	return r;
}


/* {MARYO}.x */
EIF_TYPED_VALUE F903_9407 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7276,Dtype(Current)));
	return r;
}


/* {MARYO}.y */
EIF_TYPED_VALUE F903_9408 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7277,Dtype(Current)));
	return r;
}


/* {MARYO}.set_x */
void F903_9409 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 902, Current, 0, 1, 15112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15112);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7276, 0x10000000, 1); /* x */
	*(EIF_INTEGER_32 *)(Current + RTWA(7276, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_assign", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7276, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MARYO}.set_y */
void F903_9410 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 902, Current, 0, 1, 15113);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(902, Current, 15113);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7277, 0x10000000, 1); /* y */
	*(EIF_INTEGER_32 *)(Current + RTWA(7277, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_assign", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7277, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MARYO}.sub_image_x */
EIF_TYPED_VALUE F903_9411 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7280,Dtype(Current)));
	return r;
}


/* {MARYO}.sub_image_y */
EIF_TYPED_VALUE F903_9412 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7281,Dtype(Current)));
	return r;
}


/* {MARYO}.sub_image_width */
EIF_TYPED_VALUE F903_9413 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7282,Dtype(Current)));
	return r;
}


/* {MARYO}.sub_image_height */
EIF_TYPED_VALUE F903_9414 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7283,Dtype(Current)));
	return r;
}


/* {MARYO}.surface */
EIF_TYPED_VALUE F903_9415 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7284,Dtype(Current)));
	return r;
}


/* {MARYO}.is_dirty */
EIF_TYPED_VALUE F903_9416 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7285,Dtype(Current)));
	return r;
}


/* {MARYO}.unset_dirty */
void F903_9417 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unset_dirty";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 902, Current, 0, 0, 15120);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(902, Current, 15120);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7285, 0x04000000, 1); /* is_dirty */
	*(EIF_BOOLEAN *)(Current + RTWA(7285, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {MARYO}.animation_coordinates */
EIF_TYPED_VALUE F903_9418 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7287,Dtype(Current)));
	return r;
}


/* {MARYO}.old_timestamp */
EIF_TYPED_VALUE F903_9419 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(7288,Dtype(Current)));
	return r;
}


/* {MARYO}.movement_delta */
EIF_TYPED_VALUE F903_9420 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 5U);
	return r;
}

/* {MARYO}.animation_delta */
EIF_TYPED_VALUE F903_9421 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 75U);
	return r;
}

/* {MARYO}.left_surface */
EIF_TYPED_VALUE F903_9422 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7291,Dtype(Current)));
	return r;
}


/* {MARYO}.right_surface */
EIF_TYPED_VALUE F903_9423 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7292,Dtype(Current)));
	return r;
}


void EIF_Minit903 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
