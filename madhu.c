#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);//(rs, en, d4, d5, d6, d7);
#define sw 7
#define relay 6
void setup() {
pinMode(sw,INPUT);
pinMode(relay,OUTPUT);
Serial.begin(9600);
lcd.begin(16, 2);
lcd.clear();
lcd.setCursor(0,0);
lcd.print(" Welcome");
delay(1000);
}
void loop() {
if(digitalRead(sw))
 {
 Serial.println(1);
 digitalWrite(relay,LOW);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("GAS LEAKAGE ALERT");
 delay(1000);
 }
 else
 {
26
 Serial.println(0);
 digitalWrite(relay,HIGH);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("GAS NORMAL ");
 delay(100);
 }
 
}
