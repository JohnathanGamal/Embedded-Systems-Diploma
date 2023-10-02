#include "uart.h"
unsigned char s[100] = "learn-in-depth:<Jonathan>";
const unsigned char x[100] = "learn-in-depth";
void main(void){

	UART_send_string(s);
}