/*****************************************************************************
* Copyright 2010 Texas Instruments Corporation, All Rights Reserved.
* TI makes NO WARRANTY as to software products, which are supplied "AS-IS"
*****************************************************************************/

/*****************************************************************************
*     This code is automatically generated from bqfs/dffs file.              *
*          DO NOT MODIFY THIS FILE DIRECTLY                                  *
*****************************************************************************/

//this file is generated from 0726_2_02-bq27426G1-flip.gm.fs at Thu Jul 30 13:02:51 2020

#ifndef __FLIP_BQFS_FILE__
#define __FLIP_BQFS_FILE__

#include "bqfs_cmd_type.h"

const bqfs_cmd_t smith_flip_bqfs_image[] = {
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x01, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x26, 0x04}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x02, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x02, 0x02}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x13, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 1100},
	},
	// chemid start
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x27, 0x66, 0x11, 0x59, 0xE2, 0xE1, 0xE4, 0xE3, 0xE0, 0xE1, 0xDF, 0xE1, 0xE1, 0xE2, 0xE2, 0xE4, 0xE4, 0xE6, 0xE7, 0xE6, 0xE7, 0xE2, 0xE3, 0xEF, 0xEF, 0xF3, 0xF4, 0xF6, 0xF6, 0xFA, 0xF8, 0xFD}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x91}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x91}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xF9, 0xF6, 0xF5, 0xF3, 0xF0, 0xEE, 0xF3, 0xFE, 0xFC, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFD}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFD}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFF, 0x4D, 0x03, 0xEA, 0x00, 0xFD, 0x00, 0x05, 0x00, 0x05, 0xFF, 0x01, 0x03, 0x01, 0x05, 0x0A, 0x0E, 0x13, 0x02, 0xFA, 0x07, 0x00, 0x09, 0x0C, 0x03, 0xF7, 0x00, 0x01, 0xF3, 0xEF, 0x9D, 0xBB}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x3E}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x3E}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xBB, 0xF2, 0x27, 0x10, 0xD3, 0x59, 0x00, 0xE2, 0x8D, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFF}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFF}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x55, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFF, 0x71, 0x02, 0x01, 0x01, 0xFF, 0xFD, 0x08, 0x01, 0x00, 0x01, 0x01, 0xFF, 0x01, 0x0F, 0x61, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x02}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x55, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x02}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6C, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFE, 0xCE, 0x02, 0x03, 0x04, 0x00, 0x12, 0xF0, 0x07, 0xEC, 0x00, 0x00, 0x00, 0xFA, 0xE7, 0xB6, 0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xA7}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6C, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xA7}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x59, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x22, 0x00, 0x22, 0x00, 0x25, 0x00, 0x2D, 0x00, 0x38, 0x00, 0x23, 0x00, 0x2B, 0x00, 0x23, 0x00, 0x23, 0x00, 0x23, 0x00, 0x26, 0x00, 0x27, 0x00, 0x2E, 0x00, 0x42, 0x00, 0xA0, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x1D}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x59, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x1D}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6D, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x06, 0x3E, 0x0E, 0xE3, 0x0E, 0xBD, 0x11, 0x59, 0x11, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x5D}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6D, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x5D}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 1100},
	},
	// end chemid
	// start main config
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x02, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x02, 0x26, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xA5}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x02, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xA5}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x24, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x19, 0x28, 0x63, 0x5F, 0xFF, 0x62, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x69}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x24, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x69}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x31, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x0A, 0x0F, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xDF}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x31, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xDF}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x40, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x64, 0x79, 0x0F, 0x9F, 0x23, 0x04, 0x00, 0x14, 0x04, 0x00, 0x09, 0x04, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x02}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x40, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x02}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x44, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x32, 0x01, 0xC2, 0x30, 0x00, 0x03, 0x08, 0x98, 0x01, 0x00, 0x3C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xF9}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x44, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xF9}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x01, 0xF4, 0x00, 0x1E, 0xC8, 0x14, 0x08, 0x00, 0x3C, 0x0E, 0x10, 0x00, 0x0A, 0x46, 0x05, 0x14, 0x05, 0x0F, 0x03, 0x20, 0x7F, 0xFF, 0x00, 0xF0, 0x46, 0x50, 0x18, 0x01, 0x90, 0x00, 0x64, 0x19}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xE4}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xE4}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xDC, 0x5C, 0x60, 0x00, 0x7D, 0x00, 0x04, 0x03, 0x19, 0x25, 0x0F, 0x14, 0x0A, 0x78, 0x60, 0x28, 0x01, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x43, 0x80, 0x04, 0x01, 0x14, 0x00, 0x08, 0x0B, 0xB8, 0x01}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xDB}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xDB}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x02}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x2C, 0x0A, 0x01, 0x0A, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x64, 0x02, 0x00, 0x00, 0x00, 0x00, 0x07, 0xD0, 0x01, 0x03, 0x5A, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x59}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x50, 0x02}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x59}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x51, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0xC1, 0x00, 0x7D, 0x01, 0x35, 0x00, 0x3C, 0x3C, 0x01, 0xB3, 0xB3, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x1B}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x51, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x1B}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x52, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x41, 0x73, 0x00, 0x00, 0x00, 0x81, 0x06, 0x09, 0x17, 0x5B, 0x0B, 0xB8, 0x00, 0xC8, 0x00, 0x32, 0x00, 0x14, 0x03, 0xE8, 0x01, 0x00, 0x9B, 0x00, 0x0A, 0xFF, 0xA4, 0xFF, 0xA5, 0x00, 0x01, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x9F}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x52, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x9F}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x59, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x29, 0x00, 0x29, 0x00, 0x2C, 0x00, 0x34, 0x00, 0x41, 0x00, 0x29, 0x00, 0x34, 0x00, 0x2C, 0x00, 0x2E, 0x00, 0x30, 0x00, 0x35, 0x00, 0x36, 0x00, 0x41, 0x00, 0x62, 0x00, 0xE8, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x2F}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x59, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x2F}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6D, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x06, 0x3E, 0x0E, 0xE3, 0x0E, 0xBD, 0x11, 0x59, 0x11, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x5D}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6D, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x5D}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x70, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFF}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x70, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFF}},
		.data_len	= 1,
	},
	// end main config
	// start cc_gain
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x69, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x00, 0x0B, 0xD6, 0x7F, 0x73, 0xB6, 0x46, 0x93, 0x0A, 0xA5, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xCC}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x69, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xCC}},
		.data_len	= 1,
	},
	// end cc_gain
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x00, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x42, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 2000},
	},
};
//end of const bqfs_cmd_t bqfs_image[]
#endif
