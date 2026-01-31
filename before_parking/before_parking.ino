#include <Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);


#define trig A2
#define echo A1
int distance;
long duration;

#define en1 5
#define en2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13

void setup() {
lcd.init()
lcd.backlight()
myServo.attach(9);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(en1, OUTPUT);
pinMode(en2, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
Serial.begin(9600);
}

void loop(){

  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance = duration*0.0034/2;
  Serial.println(distance);
  delay(50);
  if (distance <= 20 && distance > 6){
    object();
  } else if(distance<6){
    park();
  } else {
    forward();
  }



}

void object(){
  lcd.clear();
  lcd.setCursor("Object Nearby");
  Serial.print("Object Nearby");
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(EN1,100);
  analogWrite(EN2,100);

}

void park(){
  lcd.clear();
  lcd.setCursor("Parking Mode");
  Serial.print("Parking Mode");
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  analogWrite(EN1,0);
  analogWrite(EN2,0);
  
}

void forward(){
  lcd.clear();
  lcd.setCursor("Moving Forward");
  Serial.print("Moving Forward");
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(EN1,100);
  analogWrite(EN2,100);
}