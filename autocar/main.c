//#include "stm32f4_discovery.h"
#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_usart.h"
#include "Stepper.h"
#include "usart_config.h"
#include "delay.h"

int speed = 1000;
__IO char result[50];

int main(void) {
	Systick_Init(); // activate systick handler to use the delays functions
	Stepper_Init(); // stepper gpio initialization
	usart_lowLevelInit(); // usart initialization
	
	while(1) {
		GPIO_Write(GPIOD, GPIO_Pin_12);
		delay_nms(speed);
		GPIO_Write(GPIOD, GPIO_Pin_12 | GPIO_Pin_13);
		delay_nms(speed);
		GPIO_Write(GPIOD, GPIO_Pin_13);
		delay_nms(speed);
		GPIO_Write(GPIOD, GPIO_Pin_14 | GPIO_Pin_13);
		delay_nms(speed);
		GPIO_Write(GPIOD, GPIO_Pin_14);
		delay_nms(speed);
		GPIO_Write(GPIOD, GPIO_Pin_14 | GPIO_Pin_15);
		delay_nms(speed);
		GPIO_Write(GPIOD, GPIO_Pin_15);
		delay_nms(speed);
		GPIO_Write(GPIOD, GPIO_Pin_15 | GPIO_Pin_12);
		delay_nms(speed);
	}
}
