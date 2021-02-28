/*
 * This file is part of Chorus32-ESP32LapTimer 
 * (see https://github.com/AlessandroAU/Chorus32-ESP32LapTimer).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#define BEEPER -1

#define LEDs -1

//#define USE_NORMAL_BUTTONS
  
//#define BUTTON1 35
//#define BUTTON2 0

#define VRX_SCK 25
#define VRX_MOSI 27

#define CS1 33
#define CS2 99
#define CS3 99
#define CS4 99
#define CS5 99
#define CS6 99

#define ADC1 ADC1_CHANNEL_0
#define ADC2 ADC1_CHANNEL_3
#define ADC3 ADC1_CHANNEL_6
#define ADC4 ADC1_CHANNEL_5
#define ADC5 ADC1_CHANNEL_4
#define ADC6 ADC1_CHANNEL_7 // switched with adc 4 due to xtal

#define ADC1_GPIO 36
#define ADC2_GPIO 98
#define ADC3_GPIO 98
#define ADC4_GPIO 98
#define ADC5_GPIO 98
#define ADC6_GPIO 98