/*
 * resgisters.h
 *
 * Created: 19/09/2022 11:43:30 PM
 *  Author: LEGION 5
 */ 

/************************************************************************/
/*			All Registers                                               */
/************************************************************************/

#ifndef RESGISTERS_H_
#define RESGISTERS_H_

#include "types.h"
/************************************************************************/
/*			DIO Registers												*/
/************************************************************************/

//PORTA
#define PORTA *((volatile uint8_t *) (0x3B))
#define DDRA *((volatile uint8_t*) (0x3A))
#define PINA *((volatile uint8_t*) (0x39))

//PORTB
#define PORTB *((volatile uint8_t *) (0x38))
#define DDRB *((volatile uint8_t*) (0x37))
#define PINB *((volatile uint8_t*) (0x36))

//PORTC
#define PORTC *((volatile uint8_t *) (0x35))
#define DDRC *((volatile uint8_t*) (0x34))
#define PINC *((volatile uint8_t*) (0x33))

//PORTD
#define PORTD *((volatile uint8_t *) (0x32))
#define DDRD *((volatile uint8_t*) (0x31))
#define PIND *((volatile uint8_t*) (0x30))


/************************************************************************/
/*		Timer Registers													*/
/************************************************************************/


//Timer0 Registers

#define TCCR0 *((volatile uint8_t *) (0x53))
#define TCNT0 *((volatile uint8_t*) (0x52))
#define TIFR *((volatile uint8_t*) (0x58))


/************************************************************************/
/*		External Interrupts Registers									*/
/************************************************************************/


#define MCUCR *((volatile uint8_t *) (0x55))
#define MCUCSR *((volatile uint8_t*) (0x54))
#define GICR *((volatile uint8_t*) (0x5B))
#define GIFR *((volatile uint8_t*) (0x5A))





#endif /* RESGISTERS_H_ */