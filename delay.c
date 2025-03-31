/*
 * delay.c
 *
 *  Created on: Mar 19, 2025
 *      Author: USER
 */


#include "delay.h"



void delay_us(uint16_t us)   //마이크로 비트
{

	__HAL_TIM_SET_COUNTER(&htim11, 0);

	while((__HAL_TIM_GET_COUNTER(&htim11)) < us);

}




