#ifndef _VARIANT_PROMICRO_DIY_
#define _VARIANT_PROMICRO_DIY_

/** Master clock frequency */
#define VARIANT_MCK (64000000ul)

#define USE_LFXO // Board uses 32khz crystal for LF
// #define USE_LFRC // Board uses RC for LF

#define PROMICRO_DIY_XTAL
/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT (48)
#define NUM_DIGITAL_PINS (48)
#define NUM_ANALOG_INPUTS (0)
#define NUM_ANALOG_OUTPUTS (0)

// Pin 13 enables 3.3V periphery. If the Lora module is on this pin, then it should stay enabled at all times.
#define PIN_3V3_EN (0 + 13) // P0.13

    // WIRE IC AND IIC PINS
    // #define WIRE_INTERFACES_COUNT 1

#define MESHTASTIC_EXCLUDE_GPS 1
#define MESHTASTIC_EXCLUDE_SCREEN 1

#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA (32 + 4) // P1.04
#define PIN_WIRE_SCL (0 + 11) // P0.11

// LED
#define PIN_LED1 (0 + 15) // P0.15
#define LED_BUILTIN PIN_LED1
// Actually red
#define LED_BLUE PIN_LED1
#define LED_STATE_ON 1 // State when LED is lit

// UART interfaces
#define PIN_SERIAL1_RX (32 + 0)
#define PIN_SERIAL1_TX (32 + 24)

#define PIN_SERIAL2_RX (0 + 29)
#define PIN_SERIAL2_TX (0 + 31)

// Serial interfaces
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO (0 + 2)   // P0.02
#define PIN_SPI_MOSI (32 + 15) // P1.15
#define PIN_SPI_SCK (32 + 13)  // P1.11

#define LORA_CS (32 + 11)
#define LORA_RESET (0 + 10)

#define USE_RF95

#define LORA_DIO1 (0 + 22)
#define LORA_DIO0 (0 + 24)

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif