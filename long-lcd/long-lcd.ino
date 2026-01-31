#include <LiquidCrystal.h>

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7, sw1 = 8, sw2 = 9, sw3 = 10, sw4 = 10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int delayValue = 400;

void setup() {
  lcd.begin(16,2);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
  pinMode(sw4, INPUT);
  lcd.print("Scroll delay(ms)");
  lcd.setCursor(0,1);
  lcd.print(delayValue);
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SW1-Scroll Left");
  lcd.setCursor(0,1);
  lcd.print("SW2-Scroll Right");

}

void loop() {
  if (digitalRead(sw1 == LOW)) {
    lcd.clear();
    while (digitalRead(sw2) != LOW){
    lcd.scrollDisplayLeft();
    lcd.setCursor(0,0);
    lcd.print("MOONPRENEUR WELCOME YOU!!");
    delay(delayValue);

    if (digitalRead(sw3) == LOW) {
      lcd.clear();
    }
    if (delayValue > 0) {
      delayValue = delayValue - 50;
      lcd.serCursor(0,0);
      lcd.print("Scroll delay(ms");
      lcd.serCursor(0,1);
      lcd.print(dleayValue);
      delay(1000);
      lcd.clear()

    }
    else {
      lcd.setCursor(0,0);
      lcd.print("delay can't be");
      lcd.setCursor(0,1);
      lcd.print("negative");
      delayValue = 0;
      delay(100);
      lcd.clear();

    }
    }
    else if (digitalRead(sw4) == LOW){
      lcd.clear();
      delayvalue = delayValue + 50;
      lcd.setCursor(0,1);
      lcd.print(delayValue);
      delay(1000);
      lcd.clear();
      }   
    }
  }

    else if (digitalRead(sw2) == LOW) {
      lcd.clear();
      while (digitalRead(sw1) != LOW) {
        lcd.scrollDisplayRight();
        lcd.setCursor(0,0);
        lcd.print("MOONPRENEUR WELCOME YOU!!");
        delay(delayValue);
   }
  }
  if (digitalRead(sw3) == LOW) {

    lcd.clear();

    if (delayValue > 0) {
    delayValue = delayValue - 50;
    lcd.setCursor(0, 0);
    lcd.print("Scroll delay(ms)");
    lcd.setCursor(0, 1);
    lcd.print(delayValue);
    delay (1000);
    lcd.clear();

    }

    else {
    lcd.setCursor(0, 0);
    lcd.print("delay can't be");
    lcd.setCursor(0, 1);
    lcd.int("negative");
    delayValue = 0;
    delay(1000);
    lcd.clear();

    }
  }
  else if (digitalRead(sw4) == LOW) {
    lcd.clear();
    delayValue = delayValue + 50;
    lcd.setCursor(0,0);
    lcd.print("")
  }



}
