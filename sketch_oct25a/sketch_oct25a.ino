#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C (0x27,16,2);

#include <DHT.h>
#define Type DHT22
int sensorpin=8;
DHT HT(sensorpin,Type);

int s1=2;
int s2=3;
int s3=4;
int s4=7;

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

const int buttonpin=A1;
int reading;
int lastbuttonstate=LOW;
int halt=50;

float temp[10];
int arrayE1=0;

void setup()
{
pinMode(EN1, OUTPUT);
pinMode(EN2, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
lcd.init();
lcd.backlight();
lcd.print("Moonpreneur");
pinMode(s1,INPUT);
pinMode(s2,INPUT);
pinMode(s3,INPUT);
pinMode(s4,INPUT);
pinMode(MQ,INPUT);
pinMode(buttonpin,INPUT);
HT.begin();
delay(500);
Serial.begin(9600);

}
void loop()
{
humidity=HT.readHumidity();
tempC=HT.readTemperature();
MQdata=analogRead(MQ);
reading=digitalRead(buttonpin);
if(reading==HIGH){
  if(arrayE1<10){
    lcd.print("Data Logged");
    Serial.print("Data stored");
    Serial.println(arrayE1);
    tempL[arrayE1]=tempC;
    arrayE1++;
  }
  lcd.clear();
}
}

for(int i = 0; i<10;i++)
{
  Serial.print(tempL[i]);
  Serial.print(" ");
}
Serial.print(" ");

controlMotors();
displayDataonLCD();
}

void controlMotors(){
  front = digitalRead(s3);
  right = digitalRead(s1);
  left = digitalRead(s4);
  back = digitalRead(s2);

  if (front==1){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,HIGH);
    analogWrite(EN1,255);
    analogWrite(EN2,255);

  }
  else if(right==1)
  {
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    analogWrite(EN1,255);
    analogWrite(EN2,255);
  }
  else if(left==1)
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in1,LOW);
    analogWrite(EN1,255);
    analogWrite(EN2,255);
  }
  else if(back==1)
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in1,LOW);
    analogWrite(EN1,255);
    analogWrite(EN2,255);
  }
  else
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in1,HIGH);
    analogWrite(EN1,0);
    analogWrite(EN2,0);
  }
}

void displayDataonLCD()
{
  lcd.setCursor(0,0);
  lcd.print("Temperature");
  lcd.print(tempC);

  lcd.setCursor(0,1);
  lcd.print("Humidity");
  lcd.print(humidity);

  delay(500);
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("MQ data");
  lcd.print(MQdata);

  delay(500);
  lcd.clear();
}