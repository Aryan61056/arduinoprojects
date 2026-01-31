int dice = 0;
const int A=9,B=8,C=7,D=6,E=5,F=4,G=3,DOT = 2, BUTTON = 10, buzzer = 11;

void setup() {
pinMode(BUTTON,INPUT);
pinMode(DOT,OUTPUT);
pinMode(G,OUTPUT);
pinMode(F,OUTPUT);
pinMode(E,OUTPUT);
pinMode(D,OUTPUT);
pinMode(C,OUTPUT);
pinMode(B,OUTPUT);
pinMode(A,OUTPUT);
pinMode(buzzer, OUTPUT);

}

void loop() {
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DOT,LOW);

  while(digitalRead(BUTTON)==HIGH){
    dice = random(1,7);
    digitalWrite(A,HIGH);
    delay(50);
    digitalWrite(B,HIGH);
    delay(50);
    digitalWrite(C,HIGH);
    delay(50);
    digitalWrite(D,HIGH);
    delay(50);
    digitalWrite(E,HIGH);
    delay(50);
    digitalWrite(F,HIGH);
    delay(50);
    digitalWrite(G,HIGH);
    delay(50);
    digitalWrite(DOT,HIGH);
    delay(50);
    digitalWrite(A,LOW);
    delay(50);
    digitalWrite(B,LOW);
    delay(50);
    digitalWrite(C,LOW);
    delay(50);
    digitalWrite(D,LOW);
    delay(50);
    digitalWrite(E,LOW);
    delay(50);
    digitalWrite(F,LOW);
    delay(50);
    digitalWrite(G,LOW);
    delay(50);
    digitalWrite(DOT,LOW);
    delay(50);
    digitalWrite(DOT,HIGH);
    tone(buzzer,300);
    delay(100);
    digitalWrite(DOT,LOW);
    noTone(buzzer);
    delay(100);
    digitalWrite(DOT,HIGH);
    tone(buzzer,300);
    delay(100);
   digitalWrite(DOT,LOW);
    noTone(buzzer);
    delay(100);
    
     

    if (dice==1)
    {
      digitalWrite(A, LOW);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
delay(2000);

    }
    if (dice==2)
    {
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
delay(2000);

    }
    if (dice==3)
    {
digitalWrite(A, HIGH);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
delay(2000);

    }
if (dice==4)
    {
digitalWrite(A, LOW);
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(2000);

    }
if (dice==5)
    {
digitalWrite(A, HIGH);
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(2000);
    }
if (dice==6)
{
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(2000);
    
for (int i = 400; i <= 800; i=i+5)
{
  tone(buzzer,i);
  delay(20);
}
noTone(buzzer);
delay(1000);
}}}

