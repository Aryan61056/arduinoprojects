#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int IR1 = A3;
int IR2 = A0;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);

}

void loop() {
  if(digitalRead(IR1)==HIGH && digitalRead(IR2)==LOW)
  {
    lcd.setCursor(0,0);
    lcd.print("->Obstacle<-");
    lcd.setCursor(0,1);
    lcd.print("->left<-");
  }
  else if(digitalRead(IR1)==LOW && digitalRead(IR2)==HIGH)
  {
    lcd.setCursor(0,0);
    lcd.print("->Obstacle<-");
    lcd.setCursor(0,1);
    lcd.print("->right<-");
  }
  
   else {
    lcd.setCursor(0,1);
    lcd.print("              ");
    lcd.setCursor(0,0);
    lcd.print("-> CLEAR <-");
    
  }


  
  

}
