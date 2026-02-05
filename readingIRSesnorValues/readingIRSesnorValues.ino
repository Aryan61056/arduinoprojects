int IR1 = A3;
int IR2 = A0;

void setup() {
  Serial.begin(9600);
  pinMode(IR1,INPUT_PULLUP);
  pinMode(IR2,INPUT_PULLUP);

}

void loop() {
  Serial.print("IR1:");
  Serial.print(digitalRead(IR1));
  Serial.print("IR2:");
  Serial.println(digitalRead(IR2));
  delay(50);

}
