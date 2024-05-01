/*
 * UART.h
 *
 * Created: 30/04/2024 09:03:15
 *  Author: Snake
 */ 


#ifndef UART_H_
#define UART_H_

#include <avr/io.h>

void initUART(int baud_rate, int turbo, int multiprocesador, int sincrono, int paridad, int bit_stop, int cantidad_caracteres, int UBRR0_valor);
void writeUART_car(char caracter);
void writeUART_Text(char* texto);
char receivedChar(void);


#endif /* UART_H_ */