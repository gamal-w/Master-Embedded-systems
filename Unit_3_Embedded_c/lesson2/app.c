#include "uart.h"

unsigned char buf[100]="learn-in-depth: jimmy"; 
unsigned char const buf2[100]="learn-in-depth: jimmy"; // to creat .rodata section
void main(void){

    uart_sent_st(buf);
}