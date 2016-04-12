/*
 * Code for class NIVEAU
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F927_10205(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit927(void);

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

/* {NIVEAU}.make */
void F927_10205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 926, Current, 1, 1, 15929);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(926, Current, 15929);
	RTCC(arg1, 926, l_feature_name, 1, eif_new_type(915, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000397, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(919, 0x01).id);
	tr2 = RTMS_EX_H("backgr2.png",11,1474294119);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7680, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7193, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7194, "open", loc1))(loc1);
		RTHOOK(4);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(7195, "is_open", loc1));
		if (tb1) {
			RTHOOK(5);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7960, dtype))(Current, ur1x, ur2x);
		} else {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 6416, 0x04000000, 1); /* has_error */
			*(EIF_BOOLEAN *)(Current + RTWA(6416, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 6416, 0x04000000, 1); /* has_error */
		*(EIF_BOOLEAN *)(Current + RTWA(6416, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef arg1
}

void EIF_Minit927 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
