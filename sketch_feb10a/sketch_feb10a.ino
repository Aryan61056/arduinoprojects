int ir = 2;
int buzzer = 3;
int frequency = 300;
int motor = 4;


void setup() {
  pinMode(ir,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(motor,OUTPUT);
}

void loop() {
  if (digitalRead(ir) == HIGH)
  {
    tone(buzzer, frequency);
    digitalWrite(motor,HIGH);

  }
  else
  {
    noTone(buzzer);
    digitalWrite(motor,LOW);

  }
  delay(10);

}
