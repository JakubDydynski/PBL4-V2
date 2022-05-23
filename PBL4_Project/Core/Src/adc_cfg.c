/*
 * adc_cfg.c
 *
 *  Created on: 18 May 2022
 *      Author: 48570
 */

#include "adc_cfg.h"
#define SCALINGF_FACTOR 0
/*Podczas próbkowania napięcia mikrokontroler (w uproszczeniu) ładuje wewnętrzny kondensator
 * . Zajmuje to trochę czasu, a im większa jest rezystancja, przez którą jest on ładowany,
 *  tym więcej czasu potrzeba na jego naładowanie.
 *
 *
 *f103 nie ma wbudowanego oversamplingu dlatego chyba trzeba robić programowy
 *ale to dosc proste bo np oversampling 16 i przesuniecie bitowe o 4 w prawo ( dzielenie przez 2 do 4 )
 * Ale wszystko kwestia częstotliwości próbkowania!!
 *
 * Zbadać moc obliczeniową przy 1Ms/s
 * */
void ADC_Init(void)
{
  //HAL_ADCEx_Calibration_Start(&hadc1, ADC_SINGLE_ENDED);
  HAL_ADC_Start_DMA(hadc, pData, Length);
 // HAL_ADC_STOP_DMA();
}


// pomiar adc trigerowany co 100ms przez przekręcenie licznika, w przerwaniu od dma konwersja i zmiana wypełnień liczników do
// diod itd?
// Buzzer działa tak samo jak diody ewentualnie powyżej jakiegoś thresholdu --> analog watchdog
void ConvertAdcToDbm(void)
{

}
