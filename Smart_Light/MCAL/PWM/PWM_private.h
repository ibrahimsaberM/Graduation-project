/******************************************************************
 ****************** SWC     : PWM_private.h		*******************
 ****************** DATE    : Nov 19, 2021		*******************
 ****************** Author  : Taqwa Hamed		*******************
 ****************** Version : V00				*******************
 *****************************************************************/
#ifndef PWM_PRIVATE_H_
#define PWM_PRIVATE_H_

#define TCCR0  *((volatile u8*)0x53)
#define TCNT0  *((volatile u8*)0x52)
#define TIFR   *((volatile u8*)0x58)
#define OCR0   *((volatile u8*)0x5c)
#define TIMSK  *((volatile u8*)0x59)


//TCCR0 BITS
#define CS00 0
#define CS01 1
#define CS02 2
#define WGM01 3
#define COM00 4
#define COM01 5
#define WGM00 6
#define FOC0  7


#define TOP     256

#define     PWM_pre_1					(0b001)
#define     PWM_pre_8                   (0b010)
#define     PWM_pre_64                   (0b011)
#define     PWM_pre_256                  (0b100)
#define     PWM_pre_1024                 (0b101)

#endif /* PWM_PRIVATE_H_ */
