/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_3P8SP_SET_B_H
#define FIMC_IS_CIS_3P8SP_SET_B_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-3p8sp.h"

const u32 sensor_3p8sp_setfile_B_Global[] = {
	0x6028, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,
	I2C_MODE_DELAY, 3000, 0x00, /* Delay 3000us */
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2F38, 0x02,
	0x6F12, 0x0088, 0x02,
	0x6F12, 0x0D70, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0xF496, 0x0048, 0x02,
	0xF470, 0x0020, 0x02,
	0xF43A, 0x0015, 0x02,
	0xF484, 0x0006, 0x02,
	0xF440, 0x00AF, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0x3664, 0x0019, 0x02,
	0xF494, 0x1010, 0x02,
	0x367A, 0x0100, 0x02,
	0x362A, 0x0104, 0x02,
	0x362E, 0x0404, 0x02,
	0x32B2, 0x0008, 0x02,
	0x3286, 0x0003, 0x02,
	0x328A, 0x0005, 0x02,
	0xF47C, 0x001F, 0x02,
	0xF62E, 0x00C5, 0x02,
	0xF630, 0x00CD, 0x02,
	0xF632, 0x00DD, 0x02,
	0xF634, 0x00E5, 0x02,
	0xF636, 0x00F5, 0x02,
	0xF638, 0x00FD, 0x02,
	0xF63A, 0x010D, 0x02,
	0xF63C, 0x0115, 0x02,
	0xF63E, 0x0125, 0x02,
	0xF640, 0x012D, 0x02,
	0x3070, 0x0000, 0x02,
	0x0B0E, 0x0000, 0x02,
	0x31C0, 0x00C8, 0x02,
	0x1006, 0x0004, 0x02,
};

/*
 * [Mode Information]
 *	0: 4608 x 3456 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1365, MIPI Mclk(Mhz): 26
 *	1: 2304 x 1728 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 715,  MIPI Mclk(Mhz): 26
 */

const u32 sensor_3p8sp_setfile_B_2304x1728_30fps[] = {
	0x6028, 0x2000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0003, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x0037, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x3008, 0x0000, 0x02,
	0x301C, 0x4396, 0x02,
	0x301E, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0346, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x034A, 0x0D97, 0x02,
	0x034C, 0x0900, 0x02,
	0x034E, 0x06C0, 0x02,
	0x0408, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0003, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x0E1A, 0x02,
	0x602A, 0x1704, 0x02,
	0x6F12, 0x8011, 0x02,
	0x317A, 0x0007, 0x02,
	0x31A4, 0x0102, 0x02,
	0x36C4, 0xFFCD, 0x02,
	0x36C6, 0xFFCD, 0x02,
	0x36C8, 0xFFCD, 0x02,
	0x36CA, 0xFFCD, 0x02,
	0x36CC, 0xFFCD, 0x02,
	0x36CE, 0xFFCD, 0x02,
	0x36D0, 0xFFCD, 0x02,
	0x36D2, 0xFFCD, 0x02,
	0x36D4, 0xFFCD, 0x02,
	0x36D6, 0xFFCD, 0x02,
	0x36D8, 0xFFCD, 0x02,
	0x36DA, 0xFFCD, 0x02,
	0x36DC, 0xFFCD, 0x02,
	0x36DE, 0xFFCD, 0x02,
	0x36E0, 0xFFCD, 0x02,
	0x36E2, 0xFFCD, 0x02,
};

const u32 sensor_3p8sp_setfile_B_4608x3456_30fps[] = {
	0x6028, 0x2000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0003, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x0069, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x3008, 0x0000, 0x02,
	0x301C, 0x4396, 0x02,
	0x301E, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0346, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x034A, 0x0D97, 0x02,
	0x034C, 0x1200, 0x02,
	0x034E, 0x0D80, 0x02,
	0x0408, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x0E1A, 0x02,
	0x602A, 0x1704, 0x02,
	0x6F12, 0x8010, 0x02,
	0x317A, 0x0130, 0x02,
	0x31A4, 0x0102, 0x02,
	0x36C4, 0x0000, 0x02,
	0x36C6, 0x0000, 0x02,
	0x36C8, 0x0000, 0x02,
	0x36CA, 0x0000, 0x02,
	0x36CC, 0x0000, 0x02,
	0x36CE, 0x0000, 0x02,
	0x36D0, 0x0000, 0x02,
	0x36D2, 0x0000, 0x02,
	0x36D4, 0x0000, 0x02,
	0x36D6, 0x0000, 0x02,
	0x36D8, 0x0000, 0x02,
	0x36DA, 0x0000, 0x02,
	0x36DC, 0x0000, 0x02,
	0x36DE, 0x0000, 0x02,
	0x36E0, 0x0000, 0x02,
	0x36E2, 0x0000, 0x02,
};

const struct sensor_pll_info sensor_3p8sp_pllinfo_B_4608x3456_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x69, /* secnd_pll_multiplier	(0x030E) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p8sp_pllinfo_B_2304x1728_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x37, /* secnd_pll_multiplier	(0x030E) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck	(0x0342) */
};

static const u32 *sensor_3p8sp_setfiles_B[] = {
	sensor_3p8sp_setfile_B_4608x3456_30fps,
	sensor_3p8sp_setfile_B_2304x1728_30fps,
};

static const u32 sensor_3p8sp_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_3p8sp_setfile_B_4608x3456_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_B_2304x1728_30fps),
};

static const struct sensor_pll_info *sensor_3p8sp_pllinfos_B[] = {
	&sensor_3p8sp_pllinfo_B_4608x3456_30fps,
	&sensor_3p8sp_pllinfo_B_2304x1728_30fps,
};
#endif
