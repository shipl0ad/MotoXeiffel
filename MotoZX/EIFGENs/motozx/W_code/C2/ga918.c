/*
 * Code for class reference GAME_WINDOW_RENDERED_BUILDER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F918_9676(EIF_REFERENCE);
extern void F918_9677(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F918_9678(EIF_REFERENCE);
extern void F918_9679(EIF_REFERENCE);
extern EIF_TYPED_VALUE F918_9680(EIF_REFERENCE);
extern void F918_9681(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F918_9682(EIF_REFERENCE);
extern void F918_9683(EIF_REFERENCE);
extern EIF_TYPED_VALUE F918_9684(EIF_REFERENCE);
extern void F918_9685(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F918_9686(EIF_REFERENCE);
extern void F918_9687(EIF_REFERENCE);
extern EIF_TYPED_VALUE F918_9688(EIF_REFERENCE);
extern void F918_9689(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F918_9690(EIF_REFERENCE);
extern void F918_9691(EIF_REFERENCE);
extern EIF_TYPED_VALUE F918_9692(EIF_REFERENCE);
extern void F918_9693(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F918_9694(EIF_REFERENCE);
extern void F918_9695(EIF_REFERENCE);
extern EIF_TYPED_VALUE F918_9696(EIF_REFERENCE);
extern void F918_9697(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F918_9698(EIF_REFERENCE);
extern EIF_TYPED_VALUE F918_9699(EIF_REFERENCE);
extern void EIF_Minit918(void);

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

/* {GAME_WINDOW_RENDERED_BUILDER}.no_default_renderer */
EIF_TYPED_VALUE F918_9676 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7534,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_no_default_renderer */
void F918_9677 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_no_default_renderer";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 917, Current, 0, 1, 15394);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15394);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7536, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7537, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7534, dtype));
		if ((tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.enable_no_default_renderer */
void F918_9678 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_no_default_renderer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15395);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15395);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7534, 0x04000000, 1); /* no_default_renderer */
	*(EIF_BOOLEAN *)(Current + RTWA(7534, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7556, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7541, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7545, dtype))(Current);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7549, dtype))(Current);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7553, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7534, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7554, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_must_renderer_support_texture_target_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7538, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("is_must_renderer_synchronize_update_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7542, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("is_must_renderer_be_software_rendering_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7546, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("is_must_renderer_be_hardware_accelerated_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7550, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.disable_no_default_renderer */
void F918_9679 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_no_default_renderer";
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15396);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15396);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7534, 0x04000000, 1); /* no_default_renderer */
	*(EIF_BOOLEAN *)(Current + RTWA(7534, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7534, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
}

/* {GAME_WINDOW_RENDERED_BUILDER}.must_renderer_support_texture_target */
EIF_TYPED_VALUE F918_9680 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7538,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_must_renderer_support_texture_target */
void F918_9681 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_must_renderer_support_texture_target";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 917, Current, 0, 1, 15398);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15398);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7540, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7541, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7538, dtype));
		if ((tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.enable_must_renderer_support_texture_target */
void F918_9682 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_must_renderer_support_texture_target";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15399);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15399);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7538, 0x04000000, 1); /* must_renderer_support_texture_target */
	*(EIF_BOOLEAN *)(Current + RTWA(7538, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7537, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7556, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7538, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7554, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_default_renderer_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7534, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.disable_must_renderer_support_texture_target */
void F918_9683 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_must_renderer_support_texture_target";
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15400);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15400);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7538, 0x04000000, 1); /* must_renderer_support_texture_target */
	*(EIF_BOOLEAN *)(Current + RTWA(7538, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7538, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
}

/* {GAME_WINDOW_RENDERED_BUILDER}.must_renderer_synchronize_update */
EIF_TYPED_VALUE F918_9684 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7542,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_must_renderer_synchronize_update */
void F918_9685 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_must_renderer_synchronize_update";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 917, Current, 0, 1, 15402);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15402);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7544, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7545, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7542, dtype));
		if ((tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.enable_must_renderer_synchronize_update */
void F918_9686 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_must_renderer_synchronize_update";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15403);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15403);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7542, 0x04000000, 1); /* must_renderer_synchronize_update */
	*(EIF_BOOLEAN *)(Current + RTWA(7542, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7537, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7556, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7542, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7554, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_default_renderer_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7534, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.disable_must_renderer_synchronize_update */
void F918_9687 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_must_renderer_synchronize_update";
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15404);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15404);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7542, 0x04000000, 1); /* must_renderer_synchronize_update */
	*(EIF_BOOLEAN *)(Current + RTWA(7542, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7542, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
}

/* {GAME_WINDOW_RENDERED_BUILDER}.must_renderer_be_software_rendering */
EIF_TYPED_VALUE F918_9688 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7546,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_must_renderer_be_software_rendering */
void F918_9689 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_must_renderer_be_software_rendering";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 917, Current, 0, 1, 15406);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15406);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7548, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7549, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7546, dtype));
		if ((tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.enable_must_renderer_be_software_rendering */
void F918_9690 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_must_renderer_be_software_rendering";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15407);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15407);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7546, 0x04000000, 1); /* must_renderer_be_software_rendering */
	*(EIF_BOOLEAN *)(Current + RTWA(7546, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7537, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7556, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7546, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7554, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_default_renderer_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7534, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.disable_must_renderer_be_software_rendering */
void F918_9691 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_must_renderer_be_software_rendering";
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15408);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15408);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7546, 0x04000000, 1); /* must_renderer_be_software_rendering */
	*(EIF_BOOLEAN *)(Current + RTWA(7546, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7546, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
}

/* {GAME_WINDOW_RENDERED_BUILDER}.must_renderer_be_hardware_accelerated */
EIF_TYPED_VALUE F918_9692 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7550,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_must_renderer_be_hardware_accelerated */
void F918_9693 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_must_renderer_be_hardware_accelerated";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 917, Current, 0, 1, 15410);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15410);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7552, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7553, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7550, dtype));
		if ((tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.enable_must_renderer_be_hardware_accelerated */
void F918_9694 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_must_renderer_be_hardware_accelerated";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15411);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15411);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7550, 0x04000000, 1); /* must_renderer_be_hardware_accelerated */
	*(EIF_BOOLEAN *)(Current + RTWA(7550, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7537, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7556, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7550, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7554, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_default_renderer_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7534, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.disable_must_renderer_be_hardware_accelerated */
void F918_9695 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_must_renderer_be_hardware_accelerated";
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
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15412);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15412);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7550, 0x04000000, 1); /* must_renderer_be_hardware_accelerated */
	*(EIF_BOOLEAN *)(Current + RTWA(7550, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7550, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
}

/* {GAME_WINDOW_RENDERED_BUILDER}.renderer_driver */
EIF_TYPED_VALUE F918_9696 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7554,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_renderer_driver */
void F918_9697 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_renderer_driver";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 917, Current, 0, 1, 15414);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15414);
	if (arg1) {
		RTCC(arg1, 917, l_feature_name, 1, eif_new_type(921, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7554, 0xF8000399, 0); /* renderer_driver */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(7554, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7554, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, arg1)) {
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
#undef up1
#undef arg1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.unset_renderer_driver */
void F918_9698 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unset_renderer_driver";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,ur1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 917, Current, 0, 0, 15415);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15415);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7555, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7554, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
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
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {GAME_WINDOW_RENDERED_BUILDER}.generate_window */
EIF_TYPED_VALUE F918_9699 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "generate_window";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_TYPED_VALUE ub3x = {{0}, SK_BOOL};
#define ub3 ub3x.it_b
	EIF_TYPED_VALUE ub4x = {{0}, SK_BOOL};
#define ub4 ub4x.it_b
	EIF_TYPED_VALUE ub5x = {{0}, SK_BOOL};
#define ub5 ub5x.it_b
	EIF_TYPED_VALUE ub6x = {{0}, SK_BOOL};
#define ub6 ub6x.it_b
	EIF_TYPED_VALUE ub7x = {{0}, SK_BOOL};
#define ub7 ub7x.it_b
	EIF_TYPED_VALUE ub8x = {{0}, SK_BOOL};
#define ub8 ub8x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,Result);
	RTLR(7,loc1);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 917, Current, 1, 0, 15416);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(917, Current, 15416);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("game_screen_video_enabled", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7397, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7300, "is_video_enable", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7534, dtype));
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF80003A8, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(936, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7492, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7530, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7494, dtype));
		ub1 = tb1;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7498, dtype));
		ub2 = tb2;
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(7506, dtype));
		ub3 = tb3;
		tb4 = *(EIF_BOOLEAN *)(Current + RTWA(7510, dtype));
		ub4 = tb4;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7518, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7520, dtype));
		ui4_2 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7524, dtype));
		ui4_3 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(7526, dtype));
		ui4_4 = ti4_4;
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7458, dtype));
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8018, Dtype(tr1)))(tr1, ur1x, ur2x, ub1x, ub2x, ub3x, ub4x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, uu4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7554, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF80003A8, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(936, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7492, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7530, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr3);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7494, dtype));
			ub1 = tb1;
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7498, dtype));
			ub2 = tb2;
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(7506, dtype));
			ub3 = tb3;
			tb4 = *(EIF_BOOLEAN *)(Current + RTWA(7510, dtype));
			ub4 = tb4;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7518, dtype));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7520, dtype));
			ui4_2 = ti4_2;
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7524, dtype));
			ui4_3 = ti4_3;
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(7526, dtype));
			ui4_4 = ti4_4;
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7458, dtype));
			uu4_1 = tu4_1;
			ur3 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8135, Dtype(tr1)))(tr1, ur1x, ur2x, ub1x, ub2x, ub3x, ub4x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, uu4_1x, ur3x);
			RTNHOOK(5,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF80003A8, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(936, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7492, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7530, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr3);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7494, dtype));
			ub1 = tb1;
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7498, dtype));
			ub2 = tb2;
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(7506, dtype));
			ub3 = tb3;
			tb4 = *(EIF_BOOLEAN *)(Current + RTWA(7510, dtype));
			ub4 = tb4;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7518, dtype));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7520, dtype));
			ui4_2 = ti4_2;
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7524, dtype));
			ui4_3 = ti4_3;
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(7526, dtype));
			ui4_4 = ti4_4;
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7458, dtype));
			uu4_1 = tu4_1;
			tb5 = *(EIF_BOOLEAN *)(Current + RTWA(7538, dtype));
			ub5 = tb5;
			tb6 = *(EIF_BOOLEAN *)(Current + RTWA(7542, dtype));
			ub6 = tb6;
			tb7 = *(EIF_BOOLEAN *)(Current + RTWA(7546, dtype));
			ub7 = tb7;
			tb8 = *(EIF_BOOLEAN *)(Current + RTWA(7550, dtype));
			ub8 = tb8;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8134, Dtype(tr1)))(tr1, ur1x, ur2x, ub1x, ub2x, ub3x, ub4x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, uu4_1x, ub5x, ub6x, ub7x, ub8x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_created", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Result + RTVA(6544, "has_error", Result));
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8029, "exists", Result))(Result)).it_b);
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
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef ub1
#undef ub2
#undef ub3
#undef ub4
#undef ub5
#undef ub6
#undef ub7
#undef ub8
}

void EIF_Minit918 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif