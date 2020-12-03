/*
 generated hardware definitions from hwdef.dat - DO NOT EDIT
*/

#pragma once

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

// MCU type (ChibiOS define)
#define STM32F4xx_MCUCONF
#define STM32F405_MCUCONF

#define STM32F405xx

// crystal frequency
#define STM32_HSECLK 8000000U

// UART used for stdout (printf)
#define HAL_USE_SDC FALSE
#define STM32_USB_USE_OTG1                  TRUE
#define HAL_USE_USB TRUE
#define HAL_USE_SERIAL_USB TRUE
#define STM32_PLLM_VALUE 8
#define STM32_VDD 330U
#define STM32_ST_USE_TIMER 5
#define BOARD_RSSI_ANA_PIN 13
#define HAL_GPIO_A_LED_PIN 57
#define HAL_BUZZER_PIN 80
#define HAL_BUZZER_ON 1
#define HAL_BUZZER_OFF 0
#define BOARD_PWM_COUNT_DEFAULT 6
#define STM32_PWM_USE_ADVANCED TRUE
#define HAL_PROBE_EXTERNAL_I2C_COMPASSES
#define HAL_I2C_INTERNAL_MASK 0
#define HAL_PROBE_EXTERNAL_I2C_BAROS
#define OSD_ENABLED ENABLED
#define HAL_OSD_TYPE_DEFAULT 1
#define HAL_STORAGE_SIZE 15360
#define STORAGE_FLASH_PAGE 1
#define HAL_BATT_MONITOR_DEFAULT 4
#define HAL_BATT_VOLT_PIN 11
#define HAL_BATT_CURR_PIN 12
#define HAL_BATT_VOLT_SCALE 11
#define HAL_BATT_CURR_SCALE 25
#define BOARD_FLASH_SIZE 1024
#define CRT1_AREAS_NUMBER 1

// location of loaded firmware
#define FLASH_LOAD_ADDRESS 0x08010000

// memory regions
#define HAL_MEMORY_REGIONS {(void*)0x20000000, 0x00020000, 0x01 }, {(void*)0x10000000, 0x00010000, 0x02 }
#define HAL_MEMORY_TOTAL_KB 192
#define HAL_RAM0_START 0x20000000

// CPU serial number (12 bytes)
#define UDID_START 0x1fff7a10


// APJ board ID (for bootloaders)
#define APJ_BOARD_ID 135
#define HAL_SPI1_CONFIG { &SPID1, 1, STM32_SPI_SPI1_DMA_STREAMS }
#define HAL_SPI2_CONFIG { &SPID2, 2, STM32_SPI_SPI2_DMA_STREAMS }
#define HAL_SPI3_CONFIG { &SPID3, 3, STM32_SPI_SPI3_DMA_STREAMS }
#define HAL_SPI_BUS_LIST HAL_SPI1_CONFIG,HAL_SPI2_CONFIG,HAL_SPI3_CONFIG


// SPI device table
#define HAL_SPI_DEVICE0  SPIDesc("mpu9250"        ,  2,  1, PAL_LINE(GPIOC,0U) , SPIDEV_MODE3,   4*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE1  SPIDesc("bmp280"         ,  2,  2, PAL_LINE(GPIOC,5U) , SPIDEV_MODE3,   1*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE2  SPIDesc("osd"            ,  0,  1, PAL_LINE(GPIOA,4U) , SPIDEV_MODE0,  10*MHZ,  10*MHZ)
#define HAL_SPI_DEVICE_LIST HAL_SPI_DEVICE0,HAL_SPI_DEVICE1,HAL_SPI_DEVICE2

// ADC config
#define HAL_ANALOG_PINS { \
{ 11,    3.30/4096 }, /* PC1 BATT_VOLTAGE_SENS */ \
{ 12,    3.30/4096 }, /* PC2 BATT_CURRENT_SENS */ \
{ 13,  2*3.30/4096 }, /* PC3 RSSI_IN */ \
}

// GPIO config
#define HAL_GPIO_LINE_GPIO50 PAL_LINE(GPIOC,  8U)
#define HAL_GPIO_LINE_GPIO51 PAL_LINE(GPIOC,  9U)
#define HAL_GPIO_LINE_GPIO52 PAL_LINE(GPIOB,  8U)
#define HAL_GPIO_LINE_GPIO53 PAL_LINE(GPIOB,  9U)
#define HAL_GPIO_LINE_GPIO54 PAL_LINE(GPIOB,  0U)
#define HAL_GPIO_LINE_GPIO55 PAL_LINE(GPIOB,  1U)
#define HAL_GPIO_LINE_GPIO57 PAL_LINE(GPIOC, 10U)
#define HAL_GPIO_LINE_GPIO80 PAL_LINE(GPIOA,  1U)
#define HAL_GPIO_PINS { \
{  50, true,  1, PAL_LINE(GPIOC,  8U)}, /* PC8 TIM8_CH3 TIM8 AF3 PWM1 */ \
{  51, true,  2, PAL_LINE(GPIOC,  9U)}, /* PC9 TIM8_CH4 TIM8 AF3 PWM2 */ \
{  52, true,  3, PAL_LINE(GPIOB,  8U)}, /* PB8 TIM4_CH3 TIM4 AF2 PWM3 */ \
{  53, true,  4, PAL_LINE(GPIOB,  9U)}, /* PB9 TIM4_CH4 TIM4 AF2 PWM4 */ \
{  54, true,  5, PAL_LINE(GPIOB,  0U)}, /* PB0 TIM3_CH3 TIM3 AF2 PWM5 */ \
{  55, true,  6, PAL_LINE(GPIOB,  1U)}, /* PB1 TIM3_CH4 TIM3 AF2 PWM6 */ \
{  57, true,  0, PAL_LINE(GPIOC, 10U)}, /* PC10 LED OUTPUT */ \
{  80, true,  0, PAL_LINE(GPIOA,  1U)}, /* PA1 BUZZER OUTPUT */ \
}

// full pin define list
#define HAL_GPIO_PIN_BATT_CURRENT_SENS    PAL_LINE(GPIOC,2U)
#define HAL_GPIO_PIN_BATT_VOLTAGE_SENS    PAL_LINE(GPIOC,1U)
#define HAL_GPIO_PIN_BMP280_CS            PAL_LINE(GPIOC,5U)
#define HAL_GPIO_PIN_BUZZER               PAL_LINE(GPIOA,1U)
#define HAL_GPIO_PIN_I2C1_SCL             PAL_LINE(GPIOB,6U)
#define HAL_GPIO_PIN_I2C1_SDA             PAL_LINE(GPIOB,7U)
#define HAL_GPIO_PIN_I2C1_SCL             PAL_LINE(GPIOB,6U)
#define HAL_GPIO_PIN_LED                  PAL_LINE(GPIOC,10U)
#define HAL_GPIO_PIN_MPU9250_CS           PAL_LINE(GPIOC,0U)
#define HAL_GPIO_PIN_MPU9250_DRDY         PAL_LINE(GPIOC,4U)
#define HAL_GPIO_PIN_OSD_CS               PAL_LINE(GPIOA,4U)
#define HAL_GPIO_PIN_OTG_FS_DM            PAL_LINE(GPIOA,11U)
#define HAL_GPIO_PIN_OTG_FS_DP            PAL_LINE(GPIOA,12U)
#define HAL_GPIO_PIN_RSSI_IN              PAL_LINE(GPIOC,3U)
#define HAL_GPIO_PIN_SBUS_INVERT_RX       PAL_LINE(GPIOA,8U)
#define HAL_GPIO_PIN_SPI1_MISO            PAL_LINE(GPIOA,6U)
#define HAL_GPIO_PIN_SPI1_MOSI            PAL_LINE(GPIOA,7U)
#define HAL_GPIO_PIN_SPI1_SCK             PAL_LINE(GPIOA,5U)
#define HAL_GPIO_PIN_SPI2_MISO            PAL_LINE(GPIOB,14U)
#define HAL_GPIO_PIN_SPI2_MOSI            PAL_LINE(GPIOB,15U)
#define HAL_GPIO_PIN_SPI2_SCK             PAL_LINE(GPIOB,13U)
#define HAL_GPIO_PIN_SPI3_MISO            PAL_LINE(GPIOB,4U)
#define HAL_GPIO_PIN_SPI3_MOSI            PAL_LINE(GPIOB,5U)
#define HAL_GPIO_PIN_SPI3_SCK             PAL_LINE(GPIOB,3U)
#define HAL_GPIO_PIN_TIM2_CH4             PAL_LINE(GPIOB,11U)
#define HAL_GPIO_PIN_TIM3_CH3             PAL_LINE(GPIOB,0U)
#define HAL_GPIO_PIN_TIM3_CH4             PAL_LINE(GPIOB,1U)
#define HAL_GPIO_PIN_TIM4_CH3             PAL_LINE(GPIOB,8U)
#define HAL_GPIO_PIN_TIM4_CH4             PAL_LINE(GPIOB,9U)
#define HAL_GPIO_PIN_TIM8_CH3             PAL_LINE(GPIOC,8U)
#define HAL_GPIO_PIN_TIM8_CH4             PAL_LINE(GPIOC,9U)
#define HAL_GPIO_PIN_UART4_RX             PAL_LINE(GPIOC,11U)
#define HAL_GPIO_PIN_UART4_TX             PAL_LINE(GPIOA,0U)
#define HAL_GPIO_PIN_UART5_RX             PAL_LINE(GPIOD,2U)
#define HAL_GPIO_PIN_UART5_TX             PAL_LINE(GPIOC,12U)
#define HAL_GPIO_PIN_USART1_RX            PAL_LINE(GPIOA,10U)
#define HAL_GPIO_PIN_USART1_TX            PAL_LINE(GPIOA,9U)
#define HAL_GPIO_PIN_USART2_RX            PAL_LINE(GPIOA,3U)
#define HAL_GPIO_PIN_USART2_TX            PAL_LINE(GPIOA,2U)
#define HAL_GPIO_PIN_USART6_RX            PAL_LINE(GPIOC,7U)
#define HAL_GPIO_PIN_USART6_TX            PAL_LINE(GPIOC,6U)

#define HAL_INS_PROBE1  ADD_BACKEND(AP_InertialSensor_Invensense::probe(*this,hal.spi->get_device("mpu9250"),ROTATION_YAW_90))
#define HAL_INS_PROBE_LIST HAL_INS_PROBE1

#define HAL_MAG_PROBE1  ADD_BACKEND(DRIVER_AK8963, AP_Compass_AK8963::probe_mpu9250(0,ROTATION_YAW_90))
#define HAL_MAG_PROBE_LIST HAL_MAG_PROBE1

#define HAL_BARO_PROBE1  ADD_BACKEND(AP_Baro_BMP280::probe(*this,hal.spi->get_device("bmp280")))
#define HAL_BARO_PROBE_LIST HAL_BARO_PROBE1

// peripherals enabled
#define STM32_I2C_USE_I2C1                  TRUE
#define STM32_USB_USE_OTG1                  TRUE
#define STM32_SPI_USE_SPI1                  TRUE
#define STM32_SPI_USE_SPI2                  TRUE
#define STM32_SPI_USE_SPI3                  TRUE
#ifndef STM32_SERIAL_USE_UART4 
#define STM32_SERIAL_USE_UART4  TRUE
#endif
#ifndef STM32_SERIAL_USE_UART5 
#define STM32_SERIAL_USE_UART5  TRUE
#endif
#ifndef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART2
#define STM32_SERIAL_USE_USART2 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART6
#define STM32_SERIAL_USE_USART6 TRUE
#endif


// auto-generated DMA mapping from dma_resolver.py

// Note: The following peripherals can't be resolved for DMA: ['UART4_RX', 'UART5_RX']

#define STM32_ADC_ADC1_DMA_STREAM      STM32_DMA_STREAM_ID(2, 4)
#define STM32_ADC_ADC1_DMA_CHAN        0
#define STM32_I2C_I2C1_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 0) // shared SPI3_RX,I2C1_RX
#define STM32_I2C_I2C1_RX_DMA_CHAN     1
#define STM32_I2C_I2C1_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 7) // shared SPI3_TX,UART5_TX,I2C1_TX
#define STM32_I2C_I2C1_TX_DMA_CHAN     1
#define STM32_SPI_SPI1_RX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 0)
#define STM32_SPI_SPI1_RX_DMA_CHAN     3
#define STM32_SPI_SPI1_TX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 3)
#define STM32_SPI_SPI1_TX_DMA_CHAN     3
#define STM32_SPI_SPI2_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 3)
#define STM32_SPI_SPI2_RX_DMA_CHAN     0
#define STM32_SPI_SPI2_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,UART4_TX
#define STM32_SPI_SPI2_TX_DMA_CHAN     0
#define STM32_SPI_SPI3_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 0) // shared SPI3_RX,I2C1_RX
#define STM32_SPI_SPI3_RX_DMA_CHAN     0
#define STM32_SPI_SPI3_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 7) // shared SPI3_TX,UART5_TX,I2C1_TX
#define STM32_SPI_SPI3_TX_DMA_CHAN     0
#define STM32_TIM_TIM3_UP_DMA_STREAM   STM32_DMA_STREAM_ID(1, 2)
#define STM32_TIM_TIM3_UP_DMA_CHAN     5
#define STM32_TIM_TIM4_UP_DMA_STREAM   STM32_DMA_STREAM_ID(1, 6) // shared TIM4_UP,USART2_TX
#define STM32_TIM_TIM4_UP_DMA_CHAN     2
#define STM32_TIM_TIM8_UP_DMA_STREAM   STM32_DMA_STREAM_ID(2, 1)
#define STM32_TIM_TIM8_UP_DMA_CHAN     7
#define STM32_UART_UART4_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,UART4_TX
#define STM32_UART_UART4_TX_DMA_CHAN   4
#define STM32_UART_UART5_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 7) // shared SPI3_TX,UART5_TX,I2C1_TX
#define STM32_UART_UART5_TX_DMA_CHAN   4
#define STM32_UART_USART1_RX_DMA_STREAM STM32_DMA_STREAM_ID(2, 5)
#define STM32_UART_USART1_RX_DMA_CHAN  4
#define STM32_UART_USART1_TX_DMA_STREAM STM32_DMA_STREAM_ID(2, 7)
#define STM32_UART_USART1_TX_DMA_CHAN  4
#define STM32_UART_USART2_RX_DMA_STREAM STM32_DMA_STREAM_ID(1, 5)
#define STM32_UART_USART2_RX_DMA_CHAN  4
#define STM32_UART_USART2_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 6) // shared TIM4_UP,USART2_TX
#define STM32_UART_USART2_TX_DMA_CHAN  4
#define STM32_UART_USART6_RX_DMA_STREAM STM32_DMA_STREAM_ID(2, 2)
#define STM32_UART_USART6_RX_DMA_CHAN  5
#define STM32_UART_USART6_TX_DMA_STREAM STM32_DMA_STREAM_ID(2, 6)
#define STM32_UART_USART6_TX_DMA_CHAN  5


// generated UART DMA configuration lines
#define STM32_USART1_RX_DMA_CONFIG true, STM32_UART_USART1_RX_DMA_STREAM, STM32_UART_USART1_RX_DMA_CHAN
#define STM32_USART1_TX_DMA_CONFIG true, STM32_UART_USART1_TX_DMA_STREAM, STM32_UART_USART1_TX_DMA_CHAN
#define STM32_USART2_RX_DMA_CONFIG true, STM32_UART_USART2_RX_DMA_STREAM, STM32_UART_USART2_RX_DMA_CHAN
#define STM32_USART2_TX_DMA_CONFIG true, STM32_UART_USART2_TX_DMA_STREAM, STM32_UART_USART2_TX_DMA_CHAN
#define STM32_UART4_RX_DMA_CONFIG false, 0, 0
#define STM32_UART4_TX_DMA_CONFIG true, STM32_UART_UART4_TX_DMA_STREAM, STM32_UART_UART4_TX_DMA_CHAN
#define STM32_UART5_RX_DMA_CONFIG false, 0, 0
#define STM32_UART5_TX_DMA_CONFIG true, STM32_UART_UART5_TX_DMA_STREAM, STM32_UART_UART5_TX_DMA_CHAN
#define STM32_USART6_RX_DMA_CONFIG true, STM32_UART_USART6_RX_DMA_STREAM, STM32_UART_USART6_RX_DMA_CHAN
#define STM32_USART6_TX_DMA_CONFIG true, STM32_UART_USART6_TX_DMA_STREAM, STM32_UART_USART6_TX_DMA_CHAN


// generated SPI DMA configuration lines
#define STM32_SPI_SPI1_DMA_STREAMS STM32_SPI_SPI1_TX_DMA_STREAM, STM32_SPI_SPI1_RX_DMA_STREAM
#define STM32_SPI_SPI2_DMA_STREAMS STM32_SPI_SPI2_TX_DMA_STREAM, STM32_SPI_SPI2_RX_DMA_STREAM
#define STM32_SPI_SPI3_DMA_STREAMS STM32_SPI_SPI3_TX_DMA_STREAM, STM32_SPI_SPI3_RX_DMA_STREAM
// RC input config
#define HAL_USE_EICU TRUE
#define STM32_EICU_USE_TIM2 TRUE
#define RCININT_EICU_TIMER EICUD2
#define RCININT_EICU_CHANNEL EICU_CHANNEL_4


// No Alarm output pin defined
#undef HAL_PWM_ALARM

// PWM timer config
#define STM32_PWM_USE_TIM3 TRUE
#define STM32_TIM3_SUPPRESS_ISR
#define STM32_PWM_USE_TIM4 TRUE
#define STM32_TIM4_SUPPRESS_ISR
#define STM32_PWM_USE_TIM8 TRUE
#define STM32_TIM8_SUPPRESS_ISR

// PWM output config
#if defined(STM32_TIM_TIM3_UP_DMA_STREAM) && defined(STM32_TIM_TIM3_UP_DMA_CHAN)
# define HAL_PWM3_DMA_CONFIG true, STM32_TIM_TIM3_UP_DMA_STREAM, STM32_TIM_TIM3_UP_DMA_CHAN
#else
# define HAL_PWM3_DMA_CONFIG false, 0, 0
#endif
#define HAL_PWM_GROUP1 { false, \
        {255, 255, 4, 5}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}  \
          }, 0, 0}, &PWMD3, \
          HAL_PWM3_DMA_CONFIG, \
          { 0, 0, 2, 2 }, \
          { 0, 0, PAL_LINE(GPIOB, 0U), PAL_LINE(GPIOB, 1U) }}
#if defined(STM32_TIM_TIM4_UP_DMA_STREAM) && defined(STM32_TIM_TIM4_UP_DMA_CHAN)
# define HAL_PWM4_DMA_CONFIG true, STM32_TIM_TIM4_UP_DMA_STREAM, STM32_TIM_TIM4_UP_DMA_CHAN
#else
# define HAL_PWM4_DMA_CONFIG false, 0, 0
#endif
#define HAL_PWM_GROUP2 { false, \
        {255, 255, 2, 3}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}  \
          }, 0, 0}, &PWMD4, \
          HAL_PWM4_DMA_CONFIG, \
          { 0, 0, 2, 2 }, \
          { 0, 0, PAL_LINE(GPIOB, 8U), PAL_LINE(GPIOB, 9U) }}
#if defined(STM32_TIM_TIM8_UP_DMA_STREAM) && defined(STM32_TIM_TIM8_UP_DMA_CHAN)
# define HAL_PWM8_DMA_CONFIG true, STM32_TIM_TIM8_UP_DMA_STREAM, STM32_TIM_TIM8_UP_DMA_CHAN
#else
# define HAL_PWM8_DMA_CONFIG false, 0, 0
#endif
#define HAL_PWM_GROUP3 { true, \
        {255, 255, 0, 1}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}  \
          }, 0, 0}, &PWMD8, \
          HAL_PWM8_DMA_CONFIG, \
          { 0, 0, 3, 3 }, \
          { 0, 0, PAL_LINE(GPIOC, 8U), PAL_LINE(GPIOC, 9U) }}
#define HAL_PWM_GROUPS HAL_PWM_GROUP1,HAL_PWM_GROUP2,HAL_PWM_GROUP3

// I2C configuration

#if defined(STM32_I2C_I2C1_RX_DMA_STREAM) && defined(STM32_I2C_I2C1_TX_DMA_STREAM)
#define HAL_I2C1_CONFIG { &I2CD1, STM32_I2C_I2C1_RX_DMA_STREAM, STM32_I2C_I2C1_TX_DMA_STREAM, HAL_GPIO_PIN_I2C1_SCL, HAL_GPIO_PIN_I2C1_SDA }
#else
#define HAL_I2C1_CONFIG { &I2CD1, SHARED_DMA_NONE, SHARED_DMA_NONE, HAL_GPIO_PIN_I2C1_SCL, HAL_GPIO_PIN_I2C1_SDA }
#endif

#define HAL_I2C_DEVICE_LIST HAL_I2C1_CONFIG


// UART configuration
#define HAL_UARTA_DRIVER ChibiOS::UARTDriver uartADriver(0)
#define HAL_UARTB_DRIVER ChibiOS::UARTDriver uartBDriver(1)
#define HAL_UARTC_DRIVER ChibiOS::UARTDriver uartCDriver(2)
#define HAL_UARTD_DRIVER ChibiOS::UARTDriver uartDDriver(3)
#define HAL_UARTE_DRIVER Empty::UARTDriver uartEDriver
#define HAL_UARTF_DRIVER ChibiOS::UARTDriver uartFDriver(4)
#define HAL_UARTG_DRIVER ChibiOS::UARTDriver uartGDriver(5)
#define HAL_UARTH_DRIVER Empty::UARTDriver uartHDriver
#define HAL_WITH_IO_MCU 0

#define HAL_OTG1_CONFIG {(BaseSequentialStream*) &SDU1, true, false, 0, 0, false, 0, 0}
#define HAL_USART2_CONFIG { (BaseSequentialStream*) &SD2, false, STM32_USART2_RX_DMA_CONFIG, STM32_USART2_TX_DMA_CONFIG, 0, -1, 0, -1, 0}
#define HAL_USART1_CONFIG { (BaseSequentialStream*) &SD1, false, STM32_USART1_RX_DMA_CONFIG, STM32_USART1_TX_DMA_CONFIG, 0, -1, 0, -1, 0}
#define HAL_UART5_CONFIG { (BaseSequentialStream*) &SD5, false, STM32_UART5_RX_DMA_CONFIG, STM32_UART5_TX_DMA_CONFIG, 0, -1, 0, -1, 0}
#define HAL_UART4_CONFIG { (BaseSequentialStream*) &SD4, false, STM32_UART4_RX_DMA_CONFIG, STM32_UART4_TX_DMA_CONFIG, 0, -1, 0, -1, 0}
#define HAL_USART6_CONFIG { (BaseSequentialStream*) &SD6, false, STM32_USART6_RX_DMA_CONFIG, STM32_USART6_TX_DMA_CONFIG, 0, -1, 0, -1, 0}
#define HAL_UART_DEVICE_LIST HAL_OTG1_CONFIG,HAL_USART2_CONFIG,HAL_USART1_CONFIG,HAL_UART5_CONFIG,HAL_UART4_CONFIG,HAL_USART6_CONFIG

#define HAL_UART_NUM_SERIAL_PORTS 7
// USB configuration
#define HAL_USB_VENDOR_ID 0x0483
#define HAL_USB_PRODUCT_ID 0x5740
#define HAL_USB_STRING_MANUFACTURER "ArduPilot"
#define HAL_USB_STRING_PRODUCT "%BOARD%"
#define HAL_USB_STRING_SERIAL "%SERIAL%"


#define HAL_HAVE_AP_ROMFS_EMBEDDED_H 1

/*
* I/O ports initial setup, this configuration is established soon after reset
* in the initialization code.
* Please refer to the STM32 Reference Manual for details.
*/
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/* PORTA:
 PA0 UART4_TX UART4 AF8
 PA1 BUZZER OUTPUT
 PA2 USART2_TX USART2 AF7
 PA3 USART2_RX USART2 AF7
 PA4 OSD_CS CS
 PA5 SPI1_SCK SPI1 AF5
 PA6 SPI1_MISO SPI1 AF5
 PA7 SPI1_MOSI SPI1 AF5
 PA8 SBUS_INVERT_RX OUTPUT
 PA9 USART1_TX USART1 AF7
 PA10 USART1_RX USART1 AF7
 PA11 OTG_FS_DM OTG1 AF10
 PA12 OTG_FS_DP OTG1 AF10
*/

#define VAL_GPIOA_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_OUTPUT(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_ALTERNATE(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_OUTPUT(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_ALTERNATE(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOA_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOA_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOA_PUPDR   (PIN_PUPDR_PULLUP(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_PULLUP(3U) | \
                           PIN_PUPDR_PULLUP(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_PULLUP(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOA_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_LOW(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOA_AFRL    (PIN_AFIO_AF(0U, 8U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 7U) | \
                           PIN_AFIO_AF(3U, 7U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 5U) | \
                           PIN_AFIO_AF(6U, 5U) | \
                           PIN_AFIO_AF(7U, 5U))

#define VAL_GPIOA_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 7U) | \
                           PIN_AFIO_AF(10U, 7U) | \
                           PIN_AFIO_AF(11U, 10U) | \
                           PIN_AFIO_AF(12U, 10U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTB:
 PB0 TIM3_CH3 TIM3 AF2 PWM5
 PB1 TIM3_CH4 TIM3 AF2 PWM6
 PB3 SPI3_SCK SPI3 AF6
 PB4 SPI3_MISO SPI3 AF6
 PB5 SPI3_MOSI SPI3 AF6
 PB6 I2C1_SCL I2C1 AF4
 PB7 I2C1_SDA I2C1 AF4
 PB8 TIM4_CH3 TIM4 AF2 PWM3
 PB9 TIM4_CH4 TIM4 AF2 PWM4
 PB11 TIM2_CH4 TIM2 AF1
 PB13 SPI2_SCK SPI2 AF5
 PB14 SPI2_MISO SPI2 AF5
 PB15 SPI2_MOSI SPI2 AF5
*/

#define VAL_GPIOB_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_ALTERNATE(3U) | \
                           PIN_MODE_ALTERNATE(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_ALTERNATE(15U))

#define VAL_GPIOB_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_OPENDRAIN(6U) | \
                           PIN_OTYPE_OPENDRAIN(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOB_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOB_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOB_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_LOW(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOB_AFRL    (PIN_AFIO_AF(0U, 2U) | \
                           PIN_AFIO_AF(1U, 2U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 6U) | \
                           PIN_AFIO_AF(4U, 6U) | \
                           PIN_AFIO_AF(5U, 6U) | \
                           PIN_AFIO_AF(6U, 4U) | \
                           PIN_AFIO_AF(7U, 4U))

#define VAL_GPIOB_AFRH    (PIN_AFIO_AF(8U, 2U) | \
                           PIN_AFIO_AF(9U, 2U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 1U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 5U) | \
                           PIN_AFIO_AF(14U, 5U) | \
                           PIN_AFIO_AF(15U, 5U))

/* PORTC:
 PC0 MPU9250_CS CS
 PC1 BATT_VOLTAGE_SENS ADC1 ADC1_IN11
 PC2 BATT_CURRENT_SENS ADC1 ADC1_IN12
 PC3 RSSI_IN ADC1 ADC1_IN13
 PC4 MPU9250_DRDY INPUT
 PC5 BMP280_CS CS
 PC6 USART6_TX USART6 AF8
 PC7 USART6_RX USART6 AF8
 PC8 TIM8_CH3 TIM8 AF3 PWM1
 PC9 TIM8_CH4 TIM8 AF3 PWM2
 PC10 LED OUTPUT
 PC11 UART4_RX UART4 AF8
 PC12 UART5_TX UART5 AF8
*/

#define VAL_GPIOC_MODER   (PIN_MODE_OUTPUT(0U) | \
                           PIN_MODE_ANALOG(1U) | \
                           PIN_MODE_ANALOG(2U) | \
                           PIN_MODE_ANALOG(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_OUTPUT(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_OUTPUT(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOC_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOC_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOC_PUPDR   (PIN_PUPDR_PULLUP(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_PULLUP(5U) | \
                           PIN_PUPDR_PULLUP(6U) | \
                           PIN_PUPDR_PULLUP(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_PULLUP(11U) | \
                           PIN_PUPDR_PULLUP(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOC_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOC_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 8U) | \
                           PIN_AFIO_AF(7U, 8U))

#define VAL_GPIOC_AFRH    (PIN_AFIO_AF(8U, 3U) | \
                           PIN_AFIO_AF(9U, 3U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 8U) | \
                           PIN_AFIO_AF(12U, 8U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTD:
 PD2 UART5_RX UART5 AF8
*/

#define VAL_GPIOD_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOD_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOD_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOD_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOD_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOD_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 8U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOD_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTE:
*/

#define VAL_GPIOE_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOE_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOE_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOE_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOE_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOE_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOE_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTF:
*/

#define VAL_GPIOF_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOF_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOF_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOF_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOF_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOF_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOF_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTG:
*/

#define VAL_GPIOG_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOG_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOG_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOG_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOG_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOG_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOG_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTH:
*/

#define VAL_GPIOH_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U))

#define VAL_GPIOH_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U))

#define VAL_GPIOH_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U))

#define VAL_GPIOH_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U))

#define VAL_GPIOH_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U))

#define VAL_GPIOH_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U))

#define VAL_GPIOH_AFRH    (0)

/* PORTI:
*/

#define VAL_GPIOI_MODER               0x0
#define VAL_GPIOI_OTYPER              0x0
#define VAL_GPIOI_OSPEEDR             0x0
#define VAL_GPIOI_PUPDR               0x0
#define VAL_GPIOI_ODR                 0x0
#define VAL_GPIOI_AFRL                0x0
#define VAL_GPIOI_AFRH                0x0



/* PORTJ:
*/

#define VAL_GPIOJ_MODER               0x0
#define VAL_GPIOJ_OTYPER              0x0
#define VAL_GPIOJ_OSPEEDR             0x0
#define VAL_GPIOJ_PUPDR               0x0
#define VAL_GPIOJ_ODR                 0x0
#define VAL_GPIOJ_AFRL                0x0
#define VAL_GPIOJ_AFRH                0x0



/* PORTK:
*/

#define VAL_GPIOK_MODER               0x0
#define VAL_GPIOK_OTYPER              0x0
#define VAL_GPIOK_OSPEEDR             0x0
#define VAL_GPIOK_PUPDR               0x0
#define VAL_GPIOK_ODR                 0x0
#define VAL_GPIOK_AFRL                0x0
#define VAL_GPIOK_AFRH                0x0



