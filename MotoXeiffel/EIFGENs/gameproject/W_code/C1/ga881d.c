/*
 * Class GAME_DOLLAR_GESTURE_MANAGER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_881 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_881 [] = {0xFF01,237,880,0xFFFF};
static const EIF_TYPE_INDEX egt_2_881 [] = {0xFF01,880,0xFFFF};
static const EIF_TYPE_INDEX egt_3_881 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_881 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_881 [] = {0xFF01,880,0xFFFF};
static const EIF_TYPE_INDEX egt_6_881 [] = {0xFF01,880,0xFFFF};
static const EIF_TYPE_INDEX egt_7_881 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_881 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_881 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_881 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_881 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_881 [] = {0xFF01,880,0xFFFF};
static const EIF_TYPE_INDEX egt_13_881 [] = {0xFF01,811,191,0xFFFF};
static const EIF_TYPE_INDEX egt_14_881 [] = {0xFF01,217,0xFFFF};


static const struct desc_info desc_881[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_881), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_881), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_881), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_881), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_881), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_881), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_881), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_881), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_881), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_881), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_881), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_881), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06E1 /*880*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_881), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14212, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14216, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 14202, 0},
	{EIF_GENERIC(egt_13_881), 14203, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14204, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14205, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14206, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14207, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14208, 8},
	{EIF_GENERIC(egt_14_881), 14218, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14213, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14214, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14215, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14217, 9},
	{EIF_NON_GENERIC(0x0179 /*188*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14754, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14755, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14756, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14757, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14758, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 14759, 12},
	{EIF_NON_GENERIC(0x019D /*206*/), 14760, 16},
};
void Init881(void)
{
	IDSC(desc_881, 0, 880);
	IDSC(desc_881 + 1, 1, 880);
	IDSC(desc_881 + 32, 378, 880);
	IDSC(desc_881 + 42, 360, 880);
	IDSC(desc_881 + 46, 362, 880);
}


#ifdef __cplusplus
}
#endif
