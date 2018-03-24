#ifndef __usart_H
#define __usart_H
#ifdef __cplusplus
extern "C"
{
#endif

#include "stm32f1xx_hal.h"
#include "main.h"

extern UART_HandleTypeDef huart2;

extern void _Error_Handler(char *, int);

void MX_USART2_UART_Init(void);

//
int _write(int file, char *ptr, int len);

#ifdef __cplusplus
}
#endif
#endif
