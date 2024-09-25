/*
 * switch_inter.h
 *
 *  Created on: Sep 24, 2024
 *      Author: pankaj
 */

#ifndef SWITCH_INTER_H_
#define SWITCH_INTER_H_

#include"stm32f4xx.h"
volatile extern uint32_t switch_flag;
volatile extern int count;


#define GPIO_SWITCH GPIOA
#define GPIO_SWITCH_PIN 0
#define GPIO_SWITCH_CLL  0
#define SWITCH_EXTI 0


void SwitchInit(void);
void EXTI0_IRQHandler(void);
#endif /* SWITCH_INTER_H_ */
