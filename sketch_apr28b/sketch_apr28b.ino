#include<Servo.h>
Servo myServo;
int potpin=A0;
int a;
int pws;
void setup(){
myServo.attach(2);
}
void loop(){
myServo.write(12);

for (pws = 0; pws = 180; pws++){
myServo.write(pws);
}
// a=analogRead(potpin);
// a=map(a 0,1023,0,180);
// myServo.write(a);
// delay(20);
}
