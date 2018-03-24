#ifndef __STM32F1xx_IT_H
#define __STM32F1xx_IT_H

#ifdef __cplusplus
extern "C"
{
#endif 

#include "stm32f1xx_hal.h"
#include "main.h"

void SysTick_Handler(void);
void DMA1_Channel1_IRQHandler(void);
void DMA1_Channel6_IRQHandler(void);
void DMA1_Channel7_IRQHandler(void);
void ADC1_2_IRQHandler(void);
void USART2_IRQHandler(void);
void EXTI15_10_IRQHandler(void);

#ifdef __cplusplus
}
#endif

#endif
