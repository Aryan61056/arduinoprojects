#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);


int switch1 = A3;
int switch2 = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(switch1,INPUT_PULLUP);
  pinMode(switch2,INPUT_PULLUP);

}

void loop() {

if(digitalRead(switch1)==LOW || digitalRead(switch2)==LOW){
  lcd.setCursor(0,0);
  lcd.print("*Emergency*");
  delay(100);
}
else{
  lcd.clear();
  delay(100);
}

}