/*
 * imst_hb2.h
 *
 *  Created on: Dec 1, 2017
 *      Author: jnettleton
 */

#ifndef _IMST_HB2_H_
#define _IMST_HB2_H_

/* Human readable platform definition */
#define DISPLAY_PLATFORM "IMST + HB2"

/* parameters for native spi */
#define SPI_SPEED	20000000
#define SPI_DEV_PATH	"/dev/spidev1.0"
#define SPI_CS_CHANGE   0

/* parameters for a FT2232H */
#define VID		        0x0403
#define PID		        0x6014

#endif /* _IMST_HB2_H_ */
