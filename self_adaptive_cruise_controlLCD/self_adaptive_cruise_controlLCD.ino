#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);


#define EN1 5
#define EN2 6
#define in1 10
#define in2 12

int trig = A2;
int echo = A1;

int prev_dist = 0;
int dist = 0;
int change = 0;
int sp = 200;


void setup() {

  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);

  analogWrite(EN1,255);
  analogWrite(EN2,255);
  analogWrite(in1,255);
  analogWrite(in2,255);

  int prev_dist=distance(trig,echo);

}

void loop() {
  int dist = distance(trig,echo);
  int change = dist - prev_dist;

  if(dist<=6 || dist>1000)
  {
    sp=0;
    set_speed(sp);
  }
  else if (dist>35)
  {
    sp+=40;
    if (dist > 255){
      sp=255;
      
    }
    set_speed(sp);
  }
  else if (distance<= 10)
  { 
    sp=map(dist,7,10,0,70);
    set_speed(sp);
  }
  else if (dist<=35){
    sp = map(dist,10,35,70,255);
    set_speed(sp);
  }

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Speed");
  lcd.setCursor(6,0);
  lcd.print(sp);
  lcd.setCursor(0,1);
  lcd.print("Distance");
  lcd.setCursor(9,1);
  lcd.print(dist);

  prev_dist = dist;
  delay(200);


  

}


long distance(int trig, int echo)
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  long duration = pulseIn(echo,HIGH);
  int distance = (duration *0.0344);

  return distance;
}

void set_speed(int sp)
{
  analogWrite(EN1,sp);
  analogWrite(EN2,sp);
}
