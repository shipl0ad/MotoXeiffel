/*
 * Code for class SOUND
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F914_9588(EIF_REFERENCE);
extern EIF_TYPED_VALUE F914_9589(EIF_REFERENCE);
extern EIF_TYPED_VALUE F914_9590(EIF_REFERENCE);
extern void EIF_Minit914(void);

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

/* {SOUND}.jouer_son */
void F914_9588 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "jouer_son";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 913, Current, 0, 0, 15277);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(913, Current, 15277);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SOUND}.sound_source */
EIF_TYPED_VALUE F914_9589 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7465,Dtype(Current)));
	return r;
}


/* {SOUND}.l_sound */
EIF_TYPED_VALUE F914_9590 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7466,Dtype(Current)));
	return r;
}


void EIF_Minit914 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
