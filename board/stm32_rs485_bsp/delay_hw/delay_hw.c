/*
 * delay_hw.c
 *
 *  Created on: Aug 22, 2020
 *      Author: quangnd
 */

#include "delay_hw.h"
void hw_delay_us(uint32_t us){

	uint32_t temp=34;
	uint32_t counter=0;
	while(temp--){
		counter=0;
		while(counter<us){
			counter++;
		}
	}
}

void hw_delay_ms(uint32_t ms){

	uint32_t us=1000*ms;
	uint32_t i=0;
	while(i<us){
		hw_delay_us(8);
		i+=100;
	}
}


