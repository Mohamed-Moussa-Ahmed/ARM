/********************************************/
/* Author     :  Mohamed Moussa             */
/* Version    :  V01                        */
/* Date       : 19 Sep 2020                 */             
/* Description: UART driver                  */
/********************************************/


#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H

void MUSART1_voidInit(void); 

void MUSART1_voidTransmit(u8 arr[]);

u8 MUSART1_u8Receive(void);



#endif