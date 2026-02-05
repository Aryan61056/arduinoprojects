#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#include <DHT.h>
#define  Type DHT22
int sensor=8;
DHT HT(sensor,Type);

int S1=2;
int S2=3;
int S3=4;
int S4=7;
int front;
int right;
int left;
int back;

int EN1=5;
int EN2=6;
int in1=10;
int in2=12;

int MQ=A3;
int MQdata;
float humidity;
float tempC;
int button=A1;
void setup() 
{
pinMode(EN1,OUTPUT);
pinMode(EN2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);

lcd.init();
lcd.backlight();
lcd.print("Moonpreneur");

pinMode(button,INPUT_PULLUP);

pinMode(S1,INPUT);
pinMode(S2,INPUT);
pinMode(S3,INPUT);
pinMode(S4,INPUT);
pinMode(MQ,INPUT);
HT.begin();
delay(500);
Serial.begin(9600);
}

void loop()
{

humidity=HT.readHumidity();
tempC=HT.readTemperature();
MQdata=analogRead(MQ);
front=digitalRead(S3);
right=digitalRead(S1);
left=digitalRead(S4);
back=digitalRead(S2);

}

void display()
{

if (digitalRead(button)==LOW){

lcd.setCursor(0,0);
lcd.setCursor("Temperature");
lcd.print(tempC);

lcd.setCursor(0,1);
lcd.print("Humidity");
lcd.print(humidity);

delay(500);

} else {
  lcd.setCursor(0,0);
  lcd.print("MQ Data");
  lcd.print(MQdata);
  delay(500);


}
}

void motorcontrol(){
  if(front==1)
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  analogWrite(EN1,255);
  analogWrite(EN2,255);
}
else if (right==1)
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(EN1,255);
  analogWrite(EN2,255);
}
else if (LEFT==1)
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(EN1,255);
  analogWrite(EN2,255);
}
else if (back==1)
{
  digtalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(EN1,255);
  digitalWrite(EN2,255);
}
else
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  analogWrite(EN1,0);
  analogWrite(EN2,0);
}

}