#include "bbb_regs.h"

static void delay() {
    volatile unsigned int ra;
    for (ra = 0; ra < 1000000; ra++);
}

void putCh(unsigned char c) {
    // Aguarda o registrador de status da UART liberar espaço
    while(!(UART0_LSR & 0x20)); 
    UART0_THR = c;
}

unsigned int printS(unsigned char *str, unsigned int length) {
    for (int i = 0; i < length; i++) {
        putCh(str[i]);
    }
    return (length);
}

void main() {
    const char hello[] = "Hello World!!!\n\r";
    unsigned char *h = (unsigned char *) hello;
    
    while (1) {
        printS(h, 16);
        delay();
    }
}