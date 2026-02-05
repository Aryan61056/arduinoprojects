#include <Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
#include<Servo.h> 
Servo myServo;

#define trig A2
#define echo A1
int distance;
long duration;
int left;
int right;
int front;
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
void loop() {
myServo.write(90);
front = readDistance();
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Front: ");
lcd.setCursor(6,0);
lcd.print(front);
lcd.setCursor(9,0);
lcd.print("CM");


if(front < 20)
{
stop();
delay(500);
moveBackward();
delay(1000);
stop();
delay(5000);
myServo.write(180);
delay(500);

left = readDistance();
lcd.setCursor(0,1);
lcd.print("L: ");
lcd.setCursor(2,1);
lcd.print(left);
lcd.setCursor(5,1);
lcd.print("CM");
myServo.write(0);
delay(500);

right = readDistance();
lcd.setCursor(8,1);
lcd.print("R: ");
lcd.setCursor(10,1);
lcd.print(right);
lcd.setCursor(13,1);
lcd.print("CM");
myServo.write(90);
delay(500);

if(left > right)
{
turnLeft();
delay(700);
}
else
{
turnRight();
delay(700);

}
}
else
{
moveForward();
delay(1000);
}
}
void moveForward()
{
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(en1, 255);
analogWrite(en2, 255);
}
void turnLeft()
{
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
analogWrite(en1, 255);
analogWrite(en2, 255);
}
void turnRight()
{
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(en1, 255);
analogWrite(en2, 255);
}
int readDistance()
{
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
delayMicroseconds(10);
duration = pulseIn(echo,HIGH);
distance = (duration*0.0344)/2;
return distance;
}
void stop()
{
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
analogWrite(en1, 0);
analogWrite(en2, 0);
}
void moveBackward()
{
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
analogWrite(en1, 255);
analogWrite(en2, 255);


}