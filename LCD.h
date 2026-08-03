
#ifndef LCD_H_
#define LCD_H_

#include "STD_TYPES.h"
#include "DIO.h"

void lcd_send_command(u8 command);
void lcd_send_data(u8 data);
void lcd_send_string(u8* str);
void lcd_init(void);

#endif










