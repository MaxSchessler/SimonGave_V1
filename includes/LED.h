#include <avr/io.h>
#include <stdint.h>

typedef struct {
    volatile uint8_t *port; // port for led 
    volatile uint8_t *ddr; // data direction reg
    uint8_t pin; // pin number
} LED;

/// @brief Set pin as output.
/// @param led 
void led_init(LED *led);

/// @brief Turn this led on.
/// @param led 
void led_on(LED *led);

/// @brief Turn this led off.
/// @param led 
void led_off(LED *led);


// Toggle the state of this led.
void led_toggle(LED *led);