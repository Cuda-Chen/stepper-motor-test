#ifndef __USART_CONFIG_H
#define __USART_CONFIG_H

#include "stm32f4xx.h"
#include "String.h"
#include "stdlib.h"
#include "Ctype.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_usart.h"
#include "misc.h"

void usart_lowLevelInit();
void usart_receive(char c);
#endif
