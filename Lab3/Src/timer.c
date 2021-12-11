/*
 * timer.c
 *
 *  Created on: Oct 25, 2021
 *      Author: AN515-54
 */
#include "main.h"
#include "input_reading.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM2){
		button_reading();
		timer_run();
	}
}
