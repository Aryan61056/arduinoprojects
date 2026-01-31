#include <Servo.h>
Servo myServo;

#define trig A2
#define echo A1
long distance;
int left;
int right;
int front;
long duration;

//motor pins
#define in1 10
#define in2 11
#define in3 12
#define in4 13
#define en1 5
#define en2 6

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  Serial.begin(9600);
  myservo.attach(9);

}

void loop() {
  myServo.write(90);
  front = readDistance();
  //to read distance
  
  Serial.println(distance);

  if(distance <= 30){
    turn();
    delay(500);
  } else {
    moveForward();
  }
}

void moveForward(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(en1,255);
  analogWrite(en2,255);

}

void turn(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(en1,255);
  analogWrite(en2,255);

}

void turn(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(en1,255);
  analogWrite(en2,255);

}

int readDistance():
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH); //check HIGH signal on Echo  
  distance = (duration * 0.0344) / 2;
  return distance;

void moveForward(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(en1,255);
  analogWrite(en2,255);
}
