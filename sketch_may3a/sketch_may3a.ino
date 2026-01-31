long duration;
int distance;

#define EN1 5
#define EN2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13
#define echo A1
#define trig A2

#define IR1 A3
#define IR2 A0



void setup() {
  Serial.begin(9600);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, OUTPUT);

  pinMode(IR1, INPUT_PULL_UP);
  pinMode(IR2, INPUT_PULL_UP);


}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration*0.034/2;

  Serial.println(distance);
  delay(50);

  int IR1val = digitalRead(IR1);
  int IR2val = digitalRead(IR2);
  Serial.print("left IR = ");
  Serial.print(IR2val);
  Serial.print("  ");
  Serial.print("Right IR = ");
  Serial.println(IR1val);

  if(IR1val==LOW || IR2val==LOW || distance<10){
    lcd.setCursor(0,0);
    lcd.print("Object Detected");
    lcd.setCursor(0,1);
    lcd.print("By ultrasonic");
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(EN1,100);
    analogWrite(EN2,100);
    delay(500);
  if(distance<10){
    lcd.setCursor(0,0);
    lcd.print("Object Detected");
    lcd.setCursor(0,1);
    lcd.print("By ultrasonic");
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(EN1,100);
    analogWrite(EN2,100);
    delay(500);
  
  } else {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(EN1,255);
    analogWrite(EN2,255);
    delay(500);
  }
  }
