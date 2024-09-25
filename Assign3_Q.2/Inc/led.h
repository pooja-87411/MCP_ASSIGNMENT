/*
 * led.h
 *
 *  Created on: Sep 23, 2024
 *      Author: pankaj
 */

#ifndef LED_H
#define LED_H

#define RED_LED_PIN  5
#define BLUE_LED_PIN 6

#define GPIO_LED		GPIOA
#define GPIO_LED_CLKEN		0

void gpio_led_init(void);
void turn_on_red_led(void);
void turn_off_red_led(void);
void turn_on_blue_led(void);
void turn_off_blue_led(void);

#endif  // LED_H
