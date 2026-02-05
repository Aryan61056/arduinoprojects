#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#define en1 5
#define en2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13

int value;
int seconds = 0;
int avg = 0;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void loop() {

value = 100;
avg = (avg + value)/seconds;
lcd.setCursor(0,0);
lcd.print("Seconds: ");
lcd.setCursor(10,0);
lcd.print(seconds);

lcd.setCursor(0,1);
lcd.print("PWM: ");
lcd.setCursor(10,1);
lcd.print(value);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(en1, value);
  analogWrite(en2, value);

delay(1000);
seconds++;



}
