/********************************************/
/* Author     :  Mohamed Moussa             */
/* Version    :  V01                        */
/* Date       : 19 Sep 2020                 */             
/* Description: UART driver                 */
/********************************************/

#ifndef UART_PRIVATE_H
#define UART_PRIVATE_H

typedef struct
{
	volatile u32 SR     ;
	volatile u32 DR     ;
	volatile u32 BRR    ;
	volatile u32 CR1    ;
	volatile u32 CR2    ;
	volatile u32 CR3    ;
	volatile u32 GTPR   ;
	
}UART_Register;


#define MUART1  ((volatile UART_Register *)0X40013800)





#endif
