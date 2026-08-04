
#define F_CPU 8000000UL
#include <util/delay.h>
#include "STD_TYPES.h"
#include "LCD.h"
#include "DIO.h"


void lcd_init(void)
{
	
	_delay_ms(100);

	lcd_send_command(0x30);
	_delay_ms(5);
	lcd_send_command(0x30);
	_delay_us(100);
	lcd_send_command(0x30);
	_delay_ms(1);
	lcd_send_command(0x38);  
	_delay_ms(2);
	lcd_send_command(0x0C);  
	_delay_ms(2);
	lcd_send_command(0x01); 
	_delay_ms(5);
	lcd_send_command(0x06);  
	_delay_ms(2);
}







void lcd_send_command(u8 command)
{
	DIO_SetPinValue(PORT_C, 5, LOW);  
	DIO_SetPinValue(PORT_C, 4, LOW);  

	DIO_SetPortValue(PORT_D, command);

	DIO_SetPinValue(PORT_C, 7, HIGH); 
	_delay_us(1);
	DIO_SetPinValue(PORT_C, 7, LOW);
	_delay_ms(2);
}

void lcd_send_data(u8 data)
{
	DIO_SetPinValue(PORT_C, 5, HIGH);  
	DIO_SetPinValue(PORT_C, 4, LOW); 

	DIO_SetPortValue(PORT_D, data);

	DIO_SetPinValue(PORT_C, 7, HIGH); 
	_delay_us(1);
	DIO_SetPinValue(PORT_C, 7, LOW);
	_delay_ms(2);
}

void lcd_send_string(u8* str)
{
	u8 i = 0;

	while (str[i] != '\0')
	{
		lcd_send_data(str[i]);
		i++;
	}

}















