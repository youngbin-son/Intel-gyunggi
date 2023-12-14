/*
 * delay.c
 *
 *  Created on: Nov 1, 2023
 *      Author: Administrator1
 */

#include "delay.h"

void delay_us(uint16_t us){
  __HAL_TIM_SET_COUNTER(&htim3,0);
  while((__HAL_TIM_GET_COUNTER(&htim3))<us);
}
