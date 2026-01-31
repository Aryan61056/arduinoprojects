int sw1 = 2;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sw1, INPUT);

}

void loop() {
  if(digitalRead(sw1)==LOW)
{
    count++;
    Serial.print("S1 is pressed ");
    Serial.print(count);
    Serial.print(" times");
    Serial.println();
    delay(200);

}

}
