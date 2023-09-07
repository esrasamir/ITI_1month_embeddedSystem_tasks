#ifndef LCD_LCD_H_
#define LCD_LCD_H_
#include <stdint.h>

void lcd_init(void);
void lcd_send_cmd(uint8_t command);


#endif 