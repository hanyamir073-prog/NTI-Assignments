

#ifndef DIO_H_
#define DIO_H_

#include "STD_TYPES.h"

#define PORT_A 0
#define PORT_B 1
#define PORT_C 2
#define PORT_D 3



#define INPUT 0
#define OUTPUT 1

#define HIGH 1
#define LOW 0





void DIO_SetPinDirection(u8 Port, u8 pin_no, u8 value);
void DIO_SetPinValue(u8 Port, u8 pin_no, u8 value);
u8 DIO_GetPinValue(u8 Port, u8 pin_no);
void DIO_TogglePinValue(u8 Port, u8 pin_no);

void DIO_SetPortDirection(u8 Port, u8 value);
void DIO_SetPortValue(u8 Port, u8 value);
void DIO_TogglePortValue(u8 Port);
u8 DIO_GetPortValue(u8 Port);


#endif























