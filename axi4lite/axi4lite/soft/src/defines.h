/*****************************************************************************************
 * HEIG-VD
 * Haute Ecole d'Ingenerie et de Gestion du Canton de Vaud
 * School of Business and Engineering in Canton de Vaud
 *****************************************************************************************
 * REDS Institute
 * Reconfigurable Embedded Digital Systems
 *****************************************************************************************
 *
 * File                 : defines.h
 * Author               : Sébastien Masle
 * Date                 : 16.02.2018
 *
 * Context              : SOCF class
 *
 *****************************************************************************************
 * Brief: some definitions
 *
 *****************************************************************************************
 * Modifications :
 * Ver    Date        Engineer      Comments
 * 0.0    16.02.2018  SMS           Initial version.
 *
*****************************************************************************************/


typedef volatile unsigned short vushort;
typedef unsigned short ushort;
typedef volatile unsigned int vuint;


#define		EDGE_TRIGGERED			0x1
#define		LEVEL_SENSITIVE			0x0
#define		CPU0					0x01	// bit-mask; bit 0 represents cpu0
#define		ENABLE					0x1

#define		USER_MODE				0b10000
#define		FIQ_MODE				0b10001
#define		IRQ_MODE				0b10010
#define		SVC_MODE				0b10011
#define		ABORT_MODE				0b10111
#define		UNDEF_MODE				0b11011
#define		SYS_MODE				0b11111

#define		INT_ENABLE				0b01000000
#define		INT_DISABLE				0b11000000

#define BASE_ADRESSE                    0xFF200000


#define LEDS            *(vuint *) (BASE_ADRESSE + 0x8)
#define HEX3_0          *(vuint *) (BASE_ADRESSE + 0xC)
#define HEX4_5          *(vuint *) (BASE_ADRESSE + 0x10)
#define SWITCHS         *(vuint *) (BASE_ADRESSE + 0x14)
#define KEYS            *(vuint *) (BASE_ADRESSE + 0x18)

