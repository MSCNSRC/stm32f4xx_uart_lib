/*
 * stm32f4cc_uart_makro.h
 *
 *  Created on: 4 Eyl 2023
 *      Author: Musa
 */

#ifndef STM32F4XX_UART_LIB_SRC_STM32F4CC_UART_MAKRO_H_
#define STM32F4XX_UART_LIB_SRC_STM32F4CC_UART_MAKRO_H_


#include "uart.h"

#define Uart1ClockAktifEt  (*RCC_APB2_EN |= (1 << 4U ))
#define Uart2ClockAktifEt  (*RCC_APB1_EN |= (1 << 17U))
#define Uart3ClockAktifEt  (*RCC_APB1_EN |= (1 << 18U))
#define Uart4ClockAktifEt  (*RCC_APB1_EN |= (1 << 19U))
#define Uart5ClockAktifEt  (*RCC_APB1_EN |= (1 << 20U))
#define Uart6ClockAktifEt  (*RCC_APB2_EN |= (1 << 5U ))


#endif /* STM32F4XX_UART_LIB_SRC_STM32F4CC_UART_MAKRO_H_ */
