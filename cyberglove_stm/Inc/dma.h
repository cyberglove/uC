#ifndef __dma_H
#define __dma_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "stm32f1xx_hal.h"
#include "main.h"

extern void _Error_Handler(char*, int);

void MX_DMA_Init(void);

#ifdef __cplusplus
}
#endif

#endif
