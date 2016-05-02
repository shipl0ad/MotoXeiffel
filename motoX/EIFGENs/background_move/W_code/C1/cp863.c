/*
 * Code for class CPF_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F863_6983(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_6984(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_6985(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_6986(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_6987(EIF_REFERENCE);
extern void F863_6988(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_6989(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F863_6990(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_6991(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F863_6992(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_6993(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit863(void);

#ifdef __cplusplus
}
#endif

#include <cpf_additions.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F863_6983
static EIF_REAL_32 inline_F863_6983 (EIF_NATURAL_32 arg1)
{
	return (EIF_REAL_32) (*(float *)&arg1)
	;
}
#define INLINE_F863_6983
#endif
#ifndef INLINE_F863_6984
static EIF_REAL_64 inline_F863_6984 (EIF_NATURAL_64 arg1)
{
	return (EIF_REAL_64) (*(double *)&arg1)
	;
}
#define INLINE_F863_6984
#endif
#ifndef INLINE_F863_6985
static EIF_NATURAL_32 inline_F863_6985 (EIF_REAL_32 arg1)
{
	return (EIF_NATURAL_32) (*(uint32_t *)&arg1)
	;
}
#define INLINE_F863_6985
#endif
#ifndef INLINE_F863_6986
static EIF_NATURAL_64 inline_F863_6986 (EIF_REAL_64 arg1)
{
	return (EIF_NATURAL_64) (*(uint64_t *)&arg1)
	;
}
#define INLINE_F863_6986
#endif
#ifndef INLINE_F863_6987
static EIF_INTEGER_32 inline_F863_6987 (void)
{
	return (EIF_INTEGER_32) (sizeof(CustomPackageFileInfos))
	;
}
#define INLINE_F863_6987
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CPF_EXTERNAL}.natural_32_to_real_32 */
EIF_TYPED_VALUE F863_6983 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "natural_32_to_real_32";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12664);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12664);
	RTIV(Current, RTAL);
	Result = inline_F863_6983 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {CPF_EXTERNAL}.natural_64_to_real_64 */
EIF_TYPED_VALUE F863_6984 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "natural_64_to_real_64";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12665);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12665);
	RTIV(Current, RTAL);
	Result = inline_F863_6984 ((EIF_NATURAL_64) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {CPF_EXTERNAL}.real_32_to_natural_32 */
EIF_TYPED_VALUE F863_6985 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "real_32_to_natural_32";
	RTEX;
#define arg1 arg1x.it_r4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12666);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12666);
	RTIV(Current, RTAL);
	Result = inline_F863_6985 ((EIF_REAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg1
}

/* {CPF_EXTERNAL}.real_64_to_natural_64 */
EIF_TYPED_VALUE F863_6986 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "real_64_to_natural_64";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12667);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12667);
	RTIV(Current, RTAL);
	Result = inline_F863_6986 ((EIF_REAL_64) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
#undef arg1
}

/* {CPF_EXTERNAL}.c_sizeof_custom_package_file_infos */
EIF_TYPED_VALUE F863_6987 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_custom_package_file_infos";
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
	
	RTEAA(l_feature_name, 862, Current, 0, 0, 12668);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12668);
	RTIV(Current, RTAL);
	Result = inline_F863_6987 ();
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

/* {CPF_EXTERNAL}.set_custom_package_infos_struct_file_ptr */
void F863_6988 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_custom_package_infos_struct_file_ptr";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 2, 12669);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12669);
	RTIV(Current, RTAL);(((CustomPackageFileInfos *)arg1)->filePtr = (FILE *)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {CPF_EXTERNAL}.get_custom_package_infos_struct_file_ptr */
EIF_TYPED_VALUE F863_6989 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_custom_package_infos_struct_file_ptr";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12670);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12670);
	RTIV(Current, RTAL);Result = (EIF_POINTER) (((CustomPackageFileInfos *)arg1)->filePtr);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {CPF_EXTERNAL}.set_custom_package_infos_struct_start_offset */
void F863_6990 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_custom_package_infos_struct_start_offset";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 2, 12671);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12671);
	RTIV(Current, RTAL);(((CustomPackageFileInfos *)arg1)->StartOffset = (int64_t)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {CPF_EXTERNAL}.get_custom_package_infos_struct_start_offset */
EIF_TYPED_VALUE F863_6991 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_custom_package_infos_struct_start_offset";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12672);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12672);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) (((CustomPackageFileInfos *)arg1)->StartOffset);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg1
}

/* {CPF_EXTERNAL}.set_custom_package_infos_struct_total_size */
void F863_6992 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_custom_package_infos_struct_total_size";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 2, 12673);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12673);
	RTIV(Current, RTAL);(((CustomPackageFileInfos *)arg1)->TotalSize = (int64_t)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {CPF_EXTERNAL}.get_custom_package_infos_struct_total_size */
EIF_TYPED_VALUE F863_6993 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_custom_package_infos_struct_total_size";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12674);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(862, Current, 12674);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) (((CustomPackageFileInfos *)arg1)->TotalSize);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg1
}

void EIF_Minit863 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
