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

/*lOCATED ON APB2 BUS*/
#define MUART1  ((volatile UART_Register *)0X40013800)
/*lOCATED ON APB1 BUS*/
#define MUART2  ((volatile UART_Register *)0x40004400)
#define MUART3  ((volatile UART_Register *)0x40004800)
#define MUART4  ((volatile UART_Register *)0x40004C00)
#define MUART5  ((volatile UART_Register *)0x40005000)




#endif
