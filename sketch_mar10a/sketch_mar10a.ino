int led = 6;
int potpin = A0;


void setup() {
  pinMode(led,OUTPUT);
  pinMode(potpin, INPUT);

}

void loop() {
  int pot = analogRead(potpin);
  int brightness = pot/4;
  analogWrite(led,brightness);
  delay(200);
}
