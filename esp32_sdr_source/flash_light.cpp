
/*
 * https://github.com/xiaolaba/ESP32-CAM_blink/
 * 2020-JUL-01
 */

#include "Arduino.h"
#include "flash_light.h"

#define x10mS  100 // 10ms, no visual blinking; 15-50ms ok, fast blinking period
#define x100mS 400 // slow blinking period
#define x2000mS 2000 // pause


void LED_on(){
  digitalWrite(LED1, LOW); // LED1 on   
}
void LED_off(){
  digitalWrite(LED1, HIGH); // LED1 off
}
void LED_setup(){
  pinMode(LED1, OUTPUT);
  LED_off();  
}
void fastBlink () {
  LED_on();
  delay(x10mS); // wait for a second
  LED_off();
  delay(x10mS); // wait for a second
}
void slowBlink () {
  LED_on();
  delay(x100mS); // wait for a second
  LED_off();
  delay(x100mS); // wait for a second
}
void LED_blinking(){
  fastBlink();
  fastBlink();
  fastBlink();
  fastBlink();
  fastBlink();
  delay(x2000mS); // wait for 2 seconds 
  slowBlink();
  slowBlink();
  delay(x2000mS); // wait for 2 seconds
}






void LED_FLASH1_on(){
  digitalWrite(LED_FLASH1, HIGH); // flash on   
}
void LED_FLASH1_off(){
  digitalWrite(LED_FLASH1, LOW); // flash off  
}
void LED_FLASH1_setup(){
  pinMode(LED_FLASH1, OUTPUT);
  LED_FLASH1_off();  
}
void fastFlash () {
  LED_FLASH1_on();
  delay(x10mS); // wait for a second
  LED_FLASH1_off();
  delay(x10mS); // wait for a second
}
void slowFlash () {
  LED_FLASH1_on();
  delay(x100mS); // wait for a second
  LED_FLASH1_off();
  delay(x100mS); // wait for a second
}
void Flash_blinking(){
  fastFlash();
  fastFlash();
  fastFlash();
  fastFlash();
  fastFlash();
  delay(x2000mS); // wait for 2 seconds   
  slowFlash();
  slowFlash();
  delay(x2000mS); // wait for 2 seconds     
}
