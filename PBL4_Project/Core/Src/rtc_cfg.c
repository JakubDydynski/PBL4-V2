/*

 * rtc_cfg.c
 *
 *  Created on: May 18, 2022
 *      Author: 48570

#include "main.h"


 *
 *
 * Największą wadą naszego zegara jest jednak gubienie ustawień po odłączeniu zasilania.
 * Większość zewnętrznych modułów RTC jest wyposażona w dodatkowe zasilanie podtrzymujące pracę zegara.
 * Może to być np. bateria lub kondensator. Podobne rozwiązanie może być wykorzystane również w przypadku
 * mikrokontrolera STM32L476RG. Wystarczy podłączyć zasilanie do pinu VBAT, jednak na płytce Nucleo jest ono połączone z
 *  zasilaniem całej płytki (można to zmienić odlutowując jedną zworę).
 *
 * wiec ogólnie nie zasilimy go (chyba)
 * nie bedzie dokładny
 * nie wpiszemy mu dokładnie daty
 *  smuteczek ;)
 *
 *
 * Jak łatwo się domyślić, pierwsza odczytuje aktualny czas, a druga datę.
 *  Na początek chcemy odczytać tylko czas, ale te funkcje muszą być zawsze wywoływane razem i po odczycie czasu konieczny
 *  jest odczyt daty. Nie musimy tych danych wykorzystać, ale musimy je odczytać.


// ważne: nieużywane pola muszą być wyzerowane

void RTC_Init(void)
{
  RTC_TimeTypeDef new_time = {0};
  RTC_DateTypeDef date = {0};

    new_time.Hours = 7;
    new_time.Minutes = 45;
    new_time.Seconds = 0;
    HAL_RTC_SetTime(&hrtc, &new_time, RTC_FORMAT_BIN);
    today.Year = 21;
    today.Month = 06;
    today.Date = 1;
    today.WeekDay = RTC_WEEKDAY_TUESDAY;

    HAL_RTC_SetDate(&hrtc, &today, RTC_FORMAT_BIN);



    HAL_RTC_GetTime(&hrtc, &time, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &date, RTC_FORMAT_BIN);
}

// uważać na 5% dokładnosci ale przeczytac w manulau dokladnosc wartosc dokladnosci
*/
