/*
 * Code for class IMG_SDL_IMAGE_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F863_7038(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7039(EIF_REFERENCE);
extern EIF_TYPED_VALUE F863_7040(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F863_7041(EIF_REFERENCE);
extern EIF_TYPED_VALUE F863_7042(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7043(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7044(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7045(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7046(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7047(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7048(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7049(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7050(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7051(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7052(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7053(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7054(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F863_7056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F863_7057(EIF_REFERENCE);
extern void EIF_Minit863(void);

#ifdef __cplusplus
}
#endif

#include "SDL_image.h"
#include <SDL_image.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IMG_SDL_IMAGE_EXTERNAL}.img_load_rw */
EIF_TYPED_VALUE F863_7038 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "img_load_rw";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 2, 12719);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12719);
	RTIV(Current, RTAL);Result = (EIF_POINTER) IMG_Load_RW((SDL_RWops *) arg1, (int) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg2
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_geterror */
EIF_TYPED_VALUE F863_7039 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "img_geterror";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 0, 12720);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12720);
	RTIV(Current, RTAL);Result = (EIF_POINTER) IMG_GetError();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_init */
EIF_TYPED_VALUE F863_7040 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_init";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12721);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12721);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_Init((int) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_quit */
void F863_7041 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "img_quit";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 0, 12722);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12722);
	RTIV(Current, RTAL);IMG_Quit();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_iscur */
EIF_TYPED_VALUE F863_7042 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_iscur";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12723);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12723);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isCUR((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_isico */
EIF_TYPED_VALUE F863_7043 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_isico";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12724);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12724);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isICO((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_isbmp */
EIF_TYPED_VALUE F863_7044 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_isbmp";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12725);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12725);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isBMP((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_ispnm */
EIF_TYPED_VALUE F863_7045 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_ispnm";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12726);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12726);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isPNM((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_isxpm */
EIF_TYPED_VALUE F863_7046 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_isxpm";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12727);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12727);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isXPM((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_isxcf */
EIF_TYPED_VALUE F863_7047 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_isxcf";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12728);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12728);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isXCF((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_ispcx */
EIF_TYPED_VALUE F863_7048 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_ispcx";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12729);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12729);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isPCX((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_isgif */
EIF_TYPED_VALUE F863_7049 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_isgif";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12730);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12730);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isGIF((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_isjpg */
EIF_TYPED_VALUE F863_7050 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_isjpg";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12731);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12731);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isJPG((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_istif */
EIF_TYPED_VALUE F863_7051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_istif";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12732);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12732);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isTIF((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_ispng */
EIF_TYPED_VALUE F863_7052 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_ispng";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12733);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12733);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isPNG((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_islbm */
EIF_TYPED_VALUE F863_7053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_islbm";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12734);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12734);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isLBM((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_isxv */
EIF_TYPED_VALUE F863_7054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "img_isxv";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12735);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12735);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) IMG_isXV((SDL_RWops *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_init_jpg */
EIF_TYPED_VALUE F863_7055 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "img_init_jpg";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 0, 12736);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12736);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) IMG_INIT_JPG;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_init_png */
EIF_TYPED_VALUE F863_7056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "img_init_png";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 0, 12737);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12737);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) IMG_INIT_PNG;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {IMG_SDL_IMAGE_EXTERNAL}.img_init_tif */
EIF_TYPED_VALUE F863_7057 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "img_init_tif";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 0, 12738);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12738);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) IMG_INIT_TIF;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit863 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
