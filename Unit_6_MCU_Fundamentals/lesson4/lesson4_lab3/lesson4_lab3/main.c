/*
 * lesson4_lab3.c
 *
 * Created: 29/10/2023 02:24:28 ص
 * Author : dell
 */ 


// define clock 
#define F_CPU 8000000UL

//important library 
#include <avr/io.h>
#include "avr/interrupt.h"
#include "util/delay.h"


// basic macros
#define Set_bit(reg,bit)     reg|=(1<<bit)
#define Clear_Bit(reg,bit)   reg&=~(1<<bit)
#define Toggle_Bit(reg,bit)  reg^=(1<<bit)



int main(void)
{
    // define pin 5,7,6 as output 
	Set_bit(DDRD,5);
	Set_bit(DDRD,6);
	Set_bit(DDRD,7);
	
	
	//MCU Control Register –\
	MCUCR The MCU Control Register contains \
	control bits for interrupt sense control and general\
	MCU functions.
	
	//Any logical change on INT1 generates an interrupt request
	
	MCUCR |=(0b01<<2);
	
	// rising edge INT0
	
	MCUCR |=(0b11<<0);
	
	// falling edge INT2
	
	MCUSR |=(0<<6);
	
	// set interrupt
	Set_bit(GICR,5);
	Set_bit(GICR,6);
	Set_bit(GICR,7);
	
	sei();
	
    while (1) 
    {
		// clear bits after finish ISR
		Clear_Bit(PORTD,5);
		Clear_Bit(PORTD,6);
		Clear_Bit(PORTD,7);
		
		
    }
}
ISR(INT0_vect){
	Set_bit(PORTD,5);
	_delay_ms(1000);
}
ISR(INT1_vect){
	Set_bit(PORTD,6);
	_delay_ms(1000);
}
ISR(INT2_vect){
	Set_bit(PORTD,7);
	_delay_ms(1000);
}
