/*
 * interrupt.h
 *
 *  Created on: May 9, 2019
 *      Author: quangnd
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "interrupt_hw.h"

#define HAL_STATE_MACHINE_UPDATE_TICK    	STATE_MACHINE_UPDATE_TICK
#define HAL_DISABLE_STM_UPDATE_TICK			DISABLE_STM_UPDATE_TICK
#define HAL_ENABLE_STM_UPDATE_TICK 			ENABLE_STM_UPDATE_TICK

#define HAL_HMI_PROCESS_DATA_IRQ			HMI_PROCESS_DATA_IRQ
#define HAL_CHECK_TIM_IRQ_REQUEST			CHECK_TIM_IRQ_REQUEST

#define HAL_HMI_SEND_COMMAND_IRQ			HMI_SEND_COMMAND_IRQ
#define HAL_CHECK_COM_IRQ_REQUEST			CHECK_COM_IRQ_REQUEST

#endif /* INTERRUPT_H_ */
