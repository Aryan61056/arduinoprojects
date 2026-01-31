#include <LiquidCrystal.h>
const int rs = 2, en= 3, d4 = 4, d5 = 5, d6 = 6, d7=7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("WELCOME TO THE");
delay(3000);

lcd.setCursor(0, 0);
lcd.print("MOONPRENEUR");
delay(3000);
}

void loop() {

}