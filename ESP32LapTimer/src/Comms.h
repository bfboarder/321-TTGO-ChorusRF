/*
 * This file is part of TTGO-T-RaceTimer (https://github.com/bfboarder/321-TTGO-ChorusRF)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 */

#pragma once

#include "HardwareConfig.h"

#include <stdint.h>
#include <esp_attr.h>

void HandleSerialRead();
void HandleServerUDP();
void SendCurrRSSIloop();
void IRAM_ATTR sendLap(uint8_t Lap, uint8_t NodeAddr);
void commsSetup();
void thresholdModeStep();
void handleSerialControlInput(char *controlData, uint8_t ControlByte, uint8_t NodeAddr, uint8_t length);
bool isInRaceMode();
