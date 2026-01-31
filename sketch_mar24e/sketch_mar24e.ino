int x = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Time Begin!");
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  while (x<=10){
    if (x == 1)
    delay(1000);
    x++;
  }
  Serial.println("Time Ended!");
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
