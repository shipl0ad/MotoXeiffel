/*
 * Code for class GAME_GESTURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F874_8586(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F874_8587(EIF_REFERENCE);
extern EIF_TYPED_VALUE F874_8588(EIF_REFERENCE);
extern EIF_TYPED_VALUE F874_8589(EIF_REFERENCE);
extern void EIF_Minit874(void);

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

/* {GAME_GESTURE}.make */
void F874_8586 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r4
#define arg2 arg2x.it_r4
#define arg3 arg3x.it_n4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 873, Current, 0, 3, 14268);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(873, Current, 14268);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6497, 0x18000000, 1); /* x */
	*(EIF_REAL_32 *)(Current + RTWA(6497, dtype)) = (EIF_REAL_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6498, 0x18000000, 1); /* y */
	*(EIF_REAL_32 *)(Current + RTWA(6498, dtype)) = (EIF_REAL_32) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6499, 0x38000000, 1); /* fingers_count */
	*(EIF_NATURAL_32 *)(Current + RTWA(6499, dtype)) = (EIF_NATURAL_32) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_GESTURE}.x */
EIF_TYPED_VALUE F874_8587 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(6497,Dtype(Current)));
	return r;
}


/* {GAME_GESTURE}.y */
EIF_TYPED_VALUE F874_8588 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(6498,Dtype(Current)));
	return r;
}


/* {GAME_GESTURE}.fingers_count */
EIF_TYPED_VALUE F874_8589 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6499,Dtype(Current)));
	return r;
}


void EIF_Minit874 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
