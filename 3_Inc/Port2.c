#ifndef __PORT_2_H__
#define __PORT_2_H__


/**
 * Macro Definitions
 */
#define PWM_15_PERCENT (150)
#define PWM_40_PERCENT (410)
#define PWM_75_PERCENT (720)
#define PWM_95_PERCENT (973)

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Initialize Timer1 registers
 *
 */
void InitTimer();

/**
 * @brief Produce duty cycle in PWM according to i/p ADC value
 *
 * @param[in] temp The ADC value from activity2
 */
void port2_PWM(uint16_t temp);

#endif /* __PORT_2_H__ */
