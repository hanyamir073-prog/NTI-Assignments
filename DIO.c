#define F_CPU 8000000UL         
#include <avr/io.h>
#include <util/delay.h>


#define SET_BIT(REG, PIN) (REG |= (1 << PIN))
#define CLR_BIT(REG, PIN) (REG &= ~(1 << PIN))
#define GET_BIT(REG, PIN) (((REG) >> (PIN)) & 1)
#define TOG_BIT(REG, PIN) (REG ^= (1 << PIN))  

typedef unsigned char u8;

#define INPUT 0
#define OUTPUT 1          
#define HIGH 1
#define LOW 0



void DIO_SetPinDirection(u8 Port, u8 pin_no, u8 value)
{
	if(value == 1)
	{
		switch(Port)
		{
			case 1: SET_BIT(DDRA, pin_no); break;   
			case 2: SET_BIT(DDRB, pin_no); break;
			case 3: SET_BIT(DDRC, pin_no); break;
			case 4: SET_BIT(DDRD, pin_no); break;
		}
	}
	else
	{
		switch(Port)
		{
			case 1: CLR_BIT(DDRA, pin_no); break;   
			case 2: CLR_BIT(DDRB, pin_no); break;
			case 3: CLR_BIT(DDRC, pin_no); break;
			case 4: CLR_BIT(DDRD, pin_no); break;
		}
	}
}

void DIO_SetPinValue(u8 Port, u8 pin_no, u8 value)   
{
	if(value == 1)
	{
		switch(Port)
		{
			case 1: SET_BIT(PORTA, pin_no); break;
			case 2: SET_BIT(PORTB, pin_no); break;
			case 3: SET_BIT(PORTC, pin_no); break;
			case 4: SET_BIT(PORTD, pin_no); break;
		}
	}
	else
	{
		switch(Port)
		{
			case 1: CLR_BIT(PORTA, pin_no); break;
			case 2: CLR_BIT(PORTB, pin_no); break;
			case 3: CLR_BIT(PORTC, pin_no); break;
			case 4: CLR_BIT(PORTD, pin_no); break;
		}
	}
}

u8 DIO_GetPinValue(u8 Port, u8 pin_no)
{
	switch(Port)
	{
		case 1: return GET_BIT(PINA, pin_no);
		case 2: return GET_BIT(PINB, pin_no);
		case 3: return GET_BIT(PINC, pin_no);
		case 4: return GET_BIT(PIND, pin_no);
	}
	return 0;
}

void DIO_TogglePinValue(u8 Port, u8 pin_no)
{
	switch(Port)
	{
		case 1: TOG_BIT(PORTA, pin_no); break;
		case 2: TOG_BIT(PORTB, pin_no); break;
		case 3: TOG_BIT(PORTC, pin_no); break;
		case 4: TOG_BIT(PORTD, pin_no); break;
	}
}



void DIO_SetPortDirection(u8 Port, u8 value)
{
	switch(Port)
	{
		case 1: DDRA = value; break;
		case 2: DDRB = value; break;
		case 3: DDRC = value; break;
		case 4: DDRD = value; break;
	}
}

void DIO_SetPortValue(u8 Port, u8 value)
{
	switch(Port)
	{
		case 1: PORTA = value; break;
		case 2: PORTB = value; break;
		case 3: PORTC = value; break;
		case 4: PORTD = value; break;
	}
}

void DIO_TogglePortValue(u8 Port)
{
	switch(Port)
	{
		case 1: PORTA = ~PORTA; break;
		case 2: PORTB = ~PORTB; break;
		case 3: PORTC = ~PORTC; break;
		case 4: PORTD = ~PORTD; break;
	}
}

u8 DIO_GetPortValue(u8 Port)
{
	switch(Port)
	{
		case 1: return PINA;
		case 2: return PINB;
		case 3: return PINC;
		case 4: return PIND;
	}
	return 0;
}








	
