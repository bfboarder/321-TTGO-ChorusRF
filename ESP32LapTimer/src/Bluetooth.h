/*
 * This file is part of TTGO-T-RaceTimer (https://github.com/bfboarder/321-TTGO-ChorusRF)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 */

#pragma once

#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

void bluetooth_update(void *output);
void bluetooth_send_packet(void *output, uint8_t *buf, uint32_t size);
void bluetooth_init(void *output);
