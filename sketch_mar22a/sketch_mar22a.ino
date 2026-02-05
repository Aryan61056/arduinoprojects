#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);



#define echopin A1
#define trigpin A2
#define EN1 5
#define EN2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13


long duration;
int distance;


void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,OUTPUT);
  Serial.begin(9600);
  pinMode(EN1,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  duration=pulseIn(echopin,HIGH);
  distance=duration*0.034/2;

  Serial.print("Distance = ");
  Serial.println(distance);


  lcd.setCursor(0,0);
  lcd.print("Distance = ");
  lcd.print(distance);
  delay(200);

  if(distance<25){
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
    analogWrite(EN1,0);
    analogWrite(EN2,0);
  }
  else{
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(EN1,255);
    analogWrite(EN2,255);
  }
}
