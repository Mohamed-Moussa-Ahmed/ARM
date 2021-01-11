/********************************************/
/* Author     :  Mohamed Moussa             */
/* Version    :  V01                        */
/* Date       : 19 Sep 2020                 */             
/* Description: UART driver                  */
/********************************************/

#ifndef UART_CONFIG_H
#define UART_CONFIG_H

/*Options:
			EIGHT_BITS
			NINE_BITS   */
#define UART_WORD_LENGTH   EIGHT_BITS
 
 /*Options:
			HALF_BIT
			ONE_BIT
			ONE_AND_HALF_BIT
			TWO_BITS*/
#define UART_STOP_BITS   ONE_BIT

/*Options:
			ENABLE
			DISABLE   */
#define UART_DMA_TX  ENABLE

#define UART_DMA_RX  ENABLE

#endif