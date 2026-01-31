int button = 2;
int buzzer = 3;
int num = 0;
void setup() {
  pinMode(button,INPUT);
  pinMode(buzzer,INPUT);
  Serial.begin(9600);
  while (digitalRead(button)==HIGH)
  {
    for (int i = 0; i < 20; i++){
      Serial.println();
    }
    delay(20);
    Serial.print(num);
    delay(37);
    num = num+1;
    if (num > 700){
      num = 100;
    }
  }
  if (num>=100 and num<200)
  {
    Serial.println();
    Serial.println("Jackpot!!");
    delay(1000);
    Serial.println("You won 10 coins");
    for (int i = 400; i <= 700; i=i+10)
    {
      tone(buzzer,i);
      delay(10);
    }
    noTone(buzzer);
  }
  else if (num>=200 and num<300)
    {
    Serial.println();
    Serial.println("Jackpot!!");
    delay(200);
    Serial.println("You won 20 coins");
    for (int i = 400; i <= 700; i=i+10)
    {
      tone(buzzer,i);
      delay(10);
    }
    noTone(buzzer);
  }
  else if (num>=400 and num<450)
    {
    Serial.println("Super Jackpot!!");
    delay(200);
    Serial.println("You won 100 coins");
    for (int i = 400; i <= 700; i=i+10)
    {
      tone(buzzer,i);
      delay(10);
    }
    noTone(buzzer);
  }
  else{
  Serial.println();
  Serial.print("Try Next Time!");
  }
}

void loop() {
  
  
}
