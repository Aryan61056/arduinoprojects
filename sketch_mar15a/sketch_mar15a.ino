#include <Servo.h>
Servo myServo;

#define IR A3
#define IR A0

void setup() {
myServo.attach(9);
pinMode(IR1,INPUT);
pinMode(IR2,INPUT);
}

void loop() {

int right = digitalRead(IR1);
int left = digitalRead(IR2);

if(right==0){
  servo.write(180);
}
else if(left==0){
  servo.write(0);
}
else{
  servo.write(90);
}

}
