/*
 * Code for class AUDIO_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F948_10055(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F948_10056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10057(EIF_REFERENCE);
extern void F948_10058(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F948_10059(EIF_REFERENCE);
extern void F948_10060(EIF_REFERENCE);
extern void F948_10061(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10062(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10063(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10064(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10065(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10066(EIF_REFERENCE);
extern void F948_10067(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F948_10068(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F948_10069(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F948_10070(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F948_10071(EIF_REFERENCE);
extern void F948_10072(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F948_10073(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10074(EIF_REFERENCE);
extern void F948_10075(EIF_REFERENCE);
extern void F948_10076(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10077(EIF_REFERENCE);
extern void F948_10078(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F948_10079(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10080(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F948_10081(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F948_10082(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F948_10083(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F948_10084(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F948_10085(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10086(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10087(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10088(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10089(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10090(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10091(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10092(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10093(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10094(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10095(EIF_REFERENCE);
extern EIF_TYPED_VALUE F948_10096(EIF_REFERENCE);
extern void EIF_Minit948(void);

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

/* {AUDIO_SOURCE}.make */
void F948_10055 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 947, Current, 2, 1, 15789);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15789);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("make_source_sound_enable", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6637, "is_sound_enable", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7891, 0x04000000, 1); /* has_been_stop */
	*(EIF_BOOLEAN *)(Current + RTWA(7891, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800010F, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,271,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2611, Dtype(tr1)))(tr1, uu4_1x, ui4_1x, ui4_2x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 7889, 0xF80003AE, 0); /* g_mutex */
	tr1 = RTLNSMART(RTWCT(7889, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7782, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7889, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 7886, 0xF80001A8, 0); /* sound_queued */
	tr1 = RTLNSMART(RTWCT(7886, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2565, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7886, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 7881, 0xF800010F, 0); /* sound_al_buffer */
	tr1 = RTLNSMART(RTWCT(7881, dtype, Dftype(Current)).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7887, dtype))(Current)).it_i4);
	ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2611, Dtype(tr1)))(tr1, uu4_1x, ui4_1x, ui4_2x);
	RTNHOOK(6,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7881, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(Current, 2, 0xF8000000, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2643, "to_c", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6614, dtype))(Current);
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4964, 864))(Current, ui4_1x, up1x);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 7884, 0x38000000, 1); /* index */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", loc1))(loc1, ui4_1x)).it_n4);
	*(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(11);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
	uu4_1 = tu4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4961, 864))(Current, uu4_1x)).it_b);
	if (tb1) {
		RTHOOK(12);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7856, dtype))(Current, ui4_1x);
		RTHOOK(13);
		RTDBGAA(Current, dtype, 7882, 0x10000000, 1); /* buffer_tail */
		*(EIF_INTEGER_32 *)(Current + RTWA(7882, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(14);
		RTDBGAA(Current, dtype, 7883, 0x10000000, 1); /* buffer_head */
		*(EIF_INTEGER_32 *)(Current + RTWA(7883, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7854, dtype))(Current);
		RTHOOK(16);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(17);
			RTDBGAA(Current, dtype, 7872, 0x04000000, 1); /* is_open */
			*(EIF_BOOLEAN *)(Current + RTWA(7872, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(18);
			ur4_1 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
			ur4_2 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
			ur4_3 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6545, dtype))(Current, ur4_1x, ur4_2x, ur4_3x);
			RTHOOK(19);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(20);
				ur4_1 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
				ur4_2 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
				ur4_3 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7870, dtype))(Current, ur4_1x, ur4_2x, ur4_3x);
				RTHOOK(21);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(22);
					ur4_1 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
					ur4_2 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
					ur4_3 = (EIF_REAL_32) (EIF_REAL_64) 0.0;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7870, dtype))(Current, ur4_1x, ur4_2x, ur4_3x);
				}
			}
			RTHOOK(23);
			RTDBGAA(Current, dtype, 7872, 0x04000000, 1); /* is_open */
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
			*(EIF_BOOLEAN *)(Current + RTWA(7872, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
			RTHOOK(24);
			RTDBGAA(Current, dtype, 7885, 0x40000000, 1); /* temp_buffer */
			tp1 = *(EIF_POINTER *)(Current + RTWA(7885, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7855, dtype));
			ui4_1 = ti4_1;
			tp2 = malloc((size_t)ui4_1);
			*(EIF_POINTER *)(Current + RTWA(7885, dtype)) = (EIF_POINTER) tp2;
			RTHOOK(25);
			RTDBGAA(Current, dtype, 7888, 0x04000000, 1); /* is_thread_safe */
			*(EIF_BOOLEAN *)(Current + RTWA(7888, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(26);
		tr1 = RTMS_EX_H("Cannot generate a new source",28,2067670117);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("is_open", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		if ((!((EIF_BOOLEAN) !tb1) || (tb2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg1
}

/* {AUDIO_SOURCE}.initialize_buffers */
void F948_10056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_buffers";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 947, Current, 3, 0, 15790);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15790);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0xF8000000, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2643, "to_c", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7887, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	up1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4966, 864))(Current, ui4_1x, up1x);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2617, "lower", tr1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2618, "upper", tr1));
		if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !loc1;
		}
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
		tb2 = '\0';
		if (loc1) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ui4_1 = loc2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4967, 864))(Current, uu4_1x)).it_b);
			tb2 = tb3;
		}
		loc1 = (EIF_BOOLEAN) tb2;
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(9);
		tr1 = RTMS_EX_H("Cannot generate buffer for audio source.",40,1148218926);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
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
#undef up2
#undef ur1
#undef ui4_1
#undef uu4_1
}

/* {AUDIO_SOURCE}.buffer_size */
EIF_TYPED_VALUE F948_10057 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7855,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.set_buffer_size */
void F948_10058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_buffer_size";
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
	
	RTEAA(l_feature_name, 947, Current, 0, 1, 15792);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15792);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7855, 0x10000000, 1); /* buffer_size */
	*(EIF_INTEGER_32 *)(Current + RTWA(7855, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {AUDIO_SOURCE}.play */
void F948_10059 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "play";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15793);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15793);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7891, 0x04000000, 1); /* has_been_stop */
	*(EIF_BOOLEAN *)(Current + RTWA(7891, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6614, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7869, dtype))(Current);
	RTHOOK(5);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4972, 864))(Current, uu4_1x);
		RTHOOK(7);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7860, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(8);
			tr1 = RTMS_EX_H("Cannot play audio source.",25,550278702);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef uu4_1
}

/* {AUDIO_SOURCE}.pause */
void F948_10060 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pause";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15794);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15794);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7891, 0x04000000, 1); /* has_been_stop */
	*(EIF_BOOLEAN *)(Current + RTWA(7891, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6614, dtype))(Current);
	RTHOOK(4);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4973, 864))(Current, uu4_1x);
	RTHOOK(5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7861, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("Cannot pause audio source",25,729503077);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef uu4_1
}

/* {AUDIO_SOURCE}.stop */
void F948_10061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15795);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15795);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7891, 0x04000000, 1); /* has_been_stop */
	*(EIF_BOOLEAN *)(Current + RTWA(7891, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6614, dtype))(Current);
	RTHOOK(4);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4974, 864))(Current, uu4_1x);
	RTHOOK(5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7862, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("Cannot stop audio source.",25,1290357550);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
	}
	RTHOOK(7);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1715, "wipe_out", tr1))(tr1);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7869, dtype))(Current);
		RTHOOK(10);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4975, 864))(Current, uu4_1x);
		RTHOOK(11);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7863, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(12);
			tr1 = RTMS_EX_H("Cannot rewind audio source.",27,385312814);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
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
#undef ur1
#undef uu4_1
}

/* {AUDIO_SOURCE}.is_playing */
EIF_TYPED_VALUE F948_10062 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_playing";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15796);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15796);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7878, dtype))(Current, ui4_1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5001, 864))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {AUDIO_SOURCE}.is_pause */
EIF_TYPED_VALUE F948_10063 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_pause";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15797);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15797);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7878, dtype))(Current, ui4_1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, 864))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {AUDIO_SOURCE}.is_stop */
EIF_TYPED_VALUE F948_10064 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_stop";
	RTEX;
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15798);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15798);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7891, dtype));
	if (tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7890, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {AUDIO_SOURCE}.is_initial */
EIF_TYPED_VALUE F948_10065 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_initial";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15799);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15799);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7878, dtype))(Current, ui4_1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, 864))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {AUDIO_SOURCE}.gain */
EIF_TYPED_VALUE F948_10066 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gain";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15800);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15800);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x18000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5004, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7879, dtype))(Current, ui4_1x)).it_r4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef ui4_1
}

/* {AUDIO_SOURCE}.set_gain */
void F948_10067 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_gain";
	RTEX;
#define arg1 arg1x.it_r4
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 1, 15801);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15801);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_set_gain_valid_value", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_REAL_32) (EIF_REAL_64) 0.0) && (EIF_BOOLEAN) (arg1 <= (EIF_REAL_32) (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5004, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7880, dtype))(Current, ui4_1x, ur4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("source_set_gain_is_set", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7864, dtype))(Current)).it_r4);
			tb1 = (EIF_BOOLEAN)(tr4_1 == arg1);
		}
		if (tb1) {
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
#undef ur4_1
#undef ui4_1
#undef arg1
}

/* {AUDIO_SOURCE}.queue_sound_loop */
void F948_10068 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "queue_sound_loop";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 947, Current, 1, 2, 15802);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15802);
	RTCC(arg1, 947, l_feature_name, 1, eif_new_type(909, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("queud_sound_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(7450, "is_open", arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80000AE, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,0xFF01,909,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTCCL(arg1);
	
	RTCC(tr1, 947, l_feature_name, 1, eif_gen_param(Dftype(loc1), 1),0);
	eif_put_reference_item(RTCV(loc1),1,tr1);
	RTHOOK(5);
	
	eif_put_integer_32_item(RTCV(loc1),2,arg2);
	RTHOOK(6);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1710, "put", tr2))(tr2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg2
#undef arg1
}

/* {AUDIO_SOURCE}.queue_sound */
void F948_10069 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "queue_sound";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 1, 15803);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15803);
	RTCC(arg1, 947, l_feature_name, 1, eif_new_type(909, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("queud_sound_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(7450, "is_open", arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7866, dtype))(Current, ur1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg1
}

/* {AUDIO_SOURCE}.queue_sound_infinite_loop */
void F948_10070 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "queue_sound_infinite_loop";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 1, 15804);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15804);
	RTCC(arg1, 947, l_feature_name, 1, eif_new_type(909, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("queud_sound_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(7450, "is_open", arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) -1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7866, dtype))(Current, ur1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg1
}

/* {AUDIO_SOURCE}.update_playing */
void F948_10071 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_playing";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	EIF_POINTER tp1;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 947, Current, 5, 0, 15805);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15805);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7888, dtype));
	if (tb1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7889, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7785, "lock", tr1))(tr1);
	}
	RTHOOK(4);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7890, dtype))(Current)).it_b);
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7891, dtype));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(5);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4972, 864))(Current, uu4_1x);
	}
	for (;;) {
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7875, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 1L))) break;
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7877, dtype))(Current);
	}
	for (;;) {
		RTHOOK(8);
		tb1 = '\01';
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7882, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7883, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7887, dtype))(Current)).it_i4);
		if (!((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)) % ti4_4)))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1699, "is_empty", tr1))(tr1)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(10);
			tb2 = '\01';
			if (!(EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1699, "is_empty", tr1))(tr1)).it_b);
				tb2 = tb3;
			}
			if (tb2) break;
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(11,2);
			tr1 = eif_boxed_item(tr2,1);
			RTNHOOK(11,3);
			tp1 = *(EIF_POINTER *)(Current + RTWA(7885, dtype));
			up1 = tp1;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7855, dtype));
			ui4_1 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7452, "fill_buffer", tr1))(tr1, up1x, ui4_1x);
			RTHOOK(12);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(12,2);
			tr1 = eif_boxed_item(tr2,1);
			RTNHOOK(12,3);
			ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(7453, "last_buffer_size", tr1));
			loc1 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(13);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(13,2);
			tr1 = eif_boxed_item(tr2,1);
			RTNHOOK(13,3);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7455, "channel_count", tr1))(tr1)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(14);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(14,2);
			tr1 = eif_boxed_item(tr2,1);
			RTNHOOK(14,3);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7457, "bits_per_sample", tr1))(tr1)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(15);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(15,2);
			tr1 = eif_boxed_item(tr2,1);
			RTNHOOK(15,3);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7456, "frequency", tr1))(tr1)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(16);
			RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(16,2);
			tr1 = eif_boxed_item(tr2,1);
			RTNHOOK(16,3);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7454, "byte_per_buffer_sample", tr1))(tr1)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(17);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(18);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(18,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(18,2);
				tr1 = eif_boxed_item(tr2,1);
				RTNHOOK(18,3);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7460, "restart", tr1))(tr1);
				RTHOOK(19);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(19,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(19,2);
				ti4_2 = eif_integer_32_item(RTCV(tr2),2);
				if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(20);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(20,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1752, "remove", tr1))(tr1);
					RTHOOK(21);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(21,1);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1699, "is_empty", tr1))(tr1)).it_b);
					if (tb3) {
						RTHOOK(22);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7859, dtype))(Current);
					}
				} else {
					RTHOOK(23);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(23,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(23,2);
					ti4_2 = eif_integer_32_item(RTCV(tr2),2);
					if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(24);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(24,1);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(24,2);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(24,3);
						tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(24,4);
						ti4_2 = eif_integer_32_item(RTCV(tr3),2);
						
						eif_put_integer_32_item(RTCV(tr2),2,(EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
					}
				}
			}
		}
		RTHOOK(25);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7886, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1699, "is_empty", tr1))(tr1)).it_b);
		if ((EIF_BOOLEAN) !tb3) {
			RTHOOK(26);
			tp1 = *(EIF_POINTER *)(Current + RTWA(7885, dtype));
			up1 = tp1;
			ui4_1 = loc1;
			ui4_2 = loc2;
			ui4_3 = loc3;
			ui4_4 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7876, dtype))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
	}
	RTHOOK(27);
	tb3 = *(EIF_BOOLEAN *)(Current + RTWA(7888, dtype));
	if (tb3) {
		RTHOOK(28);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7889, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(28,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7787, "unlock", tr1))(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
}

/* {AUDIO_SOURCE}.set_direction */
void F948_10072 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_direction";
	RTEX;
#define arg1 arg1x.it_r4
#define arg2 arg2x.it_r4
#define arg3 arg3x.it_r4
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 3, 15806);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15806);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur4_1 = arg1;
	ur4_2 = arg2;
	ur4_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6665, dtype))(Current, ui4_1x, ur4_1x, ur4_2x, ur4_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_SOURCE}.direction */
EIF_TYPED_VALUE F948_10073 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "direction";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15807);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15807);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000AE, 0,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6667, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {AUDIO_SOURCE}.is_open */
EIF_TYPED_VALUE F948_10074 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7872,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.set_thread_safe */
void F948_10075 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_thread_safe";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15809);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15809);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7888, 0x04000000, 1); /* is_thread_safe */
	*(EIF_BOOLEAN *)(Current + RTWA(7888, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {AUDIO_SOURCE}.close */
void F948_10076 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "close";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15810);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15810);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7859, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7872, 0x04000000, 1); /* is_open */
	*(EIF_BOOLEAN *)(Current + RTWA(7872, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {AUDIO_SOURCE}.processed_buffers_number */
EIF_TYPED_VALUE F948_10077 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "processed_buffers_number";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15811);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15811);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4994, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7878, Dtype(Current)))(Current, ui4_1x)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {AUDIO_SOURCE}.queue_buffer */
void F948_10078 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "queue_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 947, Current, 3, 5, 15812);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15812);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 8L))) {
			RTHOOK(3);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4995, 864))(Current)).it_i4);
		} else {
			RTHOOK(4);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4997, 864))(Current)).it_i4);
		}
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 8L))) {
			RTHOOK(6);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4996, 864))(Current)).it_i4);
		} else {
			RTHOOK(7);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4998, 864))(Current)).it_i4);
		}
	}
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT(NULL, EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7882, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7883, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7887, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)) % ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6614, dtype))(Current);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7883, dtype));
	ui4_1 = ti4_1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = loc3;
	up1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4971, 864))(Current, uu4_1x, ui4_1x, up1x, ui4_2x, ui4_3x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("Cannot read buffer audio data.",30,995733806);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
	RTHOOK(12);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6622, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(13);
		RTDBGAL(Current, 1, 0xF800010F, 0, 0); /* loc1 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,271,200,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLN(typres0.id);
		}
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7883, dtype));
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2611, Dtype(tr1)))(tr1, uu4_1x, ui4_1x, ui4_2x);
		RTNHOOK(13,2);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		RTDBGAA(Current, dtype, 7883, 0x10000000, 1); /* buffer_head */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7883, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7887, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(7883, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) % ti4_2);
		RTHOOK(15);
		RTDBGAL(Current, 2, 0xF8000000, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2643, "to_c", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6614, dtype))(Current);
		RTHOOK(17);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4968, 864))(Current, uu4_1x, ui4_1x, up1x);
		RTHOOK(18);
		tr1 = RTMS_EX_H("Cannot queud audio buffer.",26,1620746542);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_SOURCE}.unqueue_buffer */
void F948_10079 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unqueue_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 947, Current, 2, 0, 15813);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15813);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("unqueue_buffer_nb_processed_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7875, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT(NULL, EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7882, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7883, dtype));
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800010F, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,271,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7882, dtype));
	ui4_1 = ti4_1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr2))(tr2, ui4_1x)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2611, Dtype(tr1)))(tr1, uu4_1x, ui4_1x, ui4_2x);
	RTNHOOK(3,2);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 7882, 0x10000000, 1); /* buffer_tail */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7882, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7887, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(7882, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) % ti4_2);
	RTHOOK(5);
	RTDBGAL(Current, 2, 0xF8000000, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2643, "to_c", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6614, dtype))(Current);
	RTHOOK(7);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
	uu4_1 = tu4_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4969, 864))(Current, uu4_1x, ui4_1x, up1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("Cannot unqueue audio buffer.",28,683429422);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6625, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
}

/* {AUDIO_SOURCE}.param_int_c */
EIF_TYPED_VALUE F948_10080 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "param_int_c";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 947, Current, 1, 1, 15814);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15814);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, Dtype(Current)));
	uu4_1 = tu4_1;
	ui4_1 = arg1;
	up1 = (EIF_INTEGER_32 *) &(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4959, 864))(Current, uu4_1x, ui4_1x, up1x);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {AUDIO_SOURCE}.param_float_c */
EIF_TYPED_VALUE F948_10081 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "param_float_c";
	RTEX;
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL32, &loc1);
	
	RTEAA(l_feature_name, 947, Current, 1, 1, 15815);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15815);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, Dtype(Current)));
	uu4_1 = tu4_1;
	ui4_1 = arg1;
	up1 = (EIF_REAL_32 *) &(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4960, 864))(Current, uu4_1x, ui4_1x, up1x);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x18000000, 1,0); /* Result */
	Result = (EIF_REAL_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {AUDIO_SOURCE}.set_param_float_c */
void F948_10082 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_param_float_c";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r4
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 2, 15774);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15774);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, Dtype(Current)));
	uu4_1 = tu4_1;
	ui4_1 = arg1;
	ur4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4963, 864))(Current, uu4_1x, ui4_1x, ur4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur4_1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {AUDIO_SOURCE}.set_params_float_pointer_c */
void F948_10083 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_params_float_pointer_c";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 2, 15775);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15775);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, Dtype(Current)));
	uu4_1 = tu4_1;
	ui4_1 = arg1;
	up1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4962, 864))(Current, uu4_1x, ui4_1x, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {AUDIO_SOURCE}.assign_params_float_pointer_c */
void F948_10084 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "assign_params_float_pointer_c";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 2, 15776);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15776);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, Dtype(Current)));
	uu4_1 = tu4_1;
	ui4_1 = arg1;
	up1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4958, 864))(Current, uu4_1x, ui4_1x, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {AUDIO_SOURCE}.dispose */
void F948_10085 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 947, Current, 3, 0, 15777);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15777);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7859, dtype))(Current);
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(7885, dtype));
	free(tp1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF8000000, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7881, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2643, "to_c", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7887, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	up1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4970, 864))(Current, ui4_1x, up1x);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF800010F, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,271,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7884, dtype));
	uu4_1 = tu4_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2611, Dtype(tr1)))(tr1, uu4_1x, ui4_1x, ui4_2x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 2, 0xF8000000, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2643, "to_c", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4965, 864))(Current, ui4_1x, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef uu4_1
}

/* {AUDIO_SOURCE}.sound_al_buffer */
EIF_TYPED_VALUE F948_10086 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7881,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.buffer_tail */
EIF_TYPED_VALUE F948_10087 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7882,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.buffer_head */
EIF_TYPED_VALUE F948_10088 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7883,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.index */
EIF_TYPED_VALUE F948_10089 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(7884,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.temp_buffer */
EIF_TYPED_VALUE F948_10090 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(7885,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.sound_queued */
EIF_TYPED_VALUE F948_10091 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7886,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.nb_buffer */
RTOID (F948_10092)
EIF_TYPED_VALUE F948_10092 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "nb_buffer";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F948_10092);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15784);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(947, Current, 15784);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef Result
}

/* {AUDIO_SOURCE}.is_thread_safe */
EIF_TYPED_VALUE F948_10093 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7888,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.g_mutex */
EIF_TYPED_VALUE F948_10094 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7889,Dtype(Current)));
	return r;
}


/* {AUDIO_SOURCE}.is_al_stop */
EIF_TYPED_VALUE F948_10095 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_al_stop";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 947, Current, 0, 0, 15787);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(947, Current, 15787);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_is_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7872, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, 864))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7878, dtype))(Current, ui4_1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, 864))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {AUDIO_SOURCE}.has_been_stop */
EIF_TYPED_VALUE F948_10096 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7891,Dtype(Current)));
	return r;
}


void EIF_Minit948 (void)
{
	GTCX
	RTOTS (10092,F948_10092)
}


#ifdef __cplusplus
}
#endif
