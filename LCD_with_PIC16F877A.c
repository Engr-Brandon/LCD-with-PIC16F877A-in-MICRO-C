/* Written by Engr Brandon NM
   January 2022
   */
sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D4 at RB2_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D7 at RB5_bit;
//
sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB4_bit;
sbit LCD_D7_Direction at TRISB5_bit;
//
void main(){
  TRISB=0X00;           //all portB as output
  PORTB=0XFF;
  Lcd_Init();           //initialise the LCD
//
  while(1){
    Lcd_Cmd(_LCD_CLEAR);      //clear the display
    Lcd_Cmd(_LCD_CURSOR_OFF);    //turn OFF the cursor
    Lcd_Out(1,1,"LCD Testing with");     //display the message at position (1,1)
    Lcd_Out(2,3,"PIC16F877A");
    delay_ms(3000);           //delay the message for 3s
    //
    Lcd_Cmd(_LCD_CLEAR);      //clear the display
    Lcd_Cmd(_LCD_CURSOR_OFF);    //turn OFF the cursor
    Lcd_Out(1,2,"Engr Brandon's");     //display the message at position (1,1)
    Lcd_Out(2,5,"Tools");
    delay_ms(3000);
    //
    Lcd_Cmd(_LCD_CLEAR);      //clear the display
    Lcd_Cmd(_LCD_CURSOR_OFF);    //turn OFF the cursor
    Lcd_Out(1,3,"Please Like");     //display the message at position (1,1)
    Lcd_Out(2,1,"share, Subbscribe");
    delay_ms(3000);
    //
    Lcd_Cmd(_LCD_CLEAR);      //clear the display
    Lcd_Cmd(_LCD_CURSOR_OFF);    //turn OFF the cursor
    Lcd_Out(1,4,"THANK YOU");     //display the message at position (1,1)
    delay_ms(3000);
    }
}