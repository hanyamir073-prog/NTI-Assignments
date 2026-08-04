
#include <avr/io.h>

#include "STD_TYPES.h"
#include "UART.h"


void UART_Init(void)
{
	UBRRL = 51;

	UCSRB = (1 << RXEN) | (1 << TXEN);

	UCSRC = (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1);
}


void UART_Send(u8 Data)
{
	while ((UCSRA & (1 << UDRE)) == 0);

	UDR = Data;
}


u8 UART_Receive(void)
{
	while ((UCSRA & (1 << RXC)) == 0);

	return UDR;
}






























