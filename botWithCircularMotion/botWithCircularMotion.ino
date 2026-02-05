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
forward();
delay(8000);


}

void Clockwise()
{
  analogWrite(EN1,110);
  analogWrite(EN2,230);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  lcd.setCursor(4,0);
  lcd.print("Clockwise");
  lcd.setCursor(2,1);
  lcd.print("Circular path");
}


void forward()
{
  analogWrite(EN1,255);
  analogWrite(EN2,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);

}
void backward() {
analogWrite(EN2,255);
  analogWrite(EN1,255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
