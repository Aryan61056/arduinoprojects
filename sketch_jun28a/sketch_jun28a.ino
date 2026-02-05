const int EN1= 5;
const int EN2 = 6;
const int in1 = 10;
const int in2= 12;

const int IR1 = A3;
const int IR2 = A0;


void setup() {
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);

}

void loop() {
  int right = digitalRead(IR1);
  int left = digitalRead(IR2);

  if (right==0 && left==0){
    forward();
  }

  else if(right==1 && left==0){
    turnRight();
  }
  else if (right==0 && left==1){
    turnLeft();
  }
  

}

void forward(){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,HIGH);
    analogWrite(EN1,100);
    analogWrite(EN2,100);
  }

  void turnLeft(){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,HIGH);
    analogWrite(EN1,100);
    analogWrite(EN2,0);
  }

void turnRight(){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,HIGH);
    analogWrite(EN1,0);
    analogWrite(EN2,100);
  }
  
