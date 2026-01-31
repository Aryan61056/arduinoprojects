int b = 0;
void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  for (b = 1; b <=8; b++){
    digitalWrite(b,HIGH); 
    delay(200); 
    digitalWrite(b,LOW);  
    }


}
