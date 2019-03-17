/* mbed Microcontroller Library
 * Copyright (c) 2018-2018 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MBED_FLASH_CONFIGS_H
#define MBED_FLASH_CONFIGS_H

#if defined(TARGET_DISCO_L475VG_IOT01A)
#include "MX25RXX35F_config.h" // MX25R6435F

#elif defined(TARGET_DISCO_F413ZH)
#include "N25Q128A_config.h" // N25Q128A13EF840F

#elif defined(TARGET_DISCO_F746NG)
#include "N25Q128A_config.h" // N25Q128A13EF840E

#elif defined(TARGET_DISCO_F469NI)
#include "N25Q128A_config.h" // N25Q128A13EF840E

#elif defined(TARGET_DISCO_F769NI)
#include "MX25L51245G_config.h" // MX25L51245G

#elif defined(TARGET_DISCO_L476VG)
#include "N25Q128A_config.h" // N25Q128A13EF840E
/* See STM32L476 Errata Sheet, it is not possible to use Dual-/Quad-mode for the command phase */
#undef QSPI_CMD_READ_DPI
#undef QSPI_CMD_READ_QPI
#undef QSPI_CMD_WRITE_DPI
#undef QSPI_CMD_WRITE_QPI

#elif defined(TARGET_DISCO_L496AG)
#include "MX25RXX35F_config.h" // MX25R6435F

#elif defined(TARGET_NRF52840)
#include "NORDIC/NRF52840_DK/flash_config.h"

#elif defined(TARGET_EFM32GG11_STK3701)
#include "SiliconLabs/EFM32GG11_STK3701/flash_config.h"

#elif defined(TARGET_K82F)
#include "NXP/K82F/flash_config.h"

#elif defined(TARGET_KL82Z)
#include "NXP/KL82Z/flash_config.h"

#elif defined(TARGET_LPC546XX)
#include "NXP/LPC546XX/flash_config.h"

#endif
#endif // MBED_FLASH_CONFIGS_H