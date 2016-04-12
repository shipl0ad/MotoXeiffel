/*
 * Code for class reference GAME_WINDOW_RENDERED_BUILDER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F911_9591(EIF_REFERENCE);
extern void F911_9592(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F911_9593(EIF_REFERENCE);
extern void F911_9594(EIF_REFERENCE);
extern EIF_TYPED_VALUE F911_9595(EIF_REFERENCE);
extern void F911_9596(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F911_9597(EIF_REFERENCE);
extern void F911_9598(EIF_REFERENCE);
extern EIF_TYPED_VALUE F911_9599(EIF_REFERENCE);
extern void F911_9600(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F911_9601(EIF_REFERENCE);
extern void F911_9602(EIF_REFERENCE);
extern EIF_TYPED_VALUE F911_9603(EIF_REFERENCE);
extern void F911_9604(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F911_9605(EIF_REFERENCE);
extern void F911_9606(EIF_REFERENCE);
extern EIF_TYPED_VALUE F911_9607(EIF_REFERENCE);
extern void F911_9608(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F911_9609(EIF_REFERENCE);
extern void F911_9610(EIF_REFERENCE);
extern EIF_TYPED_VALUE F911_9611(EIF_REFERENCE);
extern void F911_9612(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F911_9613(EIF_REFERENCE);
extern EIF_TYPED_VALUE F911_9614(EIF_REFERENCE);
extern void EIF_Minit911(void);

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
EIF_TYPED_VALUE F911_9591 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7452,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_no_default_renderer */
void F911_9592 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 1, 15334);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15334);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7454, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7455, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7452, dtype));
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
void F911_9593 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15335);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15335);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7452, 0x04000000, 1); /* no_default_renderer */
	*(EIF_BOOLEAN *)(Current + RTWA(7452, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7474, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7459, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7463, dtype))(Current);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7467, dtype))(Current);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7471, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7452, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_must_renderer_support_texture_target_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7456, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("is_must_renderer_synchronize_update_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7460, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("is_must_renderer_be_software_rendering_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7464, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("is_must_renderer_be_hardware_accelerated_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7468, dtype));
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
void F911_9594 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15336);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15336);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7452, 0x04000000, 1); /* no_default_renderer */
	*(EIF_BOOLEAN *)(Current + RTWA(7452, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7452, dtype));
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
EIF_TYPED_VALUE F911_9595 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7456,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_must_renderer_support_texture_target */
void F911_9596 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 1, 15338);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15338);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7458, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7459, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7456, dtype));
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
void F911_9597 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15339);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15339);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7456, 0x04000000, 1); /* must_renderer_support_texture_target */
	*(EIF_BOOLEAN *)(Current + RTWA(7456, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7455, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7474, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7456, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_default_renderer_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7452, dtype));
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
void F911_9598 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15340);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15340);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7456, 0x04000000, 1); /* must_renderer_support_texture_target */
	*(EIF_BOOLEAN *)(Current + RTWA(7456, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7456, dtype));
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
EIF_TYPED_VALUE F911_9599 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7460,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_must_renderer_synchronize_update */
void F911_9600 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 1, 15342);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15342);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7462, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7463, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7460, dtype));
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
void F911_9601 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15343);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15343);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7460, 0x04000000, 1); /* must_renderer_synchronize_update */
	*(EIF_BOOLEAN *)(Current + RTWA(7460, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7455, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7474, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7460, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_default_renderer_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7452, dtype));
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
void F911_9602 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15344);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15344);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7460, 0x04000000, 1); /* must_renderer_synchronize_update */
	*(EIF_BOOLEAN *)(Current + RTWA(7460, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7460, dtype));
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
EIF_TYPED_VALUE F911_9603 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7464,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_must_renderer_be_software_rendering */
void F911_9604 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 1, 15346);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15346);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7466, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7467, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7464, dtype));
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
void F911_9605 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15347);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15347);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7464, 0x04000000, 1); /* must_renderer_be_software_rendering */
	*(EIF_BOOLEAN *)(Current + RTWA(7464, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7455, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7474, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7464, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_default_renderer_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7452, dtype));
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
void F911_9606 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15348);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15348);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7464, 0x04000000, 1); /* must_renderer_be_software_rendering */
	*(EIF_BOOLEAN *)(Current + RTWA(7464, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7464, dtype));
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
EIF_TYPED_VALUE F911_9607 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7468,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_must_renderer_be_hardware_accelerated */
void F911_9608 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 1, 15350);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15350);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7470, dtype))(Current);
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7471, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_assign", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7468, dtype));
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
void F911_9609 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15351);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15351);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7468, 0x04000000, 1); /* must_renderer_be_hardware_accelerated */
	*(EIF_BOOLEAN *)(Current + RTWA(7468, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7455, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7474, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7468, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_renderer_driver_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_default_renderer_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7452, dtype));
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
void F911_9610 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15328);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15328);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7468, 0x04000000, 1); /* must_renderer_be_hardware_accelerated */
	*(EIF_BOOLEAN *)(Current + RTWA(7468, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7468, dtype));
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
EIF_TYPED_VALUE F911_9611 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7472,Dtype(Current)));
	return r;
}


/* {GAME_WINDOW_RENDERED_BUILDER}.set_renderer_driver */
void F911_9612 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 1, 15330);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15330);
	if (arg1) {
		RTCC(arg1, 910, l_feature_name, 1, eif_new_type(914, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7472, 0xF8000392, 0); /* renderer_driver */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(7472, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
void F911_9613 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 0, 0, 15331);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15331);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7473, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_unset", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
EIF_TYPED_VALUE F911_9614 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 910, Current, 1, 0, 15332);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(910, Current, 15332);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("game_screen_video_enabled", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7118, "is_video_enable", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7452, dtype));
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF80003A0, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(928, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7410, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7448, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7412, dtype));
		ub1 = tb1;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7416, dtype));
		ub2 = tb2;
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(7424, dtype));
		ub3 = tb3;
		tb4 = *(EIF_BOOLEAN *)(Current + RTWA(7428, dtype));
		ub4 = tb4;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7436, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7438, dtype));
		ui4_2 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7442, dtype));
		ui4_3 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(7444, dtype));
		ui4_4 = ti4_4;
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7376, dtype));
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7911, Dtype(tr1)))(tr1, ur1x, ur2x, ub1x, ub2x, ub3x, ub4x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, uu4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF80003A0, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(928, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7410, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7448, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr3);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7412, dtype));
			ub1 = tb1;
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7416, dtype));
			ub2 = tb2;
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(7424, dtype));
			ub3 = tb3;
			tb4 = *(EIF_BOOLEAN *)(Current + RTWA(7428, dtype));
			ub4 = tb4;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7436, dtype));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7438, dtype));
			ui4_2 = ti4_2;
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7442, dtype));
			ui4_3 = ti4_3;
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(7444, dtype));
			ui4_4 = ti4_4;
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7376, dtype));
			uu4_1 = tu4_1;
			ur3 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8028, Dtype(tr1)))(tr1, ur1x, ur2x, ub1x, ub2x, ub3x, ub4x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, uu4_1x, ur3x);
			RTNHOOK(5,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF80003A0, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(928, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7410, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7448, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr3);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7412, dtype));
			ub1 = tb1;
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7416, dtype));
			ub2 = tb2;
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(7424, dtype));
			ub3 = tb3;
			tb4 = *(EIF_BOOLEAN *)(Current + RTWA(7428, dtype));
			ub4 = tb4;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7436, dtype));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7438, dtype));
			ui4_2 = ti4_2;
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7442, dtype));
			ui4_3 = ti4_3;
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(7444, dtype));
			ui4_4 = ti4_4;
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7376, dtype));
			uu4_1 = tu4_1;
			tb5 = *(EIF_BOOLEAN *)(Current + RTWA(7456, dtype));
			ub5 = tb5;
			tb6 = *(EIF_BOOLEAN *)(Current + RTWA(7460, dtype));
			ub6 = tb6;
			tb7 = *(EIF_BOOLEAN *)(Current + RTWA(7464, dtype));
			ub7 = tb7;
			tb8 = *(EIF_BOOLEAN *)(Current + RTWA(7468, dtype));
			ub8 = tb8;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8027, Dtype(tr1)))(tr1, ur1x, ur2x, ub1x, ub2x, ub3x, ub4x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, uu4_1x, ub5x, ub6x, ub7x, ub8x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_created", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Result + RTVA(6420, "has_error", Result));
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7922, "exists", Result))(Result)).it_b);
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

void EIF_Minit911 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
