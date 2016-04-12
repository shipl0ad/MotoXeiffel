/*
 * Code for class IMAGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F896_9374(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_9376(EIF_REFERENCE);
extern void F896_9377(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_9378(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_9379(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_9380(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_9381(EIF_REFERENCE);
extern void F896_9382(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F896_9383(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_9384(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_9385(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_9386(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_9387(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_9388(EIF_REFERENCE);
extern void EIF_Minit896(void);

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

/* {IMAGE}.make */
void F896_9374 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 895, Current, 1, 1, 15073);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 15073);
	RTCC(arg1, 895, l_feature_name, 1, eif_new_type(920, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7269, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(7269, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800039A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(922, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7258, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7630, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6404, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6405, "open", loc1))(loc1);
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(6406, "is_open", loc1));
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 7270, 0xF8000397, 0); /* texture */
			tr1 = RTLNSMART(RTWCT(7270, dtype, Dftype(Current)).id);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7567, Dtype(tr1)))(tr1, ur1x, ur2x);
			RTNHOOK(6,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7270, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 7270, 0xF8000397, 0); /* texture */
			tr1 = RTLNSMART(RTWCT(7270, dtype, Dftype(Current)).id);
			ur1 = RTCCL(arg1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7271, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7564, Dtype(tr1)))(tr1, ur1x, ur2x, ui4_1x, ui4_2x);
			RTNHOOK(7,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7270, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 7269, 0x04000000, 1); /* has_error */
			*(EIF_BOOLEAN *)(Current + RTWA(7269, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(9);
		RTDBGAA(Current, dtype, 7270, 0xF8000397, 0); /* texture */
		tr1 = RTLNSMART(RTWCT(7270, dtype, Dftype(Current)).id);
		ur1 = RTCCL(arg1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7271, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = RTCCL(tr2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7564, Dtype(tr1)))(tr1, ur1x, ur2x, ui4_1x, ui4_2x);
		RTNHOOK(9,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7270, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		RTDBGAA(Current, dtype, 7269, 0x04000000, 1); /* has_error */
		*(EIF_BOOLEAN *)(Current + RTWA(7269, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7265, dtype))(Current, ui4_1x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7266, dtype))(Current, ui4_1x);
	RTHOOK(13);
	RTDBGAA(Current, dtype, 7267, 0x10000000, 1); /* sub_texture_x */
	*(EIF_INTEGER_32 *)(Current + RTWA(7267, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(14);
	RTDBGAA(Current, dtype, 7268, 0x10000000, 1); /* sub_texture_y */
	*(EIF_INTEGER_32 *)(Current + RTWA(7268, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(15);
	RTDBGAA(Current, dtype, 7264, 0x10000000, 1); /* height */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(15,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7570, "height", tr1))(tr1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(7264, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 7263, 0x10000000, 1); /* width */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(16,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7569, "width", tr1))(tr1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(7263, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(17);
	RTDBGAA(Current, dtype, 7259, 0x10000000, 1); /* depth */
	*(EIF_INTEGER_32 *)(Current + RTWA(7259, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {IMAGE}.depth */
EIF_TYPED_VALUE F896_9376 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7259,Dtype(Current)));
	return r;
}


/* {IMAGE}.set_depth */
void F896_9377 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_depth";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 15075);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 15075);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7259, 0x10000000, 1); /* depth */
	*(EIF_INTEGER_32 *)(Current + RTWA(7259, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {IMAGE}.x */
EIF_TYPED_VALUE F896_9378 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7261,Dtype(Current)));
	return r;
}


/* {IMAGE}.y */
EIF_TYPED_VALUE F896_9379 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7262,Dtype(Current)));
	return r;
}


/* {IMAGE}.width */
EIF_TYPED_VALUE F896_9380 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7263,Dtype(Current)));
	return r;
}


/* {IMAGE}.height */
EIF_TYPED_VALUE F896_9381 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7264,Dtype(Current)));
	return r;
}


/* {IMAGE}.set_x */
void F896_9382 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 15080);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 15080);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7261, 0x10000000, 1); /* x */
	*(EIF_INTEGER_32 *)(Current + RTWA(7261, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {IMAGE}.set_y */
void F896_9383 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 15081);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 15081);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7262, 0x10000000, 1); /* y */
	*(EIF_INTEGER_32 *)(Current + RTWA(7262, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {IMAGE}.sub_texture_x */
EIF_TYPED_VALUE F896_9384 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7267,Dtype(Current)));
	return r;
}


/* {IMAGE}.sub_texture_y */
EIF_TYPED_VALUE F896_9385 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7268,Dtype(Current)));
	return r;
}


/* {IMAGE}.has_error */
EIF_TYPED_VALUE F896_9386 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7269,Dtype(Current)));
	return r;
}


/* {IMAGE}.texture */
EIF_TYPED_VALUE F896_9387 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7270,Dtype(Current)));
	return r;
}


/* {IMAGE}.default_pixel_format */
EIF_TYPED_VALUE F896_9388 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_pixel_format";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 0, 15086);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 15086);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800039C, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(924, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7770, "set_bgra8888", Result))(Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

void EIF_Minit896 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
