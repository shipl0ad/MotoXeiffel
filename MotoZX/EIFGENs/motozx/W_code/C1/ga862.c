/*
 * Code for class GAME_JOYSTICK_HAT_STATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F862_7027(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F862_7028(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7029(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7030(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7031(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7032(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7033(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7034(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7035(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7036(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_7037(EIF_REFERENCE);
extern void EIF_Minit862(void);

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

/* {GAME_JOYSTICK_HAT_STATE}.make */
void F862_7027 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_n1
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12709);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12709);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4966, 0x30000000, 1); /* state */
	*(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current))) = (EIF_NATURAL_8) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GAME_JOYSTICK_HAT_STATE}.is_centered */
EIF_TYPED_VALUE F862_7028 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_centered";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12710);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12710);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5805, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_up */
EIF_TYPED_VALUE F862_7029 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_up";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12711);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12711);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5806, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_right */
EIF_TYPED_VALUE F862_7030 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_right";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12712);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12712);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5807, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_down */
EIF_TYPED_VALUE F862_7031 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_down";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12713);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12713);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5808, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_left */
EIF_TYPED_VALUE F862_7032 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12714);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12714);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5809, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_right_up */
EIF_TYPED_VALUE F862_7033 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_right_up";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12715);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12715);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5810, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_right_down */
EIF_TYPED_VALUE F862_7034 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_right_down";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12716);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12716);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5811, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_left_up */
EIF_TYPED_VALUE F862_7035 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left_up";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12717);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12717);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5812, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_left_down */
EIF_TYPED_VALUE F862_7036 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left_down";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12718);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12718);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5813, 863))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.state */
EIF_TYPED_VALUE F862_7037 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(4966,Dtype(Current)));
	return r;
}


void EIF_Minit862 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
