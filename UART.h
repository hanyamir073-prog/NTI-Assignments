
#ifndef UART_H_
#define UART_H_

#include "STD_TYPES.h"

void UART_Init(void);

void UART_Send(u8 Data);

u8 UART_Receive(void);

#endif







































