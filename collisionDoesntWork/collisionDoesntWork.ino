#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
#define EN1 5
#define EN2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13

int lcd_phase = 0;

int IR2 = A3;
int IR1 = A0;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}

void loop() {
  int IR1_status=digitalRead(IR1);
  int IR2_status=digitalRead(IR2);

  if(IR1_status==1 && IR2_status==1){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(EN1,200);
    analogWrite(EN2,200);
    lcd.setCursor(1,0);
    lcd.print(" No obstacle ");
    lcd.setCursor(0,1);
    lcd.print("            ");
    lcd_phase=0;
  }
  else {
    analogWrite(EN1,0);
    analogWrite(EN2,0);
  }
  if(IR1_status==0)
  {
    lcd.setCursor(0,1);
    lcd.print("-------->");
  }
  else
  {
    lcd.setCursor(8,1);
    lcd.print("         ");
  }
  if(IR2_status==0)
  {
    lcd.setCursor(0,1);
    lcd.print("<-------");
  }
  else
  {
    lcd.setCursor(0,1);
    lcd.print("         ");
  }
  if(lcd_phase<50)
  {
    
lcd.clear();(1,0);
    lcd.print("Obstalce Found");
    lcd_phase+=1;
  }

  if(lcd_phase==50)
  {
    lcd.setCursor(0,1);
    lcd.print("        ");
    lcd_phase+=1;
  }
  if(lcd_phase>50){
    if(IR1_status==0)
    {
    lcd.setCursor(8,0);
    lcd.print("   Right");
    }
    else
  {
    lcd.setCursor(8,0);
    lcd.print("          ");
  }
  if(IR1_status==0)
    {
    lcd.setCursor(8,0);
    lcd.print("    LEFT");
    }
    else
  {
    lcd.setCursor(8,0);
    lcd.print("          ");
  }
  
  }
  lcd_phase+=1;
  }
  
  

