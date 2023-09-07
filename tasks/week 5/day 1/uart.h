


#ifndef UART_H_
#define UART_H_

#include <stdint.h>

void uart_init();
void uart_send_data(uint8_t data);
uint8_t uart_recieve_data();
uint8_t uart_is_data_ready();
void uart_set_tx_callback();
void uart_set_rx_callback();




#endif /* UART_H_ */