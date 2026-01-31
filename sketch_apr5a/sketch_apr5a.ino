#define EN1 5
#define EN2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13

void setup() {

pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(EN1,OUTPUT);
pinMode(EN2,OUTPUT);

}

void loop() {

  move_forward(255,150);

}


void move_forward(int spa, int spb)
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(EN1,spa);
  analogWrite(EN2,spb);
}