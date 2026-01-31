#define EN1 5
#define EN2 6
#define in1 10
#define in2 11
#define in3 12
#define in4 13



void setup() {
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {


  // for (int x = 62; x <= 255; x = x + 10) {
  //   analogWrite(EN1, x);
  //   analogWrite(EN2, x);
  //   analogWrite(in1, HIGH);
  //   analogWrite(in2, LOW);
  //   digitalWrite(in3, HIGH);
  //   digitalWrite(in4, LOW);
  // }
  for (int x = 255; x >= 62; x = x - 10) {
    analogWrite(EN1, x);
    analogWrite(EN2, x);
    analogWrite(in1, HIGH);
    analogWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  // HUNDRED_PERCENT();
  // FIFTY_PERCENT();
  // TWENTYFIVE_PERCENT();
  // delay(10000);
}

void TWENTYFIVE_PERCENT() {
  analogWrite(EN1, 63);
  analogWrite(EN2, 63);
  analogWrite(in1, HIGH);
  analogWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void FIFTY_PERCENT() {
  analogWrite(EN1, 127);
  analogWrite(EN2, 127);
  analogWrite(in1, HIGH);
  analogWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void HUNDRED_PERCENT() {
  analogWrite(EN1, 255);
  analogWrite(EN2, 255);
  analogWrite(in1, HIGH);
  analogWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
