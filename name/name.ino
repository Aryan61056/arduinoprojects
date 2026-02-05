#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27,16,2);


void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);



}

void loop() {


delay(1000);
lcd.clear();
lcd.setCursor(0,1);
lcd.write("(0 . 0)");

// while (Serial.available()>0){
//   lcd.write(Serial.read());
// }

}
