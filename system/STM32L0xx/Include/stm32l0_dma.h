/*
 * Copyright (c) 2017-2018 Thomas Roell.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal with the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimers.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimers in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of Thomas Roell, nor the names of its contributors
 *     may be used to endorse or promote products derived from this Software
 *     without specific prior written permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * WITH THE SOFTWARE.
 */

#if !defined(_STM32L0_DMA_H)
#define _STM32L0_DMA_H

#include "armv6m.h"
#include "stm32l0xx.h"

#ifdef __cplusplus
 extern "C" {
#endif

#define STM32L0_DMA_CHANNEL_NONE                 0x00
#define STM32L0_DMA_CHANNEL_UNDEFINED            0xf0

#define STM32L0_DMA_CHANNEL_DMA1_CH1_INDEX       0x01
#define STM32L0_DMA_CHANNEL_DMA1_CH2_INDEX       0x02
#define STM32L0_DMA_CHANNEL_DMA1_CH3_INDEX       0x03
#define STM32L0_DMA_CHANNEL_DMA1_CH4_INDEX       0x04
#define STM32L0_DMA_CHANNEL_DMA1_CH5_INDEX       0x05
#define STM32L0_DMA_CHANNEL_DMA1_CH6_INDEX       0x06
#define STM32L0_DMA_CHANNEL_DMA1_CH7_INDEX       0x07

#define STM32L0_DMA_CHANNEL_DMA1_CH1_ADC         0x01
#define STM32L0_DMA_CHANNEL_DMA1_CH1_TIM2_CH3    0x41
#define STM32L0_DMA_CHANNEL_DMA1_CH1_AES_IN      0xb1

#define STM32L0_DMA_CHANNEL_DMA1_CH2_ADC         0x02
#define STM32L0_DMA_CHANNEL_DMA1_CH2_SPI1_RX     0x12
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART1_TX   0x32
#define STM32L0_DMA_CHANNEL_DMA1_CH2_LPUART1_TX  0x52
#define STM32L0_DMA_CHANNEL_DMA1_CH2_I2C1_TX     0x62
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM2_UP     0x82
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM6_UP     0x92
#define STM32L0_DMA_CHANNEL_DMA1_CH2_DAC1        0x92
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM3_CH3    0xa2
#define STM32L0_DMA_CHANNEL_DMA1_CH2_AES_OUT     0xb2
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART4_RX   0xc2
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART5_RX   0xd2
#define STM32L0_DMA_CHANNEL_DMA1_CH2_I2C3_TX     0xe2

#define STM32L0_DMA_CHANNEL_DMA1_CH3_SPI1_TX     0x13
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART1_RX   0x33
#define STM32L0_DMA_CHANNEL_DMA1_CH3_LPUART1_RX  0x53
#define STM32L0_DMA_CHANNEL_DMA1_CH3_I2C1_RX     0x63
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM2_CH2    0x83
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM3_CH4    0xa3
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM3_UP     0xa3
#define STM32L0_DMA_CHANNEL_DMA1_CH3_AES_OUT     0xb3
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART4_TX   0xc3
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART5_TX   0xd3
#define STM32L0_DMA_CHANNEL_DMA1_CH3_I2C3_RX     0xe3

#define STM32L0_DMA_CHANNEL_DMA1_CH4_SPI2_RX     0x24
#define STM32L0_DMA_CHANNEL_DMA1_CH4_USART1_TX   0x34
#define STM32L0_DMA_CHANNEL_DMA1_CH4_USART2_TX   0x44
#define STM32L0_DMA_CHANNEL_DMA1_CH4_I2C2_TX     0x74
#define STM32L0_DMA_CHANNEL_DMA1_CH4_TIM2_CH4    0x84
#define STM32L0_DMA_CHANNEL_DMA1_CH4_I2C3_TX     0xe4
#define STM32L0_DMA_CHANNEL_DMA1_CH4_TIM7_UP     0xf4
#define STM32L0_DMA_CHANNEL_DMA1_CH4_DAC2        0xf4

#define STM32L0_DMA_CHANNEL_DMA1_CH5_SPI2_TX     0x25
#define STM32L0_DMA_CHANNEL_DMA1_CH5_USART1_RX   0x35
#define STM32L0_DMA_CHANNEL_DMA1_CH5_USART2_RX   0x45
#define STM32L0_DMA_CHANNEL_DMA1_CH5_I2C2_RX     0x75
#define STM32L0_DMA_CHANNEL_DMA1_CH5_TIM2_CH1    0x85
#define STM32L0_DMA_CHANNEL_DMA1_CH5_TIM3_CH1    0xa5
#define STM32L0_DMA_CHANNEL_DMA1_CH5_AES_IN      0xb5
#define STM32L0_DMA_CHANNEL_DMA1_CH5_I2C3_RX     0xe5

#define STM32L0_DMA_CHANNEL_DMA1_CH6_SPI2_RX     0x26
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART2_RX   0x46
#define STM32L0_DMA_CHANNEL_DMA1_CH6_LPUART1_RX  0x56
#define STM32L0_DMA_CHANNEL_DMA1_CH6_I2C1_TX     0x66
#define STM32L0_DMA_CHANNEL_DMA1_CH6_TIM3_TRIG   0xa6
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART4_RX   0xc6
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART5_RX   0xd6

#define STM32L0_DMA_CHANNEL_DMA1_CH7_SPI2_TX     0x27
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART2_TX   0x47
#define STM32L0_DMA_CHANNEL_DMA1_CH7_LPUART1_TX  0x57
#define STM32L0_DMA_CHANNEL_DMA1_CH7_I2C1_RX     0x67
#define STM32L0_DMA_CHANNEL_DMA1_CH7_TIM2_CH2    0x87
#define STM32L0_DMA_CHANNEL_DMA1_CH7_TIM2_CH4    0x87
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART4_TX   0xc7
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART5_TX   0xd7


#define STM32L0_DMA_OPTION_EVENT_TRANSFER_DONE        0x00000002
#define STM32L0_DMA_OPTION_EVENT_TRANSFER_HALF        0x00000004
#define STM32L0_DMA_OPTION_EVENT_TRANSFER_ERROR       0x00000008

#define STM32L0_DMA_OPTION_PERIPHERAL_TO_MEMORY       0x00000000
#define STM32L0_DMA_OPTION_MEMORY_TO_PERIPHERAL       0x00000010
#define STM32L0_DMA_OPTION_CIRCULAR                   0x00000020
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_INCREMENT  0x00000040
#define STM32L0_DMA_OPTION_MEMORY_DATA_INCREMENT      0x00000080
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_MASK  0x00000300
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_SHIFT 8
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_8     0x00000000
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_16    0x00000100
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_32    0x00000200
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_MASK      0x00000c00
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_SHIFT     10
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_8         0x00000000
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_16        0x00000400
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_32        0x00000800
#define STM32L0_DMA_OPTION_PRIORITY_MASK              0x00003000
#define STM32L0_DMA_OPTION_PRIORITY_SHIFT             12
#define STM32L0_DMA_OPTION_PRIORITY_LOW               0x00000000
#define STM32L0_DMA_OPTION_PRIORITY_MEDIUM            0x00001000
#define STM32L0_DMA_OPTION_PRIORITY_HIGH              0x00002000
#define STM32L0_DMA_OPTION_PRIORITY_VERY_HIGH         0x00003000
// #define STM32L0_DMA_OPTION_MEMORY_TO_MEMORY           0x00004000

#define STM32L0_DMA_EVENT_TRANSFER_DONE               0x00000002
#define STM32L0_DMA_EVENT_TRANSFER_HALF               0x00000004
#define STM32L0_DMA_EVENT_TRANSFER_ERROR              0x00000008

typedef void (*stm32l0_dma_callback_t)(void *context, uint32_t events);

extern void stm32l0_dma_configure(unsigned int priority_1, unsigned int priority_2_3, unsigned int priority_4_5_6_7);
extern unsigned int stm32l0_dma_priority(unsigned int channel);
extern unsigned int stm32l0_dma_channel(unsigned int channel);
extern bool stm32l0_dma_enable(unsigned int channel, stm32l0_dma_callback_t callback, void *context);
extern void stm32l0_dma_disable(unsigned int channel);
extern void stm32l0_dma_start(unsigned int channel, uint32_t tx_data, uint32_t rx_data, uint16_t xf_count, uint32_t option);
extern uint16_t stm32l0_dma_stop(unsigned int channel);
extern uint16_t stm32l0_dma_count(unsigned int channel);
extern bool stm32l0_dma_done(unsigned int channel);

#ifdef __cplusplus
}
#endif

#endif /* _STM32L0_DMA_H */
