#ifndef _VARIANT_ESP32C3_SUPER_MINI_
#define _VARIANT_ESP32C3_SUPER_MINI_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// I2C (Wire) & OLED
#define WIRE_INTERFACES_COUNT (1)
#define I2C_SDA (5)
#define I2C_SCL (6)

#define USE_SSD1306

// GPS
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN (20)
#define GPS_TX_PIN (21)

// Button
#define BUTTON_PIN (9) // BOOT button

// LoRa
// #define USE_LLCC68
// #define USE_SX1262
#define USE_RF95
// #define USE_SX1268

#define LORA_DIO0 (8)
#define LORA_RESET (0)
#define LORA_DIO1 (7)
// #define LORA_RXEN (2)
// #define LORA_BUSY (4)
#define LORA_SCK (2)
#define LORA_MISO (4)
#define LORA_MOSI (3)
#define LORA_CS (1)

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
