/*
 * Code for class GAME_FINGER_STATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F894_9224(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F894_9225(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_9226(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_9227(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_9228(EIF_REFERENCE);
extern void EIF_Minit894(void);

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

/* {GAME_FINGER_STATE}.make */
void F894_9224 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 893, Current, 1, 2, 14892);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(893, Current, 14892);
	RTCC(arg1, 893, l_feature_name, 1, eif_new_type(912, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7400, "finger_count", arg1))(arg1)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
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
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ti8_1 = *(EIF_INTEGER_64 *)(arg1 + RTVA(7404, "index", arg1));
	ui8_1 = ti8_1;
	ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5187, 863))(Current, ui8_1x, ui4_1x)).it_p);
	RTHOOK(4);
	tb1 = !loc1;
	if (tb1) {
		RTHOOK(5);
		up1 = loc1;
		tr1 = RTMS_EX_H("Cannot get the touch finger state.",34,1792091694);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6605, dtype))(Current, up1x, ur1x);
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 7122, 0x24000000, 1); /* index */
		up1 = loc1;
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5702, 863))(Current, up1x)).it_i8);
		*(EIF_INTEGER_64 *)(Current + RTWA(7122, dtype)) = (EIF_INTEGER_64) ti8_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 7123, 0x18000000, 1); /* x */
		up1 = loc1;
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5703, 863))(Current, up1x)).it_r4);
		*(EIF_REAL_32 *)(Current + RTWA(7123, dtype)) = (EIF_REAL_32) tr4_1;
		RTHOOK(8);
		RTDBGAA(Current, dtype, 7124, 0x18000000, 1); /* y */
		up1 = loc1;
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5704, 863))(Current, up1x)).it_r4);
		*(EIF_REAL_32 *)(Current + RTWA(7124, dtype)) = (EIF_REAL_32) tr4_1;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 7125, 0x18000000, 1); /* pressure */
		up1 = loc1;
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5705, 863))(Current, up1x)).it_r4);
		*(EIF_REAL_32 *)(Current + RTWA(7125, dtype)) = (EIF_REAL_32) tr4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui8_1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {GAME_FINGER_STATE}.index */
EIF_TYPED_VALUE F894_9225 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(7122,Dtype(Current)));
	return r;
}


/* {GAME_FINGER_STATE}.x */
EIF_TYPED_VALUE F894_9226 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(7123,Dtype(Current)));
	return r;
}


/* {GAME_FINGER_STATE}.y */
EIF_TYPED_VALUE F894_9227 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(7124,Dtype(Current)));
	return r;
}


/* {GAME_FINGER_STATE}.pressure */
EIF_TYPED_VALUE F894_9228 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(7125,Dtype(Current)));
	return r;
}


void EIF_Minit894 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif