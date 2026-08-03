#include "STD_TYPES.h"
#include <avr/io.h>
#include "DIO.h"
#include "LCD.h"
#include "Keypad.h"



u8 Keypad(void) {
	 u8 col; u8 row;
	
	for (col = 0; col < 4; col++)
	{
		DIO_SetPinDirection(PORT_A, col, OUTPUT);
	}

	
	for (row = 4; row < 8; row++)
	{
		DIO_SetPinDirection(PORT_A, row, INPUT);

		
		DIO_SetPinValue(PORT_A, row, HIGH);
	}


	for (col = 0; col < 4; col++)
	{
		
		DIO_SetPinValue(PORT_A, 0, HIGH);
		DIO_SetPinValue(PORT_A, 1, HIGH);
		DIO_SetPinValue(PORT_A, 2, HIGH);
		DIO_SetPinValue(PORT_A, 3, HIGH);

		
		DIO_SetPinValue(PORT_A, col, LOW);

		
		for (row = 4; row < 8; row++)
		{
			if (DIO_GetPinValue(PORT_A, row) == LOW)
			{
				
				while (DIO_GetPinValue(PORT_A, row) == LOW);

				
			if (row == 0 && col == 0) return '1';
			if (row == 0 && col == 1) return '2';
			if (row == 0 && col == 2) return '3';
			if (row == 0 && col == 3) return 'A';

			if (row == 1 && col == 0) return '4';
			if (row == 1 && col == 1) return '5';
			if (row == 1 && col == 2) return '6';
			if (row == 1 && col == 3) return 'B';

			if (row == 2 && col == 0) return '7';
			if (row == 2 && col == 1) return '8';
			if (row == 2 && col == 2) return '9';
			if (row == 2 && col == 3) return 'C';

			if (row == 3 && col == 0) return '*';
			if (row == 3 && col == 1) return '0';
			if (row == 3 && col == 2) return '#';
			if (row == 3 && col == 3) return 'D';
					
			
			
			}
		}
	}

	return 255;
}






























































































































































































