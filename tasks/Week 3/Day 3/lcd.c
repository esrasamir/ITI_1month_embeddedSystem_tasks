#include <avr/delay.h>
#include"lcd.h"
#include"lcd_config.h"


void lcd_init(){ // pin init
    _delay_ms(30);
    dio_set_direction(LCD_EN_PORT , LCD_EN_PIN ,DIO_DIRECTION_OUTPUT);
    dio_set_direction(LCD_RS_PORT , LCD_RS_PIN ,DIO_DIRECTION_OUTPUT);
    dio_set_port_direction(LCD_DATA_PORT , DIO_DIRECTION_OUTPUT);
    // LCD init 
    lcd_send_cmd(0b00111000);
    lcd_send_cmd(0b00000001);
    _delay_ms(2);
    lcd_send_cmd(0b00000110);
    lcd_send_cmd(0b00001101);
}

void lcd_send_cmd(uint8_t command){
    // RS pulse
    dio_set_level(LCD_RS_PORT , LCD_RS_PIN , DIO_LEVEL_LOW);
    dio_set_port_level(LCD_DATA_PORT , command);
    // EN pulse
    dio_set_level(LCD_EN_PORT , LCD_EN_PIN , DIO_LEVEL_HIGH);
    _delay_us(500);
    dio_set_level(LCD_EN_PORT , LCD_EN_PIN , DIO_LEVEL_LOW);
}

void lcd_send_data(char data){
    // RS pulse
    dio_set_level(LCD_RS_PORT , LCD_RS_PIN , DIO_LEVEL_LOW);
    // write value on data bus
    dio_set_port_level(LCD_DATA_PORT , data);
    // EN pulse
    dio_set_level(LCD_EN_PORT , LCD_EN_PIN , DIO_LEVEL_HIGH);
    _delay_us(500);
    dio_set_level(LCD_EN_PORT , LCD_EN_PIN , DIO_LEVEL_LOW);    
}
