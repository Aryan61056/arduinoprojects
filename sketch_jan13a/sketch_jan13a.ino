
void setup() {

  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
}
int brb = 1000;
void loop() {
    digitalWrite(7,HIGH);
    delay(brb);
    digitalWrite(7,LOW);
    delay(brb);
    brb = brb - 100;



  
 
/*
  digitalWrite(1,HIGH);
  delay(brb);
  digitalWrite(2,HIGH);
  delay(brb);
  digitalWrite(3,HIGH);
  delay(brb);
  digitalWrite(8,LOW);
  delay(brb);
  digitalWrite(7,LOW);
  delay(brb);
  digitalWrite(6,LOW);
  delay(brb);
  digitalWrite(5,LOW);
  delay(brb);
  digitalWrite(4,LOW);
  delay(brb);
  digitalWrite(3,LOW);
  delay(brb);
  digitalWrite(2,LOW);
  delay(brb);
  digitalWrite(1,LOW);
  delay(brb);
  */

  /*
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(1,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  delay(1000);
  */


}
