int A=9, B=8, C=7, D=6, E=5, F=4, G=3, P1=10, P2=11, P3=12, P4=13, inital=5;

void setup() {
Serial.begin(9600);
pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);
pinMode(E, OUTPUT);
pinMode(F, OUTPUT);
pinMode(G, OUTPUT);
pinMode(P1, INPUT);
pinMode(P2, INPUT);
pinMode(P3, INPUT);
pinMode(P4, INPUT);

digitalWrite(A, HIGH);
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);

}

void loop() {


if (inital == 9){
  digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}
if (inital == 8){
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}
if (inital == 7){
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
}
if (inital == 7){
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
}
if (inital == 6){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}
if (inital == 5){
digitalWrite(A, HIGH);
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}
if (inital == 4){
digitalWrite(A, LOW);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}
if (inital == 3){
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
}
if (inital == 2){
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
}
if (inital == 1){
digitalWrite(A, LOW);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
}
if (inital == 0){
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
}
if (digitalRead(P1) == LOW){
  inital++;
  Serial.print(inital);
  delay(300);
}
if (digitalRead(P2) == LOW){
  inital = inital - 1;
  Serial.print(inital);
  delay(300);
}
if (digitalRead(P3) == LOW){
  inital = 5;
  Serial.print(inital);
}
if (digitalRead(P4) == LOW){
  digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
delay(1000);
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(A, HIGH);
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(A, LOW);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(A, LOW);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
delay(1000);
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
delay(1000);
}
}
