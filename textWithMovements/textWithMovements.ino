#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
#define EN1 5
#define EN2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}

void loop() {


  Robobackward();
  delay(5000);
}

void Roboforward()
{
  analogWrite(EN1,255);
  analogWrite(EN2,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  lcd.setCursor(0,0);
  lcd.print("--->Forward<---");
}

void Robobackward()
{
  lcd.setCursor(0,0);
  lcd.print("--->Back<---");
  analogWrite(EN1,255);
  analogWrite(EN2,255);
  digitalWrite(in2,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in4,HIGH);
  digitalWrite(in3,LOW);
  
}