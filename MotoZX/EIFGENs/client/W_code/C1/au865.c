/*
 * Code for class AUDIO_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F865_7017(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7018(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7019(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7020(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7021(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7022(EIF_REFERENCE);
extern void F865_7023(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F865_7024(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7025(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7026(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F865_7027(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7028(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7029(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7030(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7031(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7032(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F865_7033(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7034(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7035(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7036(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7037(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7038(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F865_7039(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7040(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7041(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7042(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F865_7043(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F865_7044(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F865_7045(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F865_7046(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F865_7047(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7049(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7050(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7051(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7057(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7058(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7059(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7060(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7061(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7062(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7063(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7064(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7065(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7066(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7067(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7068(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7069(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7070(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7071(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7072(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7073(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7074(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7075(EIF_REFERENCE);
extern void EIF_Minit865(void);

#ifdef __cplusplus
}
#endif

#include <al.h>
#include <alc.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F865_7047
static EIF_INTEGER_32 inline_F865_7047 (void)
{
	return (EIF_INTEGER_32) (ALC_ALL_DEVICES_SPECIFIER)
	;
}
#define INLINE_F865_7047
#endif
#ifndef INLINE_F865_7048
static EIF_INTEGER_32 inline_F865_7048 (void)
{
	return (EIF_INTEGER_32) (ALC_DEVICE_SPECIFIER)
	;
}
#define INLINE_F865_7048
#endif
#ifndef INLINE_F865_7049
static EIF_INTEGER_32 inline_F865_7049 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_VALUE)
	;
}
#define INLINE_F865_7049
#endif
#ifndef INLINE_F865_7050
static EIF_INTEGER_32 inline_F865_7050 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_VALUE)
	;
}
#define INLINE_F865_7050
#endif
#ifndef INLINE_F865_7051
static EIF_INTEGER_32 inline_F865_7051 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_ENUM)
	;
}
#define INLINE_F865_7051
#endif
#ifndef INLINE_F865_7052
static EIF_INTEGER_32 inline_F865_7052 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_ENUM)
	;
}
#define INLINE_F865_7052
#endif
#ifndef INLINE_F865_7053
static EIF_INTEGER_32 inline_F865_7053 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_OPERATION)
	;
}
#define INLINE_F865_7053
#endif
#ifndef INLINE_F865_7054
static EIF_INTEGER_32 inline_F865_7054 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_NAME)
	;
}
#define INLINE_F865_7054
#endif
#ifndef INLINE_F865_7055
static EIF_INTEGER_32 inline_F865_7055 (void)
{
	return (EIF_INTEGER_32) (AL_OUT_OF_MEMORY)
	;
}
#define INLINE_F865_7055
#endif
#ifndef INLINE_F865_7056
static EIF_INTEGER_32 inline_F865_7056 (void)
{
	return (EIF_INTEGER_32) (ALC_OUT_OF_MEMORY)
	;
}
#define INLINE_F865_7056
#endif
#ifndef INLINE_F865_7057
static EIF_INTEGER_32 inline_F865_7057 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_DEVICE)
	;
}
#define INLINE_F865_7057
#endif
#ifndef INLINE_F865_7058
static EIF_INTEGER_32 inline_F865_7058 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_CONTEXT)
	;
}
#define INLINE_F865_7058
#endif
#ifndef INLINE_F865_7059
static EIF_INTEGER_32 inline_F865_7059 (void)
{
	return (EIF_INTEGER_32) (AL_NO_ERROR)
	;
}
#define INLINE_F865_7059
#endif
#ifndef INLINE_F865_7060
static EIF_INTEGER_32 inline_F865_7060 (void)
{
	return (EIF_INTEGER_32) (ALC_NO_ERROR)
	;
}
#define INLINE_F865_7060
#endif
#ifndef INLINE_F865_7061
static EIF_INTEGER_32 inline_F865_7061 (void)
{
	return (EIF_INTEGER_32) (AL_POSITION)
	;
}
#define INLINE_F865_7061
#endif
#ifndef INLINE_F865_7062
static EIF_INTEGER_32 inline_F865_7062 (void)
{
	return (EIF_INTEGER_32) (AL_VELOCITY)
	;
}
#define INLINE_F865_7062
#endif
#ifndef INLINE_F865_7063
static EIF_INTEGER_32 inline_F865_7063 (void)
{
	return (EIF_INTEGER_32) (AL_ORIENTATION)
	;
}
#define INLINE_F865_7063
#endif
#ifndef INLINE_F865_7064
static EIF_INTEGER_32 inline_F865_7064 (void)
{
	return (EIF_INTEGER_32) (AL_DIRECTION)
	;
}
#define INLINE_F865_7064
#endif
#ifndef INLINE_F865_7065
static EIF_INTEGER_32 inline_F865_7065 (void)
{
	return (EIF_INTEGER_32) (AL_BUFFERS_PROCESSED)
	;
}
#define INLINE_F865_7065
#endif
#ifndef INLINE_F865_7066
static EIF_INTEGER_32 inline_F865_7066 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO8)
	;
}
#define INLINE_F865_7066
#endif
#ifndef INLINE_F865_7067
static EIF_INTEGER_32 inline_F865_7067 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO8)
	;
}
#define INLINE_F865_7067
#endif
#ifndef INLINE_F865_7068
static EIF_INTEGER_32 inline_F865_7068 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO16)
	;
}
#define INLINE_F865_7068
#endif
#ifndef INLINE_F865_7069
static EIF_INTEGER_32 inline_F865_7069 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO16)
	;
}
#define INLINE_F865_7069
#endif
#ifndef INLINE_F865_7070
static EIF_INTEGER_32 inline_F865_7070 (void)
{
	return (EIF_INTEGER_32) (AL_SOURCE_STATE)
	;
}
#define INLINE_F865_7070
#endif
#ifndef INLINE_F865_7071
static EIF_INTEGER_32 inline_F865_7071 (void)
{
	return (EIF_INTEGER_32) (AL_INITIAL)
	;
}
#define INLINE_F865_7071
#endif
#ifndef INLINE_F865_7072
static EIF_INTEGER_32 inline_F865_7072 (void)
{
	return (EIF_INTEGER_32) (AL_PLAYING)
	;
}
#define INLINE_F865_7072
#endif
#ifndef INLINE_F865_7073
static EIF_INTEGER_32 inline_F865_7073 (void)
{
	return (EIF_INTEGER_32) (AL_PAUSED)
	;
}
#define INLINE_F865_7073
#endif
#ifndef INLINE_F865_7074
static EIF_INTEGER_32 inline_F865_7074 (void)
{
	return (EIF_INTEGER_32) (AL_STOPPED)
	;
}
#define INLINE_F865_7074
#endif
#ifndef INLINE_F865_7075
static EIF_INTEGER_32 inline_F865_7075 (void)
{
	return (EIF_INTEGER_32) (AL_GAIN)
	;
}
#define INLINE_F865_7075
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_EXTERNAL}.al_get_error */
EIF_TYPED_VALUE F865_7017 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_get_error";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12698);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12698);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) alGetError();
	
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

/* {AUDIO_EXTERNAL}.alc_get_error */
EIF_TYPED_VALUE F865_7018 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_get_error";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12699);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12699);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) alcGetError((ALCdevice *) arg1);
	
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

/* {AUDIO_EXTERNAL}.alc_get_string */
EIF_TYPED_VALUE F865_7019 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "alc_get_string";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 2, 12700);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12700);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcGetString((ALCdevice *) arg1, (ALCenum) arg2);
	
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

/* {AUDIO_EXTERNAL}.alc_create_context */
EIF_TYPED_VALUE F865_7020 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "alc_create_context";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 2, 12701);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12701);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcCreateContext((ALCdevice *) arg1, (ALCint *) arg2);
	
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

/* {AUDIO_EXTERNAL}.alc_make_context_current */
EIF_TYPED_VALUE F865_7021 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_make_context_current";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12702);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12702);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(alcMakeContextCurrent((ALCcontext *) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_get_current_context */
EIF_TYPED_VALUE F865_7022 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_get_current_context";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12703);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12703);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcGetCurrentContext();
	
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

/* {AUDIO_EXTERNAL}.alc_destroy_context */
void F865_7023 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_destroy_context";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12704);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12704);
	RTIV(Current, RTAL);alcDestroyContext((ALCcontext *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_suspend_context */
void F865_7024 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_suspend_context";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12705);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12705);
	RTIV(Current, RTAL);alcSuspendContext((ALCcontext *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_open_device */
EIF_TYPED_VALUE F865_7025 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_open_device";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12706);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12706);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcOpenDevice((const ALCchar *) arg1);
	
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

/* {AUDIO_EXTERNAL}.alc_close_device */
EIF_TYPED_VALUE F865_7026 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alc_close_device";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12707);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12707);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(alcCloseDevice((ALCdevice *) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_get_listener_fv */
void F865_7027 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_get_listener_fv";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
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
	
	RTEAA(l_feature_name, 864, Current, 0, 2, 12708);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12708);
	RTIV(Current, RTAL);alGetListenerfv((ALenum) arg1, (ALfloat *) arg2);
	
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

/* {AUDIO_EXTERNAL}.al_set_listener_fv */
void F865_7028 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_set_listener_fv";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
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
	
	RTEAA(l_feature_name, 864, Current, 0, 2, 12709);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12709);
	RTIV(Current, RTAL);alListenerfv((ALenum) arg1, (ALfloat *) arg2);
	
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

/* {AUDIO_EXTERNAL}.al_get_source_fv */
void F865_7029 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_fv";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 3, 12710);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12710);
	RTIV(Current, RTAL);alGetSourcefv((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_get_source_i */
void F865_7030 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_i";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 3, 12711);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12711);
	RTIV(Current, RTAL);alGetSourcei((ALuint) arg1, (ALenum) arg2, (ALint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_get_source_f */
void F865_7031 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_f";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 3, 12712);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12712);
	RTIV(Current, RTAL);alGetSourcef((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_is_source */
EIF_TYPED_VALUE F865_7032 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_is_source";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12713);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12713);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(alIsSource((ALuint) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_set_source_fv */
void F865_7033 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_set_source_fv";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 3, 12714);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12714);
	RTIV(Current, RTAL);alSourcefv((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_set_source_f */
void F865_7034 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_set_source_f";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 3, 12715);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12715);
	RTIV(Current, RTAL);alSourcef((ALuint) arg1, (ALenum) arg2, (ALfloat) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_gen_sources */
void F865_7035 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_gen_sources";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
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
	
	RTEAA(l_feature_name, 864, Current, 0, 2, 12716);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12716);
	RTIV(Current, RTAL);alGenSources((ALsizei) arg1, (ALuint *) arg2);
	
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

/* {AUDIO_EXTERNAL}.al_delete_sources */
void F865_7036 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_delete_sources";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
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
	
	RTEAA(l_feature_name, 864, Current, 0, 2, 12717);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12717);
	RTIV(Current, RTAL);alDeleteSources((ALsizei) arg1, (ALuint *) arg2);
	
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

/* {AUDIO_EXTERNAL}.al_gen_buffers */
void F865_7037 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_gen_buffers";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
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
	
	RTEAA(l_feature_name, 864, Current, 0, 2, 12718);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12718);
	RTIV(Current, RTAL);alGenBuffers((ALsizei) arg1, (ALuint *) arg2);
	
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

/* {AUDIO_EXTERNAL}.al_is_buffer */
EIF_TYPED_VALUE F865_7038 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_is_buffer";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12719);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12719);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(alIsBuffer((ALuint) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_queue_buffers */
void F865_7039 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_source_queue_buffers";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 3, 12720);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12720);
	RTIV(Current, RTAL);alSourceQueueBuffers((ALuint) arg1, (ALsizei) arg2, (ALuint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_unqueue_buffers */
void F865_7040 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_source_unqueue_buffers";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 3, 12721);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12721);
	RTIV(Current, RTAL);alSourceUnqueueBuffers((ALuint) arg1, (ALsizei) arg2, (ALuint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_delete_buffers */
void F865_7041 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_delete_buffers";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
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
	
	RTEAA(l_feature_name, 864, Current, 0, 2, 12722);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12722);
	RTIV(Current, RTAL);alDeleteBuffers((ALsizei) arg1, (ALuint *) arg2);
	
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

/* {AUDIO_EXTERNAL}.al_buffer_data */
void F865_7042 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "al_buffer_data";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 5, 12723);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12723);
	RTIV(Current, RTAL);alBufferData((ALuint) arg1, (ALenum) arg2, (ALvoid *) arg3, (ALsizei) arg4, (ALsizei) arg5);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_play */
void F865_7043 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_play";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12724);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12724);
	RTIV(Current, RTAL);alSourcePlay((ALuint) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_pause */
void F865_7044 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_pause";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12725);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12725);
	RTIV(Current, RTAL);alSourcePause((ALuint) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_stop */
void F865_7045 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_stop";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12726);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12726);
	RTIV(Current, RTAL);alSourceStop((ALuint) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.al_source_rewind */
void F865_7046 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_rewind";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 1, 12727);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12727);
	RTIV(Current, RTAL);alSourceRewind((ALuint) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_EXTERNAL}.alc_all_device_specifier */
EIF_TYPED_VALUE F865_7047 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_all_device_specifier";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12728);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12728);
	RTIV(Current, RTAL);
	Result = inline_F865_7047 ();
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

/* {AUDIO_EXTERNAL}.alc_device_specifier */
EIF_TYPED_VALUE F865_7048 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_device_specifier";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12729);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12729);
	RTIV(Current, RTAL);
	Result = inline_F865_7048 ();
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

/* {AUDIO_EXTERNAL}.alc_invalid_value */
EIF_TYPED_VALUE F865_7049 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_invalid_value";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12730);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12730);
	RTIV(Current, RTAL);
	Result = inline_F865_7049 ();
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

/* {AUDIO_EXTERNAL}.al_invalid_value */
EIF_TYPED_VALUE F865_7050 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_value";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12731);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12731);
	RTIV(Current, RTAL);
	Result = inline_F865_7050 ();
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

/* {AUDIO_EXTERNAL}.al_invalid_enum */
EIF_TYPED_VALUE F865_7051 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_enum";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12732);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12732);
	RTIV(Current, RTAL);
	Result = inline_F865_7051 ();
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

/* {AUDIO_EXTERNAL}.alc_invalid_enum */
EIF_TYPED_VALUE F865_7052 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_invalid_enum";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12733);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12733);
	RTIV(Current, RTAL);
	Result = inline_F865_7052 ();
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

/* {AUDIO_EXTERNAL}.al_invalid_operation */
EIF_TYPED_VALUE F865_7053 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_operation";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12734);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12734);
	RTIV(Current, RTAL);
	Result = inline_F865_7053 ();
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

/* {AUDIO_EXTERNAL}.al_invalid_name */
EIF_TYPED_VALUE F865_7054 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_name";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12735);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12735);
	RTIV(Current, RTAL);
	Result = inline_F865_7054 ();
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

/* {AUDIO_EXTERNAL}.al_out_of_memory */
EIF_TYPED_VALUE F865_7055 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_out_of_memory";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12736);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12736);
	RTIV(Current, RTAL);
	Result = inline_F865_7055 ();
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

/* {AUDIO_EXTERNAL}.alc_out_of_memory */
EIF_TYPED_VALUE F865_7056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_out_of_memory";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12737);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12737);
	RTIV(Current, RTAL);
	Result = inline_F865_7056 ();
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

/* {AUDIO_EXTERNAL}.alc_invalid_device */
EIF_TYPED_VALUE F865_7057 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_invalid_device";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12738);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12738);
	RTIV(Current, RTAL);
	Result = inline_F865_7057 ();
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

/* {AUDIO_EXTERNAL}.alc_invalid_context */
EIF_TYPED_VALUE F865_7058 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_invalid_context";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12739);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12739);
	RTIV(Current, RTAL);
	Result = inline_F865_7058 ();
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

/* {AUDIO_EXTERNAL}.al_no_error */
EIF_TYPED_VALUE F865_7059 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_no_error";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12740);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12740);
	RTIV(Current, RTAL);
	Result = inline_F865_7059 ();
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

/* {AUDIO_EXTERNAL}.alc_no_error */
EIF_TYPED_VALUE F865_7060 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alc_no_error";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12741);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12741);
	RTIV(Current, RTAL);
	Result = inline_F865_7060 ();
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

/* {AUDIO_EXTERNAL}.al_position */
EIF_TYPED_VALUE F865_7061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_position";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12742);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12742);
	RTIV(Current, RTAL);
	Result = inline_F865_7061 ();
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

/* {AUDIO_EXTERNAL}.al_velocity */
EIF_TYPED_VALUE F865_7062 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_velocity";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12743);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12743);
	RTIV(Current, RTAL);
	Result = inline_F865_7062 ();
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

/* {AUDIO_EXTERNAL}.al_orientation */
EIF_TYPED_VALUE F865_7063 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_orientation";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12744);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12744);
	RTIV(Current, RTAL);
	Result = inline_F865_7063 ();
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

/* {AUDIO_EXTERNAL}.al_direction */
EIF_TYPED_VALUE F865_7064 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_direction";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12745);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12745);
	RTIV(Current, RTAL);
	Result = inline_F865_7064 ();
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

/* {AUDIO_EXTERNAL}.al_buffers_processed */
EIF_TYPED_VALUE F865_7065 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_buffers_processed";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12746);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12746);
	RTIV(Current, RTAL);
	Result = inline_F865_7065 ();
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

/* {AUDIO_EXTERNAL}.al_format_mono8 */
EIF_TYPED_VALUE F865_7066 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_mono8";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12747);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12747);
	RTIV(Current, RTAL);
	Result = inline_F865_7066 ();
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

/* {AUDIO_EXTERNAL}.al_format_stereo8 */
EIF_TYPED_VALUE F865_7067 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_stereo8";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12748);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12748);
	RTIV(Current, RTAL);
	Result = inline_F865_7067 ();
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

/* {AUDIO_EXTERNAL}.al_format_mono16 */
EIF_TYPED_VALUE F865_7068 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_mono16";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12749);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12749);
	RTIV(Current, RTAL);
	Result = inline_F865_7068 ();
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

/* {AUDIO_EXTERNAL}.al_format_stereo16 */
EIF_TYPED_VALUE F865_7069 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_stereo16";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12750);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12750);
	RTIV(Current, RTAL);
	Result = inline_F865_7069 ();
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

/* {AUDIO_EXTERNAL}.al_source_state */
EIF_TYPED_VALUE F865_7070 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_source_state";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12751);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12751);
	RTIV(Current, RTAL);
	Result = inline_F865_7070 ();
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

/* {AUDIO_EXTERNAL}.al_initial */
EIF_TYPED_VALUE F865_7071 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_initial";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12752);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12752);
	RTIV(Current, RTAL);
	Result = inline_F865_7071 ();
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

/* {AUDIO_EXTERNAL}.al_playing */
EIF_TYPED_VALUE F865_7072 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_playing";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12753);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12753);
	RTIV(Current, RTAL);
	Result = inline_F865_7072 ();
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

/* {AUDIO_EXTERNAL}.al_paused */
EIF_TYPED_VALUE F865_7073 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_paused";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12754);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12754);
	RTIV(Current, RTAL);
	Result = inline_F865_7073 ();
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

/* {AUDIO_EXTERNAL}.al_stopped */
EIF_TYPED_VALUE F865_7074 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_stopped";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12755);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12755);
	RTIV(Current, RTAL);
	Result = inline_F865_7074 ();
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

/* {AUDIO_EXTERNAL}.al_gain */
EIF_TYPED_VALUE F865_7075 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_gain";
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
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12756);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12756);
	RTIV(Current, RTAL);
	Result = inline_F865_7075 ();
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

void EIF_Minit865 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
