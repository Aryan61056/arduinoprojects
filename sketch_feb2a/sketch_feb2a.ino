// #include <LiquidCrystal_I2C.h>
// #include <Wire.h>
// LiquidCrystal_I2C lcd(0x27,16,2);
// #define EN1 5
// #define EN2 6
// #define in1 10
// #define in2 11
// #define in3 12
// #define in4 13
// int value = 1;

// void setup() {
//   lcd.init();
//   lcd.backlight();
//   pinMode(EN1,OUTPUT);
//   pinMode(EN2,OUTPUT);
//   pinMode(in1,OUTPUT);
//   pinMode(in2,OUTPUT);
//   pinMode(in3,OUTPUT);
//   pinMode(in4,OUTPUT);

// }

// void loop() {
// ++value;
// delay(3000);
// digitalWrite(in1,HIGH);
// digitalWrite(in2,LOW);
// digitalWrite(in3,HIGH);
// digitalWrite(in4,LOW);
// digitalWrite(EN1,value);
// digitalWrite(EN2,value);
// lcd.setCursor(0,0);
// lcd.print("Speed:");

// if(value<=15){
//   lcd.setCursor(0,1);
//   lcd.print(">");
// }

// if(value<=15 && value<=30){
//   lcd.setCursor(1,1);
//   lcd.print(">");
// }

// if(value<=30 && value<=45){
//   lcd.setCursor(2,1);
//   lcd.print(">");
// }

// if(value<=60 && value<=75){
//   lcd.setCursor(3,1);
//   lcd.print(">");
// }

// if(value<=75 && value<=90){
//   lcd.setCursor(4,1);
//   lcd.print(">");
// }

// if(value<=90 && value<=115){
//   lcd.setCursor(5,1);
//   lcd.print(">");
// }

// if(value<=115 && value<=130){
//   lcd.setCursor(6,1);
//   lcd.print(">");
// }

// if(value<=130 && value<=145){
//   lcd.setCursor(7,1);
//   lcd.print(">");
// }

// if(value<=145 && value<=160){
//   lcd.setCursor(8,1);
//   lcd.print(">");
// }

// if(value<=160 && value<=175){
//   lcd.setCursor(9,1);
//   lcd.print(">");
// }

// if(value<=175 && value<=190){
//   lcd.setCursor(10,1);
//   lcd.print(">");
// }

// if(value<=190 && value<=205){
//   lcd.setCursor(11,1);
//   lcd.print(">");
// }

// if(value<=205 && value<=220){
//   lcd.setCursor(12,1);
//   lcd.print(">");
// }

// if(value<=220 && value<=235){
//   lcd.setCursor(13,1);
//   lcd.print(">");
// }

// if(value<=235 && value<=255){
//   lcd.setCursor(14,1);
//   lcd.print(">");
// }
// }

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#define en1 5
#define en2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13

int value = 1;
int a=1;
int sign=0;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Speed");
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}
void loop() {
++value;

delay (100);
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(en1, value);
analogWrite(en2, value);
lcd.setCursor(0,0);
lcd.print("Speed");

if(value<=15)
{
lcd.setCursor(0,1);
lcd.print(">");
}
if((value>15 && value<=30))
{
lcd.setCursor(1,1);
lcd.print(">");

}
if((value>30 && value<=45))
{
lcd.setCursor(2,1);
lcd.print(">");

}

if((value>45 && value<=60))
{
lcd.setCursor(3,1);
lcd.print(">");

}
if((value>60 && value<=75))
{
lcd.setCursor(4,1);
lcd.print(">");

}
if((value>75 && value<=90))
{
lcd.setCursor(5,1);
lcd.print(">");

}
if((value>90 && value<=105))
{
lcd.setCursor(6,1);
lcd.print(">");

}
if((value>105 && value<=120))
{
lcd.setCursor(7,1);
lcd.print(">");

}
if((value>120 && value<=135))
{
lcd.setCursor(8,1);
lcd.print(">");

}
if((value>135 && value<=150))
{
lcd.setCursor(9,1);
lcd.print(">");

}
if((value>150 && value<=165))
{
lcd.setCursor(10,1);
lcd.print(">");

}
if((value>165 && value<=180))
{
lcd.setCursor(11,1);
lcd.print(">");

}
if((value>180 && value<=195))
{
lcd.setCursor(12,1);
lcd.print(">");

}
if((value>195 && value<=210))
{
lcd.setCursor(13,1);
lcd.print(">");

}
if((value>210 && value<=235))
{
lcd.setCursor(14,1);
lcd.print(">");

}
if((value>235 && value<=255))
{
lcd.setCursor(15,1);
lcd.print(">");

}
if(value>255)
{
delay(3000);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

}
}
