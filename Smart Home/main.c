#define  F_CPU 8000000UL
#include <util/delay.h>
  
  
 #include "STD_TYPES.h"
#include "DIO.h"
#include "LCD.h"
#include "keypad.h"
#include "UART.h"





int main(void) {
	 u8 Key; u8 count = 0;
	
	u8 password[4] = {'1', '2', '3', '4'};

	u8 entered[4];

	DIO_SetPortDirection(PORT_D, OUTPUT); 
	DIO_SetPinDirection(PORT_C, 5, OUTPUT);
	DIO_SetPinDirection(PORT_C, 4, OUTPUT);
	DIO_SetPinDirection(PORT_C, 7, OUTPUT);
	
	DIO_SetPinDirection(PORT_B, 2, OUTPUT);
DIO_SetPinDirection(PORT_B, 3, OUTPUT);

	
	
	
	lcd_init();
	_delay_ms(500);
lcd_send_string((u8*)"Enter Password:");


	while (1)
	{
		
		DIO_SetPinValue(PORT_B, 2, HIGH); 
		_delay_ms(500);
		DIO_SetPinValue(PORT_B, 2, LOW);  
		_delay_ms(500);
DIO_SetPinValue(PORT_B, 3, HIGH);










Key = Keypad();


if (Key != 255 && count < 4)
{
	
	entered[count] = Key;

	
	lcd_send_data('*');

	
	count++;
}
	
	if (count == 4)
	{
		
		if (entered[0] == password[0] &&
		entered[1] == password[1] &&
		entered[2] == password[2] &&
		entered[3] == password[3])
		{
			lcd_send_command(0xC0);
			lcd_send_string((u8*)"Access Granted");

			DIO_SetPinValue(PORT_B, 2, HIGH);
		}
		else
		{
			lcd_send_command(0xC0);
			lcd_send_string((u8*)"Wrong Password");

			DIO_SetPinValue(PORT_B, 2, LOW);
		}


		_delay_ms(3000);

		lcd_send_command(0x01);

		
		lcd_send_string((u8*)"Enter Password:");

		
		count = 0;


	    }
	}
}

































	


























