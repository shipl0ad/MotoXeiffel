/*
 * Class GAME_WINDOW_GL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_921 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_921 [] = {0xFF01,237,920,0xFFFF};
static const EIF_TYPE_INDEX egt_2_921 [] = {0xFF01,920,0xFFFF};
static const EIF_TYPE_INDEX egt_3_921 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_921 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_921 [] = {0xFF01,920,0xFFFF};
static const EIF_TYPE_INDEX egt_6_921 [] = {0xFF01,920,0xFFFF};
static const EIF_TYPE_INDEX egt_7_921 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_921 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_921 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_921 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_921 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_921 [] = {0xFF01,920,0xFFFF};
static const EIF_TYPE_INDEX egt_13_921 [] = {0xFF01,887,0xFFFF};
static const EIF_TYPE_INDEX egt_14_921 [] = {0xFF01,811,191,0xFFFF};
static const EIF_TYPE_INDEX egt_15_921 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_16_921 [] = {0xFF01,917,0xFFFF};
static const EIF_TYPE_INDEX egt_17_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_18_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_19_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_20_921 [] = {0xFF01,422,0xFF01,0xFFF9,3,174,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_21_921 [] = {0xFF01,422,0xFF01,0xFFF9,3,174,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_22_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_23_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_24_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_25_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_26_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_27_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_28_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_29_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_30_921 [] = {0xFF01,422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_31_921 [] = {0xFF01,422,0xFF01,0xFFF9,2,174,200,0xFF01,875,0xFFFF};
static const EIF_TYPE_INDEX egt_32_921 [] = {0xFF01,422,0xFF01,0xFFF9,2,174,200,0xFF01,875,0xFFFF};
static const EIF_TYPE_INDEX egt_33_921 [] = {0xFF01,422,0xFF01,0xFFF9,4,174,200,0xFF01,226,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_34_921 [] = {0xFF01,422,0xFF01,0xFFF9,2,174,200,0xFF01,226,0xFFFF};
static const EIF_TYPE_INDEX egt_35_921 [] = {0xFF01,422,0xFF01,0xFFF9,4,174,200,0xFF01,866,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_36_921 [] = {0xFF01,422,0xFF01,0xFFF9,3,174,200,0xFF01,867,197,0xFFFF};
static const EIF_TYPE_INDEX egt_37_921 [] = {0xFF01,422,0xFF01,0xFFF9,3,174,200,0xFF01,868,197,0xFFFF};
static const EIF_TYPE_INDEX egt_38_921 [] = {0xFF01,422,0xFF01,0xFFF9,4,174,200,0xFF01,865,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_39_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_40_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_41_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_42_921 [] = {422,0xFF01,0xFFF9,3,174,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_43_921 [] = {422,0xFF01,0xFFF9,3,174,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_44_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_45_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_46_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_47_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_48_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_49_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_50_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_51_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_52_921 [] = {422,0xFF01,0xFFF9,1,174,200,0xFFFF};
static const EIF_TYPE_INDEX egt_53_921 [] = {0xFF01,250,0xFF01,0xFFF9,5,174,200,200,197,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_54_921 [] = {422,0xFF01,0xFFF9,2,174,200,0xFF01,875,0xFFFF};
static const EIF_TYPE_INDEX egt_55_921 [] = {0xFF01,250,0xFF01,0xFFF9,6,174,200,200,197,206,206,203,0xFFFF};
static const EIF_TYPE_INDEX egt_56_921 [] = {422,0xFF01,0xFFF9,2,174,200,0xFF01,875,0xFFFF};
static const EIF_TYPE_INDEX egt_57_921 [] = {0xFF01,250,0xFF01,0xFFF9,6,174,200,200,197,206,206,203,0xFFFF};
static const EIF_TYPE_INDEX egt_58_921 [] = {422,0xFF01,0xFFF9,4,174,200,0xFF01,226,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_59_921 [] = {0xFF01,250,0xFF01,0xFFF9,5,174,200,200,0xFF01,226,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_60_921 [] = {422,0xFF01,0xFFF9,2,174,200,0xFF01,226,0xFFFF};
static const EIF_TYPE_INDEX egt_61_921 [] = {0xFF01,250,0xFF01,0xFFF9,3,174,200,200,0xFF01,226,0xFFFF};
static const EIF_TYPE_INDEX egt_62_921 [] = {422,0xFF01,0xFFF9,4,174,200,0xFF01,866,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_63_921 [] = {0xFF01,250,0xFF01,0xFFF9,8,174,200,200,200,200,206,206,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_64_921 [] = {422,0xFF01,0xFFF9,3,174,200,0xFF01,867,197,0xFFFF};
static const EIF_TYPE_INDEX egt_65_921 [] = {0xFF01,250,0xFF01,0xFFF9,7,174,200,200,200,197,197,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_66_921 [] = {422,0xFF01,0xFFF9,3,174,200,0xFF01,868,197,0xFFFF};
static const EIF_TYPE_INDEX egt_67_921 [] = {0xFF01,250,0xFF01,0xFFF9,7,174,200,200,200,197,197,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_68_921 [] = {422,0xFF01,0xFFF9,4,174,200,0xFF01,865,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_69_921 [] = {0xFF01,250,0xFF01,0xFFF9,5,174,200,200,200,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_70_921 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_71_921 [] = {0xFF01,901,0xFFFF};
static const EIF_TYPE_INDEX egt_72_921 [] = {0xFF01,915,0xFFFF};
static const EIF_TYPE_INDEX egt_73_921 [] = {0xFF01,912,0xFFFF};
static const EIF_TYPE_INDEX egt_74_921 [] = {0xFF01,906,0xFFFF};
static const EIF_TYPE_INDEX egt_75_921 [] = {0xFF01,0xFFF9,3,174,0xFF01,632,203,0xFF01,632,203,0xFF01,632,203,0xFFFF};
static const EIF_TYPE_INDEX egt_76_921 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_77_921 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_78_921 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_79_921 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_80_921 [] = {0xFF01,217,0xFFFF};
static const EIF_TYPE_INDEX egt_81_921 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
static const EIF_TYPE_INDEX egt_82_921 [] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};


static const struct desc_info desc_921[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_921), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_921), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_921), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_921), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_921), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_921), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_921), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_921), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_921), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_921), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_921), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_921), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0731 /*920*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_921), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_921), 15079, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06EF /*887*/), 15080, 256},
	{EIF_GENERIC(NULL), 15728, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5934, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14212, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14216, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 14202, 0},
	{EIF_GENERIC(egt_14_921), 14203, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14204, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14205, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14206, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14207, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14208, 264},
	{EIF_GENERIC(egt_15_921), 14218, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14213, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14214, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14215, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14217, 265},
	{EIF_GENERIC(NULL), 14809, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14810, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14811, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14772, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14812, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 14773, 266},
	{EIF_GENERIC(egt_16_921), 15654, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_921), 14813, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_921), 14814, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_921), 14815, 0xFFFFFFFF},
	{EIF_GENERIC(egt_20_921), 14816, 0xFFFFFFFF},
	{EIF_GENERIC(egt_21_921), 14817, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_921), 14818, 0xFFFFFFFF},
	{EIF_GENERIC(egt_23_921), 14819, 0xFFFFFFFF},
	{EIF_GENERIC(egt_24_921), 14820, 0xFFFFFFFF},
	{EIF_GENERIC(egt_25_921), 14821, 0xFFFFFFFF},
	{EIF_GENERIC(egt_26_921), 14822, 0xFFFFFFFF},
	{EIF_GENERIC(egt_27_921), 14823, 0xFFFFFFFF},
	{EIF_GENERIC(egt_28_921), 14824, 0xFFFFFFFF},
	{EIF_GENERIC(egt_29_921), 14825, 0xFFFFFFFF},
	{EIF_GENERIC(egt_30_921), 14826, 0xFFFFFFFF},
	{EIF_GENERIC(egt_31_921), 14827, 0xFFFFFFFF},
	{EIF_GENERIC(egt_32_921), 14828, 0xFFFFFFFF},
	{EIF_GENERIC(egt_33_921), 14829, 0xFFFFFFFF},
	{EIF_GENERIC(egt_34_921), 14830, 0xFFFFFFFF},
	{EIF_GENERIC(egt_35_921), 14831, 0xFFFFFFFF},
	{EIF_GENERIC(egt_36_921), 14832, 0xFFFFFFFF},
	{EIF_GENERIC(egt_37_921), 14833, 0xFFFFFFFF},
	{EIF_GENERIC(egt_38_921), 14834, 0xFFFFFFFF},
	{EIF_GENERIC(egt_39_921), 14835, 8},
	{EIF_GENERIC(egt_40_921), 14836, 16},
	{EIF_GENERIC(egt_41_921), 14837, 24},
	{EIF_GENERIC(egt_42_921), 14838, 32},
	{EIF_GENERIC(egt_43_921), 14839, 40},
	{EIF_GENERIC(egt_44_921), 14840, 48},
	{EIF_GENERIC(egt_45_921), 14841, 56},
	{EIF_GENERIC(egt_46_921), 14842, 64},
	{EIF_GENERIC(egt_47_921), 14843, 72},
	{EIF_GENERIC(egt_48_921), 14844, 80},
	{EIF_GENERIC(egt_49_921), 14845, 88},
	{EIF_GENERIC(egt_50_921), 14846, 96},
	{EIF_GENERIC(egt_51_921), 14847, 104},
	{EIF_GENERIC(egt_52_921), 14848, 112},
	{EIF_GENERIC(egt_53_921), 14849, 120},
	{EIF_GENERIC(NULL), 14850, 0xFFFFFFFF},
	{EIF_GENERIC(egt_54_921), 14851, 128},
	{EIF_GENERIC(egt_55_921), 14852, 136},
	{EIF_GENERIC(NULL), 14853, 0xFFFFFFFF},
	{EIF_GENERIC(egt_56_921), 14854, 144},
	{EIF_GENERIC(egt_57_921), 14855, 152},
	{EIF_GENERIC(NULL), 14856, 0xFFFFFFFF},
	{EIF_GENERIC(egt_58_921), 14857, 160},
	{EIF_GENERIC(egt_59_921), 14858, 168},
	{EIF_GENERIC(NULL), 14859, 0xFFFFFFFF},
	{EIF_GENERIC(egt_60_921), 14860, 176},
	{EIF_GENERIC(egt_61_921), 14861, 184},
	{EIF_GENERIC(NULL), 14862, 0xFFFFFFFF},
	{EIF_GENERIC(egt_62_921), 14863, 192},
	{EIF_GENERIC(egt_63_921), 14864, 200},
	{EIF_GENERIC(NULL), 14865, 0xFFFFFFFF},
	{EIF_GENERIC(egt_64_921), 14866, 208},
	{EIF_GENERIC(egt_65_921), 14867, 216},
	{EIF_GENERIC(NULL), 14868, 0xFFFFFFFF},
	{EIF_GENERIC(egt_66_921), 14869, 224},
	{EIF_GENERIC(egt_67_921), 14870, 232},
	{EIF_GENERIC(NULL), 14871, 0xFFFFFFFF},
	{EIF_GENERIC(egt_68_921), 14872, 240},
	{EIF_GENERIC(egt_69_921), 14873, 248},
	{EIF_GENERIC(NULL), 14874, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 15670, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15731, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15658, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15726, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15659, 0xFFFFFFFF},
	{EIF_GENERIC(egt_70_921), 15660, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15661, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0167 /*179*/), 15662, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15663, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15664, 0xFFFFFFFF},
	{EIF_GENERIC(egt_71_921), 15665, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15666, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15667, 0xFFFFFFFF},
	{EIF_GENERIC(egt_72_921), 15668, 0xFFFFFFFF},
	{EIF_GENERIC(egt_73_921), 15669, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15671, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15672, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15673, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15674, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15675, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15676, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15677, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15678, 0xFFFFFFFF},
	{EIF_GENERIC(egt_74_921), 15679, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15680, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15681, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15682, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15683, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15684, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15685, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15686, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15687, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15688, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15689, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15690, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15691, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15692, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15693, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15694, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15609, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15610, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15611, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15612, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15613, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15614, 0xFFFFFFFF},
	{EIF_GENERIC(egt_75_921), 15615, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15616, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15617, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15618, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15619, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15620, 0xFFFFFFFF},
	{EIF_GENERIC(egt_76_921), 15621, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15622, 0xFFFFFFFF},
	{EIF_GENERIC(egt_77_921), 15623, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15624, 0xFFFFFFFF},
	{EIF_GENERIC(egt_78_921), 15625, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15626, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15627, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15628, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15629, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15630, 0xFFFFFFFF},
	{EIF_GENERIC(egt_79_921), 15631, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15632, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15633, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15634, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15635, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15636, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15637, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15638, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15639, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15640, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15641, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15642, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15643, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15644, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15645, 0xFFFFFFFF},
	{EIF_GENERIC(egt_80_921), 15646, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15647, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15648, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15649, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15650, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15651, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15652, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15653, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 15655, 272},
	{EIF_NON_GENERIC(0x017F /*191*/), 15732, 0xFFFFFFFF},
	{EIF_GENERIC(egt_81_921), 15733, 0xFFFFFFFF},
	{EIF_GENERIC(egt_82_921), 15734, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15735, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15736, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15737, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15738, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15739, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15740, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15706, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15707, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15708, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15709, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15710, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15711, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15712, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15713, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15714, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15715, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15716, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15717, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15718, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15719, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15720, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15721, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15722, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15723, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15724, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 15725, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 15727, 280},
	{EIF_NON_GENERIC(0x019D /*206*/), 15729, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15730, 0xFFFFFFFF},
};
void Init921(void)
{
	IDSC(desc_921, 0, 920);
	IDSC(desc_921 + 1, 1, 920);
	IDSC(desc_921 + 32, 344, 920);
	IDSC(desc_921 + 34, 206, 920);
	IDSC(desc_921 + 36, 378, 920);
	IDSC(desc_921 + 46, 360, 920);
	IDSC(desc_921 + 50, 379, 920);
	IDSC(desc_921 + 57, 372, 920);
	IDSC(desc_921 + 129, 353, 920);
	IDSC(desc_921 + 213, 350, 920);
}


#ifdef __cplusplus
}
#endif
