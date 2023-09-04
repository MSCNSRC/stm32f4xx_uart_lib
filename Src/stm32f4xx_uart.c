/**
 ******************************************************************************
 * @file           : stm32f4xx_uart.c
 * @author         : MSCNSRC
 * @brief          : Library source
 ******************************************************************************
 * @attention
 *
 * This library written by MSCNSRC. All ring reserved.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/

#include "stm32f4cc_uart_makro.h"

/** Functions ----------------------------------------------------------------*/

static uint8_t rcc_clock_aktif_et(Uart_t uart_num_et);






int8_t uart_ilk_ayar(Uart_t uart_num_et)
{
	int8_t return_deger_s8 = 0;
	return_deger_s8 = rcc_clock_aktif_et(uart_num_et);


	return return_deger_s8;
}

























static uint8_t rcc_clock_aktif_et(Uart_t uart_num_et)
{
	int8_t return_deger_s8 = -1;

	if (((uint32_t)uart_num_et) < UART_SAYISI)
	{
		switch((uint32_t)uart_num_et)
		{
			case UART1:
				Uart1ClockAktifEt;
				break;
			case UART2:
				Uart2ClockAktifEt;
				break;
			case UART3:
				Uart3ClockAktifEt;
				break;
			case UART4:
				Uart4ClockAktifEt;
				break;
			case UART5:
				Uart5ClockAktifEt;
				break;
			case UART6:
				Uart6ClockAktifEt;
				break;
		}

		return_deger_s8 = 0;
	}

	return return_deger_s8;
}
