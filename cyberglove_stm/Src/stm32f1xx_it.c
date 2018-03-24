#include "stm32f1xx_hal.h"
#include "stm32f1xx.h"
#include "stm32f1xx_it.h"

extern DMA_HandleTypeDef hdma_adc1;
extern ADC_HandleTypeDef hadc1;
extern DMA_HandleTypeDef hdma_usart2_rx;
extern DMA_HandleTypeDef hdma_usart2_tx;
extern UART_HandleTypeDef huart2;

/******************************************************************************/
/*            Cortex-M3 Processor Interruption and Exception Handlers         */
/******************************************************************************/

/**
 * @brief This function handles System tick timer.
 */
void SysTick_Handler(void)
{
	/* USER CODE BEGIN SysTick_IRQn 0 */

	/* USER CODE END SysTick_IRQn 0 */
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
	/* USER CODE BEGIN SysTick_IRQn 1 */

	/* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F1xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f1xx.s).                    */
/******************************************************************************/

/**
 * @brief This function handles DMA1 channel1 global interrupt.
 */
void DMA1_Channel1_IRQHandler(void)
{
	/* USER CODE BEGIN DMA1_Channel1_IRQn 0 */

	/* USER CODE END DMA1_Channel1_IRQn 0 */
	HAL_DMA_IRQHandler(&hdma_adc1);
	/* USER CODE BEGIN DMA1_Channel1_IRQn 1 */

	/* USER CODE END DMA1_Channel1_IRQn 1 */
}

/**
 * @brief This function handles DMA1 channel6 global interrupt.
 */
void DMA1_Channel6_IRQHandler(void)
{
	/* USER CODE BEGIN DMA1_Channel6_IRQn 0 */

	/* USER CODE END DMA1_Channel6_IRQn 0 */
	HAL_DMA_IRQHandler(&hdma_usart2_rx);
	/* USER CODE BEGIN DMA1_Channel6_IRQn 1 */

	/* USER CODE END DMA1_Channel6_IRQn 1 */
}

/**
 * @brief This function handles DMA1 channel7 global interrupt.
 */
void DMA1_Channel7_IRQHandler(void)
{
	/* USER CODE BEGIN DMA1_Channel7_IRQn 0 */

	/* USER CODE END DMA1_Channel7_IRQn 0 */
	HAL_DMA_IRQHandler(&hdma_usart2_tx);
	/* USER CODE BEGIN DMA1_Channel7_IRQn 1 */

	/* USER CODE END DMA1_Channel7_IRQn 1 */
}

/**
 * @brief This function handles ADC1 and ADC2 global interrupts.
 */
void ADC1_2_IRQHandler(void)
{
	/* USER CODE BEGIN ADC1_2_IRQn 0 */

	/* USER CODE END ADC1_2_IRQn 0 */
	HAL_ADC_IRQHandler(&hadc1);
	/* USER CODE BEGIN ADC1_2_IRQn 1 */

	/* USER CODE END ADC1_2_IRQn 1 */
}

/**
 * @brief This function handles USART2 global interrupt.
 */
void USART2_IRQHandler(void)
{
	/* USER CODE BEGIN USART2_IRQn 0 */

	/* USER CODE END USART2_IRQn 0 */
	HAL_UART_IRQHandler(&huart2);
	/* USER CODE BEGIN USART2_IRQn 1 */

	/* USER CODE END USART2_IRQn 1 */
}

/**
 * @brief This function handles EXTI line[15:10] interrupts.
 */
void EXTI15_10_IRQHandler(void)
{
	/* USER CODE BEGIN EXTI15_10_IRQn 0 */

	/* USER CODE END EXTI15_10_IRQn 0 */
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_13);
	/* USER CODE BEGIN EXTI15_10_IRQn 1 */

	/* USER CODE END EXTI15_10_IRQn 1 */
}
