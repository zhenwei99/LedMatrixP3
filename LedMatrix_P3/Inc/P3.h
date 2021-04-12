#ifndef __P3_H__
#define __P3_H__

#include "stm32f4xx_hal.h"
#include "stdlib.h"

#define SCAN_TYPE 		32
#define MAX_BIT       8

#define LAT       12  //B
#define OE        11  //B
#define clk       0   //B

#define E 				15
#define D         1   //B
#define C         14  //B
#define B         10  //B
#define A         13   //B

#define A_SSET 0x00000001U<<A
#define B_SSET 0x00000001U<<B
#define C_SSET 0x00000001U<<C
#define D_SSET 0x00000001U<<D
#define E_SSET 0x00000001U<<E
#define A_RSET 0x00000001U<<(A+16)
#define B_RSET 0x00000001U<<(B+16)
#define C_RSET 0x00000001U<<(C+16)
#define D_RSET 0x00000001U<<(D+16)
#define E_RSET 0x00000001U<<(E+16)

#define B2        7 //a7 
#define R2        5 //a5
#define G2        6 //a6

#define B1        4 //a4
#define R1        2 //a2
#define G1        3 //a3


#define OE_P       GPIOB
#define xuat_P     GPIOB
#define clk_P      GPIOB
#define Control_P  GPIOB
#define data_PORT  GPIOA

#define P3_W  63
#define P3_H  63

#define arrD1 (64*64)
#define arrD2 (64)
extern unsigned char Buffer_RGB[];
void ngatquetled(void);
void display(void);
void scan32S(char so);
void SET_dosang(uint16_t sang);
uint16_t GET_dosang(void);


	
#endif  //__P5_H__
