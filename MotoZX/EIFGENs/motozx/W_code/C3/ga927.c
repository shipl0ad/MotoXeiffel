/*
 * Code for class GAME_JOYSTICK
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F927_9835(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F927_9836(EIF_REFERENCE);
extern void F927_9837(EIF_REFERENCE);
extern void F927_9838(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9840(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9841(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9842(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F927_9843(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9844(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F927_9845(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9846(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F927_9847(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9848(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F927_9849(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9850(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9851(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9852(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9853(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9854(EIF_REFERENCE);
extern EIF_TYPED_VALUE F927_9855(EIF_REFERENCE);
extern void F927_9856(EIF_REFERENCE);
extern void EIF_Minit927(void);

#ifdef __cplusplus
}
#endif

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_JOYSTICK}.make */
void F927_9835 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 1, 15579);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15579);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7674, 0xF80003A5, 0); /* events_controller */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7397, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7375, "events_controller", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(7674, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7675, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(7675, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7160, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef arg1
}

/* {GAME_JOYSTICK}.name */
EIF_TYPED_VALUE F927_9836 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "name";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 926, Current, 1, 0, 15580);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15580);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF800007E, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(126, 0x01).id);
		tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5026, 863))(Current, up1x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1644, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(2,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF800007E, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(126, 0x01).id);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7675, dtype));
		ui4_1 = ti4_1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5027, 863))(Current, ui4_1x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1644, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1655, "string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {GAME_JOYSTICK}.open */
void F927_9837 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "open";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15581);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15581);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("open_joystick_not_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6536, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7672, 0x40000000, 1); /* item */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7675, dtype));
	ui4_1 = ti4_1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5005, 863))(Current, ui4_1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(7672, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	tr1 = RTMS_EX_H("Error while opening the Joystick.",33,130725934);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6605, dtype))(Current, up1x, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_open_or_error", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6544, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef ui4_1
}

/* {GAME_JOYSTICK}.close */
void F927_9838 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "close";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 926, Current, 1, 0, 15582);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15582);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("close_is_open", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7673, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8142, "is_open", loc1))(loc1)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8167, "close", loc1))(loc1);
	}
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5006, 863))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
}

/* {GAME_JOYSTICK}.is_open */
EIF_TYPED_VALUE F927_9839 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_open";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15583);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15583);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	tb2 = !tp1;
	if ((EIF_BOOLEAN) !tb2) {
		tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
		up1 = tp1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5010, 863))(Current, up1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {GAME_JOYSTICK}.index */
EIF_TYPED_VALUE F927_9840 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7675,Dtype(Current)));
	return r;
}


/* {GAME_JOYSTICK}.axes_number */
EIF_TYPED_VALUE F927_9841 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "axes_number";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15585);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15585);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("get_axes_number_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6536, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5011, 863))(Current, up1x)).it_i4);
	RTHOOK(4);
	ui4_1 = Result;
	tr1 = RTMS_EX_H("Error while querying the number of joystick axes.",49,583915054);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6604, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_JOYSTICK}.axis_value */
EIF_TYPED_VALUE F927_9842 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "axis_value";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT16, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 1, 15586);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15586);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("get_axis_value_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("get_axis_value_axis_id_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7660, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x14000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	ui4_1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5015, 863))(Current, up1x, ui4_1x)).it_i2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT16; r.it_i2 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {GAME_JOYSTICK}.balls_number */
EIF_TYPED_VALUE F927_9843 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "balls_number";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15587);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15587);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("get_balls_number_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6536, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5016, 863))(Current, up1x)).it_i4);
	RTHOOK(4);
	ui4_1 = Result;
	tr1 = RTMS_EX_H("Error while querying the number of joystick balls.",50,1424935982);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6604, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_JOYSTICK}.ball_change */
EIF_TYPED_VALUE F927_9844 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "ball_change";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 926, Current, 3, 1, 15588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15588);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("get_ball_value_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("get_ball_value_ball_id_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7660, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6536, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5008, 863))(Current);
	RTHOOK(5);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	ui4_1 = arg1;
	up2 = (EIF_INTEGER_32 *) &(loc1);
	up3 = (EIF_INTEGER_32 *) &(loc2);
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5017, 863))(Current, up1x, ui4_1x, up2x, up3x)).it_i4);
	RTHOOK(6);
	RTDBGAL(Current, 0, 0xF80000AE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc2;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ui4_1 = loc3;
	tr1 = RTMS_EX_H("Error while querying the state change of joystick ball.",55,217809454);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6604, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef arg1
}

/* {GAME_JOYSTICK}.buttons_number */
EIF_TYPED_VALUE F927_9845 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "buttons_number";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15589);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15589);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("get_buttons_number_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6536, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5018, 863))(Current, up1x)).it_i4);
	RTHOOK(4);
	ui4_1 = Result;
	tr1 = RTMS_EX_H("Error while querying the number of joystick buttons.",52,726901038);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6604, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_JOYSTICK}.is_button_pressed */
EIF_TYPED_VALUE F927_9846 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_button_pressed";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 1, 15590);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15590);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_buttons_pressed_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_button_pressed_button_id_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7664, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	ui4_1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5019, 863))(Current, up1x, ui4_1x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {GAME_JOYSTICK}.hats_number */
EIF_TYPED_VALUE F927_9847 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hats_number";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15591);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("get_hats_number_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6536, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5020, 863))(Current, up1x)).it_i4);
	RTHOOK(4);
	ui4_1 = Result;
	tr1 = RTMS_EX_H("Error while querying the number of joystick hats.",49,199075886);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6604, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_JOYSTICK}.hat_state */
EIF_TYPED_VALUE F927_9848 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hat_state";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 1, 15592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15592);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("get_hat_state_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("get_hat_state_hat_id_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7666, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF800035D, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(861, 0x01).id);
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	ui4_1 = arg1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5021, 863))(Current, up1x, ui4_1x)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4956, Dtype(tr1)))(tr1, uu1_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {GAME_JOYSTICK}.guid */
EIF_TYPED_VALUE F927_9849 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "guid";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 926, Current, 2, 0, 15593);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15593);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 50L);
	tp1 = malloc((size_t)ui4_1);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
		up1 = tp1;
		up2 = loc1;
		ui4_1 = ((EIF_INTEGER_32) 50L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5022, 863))(Current, up1x, up2x, ui4_1x);
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7675, dtype));
		ui4_1 = ti4_1;
		up1 = loc1;
		ui4_2 = ((EIF_INTEGER_32) 50L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5023, 863))(Current, ui4_1x, up1x, ui4_2x);
	}
	RTHOOK(5);
	RTDBGAL(Current, 2, 0xF800007E, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(126, 0x01).id);
	up1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1648, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(5,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1655, "string", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
}

/* {GAME_JOYSTICK}.instance_id */
EIF_TYPED_VALUE F927_9850 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "instance_id";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15594);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15594);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_buttons_pressed_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6536, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5024, 863))(Current, up1x)).it_i4);
	RTHOOK(4);
	ui4_1 = Result;
	tr1 = RTMS_EX_H("Error while querying the joystick\'s instance ID.",48,1167036462);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6604, dtype))(Current, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_JOYSTICK}.is_haptic_capable */
EIF_TYPED_VALUE F927_9851 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_haptic_capable";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 926, Current, 1, 0, 15595);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15595);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_buttons_pressed_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_haptic_enable", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7397, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7308, "is_haptic_enable", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6536, dtype))(Current);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7672, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5025, 863))(Current, up1x)).it_i4);
	RTHOOK(5);
	ui4_1 = loc1;
	tr1 = RTMS_EX_H("Error while querying if the joystick has haptic functionnalities.",65,934654510);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6604, dtype))(Current, ui4_1x, ur1x);
	RTHOOK(6);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {GAME_JOYSTICK}.haptic_controller */
EIF_TYPED_VALUE F927_9852 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "haptic_controller";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 926, Current, 1, 0, 15596);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15596);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_buttons_pressed_opened", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_haptic_capable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_haptic_enable", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7397, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7308, "is_haptic_enable", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7673, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF80003AA, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 0, 0xF80003AA, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(938, 0x01).id);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8186, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(6,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 7673, 0xF80003AA, 0); /* internal_haptic_controller */
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + RTWA(7673, dtype)) = (EIF_REFERENCE) RTCCL(Result);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {GAME_JOYSTICK}.events_controller */
EIF_TYPED_VALUE F927_9853 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7674,Dtype(Current)));
	return r;
}


/* {GAME_JOYSTICK}.item */
EIF_TYPED_VALUE F927_9854 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(7672,Dtype(Current)));
	return r;
}


/* {GAME_JOYSTICK}.internal_haptic_controller */
EIF_TYPED_VALUE F927_9855 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7673,Dtype(Current)));
	return r;
}


/* {GAME_JOYSTICK}.dispose */
void F927_9856 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 926, Current, 0, 0, 15600);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15600);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7659, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7658, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit927 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
