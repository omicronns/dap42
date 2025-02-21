/*
 * Copyright (c) 2016, Devan Lai
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose with or without fee is hereby granted, provided
 * that the above copyright notice and this permission notice
 * appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

#define PRODUCT_NAME "DAP103-BLUEPILL"

#define CAN_RX_AVAILABLE 0
#define CAN_TX_AVAILABLE 0
#define USB_NVIC_LINE NVIC_USB_LP_CAN_RX0_IRQ
#define USB_IRQ_NAME usb_lp_can_rx0_isr

#define VCDC_AVAILABLE 0
#define VCDC_TX_BUFFER_SIZE 128
#define VCDC_RX_BUFFER_SIZE 128

#define CDC_AVAILABLE 1
#define DEFAULT_BAUDRATE 115200

#define CONSOLE_USART USART2
#define CONSOLE_TX_BUFFER_SIZE 128
#define CONSOLE_RX_BUFFER_SIZE 4096

#define CONSOLE_USART_GPIO_PORT GPIOA
#define CONSOLE_USART_GPIO_TX   GPIO2
#define CONSOLE_USART_GPIO_RX   GPIO3

#define CONSOLE_USART_MODE USART_MODE_TX_RX

#define CONSOLE_USART_CLOCK RCC_USART2

#define CONSOLE_USART_IRQ_NAME  usart2_isr
#define CONSOLE_USART_NVIC_LINE NVIC_USART2_IRQ
#define CONSOLE_RX_DMA_CONTROLLER DMA1
#define CONSOLE_RX_DMA_CLOCK RCC_DMA1
#define CONSOLE_RX_DMA_CHANNEL DMA_CHANNEL6

#define TARGET_DFU_AVAILABLE 0

#define BULK_AVAILABLE 1
#define HID_AVAILABLE 0

/* Word size for usart_recv and usart_send */
typedef uint16_t usart_word_t;

/* Workaround for non-commonalized STM32F0 USART code */
#define USART_RDR(usart_base) USART_DR(usart_base)

#define LED_OPEN_DRAIN         1

#endif
