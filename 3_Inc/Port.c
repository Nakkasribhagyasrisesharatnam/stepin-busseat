#ifndef __PORT_H__
#define __PORT_1_H__



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
 * @brief port to Turn ON LED if switches for Button sensor and Heator sensor are pressed
 *
 */
int port_LED(void);

#endif /* __PORT_H__ */
