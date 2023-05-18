#ifndef BOARD_BOARD_H_
#define BOARD_BOARD_H_

#include "stdint.h"

#include "can_hal.h"
#include "compiler_optimize.h"
#include "core_hal.h"
#include "interrupt_hal.h"
#include "uart_hw_hal.h"
#include "cabinet_hw_hal.h"
#include "gpio_hal.h"
#include "adc_hw_hal.h"
#include "max485_hal.h"
#include "master_hw_hal.h"

void board_init(void) WEAK;
void global_interrupt_enable(void) WEAK;
void global_interrupt_disable(void) WEAK;

#endif
