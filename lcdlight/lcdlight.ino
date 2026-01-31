#include <LiquidCrystal.h>
const int RS = 2, EN = 3, D4 = 4, D5 = 5, D6 = 6, D7=7;
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);
const int LDR = A0;
int ldrvalue = 0;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
void setup() {
  Serial.begin(9600);
  pinMode(LDR,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  lcd.begin(16,2);
}

void loop() {
  int ldrReadings = analogRead(LDR);
  ldrvalue = analogRead(LDR);
  Serial.print("LDR values: ");
  Serial.println(ldrvalue);
  delay(300);

  if (ldrReadings <= 250) {
    lcd.setCursor(0,0);
    lcd.print("LEDs ON");
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else {
    lcd.setCursor(0,0);
    lcd.print("LEDs OFF");
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }

  if ((ldrvalue>150) && (ldrvalue<250))
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    delay(100);
  }
  else if ((ldrvalue>250) && (ldrvalue<400))
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else if ((ldrvalue>400) && (ldrvalue<700))
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else if ((ldrvalue>700) && (ldrvalue<1023))
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
}
