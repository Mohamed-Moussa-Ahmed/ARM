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
void MUSAT1_Disable(void);
void MUSAT1_InterruptEnable(void);


#define EIGHT_BITS        0
#define NINE_BITS         2

#define HALF_BIT          1
#define ONE_BIT           0
#define ONE_AND_HALF_BIT  2
#define TWO_BITS          3


#define DISABLE           0
#define ENABLE            1




#endif