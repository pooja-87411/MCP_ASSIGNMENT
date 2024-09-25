/*
 * uart.h
 *
 *  Created on: Sep 23, 2024
 *      Author: pankaj
 */

#ifndef UART_H_
#define UART_H_
#include <stdint.h>


#define UART			USART2
#define GPIO_UART		GPIOA
#define UART_TX_PIN		2
#define UART_RX_PIN		3
#define GPIO_UART_CLKEN		0
#define UART_CLKEN			17

#define UBRR_9600			0x683
#define UBRR_38400			0x1A1
#define UBRR_115200			0x8B

void UartInit(uint32_t baud);
void UartPutch(uint8_t ch);
void UartPuts(char str[]);
uint8_t UartGetch(void);
void UartGets(char str[]);

#endif  // UART_H


