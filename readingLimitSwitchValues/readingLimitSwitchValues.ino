int switch1 = A3;
int switch2 = A0;

void setup() {
  Serial.begin(9600);
  pinMode(switch1,INPUT_PULLUP);
  pinMode(switch2,INPUT_PULLUP);

}

void loop() {
  Serial.print(digitalRead(switch1));
  Serial.println("  ");
  Serial.print(digitalRead(switch2));
  delay(500);


}
