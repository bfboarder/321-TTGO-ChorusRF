/*
 * This file is part of TTGO-T-RaceTimer (https://github.com/bfboarder/321-TTGO-ChorusRF)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 */

#define BEEPER -1

#define LEDs -1

#define USE_NORMAL_BUTTONS

#define BUTTON1 35
#define BUTTON2 0

#define VRX_SCK 25
#define VRX_MOSI 27

#define CS1 2
#define CS2 17
#define CS3 15
#define CS4 -1
#define CS5 -1
#define CS6 -1

#define ADC1 ADC1_CHANNEL_0
#define ADC2 ADC1_CHANNEL_3
#define ADC3 ADC1_CHANNEL_4
#define ADC4 ADC1_CHANNEL_5
#define ADC5 ADC1_CHANNEL_6
#define ADC6 ADC1_CHANNEL_2 // Switched to ADC1_CHANNEL_2 because ADC1_CHANNEL_7 was giving problems with BUTTON1 (on pin 35)

#define ADC1_GPIO 36
#define ADC2_GPIO 39
#define ADC3_GPIO 32
#define ADC4_GPIO -1
#define ADC5_GPIO -1
#define ADC6_GPIO -1

/// If your setup doesn't use an OLED remove or comment the following line
//#define OLED
#define TFT