#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);


int switch1 = A3;
int switch2 = A0;
#define EN1 5
#define EN2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(switch1,INPUT_PULLUP);
  pinMode(switch2,INPUT_PULLUP);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}

void loop() {


if(digitalRead(switch1)==LOW && digitalRead(switch2)==LOW){
  lcd.setCursor(0,0);
  lcd.print("*Emergency*");
  delay(100);
  backward();
}
else if (digitalRead(switch1)==HIGH && digitalRead(switch2)==LOW){
  lcd.setCursor(0,0);
  lcd.print("*Emergency Right");
  delay(100);
  backward();
  delay(500);
  left();
  delay(500);

}
else if (digitalRead(switch1)==LOW && digitalRead(switch2)==HIGH){
  lcd.setCursor(0,0);
  lcd.print("*Emergency Left*");
  delay(100);
  backward();
  delay(500);
  right();
  delay(500);

}
else{
  lcd.clear();
  delay(100);
  forward();
}

}

void forward()
{
  analogWrite(EN1,255);
  analogWrite(EN2,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

}

void right()
{
  analogWrite(EN1,255);
  analogWrite(EN2,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);

}

void left()
{
  analogWrite(EN1,255);
  analogWrite(EN2,255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

}

void backward() {
  analogWrite(EN2,255);
  analogWrite(EN1,255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}