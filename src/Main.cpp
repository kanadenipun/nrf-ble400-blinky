/* Copyright (c) 2009 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
* @defgroup blinky_example_pca10001_main main.c
* @{
* @ingroup blinky_example_pca10001
*
* @brief Blinky Example Application main file.
*
* This file contains the source code for a sample application using GPIO to drive LEDs.
*
*/

#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"
//#include "boards.h"
#include "boards/ble400.h"

/**
 * @brief Function for application main entry.
 */
int main(void)
{
// Configure LED-pins as outputs
	nrf_gpio_range_cfg_output(LED_START,LED_STOP);

  while(true)
  {
    nrf_gpio_pin_clear(LED_0);
    nrf_gpio_pin_set(LED_1);
    nrf_gpio_pin_clear(LED_2);
    nrf_gpio_pin_set(LED_3);
		nrf_gpio_pin_clear(LED_4);
    nrf_delay_ms(300);
		
    nrf_gpio_pin_set(LED_0);
    nrf_gpio_pin_clear(LED_1);
    nrf_gpio_pin_set(LED_2);
    nrf_gpio_pin_clear(LED_3);
    nrf_gpio_pin_set(LED_4);
    nrf_delay_ms(300);
  }
}

/**
 *@}
 **/
