#include "uart.h"

// define uart0 register

#define UART0DR *((volatile unsigned int * ) (unsigned int *)0x101f1000)

void uart_sent_st(char *st){
    while(*st != '\0'){
        UART0DR=(unsigned int) *st ;
        st++;
    }
}