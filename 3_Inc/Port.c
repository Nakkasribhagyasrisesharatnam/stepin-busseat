#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__



/**
 * Macro Definitions
 */

#define F_CPU 170000UL
#define LED_PORT (PORTB)
#define LED_PIN  (PORTB0)
#define BUTTON_SENSOR  (PORTD0)
#define TEMP_SENSOR  (PORTD1)

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 *
 */
void peripheral_init(void);

/**
 * @brief Function to turn LED on
 *
 */
void TurnLED_ON();

/**
 * @brief Function to turn LED off
 *
 */
void TurnLED_OFF();

/**
 * @brief Activity 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed
 *
 */
int activity1_LED(void);

#endif /* __ACTIVITY_1_H__ */
