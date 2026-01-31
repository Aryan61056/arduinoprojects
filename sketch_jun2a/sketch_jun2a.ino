int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
void Evenleds();
void Oddleds();
void First();
void Last();

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
}

void loop() {
First();
Last();
delay(1000);
// Evenleds();
// delay(200);
// Oddleds();
// delay(200);
// Evenleds();
// delay(500);
// Oddleds();
// delay(500);
// Evenleds();
// delay(1000);
// Oddleds();
// delay(1000);
}

void Evenleds(){
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
digitalWrite(led5,LOW);
digitalWrite(led6,HIGH);
digitalWrite(led7,LOW);
digitalWrite(led8,HIGH);
}

void Oddleds(){
digitalWrite(led2,LOW);
digitalWrite(led1,HIGH);
digitalWrite(led4,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led6,LOW);
digitalWrite(led5,HIGH);
digitalWrite(led8,LOW);
digitalWrite(led7,HIGH);
}

void First(){
  Serial.print("Aryan ");
}

void Last(){
  Serial.println("Patel");
}