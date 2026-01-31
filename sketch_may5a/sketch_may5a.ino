int tempPin = A0; 
int P1 = 8;
int P2 = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(tempPin, INPUT);
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  Serial.begin(9600);
}

  // put your main code here, to run repeatedly:
void loop() {
  int analogValue = analogRead(tempPin);
  float voltage = (analogValue/1023.0)*5;
  float temperatureF = ((voltage*100)*9/5)+32;
  Serial.println(temperatureF);
  delay(1000);

  Serial.print("Temp1 = ");
  Serial.print(temperatureF);
  Serial.println("V");

  if (digitalRead(P1) == LOW){
  while (P2 == HIGH){
    Serial.print("Temp1 = ");
  Serial.print(temperatureF);
  Serial.println("F");
  }
  }
// if (digitalRead(P2) == LOW){
//   inital = inital - 1;
//   Serial.print(inital);
//   delay(300);
// }
  }