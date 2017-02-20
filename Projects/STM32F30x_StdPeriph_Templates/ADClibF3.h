/**
 * autor: Konrad Aleksiejuk Data: 24.11.16r
 * Bibliotek do pomiaru napi�cia (proporcjonalnego do pr�du) w sterownikach silnik�w
 * pomiar na 3 kana�ach, dane przesy�ane za pomoc� DMA do tablicy: "adcWartosc[]"
 * Po inicjalizacji funkcja praktycznie nie zajmuje procesora
 *
 */

#ifndef ADClibF3_H
#define ADClibF3_H

#include "stm32f30x.h"

#define ADC12_CDR_ADDRESS    ((uint32_t)0x5000030C)

void initADC(void);

volatile uint16_t adcWartosc[3];

#endif
